#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_633744E9733BE855_2;
namespace RPG::Client::ChenLingBattle { class GridIndex; }

#define RPG_CLIENT_CHENLINGBATTLE_EFFECTCHANGEDATA_CREATEBYDEATH_OFFSET UNITYSDK_OFFSET(0x9338EB0)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECTCHANGEDATA_CREATEBYEFFECT_OFFSET UNITYSDK_OFFSET(0x9338E10)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECTCHANGEDATA_CREATEBYGRID_OFFSET UNITYSDK_OFFSET(0x9338F50)
#define RPG_CLIENT_CHENLINGBATTLE_EFFECTCHANGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9338DF0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int EffectChangeData_TypeDefinitionIndex = 62008;

	class EffectChangeData : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::GridIndex* GridIndex; // 0x10
		::System::UInt32 EntityUniqueID; // 0x18
		::System::UInt64 EffectUniqueID; // 0x20
		::System::Boolean IsLevelUp; // 0x28
		::System::UInt32 ChangeValue; // 0x2C

		::System::Void _ctor(::System::UInt64 effectUID, ::System::UInt32 entityUID, ::RPG::Client::ChenLingBattle::GridIndex* gridIndex, ::System::UInt32 changeValue, ::System::Boolean isLevelUp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::RPG::Client::ChenLingBattle::GridIndex*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECTCHANGEDATA__CTOR_OFFSET))(this, effectUID, entityUID, gridIndex, changeValue, isLevelUp);
		}

		static ::RPG::Client::ChenLingBattle::EffectChangeData* CreateByEffect(::System::UInt64 effectUID, ::System::UInt32 entityUID, ::System::UInt32 changeValue, ::System::Boolean isLevelUp)
		{
			return ((::RPG::Client::ChenLingBattle::EffectChangeData*(*)(::System::UInt64, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECTCHANGEDATA_CREATEBYEFFECT_OFFSET))(effectUID, entityUID, changeValue, isLevelUp);
		}

		static ::RPG::Client::ChenLingBattle::EffectChangeData* CreateByDeath(::System::UInt64 effectUID, ::System::UInt32 changeValue, ::System::Boolean isLevelUp)
		{
			return ((::RPG::Client::ChenLingBattle::EffectChangeData*(*)(::System::UInt64, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECTCHANGEDATA_CREATEBYDEATH_OFFSET))(effectUID, changeValue, isLevelUp);
		}

		static ::RPG::Client::ChenLingBattle::EffectChangeData* CreateByGrid(::System::UInt64 effectUID, ::Class_1_633744E9733BE855_2* gridIndex, ::System::UInt32 changeValue, ::System::Boolean isLevelUp)
		{
			return ((::RPG::Client::ChenLingBattle::EffectChangeData*(*)(::System::UInt64, ::Class_1_633744E9733BE855_2*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_EFFECTCHANGEDATA_CREATEBYGRID_OFFSET))(effectUID, gridIndex, changeValue, isLevelUp);
		}
	};
}
