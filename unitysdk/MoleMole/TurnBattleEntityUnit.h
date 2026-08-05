#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_60A7BA8A302D0436.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/TurnBattleUnitBase.h"
#include "unitysdk/Struct_2_90F2E0A39C190236.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_29806C1A251872EA;
class Class_3_1699D6295DC3F818_5;
class Class_3_8018CDF1371D00D2;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define MOLEMOLE_TURNBATTLEENTITYUNIT_CANTRANSFERTONEXTROUND_OFFSET UNITYSDK_OFFSET(0x173BFDA0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_CANTRIGGERSKILLBYINDEX_OFFSET UNITYSDK_OFFSET(0x173C22E0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_GETSKILLFILTER_OFFSET UNITYSDK_OFFSET(0x173C2970)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x173BFDF0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_GET_ISENEMY_OFFSET UNITYSDK_OFFSET(0x173C0000)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x173BFD30)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x173BFE10)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_HASSKILL_OFFSET UNITYSDK_OFFSET(0x173C21C0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ISSKILLTARGETVALID_OFFSET UNITYSDK_OFFSET(0x173C2B00)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_MOLEMOLE_ITURNBATTLEUNITSORTABLE_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x173BFD50)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_NEWSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x173C1F40)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONADDEDTOROUND_OFFSET UNITYSDK_OFFSET(0x173C04F0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x173C02F0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONPROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x173C03A0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONREMOVEDFROMROUND_OFFSET UNITYSDK_OFFSET(0x173C1E00)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONROUNDSTART_OFFSET UNITYSDK_OFFSET(0x173C0F90)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONTURNOVER_OFFSET UNITYSDK_OFFSET(0x173C1C30)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONTURNSTART_OFFSET UNITYSDK_OFFSET(0x173C0FE0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_OVERRIDESKILL_OFFSET UNITYSDK_OFFSET(0x173C12C0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_SETENTITYMOVEMENTENABLE_OFFSET UNITYSDK_OFFSET(0x173C1FC0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_SETPLAYERCONTROL_OFFSET UNITYSDK_OFFSET(0x173C14F0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_SET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x173BFD40)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x173BFE20)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_TRIGGERSKILLBYINDEX_OFFSET UNITYSDK_OFFSET(0x173C2230)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_TRIGGERSKILL_OFFSET UNITYSDK_OFFSET(0x173C2500)
#define MOLEMOLE_TURNBATTLEENTITYUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x173C0060)
#define MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONADDEDTOROUND_OFFSET UNITYSDK_OFFSET(0x173C34D0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONREMOVEDFROMROUND_OFFSET UNITYSDK_OFFSET(0x173C3560)
#define MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONROUNDSTART_OFFSET UNITYSDK_OFFSET(0x173C35F0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONTURNOVER_OFFSET UNITYSDK_OFFSET(0x173C3680)
#define MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONTURNSTART_OFFSET UNITYSDK_OFFSET(0x173C3710)

namespace MoleMole
{
	inline static constexpr unsigned int TurnBattleEntityUnit_TypeDefinitionIndex = 44585;

	class TurnBattleEntityUnit : public ::MoleMole::TurnBattleUnitBase
	{
	public:
		::Il2CppArray<::Struct_2_90F2E0A39C190236>* Skills; // 0x10
		::Class_2_29806C1A251872EA* _sourceSnapshot; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_1699D6295DC3F818_5*>* SkillUseCountLog; // 0x20
		::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* _skillOverrideQueue; // 0x28
		::MoleMole::Battle::Entity* Entity; // 0x30
		::Class_3_8018CDF1371D00D2* MonsterInfoLog; // 0x38
		::System::Boolean _isCurrentMovementEnabled; // 0x40
		::System::Single _SortWeight_k__BackingField; // 0x44
		::System::Int32 CurSelectSkillIndex; // 0x48

		::System::Void _ctor(::Class_2_29806C1A251872EA* sourceSnapshot)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_29806C1A251872EA*))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT__CTOR_OFFSET))(this, sourceSnapshot);
		}

		::System::Single get_SortWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_GET_SORTWEIGHT_OFFSET))(this);
		}

		::System::Void set_SortWeight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_SET_SORTWEIGHT_OFFSET))(this, value);
		}

		::System::Single MoleMole_ITurnBattleUnitSortable_get_SortWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_MOLEMOLE_ITURNBATTLEUNITSORTABLE_GET_SORTWEIGHT_OFFSET))(this);
		}

		::System::Boolean CanTransferToNextRound(::System::Int32 _)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_CANTRANSFERTONEXTROUND_OFFSET))(this, _);
		}

		::System::Int32 get_ConfigID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_GET_CONFIGID_OFFSET))(this);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_Speed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_SET_SPEED_OFFSET))(this, value);
		}

		::System::Boolean get_IsEnemy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_GET_ISENEMY_OFFSET))(this);
		}

		::System::Void OnFighter_PropertyValueChanged(::System::UInt32 FighterId, ::MoleMole::Config::BaseProperty type, ::System::String* customType, ::System::Double oldValue, ::System::Double newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET))(this, FighterId, type, customType, oldValue, newValue);
		}

		::System::Void OnAddedToRound(::Enum_3_60A7BA8A302D0436 reason)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_60A7BA8A302D0436))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_ONADDEDTOROUND_OFFSET))(this, reason);
		}

		::System::Void OnRoundStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_ONROUNDSTART_OFFSET))(this);
		}

		::System::Void OnTurnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_ONTURNSTART_OFFSET))(this);
		}

		::System::Void OnTurnOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_ONTURNOVER_OFFSET))(this);
		}

		::System::Void OnRemovedFromRound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_ONREMOVEDFROMROUND_OFFSET))(this);
		}

		::System::Void OnPropertyValueChanged(::System::UInt32 fighterID, ::MoleMole::Config::BaseProperty type, ::System::String* customType, ::System::Double oldValue, ::System::Double newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_ONPROPERTYVALUECHANGED_OFFSET))(this, fighterID, type, customType, oldValue, newValue);
		}

		::Class_2_29806C1A251872EA* NewSnapshot()
		{
			return ((::Class_2_29806C1A251872EA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_NEWSNAPSHOT_OFFSET))(this);
		}

		::System::Void SetPlayerControl(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_SETPLAYERCONTROL_OFFSET))(this, enabled);
		}

		::System::Void SetEntityMovementEnable(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_SETENTITYMOVEMENTENABLE_OFFSET))(this, enabled);
		}

		::System::Void OverrideSkill(::System::Int32 slotIdx, ::System::Int32 OverrideId, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_OVERRIDESKILL_OFFSET))(this, slotIdx, OverrideId, force);
		}

		::System::Boolean HasSkill(::System::Int32 skillIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_HASSKILL_OFFSET))(this, skillIndex);
		}

		::System::Boolean TriggerSkillByIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_TRIGGERSKILLBYINDEX_OFFSET))(this, index);
		}

		::System::Boolean CanTriggerSkillByIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_CANTRIGGERSKILLBYINDEX_OFFSET))(this, index);
		}

		::System::Boolean TriggerSkill(::Struct_2_90F2E0A39C190236 skill)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_90F2E0A39C190236))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_TRIGGERSKILL_OFFSET))(this, skill);
		}

		::System::Func_2<::MoleMole::TurnBattleEntityUnit*, ::System::Boolean>* GetSkillFilter(::System::Int32 skillIndex, ::System::Boolean ignoreRange, ::System::Boolean ignoreBlock)
		{
			return ((::System::Func_2<::MoleMole::TurnBattleEntityUnit*, ::System::Boolean>*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_GETSKILLFILTER_OFFSET))(this, skillIndex, ignoreRange, ignoreBlock);
		}

		::System::Boolean IsSkillTargetValid(::Struct_2_90F2E0A39C190236 skill, ::MoleMole::TurnBattleEntityUnit* target, ::System::Int32& errorCode, ::System::Boolean ignoreRange, ::System::Boolean ignoreBlock)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_90F2E0A39C190236, ::MoleMole::TurnBattleEntityUnit*, ::System::Int32&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_ISSKILLTARGETVALID_OFFSET))(this, skill, target, errorCode, ignoreRange, ignoreBlock);
		}

		::System::Void __base_OnAddedToRound(::Enum_3_60A7BA8A302D0436 P0)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_60A7BA8A302D0436))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONADDEDTOROUND_OFFSET))(this, P0);
		}

		::System::Void __base_OnRemovedFromRound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONREMOVEDFROMROUND_OFFSET))(this);
		}

		::System::Void __base_OnRoundStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONROUNDSTART_OFFSET))(this);
		}

		::System::Void __base_OnTurnOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONTURNOVER_OFFSET))(this);
		}

		::System::Void __base_OnTurnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONTURNSTART_OFFSET))(this);
		}
	};
}
