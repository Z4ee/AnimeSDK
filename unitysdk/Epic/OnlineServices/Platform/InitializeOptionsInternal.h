#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Platform { class InitializeOptions; }
namespace Epic::OnlineServices::Platform { class InitializeThreadAffinity; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x943700)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x943690)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_ALLOCATEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x381830)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x943680)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_OVERRIDETHREADAFFINITY_OFFSET UNITYSDK_OFFSET(0x943610)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x9434B0)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_PRODUCTVERSION_OFFSET UNITYSDK_OFFSET(0x943560)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_REALLOCATEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x381850)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_RELEASEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x6D5350)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_SYSTEMINITIALIZEOPTIONS_OFFSET UNITYSDK_OFFSET(0x792C40)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int InitializeOptionsInternal_TypeDefinitionIndex = 34785;

	struct alignas(8) InitializeOptionsInternal
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
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_ALLOCATEMEMORYFUNCTION_OFFSET))(this, value);
		}

		::System::Void set_ReallocateMemoryFunction(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_REALLOCATEMEMORYFUNCTION_OFFSET))(this, value);
		}

		::System::Void set_ReleaseMemoryFunction(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_RELEASEMEMORYFUNCTION_OFFSET))(this, value);
		}

		::System::Void set_ProductName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_PRODUCTNAME_OFFSET))(this, value);
		}

		::System::Void set_ProductVersion(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_PRODUCTVERSION_OFFSET))(this, value);
		}

		::System::Void set_SystemInitializeOptions(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_SYSTEMINITIALIZEOPTIONS_OFFSET))(this, value);
		}

		::System::Void set_OverrideThreadAffinity(::Epic::OnlineServices::Platform::InitializeThreadAffinity* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::InitializeThreadAffinity*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_OVERRIDETHREADAFFINITY_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Platform::InitializeOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::InitializeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
