#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define PARADOXNOTION_PARADOXDEBUGUTILS_BINARY_LOG_1_OFFSET UNITYSDK_OFFSET(0x1B466B90)
#define PARADOXNOTION_PARADOXDEBUGUTILS_BINARY_LOG_ERROR_OFFSET UNITYSDK_OFFSET(0x1B466B20)
#define PARADOXNOTION_PARADOXDEBUGUTILS_BINARY_LOG_FULL_OFFSET UNITYSDK_OFFSET(0x1B466C30)
#define PARADOXNOTION_PARADOXDEBUGUTILS_BINARY_LOG_OFFSET UNITYSDK_OFFSET(0x1B466AB0)
#define PARADOXNOTION_PARADOXDEBUGUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B466CA0)

namespace ParadoxNotion
{
	inline static constexpr unsigned int ParadoxDebugUtils_TypeDefinitionIndex = 27184;

	class ParadoxDebugUtils : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_IsOpenLog1Log()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ParadoxDebugUtils_TypeDefinitionIndex)->GetStaticField(0x4A40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_PARADOXDEBUGUTILS__CCTOR_OFFSET))();
		}

		static ::System::Void Binary_Log(::System::String* content, ::UnityEngine::Object* contextObject)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_PARADOXDEBUGUTILS_BINARY_LOG_OFFSET))(content, contextObject);
		}

		static ::System::Void Binary_Log_Error(::System::String* content, ::UnityEngine::Object* contextObject)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_PARADOXDEBUGUTILS_BINARY_LOG_ERROR_OFFSET))(content, contextObject);
		}

		static ::System::Void Binary_Log_1(::System::String* content, ::UnityEngine::Object* contextObject)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_PARADOXDEBUGUTILS_BINARY_LOG_1_OFFSET))(content, contextObject);
		}

		static ::System::Void Binary_Log_Full(::System::String* content, ::UnityEngine::Object* contextObject)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_PARADOXDEBUGUTILS_BINARY_LOG_FULL_OFFSET))(content, contextObject);
		}
	};
}
