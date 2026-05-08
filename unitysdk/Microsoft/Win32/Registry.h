#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::Win32 { class RegistryKey; }

#define MICROSOFT_WIN32_REGISTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0965B0)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int Registry_TypeDefinitionIndex = 90;

	class Registry : public ::System::Object
	{
	public:
		static ::Microsoft::Win32::RegistryKey** StaticGet_CurrentConfig()
		{
			return (::Microsoft::Win32::RegistryKey**)Il2CppClass::FromTypeDefinitionIndex(Registry_TypeDefinitionIndex)->GetStaticField(0x7F0);
		}
		static ::Microsoft::Win32::RegistryKey** StaticGet_Users()
		{
			return (::Microsoft::Win32::RegistryKey**)Il2CppClass::FromTypeDefinitionIndex(Registry_TypeDefinitionIndex)->GetStaticField(0x7F8);
		}
		static ::Microsoft::Win32::RegistryKey** StaticGet_CurrentUser()
		{
			return (::Microsoft::Win32::RegistryKey**)Il2CppClass::FromTypeDefinitionIndex(Registry_TypeDefinitionIndex)->GetStaticField(0x800);
		}
		static ::Microsoft::Win32::RegistryKey** StaticGet_DynData()
		{
			return (::Microsoft::Win32::RegistryKey**)Il2CppClass::FromTypeDefinitionIndex(Registry_TypeDefinitionIndex)->GetStaticField(0x808);
		}
		static ::Microsoft::Win32::RegistryKey** StaticGet_ClassesRoot()
		{
			return (::Microsoft::Win32::RegistryKey**)Il2CppClass::FromTypeDefinitionIndex(Registry_TypeDefinitionIndex)->GetStaticField(0x810);
		}
		static ::Microsoft::Win32::RegistryKey** StaticGet_LocalMachine()
		{
			return (::Microsoft::Win32::RegistryKey**)Il2CppClass::FromTypeDefinitionIndex(Registry_TypeDefinitionIndex)->GetStaticField(0x818);
		}
		static ::Microsoft::Win32::RegistryKey** StaticGet_PerformanceData()
		{
			return (::Microsoft::Win32::RegistryKey**)Il2CppClass::FromTypeDefinitionIndex(Registry_TypeDefinitionIndex)->GetStaticField(0x820);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRY__CCTOR_OFFSET))();
		}
	};
}
