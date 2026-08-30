#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleConfigBase.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"

#define RPG_CLIENT_DITHERMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET UNITYSDK_OFFSET(0xCD7F170)
#define RPG_CLIENT_DITHERMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xCD7F1C0)

namespace RPG::Client
{
	inline static constexpr unsigned int DitherModuleConfig_TypeDefinitionIndex = 69637;

	class DitherModuleConfig : public ::RPG::Client::CameraModuleConfigBase
	{
	public:
		::System::Single DitherCheckInterval; // 0x18
		::System::Single DitherCameraHeight; // 0x1C
		::System::Boolean DitherCloseOpen; // 0x20
		::System::Boolean DitherShowDebug; // 0x21
		::System::Single DitherMinDistance; // 0x24
		::System::Single DitherMaxDistance; // 0x28
		::System::Single DitherSectorAngle; // 0x2C
		::System::Int32 DitherRayHalfCount; // 0x30
		::System::Single DitherEffectDuration; // 0x34
		::System::Single DitherRecoveryDuration; // 0x38
		::System::Single DitherCloseFightDistanceMin; // 0x3C
		::System::Single DitherUltraSkillHugeMonsterMin; // 0x40
		::System::Single DitherPerEntityKneeHeight; // 0x44
		::System::Single DitherPerEntityChinHeight; // 0x48
		::System::Single DitherPerEntityWidth; // 0x4C
		::System::Single DitherPerEntityRayMaxLength; // 0x50
		::System::Single ADVDitherAlphaMinValue; // 0x54
		::System::Single ADVDitherMinDistance; // 0x58
		::System::Single ADVDitherMaxDistance; // 0x5C
		::System::Single ADVDitherEffectDuration; // 0x60
		::System::Single ADVDitherPerEntityKneeHeight; // 0x64
		::System::Single ADVDitherPerEntityChinHeight; // 0x68
		::System::Single ADVDitherPerEntityWidth; // 0x6C
		::System::Single ADVDitherPerEntityRayMaxLength; // 0x70
		::System::Single DialogModeDitherAlphaMinValue; // 0x74
		::System::Single DialogModeDitherMinDistance; // 0x78
		::System::Single DialogModeDitherMaxDistance; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DITHERMODULECONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraModuleType Method_4_2BF4648671111A7E()
		{
			return ((::RPG::Client::CameraModuleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DITHERMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET))(this);
		}
	};
}
