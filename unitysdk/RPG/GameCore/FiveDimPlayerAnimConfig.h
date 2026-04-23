#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMPLAYERANIMCONFIG_METHOD_2_00644FCCD1750A5A_OFFSET UNITYSDK_OFFSET(0x18912FF0)
#define RPG_GAMECORE_FIVEDIMPLAYERANIMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18913260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPlayerAnimConfig_TypeDefinitionIndex = 15784;

	class FiveDimPlayerAnimConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single UnitLength; // 0x10
		::System::String* ShootArrowCurvePath; // 0x18
		::RPG::MVector3 ShootArrowPositionOffset; // 0x20
		::RPG::MVector3 ShootArrowRotationOffset; // 0x2C
		::RPG::MVector3 ShootArrowScaleOffset; // 0x38
		::System::Single ArrowMoveByCurveTransformDuration; // 0x44
		::System::Single ArrowMoveByCurvePosYDuration; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERANIMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_00644FCCD1750A5A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayerAnimConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayerAnimConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERANIMCONFIG_METHOD_2_00644FCCD1750A5A_OFFSET))(a1, a2);
		}
	};
}
