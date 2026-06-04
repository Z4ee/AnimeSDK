#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_358;
class Class_1_57207EAD4239ED6B;
class Class_1_715991DD7016B4FF;

#define RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0xCD2EC20)
#define RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_GETEQUIPSHOWSTATUSCOUNT_OFFSET UNITYSDK_OFFSET(0xCD2F080)
#define RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_GETFINALPARAMLIST_OFFSET UNITYSDK_OFFSET(0xCD2EE30)
#define RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_SETUPABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0xCD2EED0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCD2ED90)
#define RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA__ONSELFCUSTOMDYNAMICVALUECHANGED_OFFSET UNITYSDK_OFFSET(0xCD2EFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleGridFightEquipData_TypeDefinitionIndex = 52551;

	class BattleGridFightEquipData : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_358* _AbilityInstance; // 0x10
		::Class_1_57207EAD4239ED6B* AdditionalPropertyMap; // 0x18
		::Class_1_715991DD7016B4FF* AdditionalParamProtoMap; // 0x20
		::System::Boolean IsDynamicCreate; // 0x28
		::System::UInt32 ID; // 0x2C
		::System::UInt32 UniqueID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::BattleGridFightEquipData* DeepClone()
		{
			return ((::RPG::GameCore::BattleGridFightEquipData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_DEEPCLONE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* GetFinalParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_GETFINALPARAMLIST_OFFSET))(this);
		}

		::System::Void SetupAbilityInstance(::Class_0_16E4307DCC419505_358* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_358*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_SETUPABILITYINSTANCE_OFFSET))(this, a1);
		}

		::System::Void _OnSelfCustomDynamicValueChanged(::RPG::GameCore::StringHash a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA__ONSELFCUSTOMDYNAMICVALUECHANGED_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixPoint GetEquipShowStatusCount()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_GETEQUIPSHOWSTATUSCOUNT_OFFSET))(this);
		}
	};
}
