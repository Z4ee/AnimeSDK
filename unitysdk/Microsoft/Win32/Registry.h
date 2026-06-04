#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::Win32 { class RegistryKey; }

#define MICROSOFT_WIN32_REGISTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x18547220)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int Registry_TypeDefinitionIndex = 102;

	class Registry : public ::System::Object
	{
	public:
		static ::Microsoft::Win32::RegistryKey** StaticGet_ClassesRoot()
		{
			return (::Microsoft::Win32::RegistryKey**)Il2CppClass::FromTypeDefinitionIndex(Registry_TypeDefinitionIndex)->GetStaticField(0x1C60);
		}
		static ::Microsoft::Win32::RegistryKey** StaticGet_DynData()
		{
			return (::Microsoft::Win32::RegistryKey**)Il2CppClass::FromTypeDefinitionIndex(Registry_TypeDefinitionIndex)->GetStaticField(0x1C68);
		}
		static ::Microsoft::Win32::RegistryKey** StaticGet_LocalMachine()
		{
			return (::Microsoft::Win32::RegistryKey**)Il2CppClass::FromTypeDefinitionIndex(Registry_TypeDefinitionIndex)->GetStaticField(0x1C70);
		}
		static ::Microsoft::Win32::RegistryKey** StaticGet_Users()
		{
			return (::Microsoft::Win32::RegistryKey**)Il2CppClass::FromTypeDefinitionIndex(Registry_TypeDefinitionIndex)->GetStaticField(0x1C78);
		}
		static ::Microsoft::Win32::RegistryKey** StaticGet_CurrentUser()
		{
			return (::Microsoft::Win32::RegistryKey**)Il2CppClass::FromTypeDefinitionIndex(Registry_TypeDefinitionIndex)->GetStaticField(0x1C80);
		}
		static ::Microsoft::Win32::RegistryKey** StaticGet_PerformanceData()
		{
			return (::Microsoft::Win32::RegistryKey**)Il2CppClass::FromTypeDefinitionIndex(Registry_TypeDefinitionIndex)->GetStaticField(0x1C88);
		}
		static ::Microsoft::Win32::RegistryKey** StaticGet_CurrentConfig()
		{
			return (::Microsoft::Win32::RegistryKey**)Il2CppClass::FromTypeDefinitionIndex(Registry_TypeDefinitionIndex)->GetStaticField(0x1C90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRY__CCTOR_OFFSET))();
		}
	};
}
