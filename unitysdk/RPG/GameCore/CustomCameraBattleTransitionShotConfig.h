#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CUSTOMCAMERABATTLETRANSITIONSHOTCONFIG_METHOD_2_D736503E9C4EB0EE_OFFSET UNITYSDK_OFFSET(0x19687020)
#define RPG_GAMECORE_CUSTOMCAMERABATTLETRANSITIONSHOTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19687760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CustomCameraBattleTransitionShotConfig_TypeDefinitionIndex = 19284;

	class CustomCameraBattleTransitionShotConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 CenterOffset; // 0x10
		::System::Single Radius; // 0x1C
		::System::Single Duration; // 0x20
		::System::Single AngleSpeed; // 0x24
		::System::Single LinearSpeed; // 0x28
		::System::Single RotDuration; // 0x2C
		::System::Single WorldYOffset; // 0x30
		::System::Single Dutch; // 0x34
		::System::Boolean UseStartPoleAngle; // 0x38
		::System::Single StartPoleAngle; // 0x3C
		::System::Single SecondStartPoleAngle; // 0x40
		::System::Single StartPoleAngleBias; // 0x44
		::System::Single SecondStartPoleAngleBias; // 0x48
		::System::Single RadiusOffsetMin; // 0x4C
		::System::String* OffsetChangeCurve; // 0x50
		::System::Single FOVStart; // 0x58
		::System::Single FOVEnd; // 0x5C
		::System::String* FOVChangeCurve; // 0x60
		::System::Single CameraRadius; // 0x68
		::RPG::MVector3 CameraMove; // 0x6C
		::System::String* CameraMoveCurveX; // 0x78
		::System::String* CameraMoveCurveY; // 0x80
		::System::String* CameraMoveCurveZ; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMCAMERABATTLETRANSITIONSHOTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D736503E9C4EB0EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CustomCameraBattleTransitionShotConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CustomCameraBattleTransitionShotConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMCAMERABATTLETRANSITIONSHOTCONFIG_METHOD_2_D736503E9C4EB0EE_OFFSET))(a1, a2);
		}
	};
}
