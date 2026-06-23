#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Platform { class AndroidInitializeOptionsSystemInitializeOptions; }
namespace Epic::OnlineServices::Platform { class InitializeThreadAffinity; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_GET_ALLOCATEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x1BF034F0)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_GET_OVERRIDETHREADAFFINITY_OFFSET UNITYSDK_OFFSET(0x1BF035D0)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_GET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x1BF03550)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_GET_PRODUCTVERSION_OFFSET UNITYSDK_OFFSET(0x1BF03570)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_GET_REALLOCATEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x1BF03510)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_GET_RELEASEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x1BF03530)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_GET_RESERVED_OFFSET UNITYSDK_OFFSET(0x1BF03590)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_GET_SYSTEMINITIALIZEOPTIONS_OFFSET UNITYSDK_OFFSET(0x1BF035B0)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_SET_ALLOCATEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x1BF03500)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_SET_OVERRIDETHREADAFFINITY_OFFSET UNITYSDK_OFFSET(0x1BF035E0)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_SET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x1BF03560)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_SET_PRODUCTVERSION_OFFSET UNITYSDK_OFFSET(0x1BF03580)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_SET_REALLOCATEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x1BF03520)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_SET_RELEASEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x1BF03540)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_SET_RESERVED_OFFSET UNITYSDK_OFFSET(0x1BF035A0)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS_SET_SYSTEMINITIALIZEOPTIONS_OFFSET UNITYSDK_OFFSET(0x1BF035C0)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF035F0)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int AndroidInitializeOptions_TypeDefinitionIndex = 36339;

	class AndroidInitializeOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Platform::InitializeThreadAffinity* _OverrideThreadAffinity_k__BackingField; // 0x10
		::System::String* _ProductName_k__BackingField; // 0x18
		::Epic::OnlineServices::Platform::AndroidInitializeOptionsSystemInitializeOptions* _SystemInitializeOptions_k__BackingField; // 0x20
		::System::String* _ProductVersion_k__BackingField; // 0x28
		::System::IntPtr _ReleaseMemoryFunction_k__BackingField; // 0x30
		::System::IntPtr _Reserved_k__BackingField; // 0x38
		::System::IntPtr _AllocateMemoryFunction_k__BackingField; // 0x40
		::System::IntPtr _ReallocateMemoryFunction_k__BackingField; // 0x48

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
