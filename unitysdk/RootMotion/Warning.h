#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RootMotion { class Warning_Logger; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_WARNING_LOG_1_OFFSET UNITYSDK_OFFSET(0x1E067F50)
#define ROOTMOTION_WARNING_LOG_OFFSET UNITYSDK_OFFSET(0x1E06CBB0)

namespace RootMotion
{
	inline static constexpr unsigned int Warning_TypeDefinitionIndex = 38148;

	class Warning : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_logged()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Warning_TypeDefinitionIndex)->GetStaticField(0x8DB0);
		}

		static ::System::Void Log(::System::String* message, ::RootMotion::Warning_Logger* logger, ::System::Boolean logInEditMode)
		{
			return ((::System::Void(*)(::System::String*, ::RootMotion::Warning_Logger*, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_WARNING_LOG_OFFSET))(message, logger, logInEditMode);
		}

		static ::System::Void Log_1(::System::String* message, ::UnityEngine::Transform* context, ::System::Boolean logInEditMode)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_WARNING_LOG_1_OFFSET))(message, context, logInEditMode);
		}
	};
}
