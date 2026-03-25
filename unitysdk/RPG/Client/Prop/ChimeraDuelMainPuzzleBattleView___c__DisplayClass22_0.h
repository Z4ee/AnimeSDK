#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelBattlePrefabConfig_Master; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA04C630)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW___C__DISPLAYCLASS22_0___LOADMASTERNPCMODEL_B__0_OFFSET UNITYSDK_OFFSET(0xA04D830)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleBattleView___c__DisplayClass22_0_TypeDefinitionIndex = 63822;

	class ChimeraDuelMainPuzzleBattleView___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::UInt32 masterID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __LoadMasterNpcModel_b__0(::RPG::Client::Prop::ChimeraDuelBattlePrefabConfig_Master* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBattlePrefabConfig_Master*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW___C__DISPLAYCLASS22_0___LOADMASTERNPCMODEL_B__0_OFFSET))(this, p);
		}
	};
}
