#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEWAITBATTLEINPUT_METHOD_3_4C0C2B54F374E935_OFFSET UNITYSDK_OFFSET(0x1739EF70)
#define RPG_GAMECORE_MARBLEWAITBATTLEINPUT_METHOD_3_72BF26F53426D382_OFFSET UNITYSDK_OFFSET(0x1739F000)
#define RPG_GAMECORE_MARBLEWAITBATTLEINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1739EFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleWaitBattleInput_TypeDefinitionIndex = 22336;

	class MarbleWaitBattleInput : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SealTeamIndex; // 0x18
		::RPG::MVector2 ForceShootVector; // 0x1C
		::System::Single AngleTolerance; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEWAITBATTLEINPUT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4C0C2B54F374E935(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleWaitBattleInput*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleWaitBattleInput*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEWAITBATTLEINPUT_METHOD_3_4C0C2B54F374E935_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_72BF26F53426D382(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleWaitBattleInput* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleWaitBattleInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEWAITBATTLEINPUT_METHOD_3_72BF26F53426D382_OFFSET))(a1, a2);
		}
	};
}
