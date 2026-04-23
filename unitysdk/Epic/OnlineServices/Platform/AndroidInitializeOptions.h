#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Platform { class AndroidInitializeOptionsSystemInitializeOptions; }
namespace Epic::OnlineServices::Platform { class InitializeThreadAffinity; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_GET_ALLOCATEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x8EE5940)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_GET_OVERRIDETHREADAFFINITY_OFFSET UNITYSDK_OFFSET(0x8EE5A20)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_GET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x8EE59A0)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_GET_PRODUCTVERSION_OFFSET UNITYSDK_OFFSET(0x8EE59C0)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_GET_REALLOCATEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x8EE5960)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_GET_RELEASEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x8EE5980)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_GET_RESERVED_OFFSET UNITYSDK_OFFSET(0x8EE59E0)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_GET_SYSTEMINITIALIZEOPTIONS_OFFSET UNITYSDK_OFFSET(0x8EE5A00)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_SET_ALLOCATEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x8EE5950)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_SET_OVERRIDETHREADAFFINITY_OFFSET UNITYSDK_OFFSET(0x8EE5A30)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_SET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x8EE59B0)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_SET_PRODUCTVERSION_OFFSET UNITYSDK_OFFSET(0x8EE59D0)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_SET_REALLOCATEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x8EE5970)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_SET_RELEASEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x8EE5990)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_SET_RESERVED_OFFSET UNITYSDK_OFFSET(0x8EE59F0)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_SET_SYSTEMINITIALIZEOPTIONS_OFFSET UNITYSDK_OFFSET(0x8EE5A10)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8EE5A40)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int AndroidInitializeOptions_TypeDefinitionIndex = 42557;

	class AndroidInitializeOptions : public ::System::Object
	{
	public:
		::System::String* _ProductName_k__BackingField; // 0x10
		::Epic::OnlineServices::Platform::InitializeThreadAffinity* _OverrideThreadAffinity_k__BackingField; // 0x18
		::Epic::OnlineServices::Platform::AndroidInitializeOptionsSystemInitializeOptions* _SystemInitializeOptions_k__BackingField; // 0x20
		::System::String* _ProductVersion_k__BackingField; // 0x28
		::System::IntPtr _ReleaseMemoryFunction_k__BackingField; // 0x30
		::System::IntPtr _Reserved_k__BackingField; // 0x38
		::System::IntPtr _ReallocateMemoryFunction_k__BackingField; // 0x40
		::System::IntPtr _AllocateMemoryFunction_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::IntPtr get_AllocateMemoryFunction()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_GET_ALLOCATEMEMORYFUNCTION_OFFSET))(this);
		}

		::System::Void set_AllocateMemoryFunction(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_SET_ALLOCATEMEMORYFUNCTION_OFFSET))(this, value);
		}

		::System::IntPtr get_ReallocateMemoryFunction()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_GET_REALLOCATEMEMORYFUNCTION_OFFSET))(this);
		}

		::System::Void set_ReallocateMemoryFunction(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_SET_REALLOCATEMEMORYFUNCTION_OFFSET))(this, value);
		}

		::System::IntPtr get_ReleaseMemoryFunction()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_GET_RELEASEMEMORYFUNCTION_OFFSET))(this);
		}

		::System::Void set_ReleaseMemoryFunction(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_SET_RELEASEMEMORYFUNCTION_OFFSET))(this, value);
		}

		::System::String* get_ProductName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_GET_PRODUCTNAME_OFFSET))(this);
		}

		::System::Void set_ProductName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_SET_PRODUCTNAME_OFFSET))(this, value);
		}

		::System::String* get_ProductVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_GET_PRODUCTVERSION_OFFSET))(this);
		}

		::System::Void set_ProductVersion(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_SET_PRODUCTVERSION_OFFSET))(this, value);
		}

		::System::IntPtr get_Reserved()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_GET_RESERVED_OFFSET))(this);
		}

		::System::Void set_Reserved(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_SET_RESERVED_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Platform::AndroidInitializeOptionsSystemInitializeOptions* get_SystemInitializeOptions()
		{
			return ((::Epic::OnlineServices::Platform::AndroidInitializeOptionsSystemInitializeOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_GET_SYSTEMINITIALIZEOPTIONS_OFFSET))(this);
		}

		::System::Void set_SystemInitializeOptions(::Epic::OnlineServices::Platform::AndroidInitializeOptionsSystemInitializeOptions* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::AndroidInitializeOptionsSystemInitializeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_SET_SYSTEMINITIALIZEOPTIONS_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Platform::InitializeThreadAffinity* get_OverrideThreadAffinity()
		{
			return ((::Epic::OnlineServices::Platform::InitializeThreadAffinity*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_GET_OVERRIDETHREADAFFINITY_OFFSET))(this);
		}

		::System::Void set_OverrideThreadAffinity(::Epic::OnlineServices::Platform::InitializeThreadAffinity* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::InitializeThreadAffinity*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_SET_OVERRIDETHREADAFFINITY_OFFSET))(this, value);
		}
	};
}
