#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ThreadPoolQueue; }
namespace System { class Random; }
namespace System { class String; }
namespace System::Threading { class WaitCallback; }

#define MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL_CHECKANDSTARTUPQUEUE_OFFSET UNITYSDK_OFFSET(0xB2ADBA0)
#define MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL_CHECKANDSTOPQUEUE_OFFSET UNITYSDK_OFFSET(0xB2ADF90)
#define MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL_ENQUEUE_OFFSET UNITYSDK_OFFSET(0xB2AD9F0)
#define MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL_GETNEW_OFFSET UNITYSDK_OFFSET(0xB2AD740)
#define MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL_RANDOMSTRING_OFFSET UNITYSDK_OFFSET(0xB2AD7C0)
#define MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2AE360)
#define MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0xB2AE350)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_ThreadUtil_TypeDefinitionIndex = 46871;

	class SecurityTunnel_ThreadUtil : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::ThreadPoolQueue** StaticGet_sm_queue()
		{
			return (::MiHoYo::SDK::ThreadPoolQueue**)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_ThreadUtil_TypeDefinitionIndex)->GetStaticField(0x5ADA0);
		}
		static ::System::Object** StaticGet_sm_lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_ThreadUtil_TypeDefinitionIndex)->GetStaticField(0x5ADA8);
		}
		static ::System::Random** StaticGet_random()
		{
			return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_ThreadUtil_TypeDefinitionIndex)->GetStaticField(0x5ADB0);
		}
		static ::System::String** StaticGet_Prefix()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_ThreadUtil_TypeDefinitionIndex)->GetStaticField(0x5ADB8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL__CCTOR_OFFSET))();
		}

		static ::System::String* GetNew()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL_GETNEW_OFFSET))();
		}

		static ::System::Void Enqueue(::System::Threading::WaitCallback* a1)
		{
			return ((::System::Void(*)(::System::Threading::WaitCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL_ENQUEUE_OFFSET))(a1);
		}

		static ::System::Void CheckAndStartupQueue()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL_CHECKANDSTARTUPQUEUE_OFFSET))();
		}

		static ::System::Void CheckAndStopQueue()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL_CHECKANDSTOPQUEUE_OFFSET))();
		}

		static ::System::String* RandomString(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL_RANDOMSTRING_OFFSET))(a1);
		}
	};
}
