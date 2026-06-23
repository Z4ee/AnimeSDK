#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Platform { class AndroidInitializeOptions; }
namespace Epic::OnlineServices::Platform { class AndroidInitializeOptionsSystemInitializeOptions; }
namespace Epic::OnlineServices::Platform { class InitializeThreadAffinity; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B5AC0)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8B5A50)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_ALLOCATEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x446DA0)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8B5A40)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_OVERRIDETHREADAFFINITY_OFFSET UNITYSDK_OFFSET(0x8B59D0)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x8B5800)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_PRODUCTVERSION_OFFSET UNITYSDK_OFFSET(0x8B58B0)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_REALLOCATEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x446DB0)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_RELEASEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x7353A0)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_RESERVED_OFFSET UNITYSDK_OFFSET(0x775AF0)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_SYSTEMINITIALIZEOPTIONS_OFFSET UNITYSDK_OFFSET(0x8B5960)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int AndroidInitializeOptionsInternal_TypeDefinitionIndex = 36340;

	struct alignas(8) AndroidInitializeOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_AllocateMemoryFunction; // 0x18
		::System::IntPtr m_ReallocateMemoryFunction; // 0x20
		::System::IntPtr m_ReleaseMemoryFunction; // 0x28
		::System::IntPtr m_ProductName; // 0x30
		::System::IntPtr m_ProductVersion; // 0x38
		::System::IntPtr m_Reserved; // 0x40
		::System::IntPtr m_SystemInitializeOptions; // 0x48
		::System::IntPtr m_OverrideThreadAffinity; // 0x50

		::System::Void set_AllocateMemoryFunction(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_ALLOCATEMEMORYFUNCTION_OFFSET))(this, value);
		}

		::System::Void set_ReallocateMemoryFunction(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_REALLOCATEMEMORYFUNCTION_OFFSET))(this, value);
		}

		::System::Void set_ReleaseMemoryFunction(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_RELEASEMEMORYFUNCTION_OFFSET))(this, value);
		}

		::System::Void set_ProductName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_PRODUCTNAME_OFFSET))(this, value);
		}

		::System::Void set_ProductVersion(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_PRODUCTVERSION_OFFSET))(this, value);
		}

		::System::Void set_Reserved(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_RESERVED_OFFSET))(this, value);
		}

		::System::Void set_SystemInitializeOptions(::Epic::OnlineServices::Platform::AndroidInitializeOptionsSystemInitializeOptions* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::AndroidInitializeOptionsSystemInitializeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_SYSTEMINITIALIZEOPTIONS_OFFSET))(this, value);
		}

		::System::Void set_OverrideThreadAffinity(::Epic::OnlineServices::Platform::InitializeThreadAffinity* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::InitializeThreadAffinity*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_OVERRIDETHREADAFFINITY_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Platform::AndroidInitializeOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::AndroidInitializeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
