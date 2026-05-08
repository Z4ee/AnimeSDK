#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RuntimePlatform.h"

#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONINITIALIZER_GET_CURRENTPLATFORM_OFFSET UNITYSDK_OFFSET(0x1C1DD7A0)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONINITIALIZER_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x1C1DD740)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONINITIALIZER_INITIALIZERUNTIME_OFFSET UNITYSDK_OFFSET(0x1C1DDB90)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONINITIALIZER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C1DD860)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONINITIALIZER_SET_CURRENTPLATFORM_OFFSET UNITYSDK_OFFSET(0x1C1DD800)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONINITIALIZER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1DDBF0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int UnitySerializationInitializer_TypeDefinitionIndex = 7477;

	class UnitySerializationInitializer : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_LOCK()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UnitySerializationInitializer_TypeDefinitionIndex)->GetStaticField(0x6510);
		}
		static ::System::Boolean* StaticGet_initialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UnitySerializationInitializer_TypeDefinitionIndex)->GetStaticField(0x32B0);
		}
		static ::UnityEngine::RuntimePlatform* StaticGet__CurrentPlatform_k__BackingField()
		{
			return (::UnityEngine::RuntimePlatform*)Il2CppClass::FromTypeDefinitionIndex(UnitySerializationInitializer_TypeDefinitionIndex)->GetStaticField(0x32B4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONINITIALIZER__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_Initialized()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONINITIALIZER_GET_INITIALIZED_OFFSET))();
		}

		static ::UnityEngine::RuntimePlatform get_CurrentPlatform()
		{
			return ((::UnityEngine::RuntimePlatform(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONINITIALIZER_GET_CURRENTPLATFORM_OFFSET))();
		}

		static ::System::Void set_CurrentPlatform(::UnityEngine::RuntimePlatform value)
		{
			return ((::System::Void(*)(::UnityEngine::RuntimePlatform))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONINITIALIZER_SET_CURRENTPLATFORM_OFFSET))(value);
		}

		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONINITIALIZER_INITIALIZE_OFFSET))();
		}

		static ::System::Void InitializeRuntime()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONINITIALIZER_INITIALIZERUNTIME_OFFSET))();
		}
	};
}
