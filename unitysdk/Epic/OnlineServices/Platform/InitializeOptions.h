#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Platform { class InitializeThreadAffinity; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_GET_ALLOCATEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x8EE7880)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_GET_OVERRIDETHREADAFFINITY_OFFSET UNITYSDK_OFFSET(0x8EE7940)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_GET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x8EE78E0)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_GET_PRODUCTVERSION_OFFSET UNITYSDK_OFFSET(0x8EE7900)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_GET_REALLOCATEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x8EE78A0)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_GET_RELEASEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x8EE78C0)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_GET_SYSTEMINITIALIZEOPTIONS_OFFSET UNITYSDK_OFFSET(0x8EE7920)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_SET_ALLOCATEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x8EE7890)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_SET_OVERRIDETHREADAFFINITY_OFFSET UNITYSDK_OFFSET(0x8EE7950)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_SET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x8EE78F0)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_SET_PRODUCTVERSION_OFFSET UNITYSDK_OFFSET(0x8EE7910)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_SET_REALLOCATEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x8EE78B0)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_SET_RELEASEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x8EE78D0)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_SET_SYSTEMINITIALIZEOPTIONS_OFFSET UNITYSDK_OFFSET(0x8EE7930)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8EE7960)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int InitializeOptions_TypeDefinitionIndex = 42565;

	class InitializeOptions : public ::System::Object
	{
	public:
		::System::String* _ProductName_k__BackingField; // 0x10
		::Epic::OnlineServices::Platform::InitializeThreadAffinity* _OverrideThreadAffinity_k__BackingField; // 0x18
		::System::String* _ProductVersion_k__BackingField; // 0x20
		::System::IntPtr _SystemInitializeOptions_k__BackingField; // 0x28
		::System::IntPtr _ReleaseMemoryFunction_k__BackingField; // 0x30
		::System::IntPtr _AllocateMemoryFunction_k__BackingField; // 0x38
		::System::IntPtr _ReallocateMemoryFunction_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::IntPtr get_AllocateMemoryFunction()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_GET_ALLOCATEMEMORYFUNCTION_OFFSET))(this);
		}

		::System::Void set_AllocateMemoryFunction(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_SET_ALLOCATEMEMORYFUNCTION_OFFSET))(this, value);
		}

		::System::IntPtr get_ReallocateMemoryFunction()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_GET_REALLOCATEMEMORYFUNCTION_OFFSET))(this);
		}

		::System::Void set_ReallocateMemoryFunction(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_SET_REALLOCATEMEMORYFUNCTION_OFFSET))(this, value);
		}

		::System::IntPtr get_ReleaseMemoryFunction()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_GET_RELEASEMEMORYFUNCTION_OFFSET))(this);
		}

		::System::Void set_ReleaseMemoryFunction(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_SET_RELEASEMEMORYFUNCTION_OFFSET))(this, value);
		}

		::System::String* get_ProductName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_GET_PRODUCTNAME_OFFSET))(this);
		}

		::System::Void set_ProductName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_SET_PRODUCTNAME_OFFSET))(this, value);
		}

		::System::String* get_ProductVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_GET_PRODUCTVERSION_OFFSET))(this);
		}

		::System::Void set_ProductVersion(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_SET_PRODUCTVERSION_OFFSET))(this, value);
		}

		::System::IntPtr get_SystemInitializeOptions()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_GET_SYSTEMINITIALIZEOPTIONS_OFFSET))(this);
		}

		::System::Void set_SystemInitializeOptions(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_SET_SYSTEMINITIALIZEOPTIONS_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Platform::InitializeThreadAffinity* get_OverrideThreadAffinity()
		{
			return ((::Epic::OnlineServices::Platform::InitializeThreadAffinity*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_GET_OVERRIDETHREADAFFINITY_OFFSET))(this);
		}

		::System::Void set_OverrideThreadAffinity(::Epic::OnlineServices::Platform::InitializeThreadAffinity* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::InitializeThreadAffinity*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONS_SET_OVERRIDETHREADAFFINITY_OFFSET))(this, value);
		}
	};
}
