#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class IFateGameMasterInfoItem; }

#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA341EB0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C__DISPLAYCLASS13_0__ISCURROUNDBATTLEMASTER_B__0_OFFSET UNITYSDK_OFFSET(0xA342240)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterBattleInfo___c__DisplayClass13_0_TypeDefinitionIndex = 58956;

	class FateGameMasterBattleInfo___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::Client::IFateGameMasterInfoItem* master; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsCurRoundBattleMaster_b__0(::System::ValueTuple_2<::RPG::Client::IFateGameMasterInfoItem*, ::RPG::Client::IFateGameMasterInfoItem*> p)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::RPG::Client::IFateGameMasterInfoItem*, ::RPG::Client::IFateGameMasterInfoItem*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C__DISPLAYCLASS13_0__ISCURROUNDBATTLEMASTER_B__0_OFFSET))(this, p);
		}
	};
}
