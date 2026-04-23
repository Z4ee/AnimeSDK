#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatV2BrandRankingEntry; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA149B70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA149BB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST___C__PLAYCHANGE_B__12_0_OFFSET UNITYSDK_OFFSET(0xA149BC0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2BrandRankingList___c_TypeDefinitionIndex = 69967;

	class DiceCombatV2BrandRankingList___c : public ::System::Object
	{
	public:
		static ::RPG::Client::DiceCombat::DiceCombatV2BrandRankingList___c** StaticGet___9()
		{
			return (::RPG::Client::DiceCombat::DiceCombatV2BrandRankingList___c**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatV2BrandRankingList___c_TypeDefinitionIndex)->GetStaticField(0x647C0);
		}
		static ::System::Func_3<::RPG::Client::DiceCombat::DiceCombatV2BrandRankingEntry*, ::System::Int32, ::System::Single>** StaticGet___9__12_0()
		{
			return (::System::Func_3<::RPG::Client::DiceCombat::DiceCombatV2BrandRankingEntry*, ::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatV2BrandRankingList___c_TypeDefinitionIndex)->GetStaticField(0x647C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST___C__CTOR_OFFSET))(this);
		}

		::System::Single _PlayChange_b__12_0(::RPG::Client::DiceCombat::DiceCombatV2BrandRankingEntry* from, ::System::Int32 to)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2BrandRankingEntry*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST___C__PLAYCHANGE_B__12_0_OFFSET))(this, from, to);
		}
	};
}
