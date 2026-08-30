#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Unity { class UnityTls_unitytls_interface_struct; }

#define MONO_UNITY_UNITYTLS_GETUNITYTLSINTERFACE_OFFSET UNITYSDK_OFFSET(0x1E905960)
#define MONO_UNITY_UNITYTLS_GET_ISSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1E903C20)
#define MONO_UNITY_UNITYTLS_GET_NATIVEINTERFACE_OFFSET UNITYSDK_OFFSET(0x1E904F00)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_TypeDefinitionIndex = 2349;

	class UnityTls : public ::System::Object
	{
	public:
		static ::Mono::Unity::UnityTls_unitytls_interface_struct** StaticGet_marshalledInterface()
		{
			return (::Mono::Unity::UnityTls_unitytls_interface_struct**)Il2CppClass::FromTypeDefinitionIndex(UnityTls_TypeDefinitionIndex)->GetStaticField(0x2E150);
		}

		static ::System::IntPtr GetUnityTlsInterface()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_GETUNITYTLSINTERFACE_OFFSET))();
		}

		static ::System::Boolean get_IsSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_GET_ISSUPPORTED_OFFSET))();
		}

		static ::Mono::Unity::UnityTls_unitytls_interface_struct* get_NativeInterface()
		{
			return ((::Mono::Unity::UnityTls_unitytls_interface_struct*(*)())((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_GET_NATIVEINTERFACE_OFFSET))();
		}
	};
}
