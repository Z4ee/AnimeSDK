#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleEndReasonType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETBATTLEENDREASON_METHOD_3_39643F69C8777297_OFFSET UNITYSDK_OFFSET(0x1D4E2C90)
#define RPG_GAMECORE_SETBATTLEENDREASON_METHOD_3_A683074EF5BC9B44_OFFSET UNITYSDK_OFFSET(0x1D4E2CD0)
#define RPG_GAMECORE_SETBATTLEENDREASON__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E2CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleEndReason_TypeDefinitionIndex = 23042;

	class SetBattleEndReason : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::BattleEndReasonType Reason; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEENDREASON__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_39643F69C8777297(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleEndReason*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleEndReason*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEENDREASON_METHOD_3_39643F69C8777297_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A683074EF5BC9B44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleEndReason* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleEndReason*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEENDREASON_METHOD_3_A683074EF5BC9B44_OFFSET))(a1, a2);
		}
	};
}
