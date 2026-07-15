#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Platform { class InitializeOptions; }
namespace Epic::OnlineServices::Platform { class InitializeThreadAffinity; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3AAFDE0)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3AAFD60)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_ALLOCATEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x7BE220)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3AAFD50)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_OVERRIDETHREADAFFINITY_OFFSET UNITYSDK_OFFSET(0x3AAFCE0)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x3AAFB80)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_PRODUCTVERSION_OFFSET UNITYSDK_OFFSET(0x3AAFC30)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_REALLOCATEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0xA4B360)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_RELEASEMEMORYFUNCTION_OFFSET UNITYSDK_OFFSET(0x38CBD50)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_SYSTEMINITIALIZEOPTIONS_OFFSET UNITYSDK_OFFSET(0x38D4310)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int InitializeOptionsInternal_TypeDefinitionIndex = 44230;

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

		::System::Void set_AllocateMemoryFunction(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_ALLOCATEMEMORYFUNCTION_OFFSET))(this, a1);
		}

		::System::Void set_ReallocateMemoryFunction(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_REALLOCATEMEMORYFUNCTION_OFFSET))(this, a1);
		}

		::System::Void set_ReleaseMemoryFunction(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_RELEASEMEMORYFUNCTION_OFFSET))(this, a1);
		}

		::System::Void set_ProductName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_PRODUCTNAME_OFFSET))(this, a1);
		}

		::System::Void set_ProductVersion(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_PRODUCTVERSION_OFFSET))(this, a1);
		}

		::System::Void set_SystemInitializeOptions(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_SYSTEMINITIALIZEOPTIONS_OFFSET))(this, a1);
		}

		::System::Void set_OverrideThreadAffinity(::Epic::OnlineServices::Platform::InitializeThreadAffinity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::InitializeThreadAffinity*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_OVERRIDETHREADAFFINITY_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Platform::InitializeOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::InitializeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
