#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class IFateGameMasterInfoItem; }
namespace RPG::Client { class IFateGameMasterInfoRealItem; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA341F70)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA341FB0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C__GETCURPLAYERRIVALMASTER_B__12_0_OFFSET UNITYSDK_OFFSET(0xA342030)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C__GETPLAYERMASTER_B__9_0_OFFSET UNITYSDK_OFFSET(0xA341FC0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterBattleInfo___c_TypeDefinitionIndex = 58954;

	class FateGameMasterBattleInfo___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::IFateGameMasterInfoRealItem*>** StaticGet___9__9_0()
		{
			return (::System::Predicate_1<::RPG::Client::IFateGameMasterInfoRealItem*>**)Il2CppClass::FromTypeDefinitionIndex(FateGameMasterBattleInfo___c_TypeDefinitionIndex)->GetStaticField(0xB7A0);
		}
		static ::RPG::Client::FateGameMasterBattleInfo___c** StaticGet___9()
		{
			return (::RPG::Client::FateGameMasterBattleInfo___c**)Il2CppClass::FromTypeDefinitionIndex(FateGameMasterBattleInfo___c_TypeDefinitionIndex)->GetStaticField(0xB7A8);
		}
		static ::System::Predicate_1<::System::ValueTuple_2<::RPG::Client::IFateGameMasterInfoItem*, ::RPG::Client::IFateGameMasterInfoItem*>>** StaticGet___9__12_0()
		{
			return (::System::Predicate_1<::System::ValueTuple_2<::RPG::Client::IFateGameMasterInfoItem*, ::RPG::Client::IFateGameMasterInfoItem*>>**)Il2CppClass::FromTypeDefinitionIndex(FateGameMasterBattleInfo___c_TypeDefinitionIndex)->GetStaticField(0xB7B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetPlayerMaster_b__9_0(::RPG::Client::IFateGameMasterInfoRealItem* master)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IFateGameMasterInfoRealItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C__GETPLAYERMASTER_B__9_0_OFFSET))(this, master);
		}

		::System::Boolean _GetCurPlayerRivalMaster_b__12_0(::System::ValueTuple_2<::RPG::Client::IFateGameMasterInfoItem*, ::RPG::Client::IFateGameMasterInfoItem*> p)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::RPG::Client::IFateGameMasterInfoItem*, ::RPG::Client::IFateGameMasterInfoItem*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C__GETCURPLAYERRIVALMASTER_B__12_0_OFFSET))(this, p);
		}
	};
}
