#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER_CREATEMSGLOOPER_OFFSET UNITYSDK_OFFSET(0xB217660)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0xB219F40)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB219E60)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER_UPDATE_OFFSET UNITYSDK_OFFSET(0xB21A080)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER__CTOR_OFFSET UNITYSDK_OFFSET(0xB219E50)

namespace MiHoYo::SDK::MTR
{
	inline static constexpr unsigned int MiHoYoMTRInterface_MTRMsgLooper_TypeDefinitionIndex = 47145;

	class MiHoYoMTRInterface_MTRMsgLooper : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MTRMsgLooper** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MTRMsgLooper**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_MTRMsgLooper_TypeDefinitionIndex)->GetStaticField(0x51600);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MTRMsgLooper* CreateMsgLooper()
		{
			return ((::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MTRMsgLooper*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER_CREATEMSGLOOPER_OFFSET))();
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER_UPDATE_OFFSET))(this);
		}
	};
}
