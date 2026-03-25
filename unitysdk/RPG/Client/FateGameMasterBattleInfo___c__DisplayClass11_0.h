#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IFateGameMasterInfoRealItem; }

#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x96820C0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C__DISPLAYCLASS11_0__GETMASTERBYAVATARID_B__0_OFFSET UNITYSDK_OFFSET(0x96827B0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterBattleInfo___c__DisplayClass11_0_TypeDefinitionIndex = 52006;

	class FateGameMasterBattleInfo___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::UInt32 avatarID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMasterByAvatarID_b__0(::RPG::Client::IFateGameMasterInfoRealItem* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IFateGameMasterInfoRealItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C__DISPLAYCLASS11_0__GETMASTERBYAVATARID_B__0_OFFSET))(this, m);
		}
	};
}
