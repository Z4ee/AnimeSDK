#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x94722A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO___C__CREATEPVERESULT_B__1_0_OFFSET UNITYSDK_OFFSET(0x94722F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x94722E0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatBattleResultInfo___c_TypeDefinitionIndex = 61901;

	class DiceCombatBattleResultInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::ItemDisplayData*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::ItemDisplayData*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatBattleResultInfo___c_TypeDefinitionIndex)->GetStaticField(0x447F0);
		}
		static ::RPG::Client::DiceCombat::DiceCombatBattleResultInfo___c** StaticGet___9()
		{
			return (::RPG::Client::DiceCombat::DiceCombatBattleResultInfo___c**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatBattleResultInfo___c_TypeDefinitionIndex)->GetStaticField(0x447F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _CreatePVEResult_b__1_0(::RPG::Client::ItemDisplayData* item1, ::RPG::Client::ItemDisplayData* item2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ItemDisplayData*, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO___C__CREATEPVERESULT_B__1_0_OFFSET))(this, item1, item2);
		}
	};
}
