#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EA5A5E4D07C4CF2B_4;
namespace RPG::Client::ChenLingBattle { class GridIndex; }

#define RPG_CLIENT_CHENLINGBATTLE_EFFECTCHANGEDATA_CREATEBYDEATH_OFFSET UNITYSDK_OFFSET(0xCB06DF0)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECTCHANGEDATA_CREATEBYEFFECT_OFFSET UNITYSDK_OFFSET(0xCB06D50)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECTCHANGEDATA_CREATEBYGRID_OFFSET UNITYSDK_OFFSET(0xCB06E90)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECTCHANGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCB06D30)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int EffectChangeData_TypeDefinitionIndex = 75769;

	class EffectChangeData : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::GridIndex* GridIndex; // 0x10
		::System::UInt32 EntityUniqueID; // 0x18
		::System::UInt64 EffectUniqueID; // 0x20
		::System::UInt32 ChangeValue; // 0x28
		::System::Boolean IsLevelUp; // 0x2C

		::System::Void _ctor(::System::UInt64 a1, ::System::UInt32 a2, ::RPG::Client::ChenLingBattle::GridIndex* a3, ::System::UInt32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::RPG::Client::ChenLingBattle::GridIndex*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECTCHANGEDATA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::ChenLingBattle::EffectChangeData* CreateByEffect(::System::UInt64 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::ChenLingBattle::EffectChangeData*(*)(::System::UInt64, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECTCHANGEDATA_CREATEBYEFFECT_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::ChenLingBattle::EffectChangeData* CreateByDeath(::System::UInt64 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ChenLingBattle::EffectChangeData*(*)(::System::UInt64, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECTCHANGEDATA_CREATEBYDEATH_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::ChenLingBattle::EffectChangeData* CreateByGrid(::System::UInt64 a1, ::Class_1_EA5A5E4D07C4CF2B_4* a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::ChenLingBattle::EffectChangeData*(*)(::System::UInt64, ::Class_1_EA5A5E4D07C4CF2B_4*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECTCHANGEDATA_CREATEBYGRID_OFFSET))(a1, a2, a3, a4);
		}
	};
}
