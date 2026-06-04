#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightMonsterData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTMONSTERBATTLESTAGEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBBB5860)
#define RPG_CLIENT_GRIDFIGHTMONSTERBATTLESTAGEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBBB58A0)
#define RPG_CLIENT_GRIDFIGHTMONSTERBATTLESTAGEDATA___C__SYNC_B__0_0_OFFSET UNITYSDK_OFFSET(0xBBB58B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMonsterBattleStageData___c_TypeDefinitionIndex = 60835;

	class GridFightMonsterBattleStageData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightMonsterBattleStageData___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightMonsterBattleStageData___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightMonsterBattleStageData___c_TypeDefinitionIndex)->GetStaticField(0x34360);
		}
		static ::System::Comparison_1<::RPG::Client::GridFightMonsterData*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightMonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightMonsterBattleStageData___c_TypeDefinitionIndex)->GetStaticField(0x34368);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERBATTLESTAGEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERBATTLESTAGEDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Sync_b__0_0(::RPG::Client::GridFightMonsterData* a1, ::RPG::Client::GridFightMonsterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightMonsterData*, ::RPG::Client::GridFightMonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERBATTLESTAGEDATA___C__SYNC_B__0_0_OFFSET))(this, a1, a2);
		}
	};
}
