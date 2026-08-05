#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_APPDOMAINSETUP_GETAPPBASE_OFFSET UNITYSDK_OFFSET(0x1C30DAC0)
#define SYSTEM_APPDOMAINSETUP_GET_APPLICATIONBASE_OFFSET UNITYSDK_OFFSET(0x1C30E120)
#define SYSTEM_APPDOMAINSETUP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C30C360)
#define SYSTEM_APPDOMAINSETUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C30DAB0)

namespace System
{
	inline static constexpr unsigned int AppDomainSetup_TypeDefinitionIndex = 364;

	class AppDomainSetup : public ::System::Object
	{
	public:
		::System::String* application_base; // 0x10
		::System::String* application_name; // 0x18
		::System::String* cache_path; // 0x20
		::System::String* configuration_file; // 0x28
		::System::String* dynamic_base; // 0x30
		::System::String* license_file; // 0x38
		::System::String* private_bin_path; // 0x40
		::System::String* private_bin_path_probe; // 0x48
		::System::String* shadow_copy_directories; // 0x50
		::System::String* shadow_copy_files; // 0x58
		::System::Boolean publisher_policy; // 0x60
		::System::Boolean path_changed; // 0x61
		::System::Int32 loader_optimization; // 0x64
		::System::Boolean disallow_binding_redirects; // 0x68
		::System::Boolean disallow_code_downloads; // 0x69
		::System::Object* _activationArguments; // 0x70
		::System::Object* domain_initializer; // 0x78
		::System::Object* application_trust; // 0x80
		::Il2CppArray<::System::String*>* domain_initializer_args; // 0x88
		::System::Boolean disallow_appbase_probe; // 0x90
		::Il2CppArray<::System::Byte>* configuration_bytes; // 0x98
		::Il2CppArray<::System::Byte>* serialized_non_primitives; // 0xA0
		::System::String* _TargetFrameworkName_k__BackingField; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAINSETUP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::AppDomainSetup* setup)
		{
			return ((::System::Void(*)(::PVOID, ::System::AppDomainSetup*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAINSETUP__CTOR_1_OFFSET))(this, setup);
		}

		static ::System::String* GetAppBase(::System::String* appBase)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAINSETUP_GETAPPBASE_OFFSET))(appBase);
		}

		::System::String* get_ApplicationBase()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAINSETUP_GET_APPLICATIONBASE_OFFSET))(this);
		}
	};
}
