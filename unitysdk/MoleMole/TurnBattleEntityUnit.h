#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_60A7BA8A302D0436.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/TurnBattleUnitBase.h"
#include "unitysdk/Struct_2_90F2E0A39C190236.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_54D31199DB132D48;
class Class_3_1699D6295DC3F818_5;
class Class_3_8018CDF1371D00D2;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define MOLEMOLE_TURNBATTLEENTITYUNIT_CANTRANSFERTONEXTROUND_OFFSET UNITYSDK_OFFSET(0x152C0960)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_CANTRIGGERSKILLBYINDEX_OFFSET UNITYSDK_OFFSET(0x152C2F10)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_GETSKILLFILTER_OFFSET UNITYSDK_OFFSET(0x152C35B0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x152C09B0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_GET_ISENEMY_OFFSET UNITYSDK_OFFSET(0x152C0BC0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x152C08F0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x152C09D0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_HASSKILL_OFFSET UNITYSDK_OFFSET(0x152C2DE0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ISSKILLTARGETVALID_OFFSET UNITYSDK_OFFSET(0x152C3760)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_MOLEMOLE_ITURNBATTLEUNITSORTABLE_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x152C0910)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_NEWSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x152C2B60)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONADDEDTOROUND_OFFSET UNITYSDK_OFFSET(0x152C10B0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x152C0EB0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONPROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x152C0F60)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONREMOVEDFROMROUND_OFFSET UNITYSDK_OFFSET(0x152C2A20)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONROUNDSTART_OFFSET UNITYSDK_OFFSET(0x152C1B40)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONTURNOVER_OFFSET UNITYSDK_OFFSET(0x152C2850)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONTURNSTART_OFFSET UNITYSDK_OFFSET(0x152C1B90)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_OVERRIDESKILL_OFFSET UNITYSDK_OFFSET(0x152C1E70)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_SETENTITYMOVEMENTENABLE_OFFSET UNITYSDK_OFFSET(0x152C2BE0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_SETPLAYERCONTROL_OFFSET UNITYSDK_OFFSET(0x152C20A0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_SET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x152C0900)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x152C09E0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_TRIGGERSKILLBYINDEX_OFFSET UNITYSDK_OFFSET(0x152C2E60)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_TRIGGERSKILL_OFFSET UNITYSDK_OFFSET(0x152C3150)
#define MOLEMOLE_TURNBATTLEENTITYUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x152C0C20)
#define MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONADDEDTOROUND_OFFSET UNITYSDK_OFFSET(0x152C4140)
#define MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONREMOVEDFROMROUND_OFFSET UNITYSDK_OFFSET(0x152C41D0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONROUNDSTART_OFFSET UNITYSDK_OFFSET(0x152C4260)
#define MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONTURNOVER_OFFSET UNITYSDK_OFFSET(0x152C42F0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONTURNSTART_OFFSET UNITYSDK_OFFSET(0x152C4380)

namespace MoleMole
{
	inline static constexpr unsigned int TurnBattleEntityUnit_TypeDefinitionIndex = 77585;

	class TurnBattleEntityUnit : public ::MoleMole::TurnBattleUnitBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_1699D6295DC3F818_5*>* SkillUseCountLog; // 0x10
		::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* _skillOverrideQueue; // 0x18
		::Class_3_8018CDF1371D00D2* MonsterInfoLog; // 0x20
		::Class_2_54D31199DB132D48* _sourceSnapshot; // 0x28
		::MoleMole::Battle::Entity* Entity; // 0x30
		::Il2CppArray<::Struct_2_90F2E0A39C190236>* Skills; // 0x38
		::System::Single _SortWeight_k__BackingField; // 0x40
		::System::Boolean _isCurrentMovementEnabled; // 0x44
		::System::Int32 CurSelectSkillIndex; // 0x48

		::System::Void _ctor(::Class_2_54D31199DB132D48* sourceSnapshot)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_54D31199DB132D48*))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT__CTOR_OFFSET))(this, sourceSnapshot);
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

		::Class_2_54D31199DB132D48* NewSnapshot()
		{
			return ((::Class_2_54D31199DB132D48*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_NEWSNAPSHOT_OFFSET))(this);
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
