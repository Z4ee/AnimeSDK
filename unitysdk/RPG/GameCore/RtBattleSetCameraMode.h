#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBattleCameraMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTBATTLESETCAMERAMODE_METHOD_3_39B45A0DEA957682_OFFSET UNITYSDK_OFFSET(0x1CCD8240)
#define RPG_GAMECORE_RTBATTLESETCAMERAMODE_METHOD_3_F49094647AD91B79_OFFSET UNITYSDK_OFFSET(0x1CCD8200)
#define RPG_GAMECORE_RTBATTLESETCAMERAMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD8230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleSetCameraMode_TypeDefinitionIndex = 23818;

	class RtBattleSetCameraMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::RtBattleCameraMode CameraMode; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESETCAMERAMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F49094647AD91B79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleSetCameraMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleSetCameraMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESETCAMERAMODE_METHOD_3_F49094647AD91B79_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_39B45A0DEA957682(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleSetCameraMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleSetCameraMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESETCAMERAMODE_METHOD_3_39B45A0DEA957682_OFFSET))(a1, a2);
		}
	};
}
