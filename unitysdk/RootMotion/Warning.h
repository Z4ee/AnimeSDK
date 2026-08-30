#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RootMotion { class Warning_Logger; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_WARNING_LOG_1_OFFSET UNITYSDK_OFFSET(0xB31ED40)
#define ROOTMOTION_WARNING_LOG_OFFSET UNITYSDK_OFFSET(0xB31ECE0)

namespace RootMotion
{
	inline static constexpr unsigned int Warning_TypeDefinitionIndex = 44842;

	class Warning : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_logged()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Warning_TypeDefinitionIndex)->GetStaticField(0x8C0);
		}

		static ::System::Void Log(::System::String* a1, ::RootMotion::Warning_Logger* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::RootMotion::Warning_Logger*, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_WARNING_LOG_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Log_1(::System::String* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_WARNING_LOG_1_OFFSET))(a1, a2, a3);
		}
	};
}
