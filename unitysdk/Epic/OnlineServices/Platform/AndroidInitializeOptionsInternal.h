#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Platform { class AndroidInitializeOptions; }
namespace Epic::OnlineServices::Platform { class AndroidInitializeOptionsSystemInitializeOptions; }
namespace Epic::OnlineServices::Platform { class InitializeThreadAffinity; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3AAF1F0)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3AAF170)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_ALLOCATEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x7BE220)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3AAF160)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_OVERRIDETHREADAFFINITY_OFFSET UNITYSDK_OFFSET(0x3AAF0F0)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x3AAEF20)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_PRODUCTVERSION_OFFSET UNITYSDK_OFFSET(0x3AAEFD0)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_REALLOCATEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0xA4B360)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_RELEASEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x38CBD50)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_RESERVED_OFFSET UNITYSDK_OFFSET(0x38D4300)
#define EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_SYSTEMINITIALIZEOPTIONS_OFFSET UNITYSDK_OFFSET(0x3AAF080)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int AndroidInitializeOptionsInternal_TypeDefinitionIndex = 44222;

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

		::System::Void set_AllocateMemoryFunction(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_ALLOCATEMEMORYFUNCTION_OFFSET))(this, a1);
		}

		::System::Void set_ReallocateMemoryFunction(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_REALLOCATEMEMORYFUNCTION_OFFSET))(this, a1);
		}

		::System::Void set_ReleaseMemoryFunction(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_RELEASEMEMORYFUNCTION_OFFSET))(this, a1);
		}

		::System::Void set_ProductName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_PRODUCTNAME_OFFSET))(this, a1);
		}

		::System::Void set_ProductVersion(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_PRODUCTVERSION_OFFSET))(this, a1);
		}

		::System::Void set_Reserved(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_RESERVED_OFFSET))(this, a1);
		}

		::System::Void set_SystemInitializeOptions(::Epic::OnlineServices::Platform::AndroidInitializeOptionsSystemInitializeOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::AndroidInitializeOptionsSystemInitializeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_SYSTEMINITIALIZEOPTIONS_OFFSET))(this, a1);
		}

		::System::Void set_OverrideThreadAffinity(::Epic::OnlineServices::Platform::InitializeThreadAffinity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::InitializeThreadAffinity*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_OVERRIDETHREADAFFINITY_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Platform::AndroidInitializeOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::AndroidInitializeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ANDROIDINITIALIZEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
