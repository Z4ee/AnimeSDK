#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEBEZIERPOINTCONFIG_METHOD_2_C020CE49A7F2D1FE_OFFSET UNITYSDK_OFFSET(0x1CFA77D0)
#define RPG_GAMECORE_CHENLINGBATTLEBEZIERPOINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA7B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleBezierPointConfig_TypeDefinitionIndex = 15544;

	class ChenLingBattleBezierPointConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint RangeBegin; // 0x10
		::RPG::GameCore::FixPoint RangeEnd; // 0x18
		::RPG::GameCore::FixPoint RangeDampXZMin; // 0x20
		::RPG::GameCore::FixPoint RangeDampXZMax; // 0x28
		::RPG::GameCore::FixPoint RangeDampYMin; // 0x30
		::RPG::GameCore::FixPoint RangeDampYMax; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBEZIERPOINTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C020CE49A7F2D1FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleBezierPointConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleBezierPointConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBEZIERPOINTCONFIG_METHOD_2_C020CE49A7F2D1FE_OFFSET))(a1, a2);
		}
	};
}
