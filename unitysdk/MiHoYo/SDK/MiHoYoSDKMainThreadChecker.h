#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_MIHOYOSDKMAINTHREADCHECKER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA1AB220)
#define MIHOYO_SDK_MIHOYOSDKMAINTHREADCHECKER_ISMAINTHREAD_OFFSET UNITYSDK_OFFSET(0xA1AB310)
#define MIHOYO_SDK_MIHOYOSDKMAINTHREADCHECKER_SETMAINTHREADID_OFFSET UNITYSDK_OFFSET(0xA1AB250)
#define MIHOYO_SDK_MIHOYOSDKMAINTHREADCHECKER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA1AB400)
#define MIHOYO_SDK_MIHOYOSDKMAINTHREADCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0xA1AB210)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKMainThreadChecker_TypeDefinitionIndex = 43888;

	class MiHoYoSDKMainThreadChecker : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::MiHoYoSDKMainThreadChecker** StaticGet_sInstance()
		{
			return (::MiHoYo::SDK::MiHoYoSDKMainThreadChecker**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKMainThreadChecker_TypeDefinitionIndex)->GetStaticField(0xF040);
		}
		static ::System::Int32* StaticGet_sMainThreadId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKMainThreadChecker_TypeDefinitionIndex)->GetStaticField(0x4D40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKMAINTHREADCHECKER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKMAINTHREADCHECKER__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::MiHoYoSDKMainThreadChecker* get_Instance()
		{
			return ((::MiHoYo::SDK::MiHoYoSDKMainThreadChecker*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKMAINTHREADCHECKER_GET_INSTANCE_OFFSET))();
		}

		::System::Void SetMainThreadId()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKMAINTHREADCHECKER_SETMAINTHREADID_OFFSET))(this);
		}

		static ::System::Boolean IsMainThread()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKMAINTHREADCHECKER_ISMAINTHREAD_OFFSET))();
		}
	};
}
