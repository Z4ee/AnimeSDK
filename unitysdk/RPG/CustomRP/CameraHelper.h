#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CameraDebugFlag.h"
#include "unitysdk/RPG/CustomRP/CameraFlag.h"
#include "unitysdk/RPG/CustomRP/FlagMask.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class CustomAdditionalCameraData; }

#define RPG_CUSTOMRP_CAMERAHELPER_HASDEBUGFLAG_1_OFFSET UNITYSDK_OFFSET(0x16A7A500)
#define RPG_CUSTOMRP_CAMERAHELPER_HASDEBUGFLAG_OFFSET UNITYSDK_OFFSET(0x16A7A4E0)
#define RPG_CUSTOMRP_CAMERAHELPER_HASFLAG_OFFSET UNITYSDK_OFFSET(0x16A7A470)
#define RPG_CUSTOMRP_CAMERAHELPER_SETDEBUGFLAG_1_OFFSET UNITYSDK_OFFSET(0x16A7A4C0)
#define RPG_CUSTOMRP_CAMERAHELPER_SETDEBUGFLAG_OFFSET UNITYSDK_OFFSET(0x16A7A490)
#define RPG_CUSTOMRP_CAMERAHELPER_SETFLAG_1_OFFSET UNITYSDK_OFFSET(0x16A7A450)
#define RPG_CUSTOMRP_CAMERAHELPER_SETFLAG_OFFSET UNITYSDK_OFFSET(0x16A7A420)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CameraHelper_TypeDefinitionIndex = 29321;

	class CameraHelper : public ::System::Object
	{
	public:
		static ::System::Void SetFlag(::RPG::CustomRP::CustomAdditionalCameraData* cameraData, ::RPG::CustomRP::CameraFlag f, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::RPG::CustomRP::CustomAdditionalCameraData*, ::RPG::CustomRP::CameraFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAMERAHELPER_SETFLAG_OFFSET))(cameraData, f, enable);
		}

		static ::System::Boolean HasFlag(::RPG::CustomRP::CustomAdditionalCameraData* cameraData, ::RPG::CustomRP::CameraFlag f)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::CustomAdditionalCameraData*, ::RPG::CustomRP::CameraFlag))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAMERAHELPER_HASFLAG_OFFSET))(cameraData, f);
		}

		static ::System::Void SetFlag_1(::RPG::CustomRP::FlagMask& flag, ::RPG::CustomRP::CameraFlag f, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::RPG::CustomRP::FlagMask&, ::RPG::CustomRP::CameraFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAMERAHELPER_SETFLAG_1_OFFSET))(flag, f, enable);
		}

		static ::System::Void SetDebugFlag(::RPG::CustomRP::CustomAdditionalCameraData* cameraData, ::RPG::CustomRP::CameraDebugFlag f, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::RPG::CustomRP::CustomAdditionalCameraData*, ::RPG::CustomRP::CameraDebugFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAMERAHELPER_SETDEBUGFLAG_OFFSET))(cameraData, f, enable);
		}

		static ::System::Boolean HasDebugFlag(::RPG::CustomRP::CustomAdditionalCameraData* cameraData, ::RPG::CustomRP::CameraDebugFlag f)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::CustomAdditionalCameraData*, ::RPG::CustomRP::CameraDebugFlag))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAMERAHELPER_HASDEBUGFLAG_OFFSET))(cameraData, f);
		}

		static ::System::Void SetDebugFlag_1(::RPG::CustomRP::FlagMask& flag, ::RPG::CustomRP::CameraDebugFlag f, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::RPG::CustomRP::FlagMask&, ::RPG::CustomRP::CameraDebugFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAMERAHELPER_SETDEBUGFLAG_1_OFFSET))(flag, f, enable);
		}

		static ::System::Boolean HasDebugFlag_1(::RPG::CustomRP::FlagMask& flag, ::RPG::CustomRP::CameraDebugFlag f)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::FlagMask&, ::RPG::CustomRP::CameraDebugFlag))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAMERAHELPER_HASDEBUGFLAG_1_OFFSET))(flag, f);
		}
	};
}
