#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CameraDebugFlag.h"
#include "unitysdk/RPG/CustomRP/CameraFlag.h"
#include "unitysdk/RPG/CustomRP/FlagMask.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class CustomAdditionalCameraData; }

#define RPG_CUSTOMRP_CAMERAHELPER_HASDEBUGFLAG_1_OFFSET UNITYSDK_OFFSET(0x192B8EE0)
#define RPG_CUSTOMRP_CAMERAHELPER_HASDEBUGFLAG_OFFSET UNITYSDK_OFFSET(0x192B8EC0)
#define RPG_CUSTOMRP_CAMERAHELPER_HASFLAG_OFFSET UNITYSDK_OFFSET(0x192B8E50)
#define RPG_CUSTOMRP_CAMERAHELPER_SETDEBUGFLAG_1_OFFSET UNITYSDK_OFFSET(0x192B8EA0)
#define RPG_CUSTOMRP_CAMERAHELPER_SETDEBUGFLAG_OFFSET UNITYSDK_OFFSET(0x192B8E70)
#define RPG_CUSTOMRP_CAMERAHELPER_SETFLAG_1_OFFSET UNITYSDK_OFFSET(0x192B8E30)
#define RPG_CUSTOMRP_CAMERAHELPER_SETFLAG_OFFSET UNITYSDK_OFFSET(0x192B8E00)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CameraHelper_TypeDefinitionIndex = 37014;

	class CameraHelper : public ::System::Object
	{
	public:
		static ::System::Void SetFlag(::RPG::CustomRP::CustomAdditionalCameraData* a1, ::RPG::CustomRP::CameraFlag a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::CustomRP::CustomAdditionalCameraData*, ::RPG::CustomRP::CameraFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAMERAHELPER_SETFLAG_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HasFlag(::RPG::CustomRP::CustomAdditionalCameraData* a1, ::RPG::CustomRP::CameraFlag a2)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::CustomAdditionalCameraData*, ::RPG::CustomRP::CameraFlag))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAMERAHELPER_HASFLAG_OFFSET))(a1, a2);
		}

		static ::System::Void SetFlag_1(::RPG::CustomRP::FlagMask& a1, ::RPG::CustomRP::CameraFlag a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::CustomRP::FlagMask&, ::RPG::CustomRP::CameraFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAMERAHELPER_SETFLAG_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetDebugFlag(::RPG::CustomRP::CustomAdditionalCameraData* a1, ::RPG::CustomRP::CameraDebugFlag a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::CustomRP::CustomAdditionalCameraData*, ::RPG::CustomRP::CameraDebugFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAMERAHELPER_SETDEBUGFLAG_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HasDebugFlag(::RPG::CustomRP::CustomAdditionalCameraData* a1, ::RPG::CustomRP::CameraDebugFlag a2)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::CustomAdditionalCameraData*, ::RPG::CustomRP::CameraDebugFlag))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAMERAHELPER_HASDEBUGFLAG_OFFSET))(a1, a2);
		}

		static ::System::Void SetDebugFlag_1(::RPG::CustomRP::FlagMask& a1, ::RPG::CustomRP::CameraDebugFlag a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::CustomRP::FlagMask&, ::RPG::CustomRP::CameraDebugFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAMERAHELPER_SETDEBUGFLAG_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HasDebugFlag_1(::RPG::CustomRP::FlagMask& a1, ::RPG::CustomRP::CameraDebugFlag a2)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::FlagMask&, ::RPG::CustomRP::CameraDebugFlag))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAMERAHELPER_HASDEBUGFLAG_1_OFFSET))(a1, a2);
		}
	};
}
