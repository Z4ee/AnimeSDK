#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceBattleItemDataItem; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CAKERACEBATTLEITEMINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB48EFF0)
#define RPG_CLIENT_CAKERACEBATTLEITEMINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB48F020)
#define RPG_CLIENT_CAKERACEBATTLEITEMINFO___C___INITBATTLEITEMDATAITEMS_B__5_0_OFFSET UNITYSDK_OFFSET(0xB48F030)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceBattleItemInfo___c_TypeDefinitionIndex = 58948;

	class CakeRaceBattleItemInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::CakeRaceBattleItemInfo___c** StaticGet___9()
		{
			return (::RPG::Client::CakeRaceBattleItemInfo___c**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceBattleItemInfo___c_TypeDefinitionIndex)->GetStaticField(0x5C180);
		}
		static ::System::Comparison_1<::RPG::Client::CakeRaceBattleItemDataItem*>** StaticGet___9__5_0()
		{
			return (::System::Comparison_1<::RPG::Client::CakeRaceBattleItemDataItem*>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceBattleItemInfo___c_TypeDefinitionIndex)->GetStaticField(0x5C188);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __InitBattleItemDataItems_b__5_0(::RPG::Client::CakeRaceBattleItemDataItem* a1, ::RPG::Client::CakeRaceBattleItemDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemDataItem*, ::RPG::Client::CakeRaceBattleItemDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMINFO___C___INITBATTLEITEMDATAITEMS_B__5_0_OFFSET))(this, a1, a2);
		}
	};
}
