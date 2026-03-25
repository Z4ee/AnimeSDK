#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/AutoTestLogType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_25495098F569C629_GET_ATTACKERHP_OFFSET UNITYSDK_OFFSET(0x166619F0)
#define CLASS_1_25495098F569C629_GET_ATTACKERPOINT_OFFSET UNITYSDK_OFFSET(0x16661AD0)
#define CLASS_1_25495098F569C629_GET_ATTACKER_OFFSET UNITYSDK_OFFSET(0x166619B0)
#define CLASS_1_25495098F569C629_GET_CONFIRMRESULT_OFFSET UNITYSDK_OFFSET(0x16661B90)
#define CLASS_1_25495098F569C629_GET_CONFIRMSUM_OFFSET UNITYSDK_OFFSET(0x16661BB0)
#define CLASS_1_25495098F569C629_GET_DAMAGETARGET_OFFSET UNITYSDK_OFFSET(0x16661AB0)
#define CLASS_1_25495098F569C629_GET_DAMAGEVALUE_OFFSET UNITYSDK_OFFSET(0x16661B10)
#define CLASS_1_25495098F569C629_GET_DEFENDERHP_OFFSET UNITYSDK_OFFSET(0x16661A10)
#define CLASS_1_25495098F569C629_GET_DEFENDERPOINT_OFFSET UNITYSDK_OFFSET(0x16661AF0)
#define CLASS_1_25495098F569C629_GET_DEFENDER_OFFSET UNITYSDK_OFFSET(0x166619D0)
#define CLASS_1_25495098F569C629_GET_FIRSTATTACK_OFFSET UNITYSDK_OFFSET(0x16661950)
#define CLASS_1_25495098F569C629_GET_HEALTARGET_OFFSET UNITYSDK_OFFSET(0x16661B30)
#define CLASS_1_25495098F569C629_GET_HEALVALUE_OFFSET UNITYSDK_OFFSET(0x16661B50)
#define CLASS_1_25495098F569C629_GET_LOGTYPE_OFFSET UNITYSDK_OFFSET(0x16661930)
#define CLASS_1_25495098F569C629_GET_LOSER_OFFSET UNITYSDK_OFFSET(0x16661970)
#define CLASS_1_25495098F569C629_GET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0x16661A50)
#define CLASS_1_25495098F569C629_GET_MODIFIERLIFETIME_OFFSET UNITYSDK_OFFSET(0x16661A90)
#define CLASS_1_25495098F569C629_GET_MODIFIERSTACK_OFFSET UNITYSDK_OFFSET(0x16661A70)
#define CLASS_1_25495098F569C629_GET_MODIFIERTARGET_OFFSET UNITYSDK_OFFSET(0x16661A30)
#define CLASS_1_25495098F569C629_GET_ROLLRESULT_OFFSET UNITYSDK_OFFSET(0x16661B70)
#define CLASS_1_25495098F569C629_GET_TURN_OFFSET UNITYSDK_OFFSET(0x16661990)
#define CLASS_1_25495098F569C629_METHOD_1_242CCED06054A364_OFFSET UNITYSDK_OFFSET(0x16661BD0)
#define CLASS_1_25495098F569C629_METHOD_1_9239663B8D029640_OFFSET UNITYSDK_OFFSET(0x16661E30)
#define CLASS_1_25495098F569C629_SET_ATTACKERHP_OFFSET UNITYSDK_OFFSET(0x16661A00)
#define CLASS_1_25495098F569C629_SET_ATTACKERPOINT_OFFSET UNITYSDK_OFFSET(0x16661AE0)
#define CLASS_1_25495098F569C629_SET_ATTACKER_OFFSET UNITYSDK_OFFSET(0x166619C0)
#define CLASS_1_25495098F569C629_SET_CONFIRMRESULT_OFFSET UNITYSDK_OFFSET(0x16661BA0)
#define CLASS_1_25495098F569C629_SET_CONFIRMSUM_OFFSET UNITYSDK_OFFSET(0x16661BC0)
#define CLASS_1_25495098F569C629_SET_DAMAGETARGET_OFFSET UNITYSDK_OFFSET(0x16661AC0)
#define CLASS_1_25495098F569C629_SET_DAMAGEVALUE_OFFSET UNITYSDK_OFFSET(0x16661B20)
#define CLASS_1_25495098F569C629_SET_DEFENDERHP_OFFSET UNITYSDK_OFFSET(0x16661A20)
#define CLASS_1_25495098F569C629_SET_DEFENDERPOINT_OFFSET UNITYSDK_OFFSET(0x16661B00)
#define CLASS_1_25495098F569C629_SET_DEFENDER_OFFSET UNITYSDK_OFFSET(0x166619E0)
#define CLASS_1_25495098F569C629_SET_FIRSTATTACK_OFFSET UNITYSDK_OFFSET(0x16661960)
#define CLASS_1_25495098F569C629_SET_HEALTARGET_OFFSET UNITYSDK_OFFSET(0x16661B40)
#define CLASS_1_25495098F569C629_SET_HEALVALUE_OFFSET UNITYSDK_OFFSET(0x16661B60)
#define CLASS_1_25495098F569C629_SET_LOGTYPE_OFFSET UNITYSDK_OFFSET(0x16661940)
#define CLASS_1_25495098F569C629_SET_LOSER_OFFSET UNITYSDK_OFFSET(0x16661980)
#define CLASS_1_25495098F569C629_SET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0x16661A60)
#define CLASS_1_25495098F569C629_SET_MODIFIERLIFETIME_OFFSET UNITYSDK_OFFSET(0x16661AA0)
#define CLASS_1_25495098F569C629_SET_MODIFIERSTACK_OFFSET UNITYSDK_OFFSET(0x16661A80)
#define CLASS_1_25495098F569C629_SET_MODIFIERTARGET_OFFSET UNITYSDK_OFFSET(0x16661A40)
#define CLASS_1_25495098F569C629_SET_ROLLRESULT_OFFSET UNITYSDK_OFFSET(0x16661B80)
#define CLASS_1_25495098F569C629_SET_TURN_OFFSET UNITYSDK_OFFSET(0x166619A0)
#define CLASS_1_25495098F569C629__CTOR_OFFSET UNITYSDK_OFFSET(0x166628E0)

inline static constexpr unsigned int Class_1_25495098F569C629_TypeDefinitionIndex = 28389;

class Class_1_25495098F569C629 : public ::System::Object
{
public:
	::System::String* _Attacker_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* _RollResult_k__BackingField; // 0x18
	::System::String* _FirstAttack_k__BackingField; // 0x20
	::System::String* _Defender_k__BackingField; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* _ConfirmResult_k__BackingField; // 0x30
	::System::Int32 _DamageValue_k__BackingField; // 0x38
	::System::Int32 _HealValue_k__BackingField; // 0x3C
	::System::Int32 _ConfirmSum_k__BackingField; // 0x40
	::System::UInt32 _Loser_k__BackingField; // 0x44
	::System::Int32 _AttackerHP_k__BackingField; // 0x48
	::System::Int32 _ModifierLifetime_k__BackingField; // 0x4C
	::System::UInt32 _HealTarget_k__BackingField; // 0x50
	::System::UInt32 _ModifierID_k__BackingField; // 0x54
	::System::Int32 _AttackerPoint_k__BackingField; // 0x58
	::System::Int32 _ModifierStack_k__BackingField; // 0x5C
	::System::UInt32 _ModifierTarget_k__BackingField; // 0x60
	::System::UInt32 _DamageTarget_k__BackingField; // 0x64
	::System::UInt32 _Turn_k__BackingField; // 0x68
	::System::Int32 _DefenderPoint_k__BackingField; // 0x6C
	::RPG::LittleGameShare::DiceCombatCore::AutoTestLogType _LogType_k__BackingField; // 0x70
	::System::Int32 _DefenderHP_k__BackingField; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629__CTOR_OFFSET))(this);
	}

	::RPG::LittleGameShare::DiceCombatCore::AutoTestLogType get_LogType()
	{
		return ((::RPG::LittleGameShare::DiceCombatCore::AutoTestLogType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_GET_LOGTYPE_OFFSET))(this);
	}

	::System::Void set_LogType(::RPG::LittleGameShare::DiceCombatCore::AutoTestLogType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::DiceCombatCore::AutoTestLogType))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_SET_LOGTYPE_OFFSET))(this, value);
	}

	::System::String* get_FirstAttack()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_GET_FIRSTATTACK_OFFSET))(this);
	}

	::System::Void set_FirstAttack(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_SET_FIRSTATTACK_OFFSET))(this, value);
	}

	::System::UInt32 get_Loser()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_GET_LOSER_OFFSET))(this);
	}

	::System::Void set_Loser(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_SET_LOSER_OFFSET))(this, value);
	}

	::System::UInt32 get_Turn()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_GET_TURN_OFFSET))(this);
	}

	::System::Void set_Turn(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_SET_TURN_OFFSET))(this, value);
	}

	::System::String* get_Attacker()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_GET_ATTACKER_OFFSET))(this);
	}

	::System::Void set_Attacker(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_SET_ATTACKER_OFFSET))(this, value);
	}

	::System::String* get_Defender()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_GET_DEFENDER_OFFSET))(this);
	}

	::System::Void set_Defender(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_SET_DEFENDER_OFFSET))(this, value);
	}

	::System::Int32 get_AttackerHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_GET_ATTACKERHP_OFFSET))(this);
	}

	::System::Void set_AttackerHP(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_SET_ATTACKERHP_OFFSET))(this, value);
	}

	::System::Int32 get_DefenderHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_GET_DEFENDERHP_OFFSET))(this);
	}

	::System::Void set_DefenderHP(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_SET_DEFENDERHP_OFFSET))(this, value);
	}

	::System::UInt32 get_ModifierTarget()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_GET_MODIFIERTARGET_OFFSET))(this);
	}

	::System::Void set_ModifierTarget(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_SET_MODIFIERTARGET_OFFSET))(this, value);
	}

	::System::UInt32 get_ModifierID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_GET_MODIFIERID_OFFSET))(this);
	}

	::System::Void set_ModifierID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_SET_MODIFIERID_OFFSET))(this, value);
	}

	::System::Int32 get_ModifierStack()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_GET_MODIFIERSTACK_OFFSET))(this);
	}

	::System::Void set_ModifierStack(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_SET_MODIFIERSTACK_OFFSET))(this, value);
	}

	::System::Int32 get_ModifierLifetime()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_GET_MODIFIERLIFETIME_OFFSET))(this);
	}

	::System::Void set_ModifierLifetime(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_SET_MODIFIERLIFETIME_OFFSET))(this, value);
	}

	::System::UInt32 get_DamageTarget()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_GET_DAMAGETARGET_OFFSET))(this);
	}

	::System::Void set_DamageTarget(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_SET_DAMAGETARGET_OFFSET))(this, value);
	}

	::System::Int32 get_AttackerPoint()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_GET_ATTACKERPOINT_OFFSET))(this);
	}

	::System::Void set_AttackerPoint(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_SET_ATTACKERPOINT_OFFSET))(this, value);
	}

	::System::Int32 get_DefenderPoint()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_GET_DEFENDERPOINT_OFFSET))(this);
	}

	::System::Void set_DefenderPoint(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_SET_DEFENDERPOINT_OFFSET))(this, value);
	}

	::System::Int32 get_DamageValue()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_GET_DAMAGEVALUE_OFFSET))(this);
	}

	::System::Void set_DamageValue(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_SET_DAMAGEVALUE_OFFSET))(this, value);
	}

	::System::UInt32 get_HealTarget()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_GET_HEALTARGET_OFFSET))(this);
	}

	::System::Void set_HealTarget(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_SET_HEALTARGET_OFFSET))(this, value);
	}

	::System::Int32 get_HealValue()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_GET_HEALVALUE_OFFSET))(this);
	}

	::System::Void set_HealValue(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_SET_HEALVALUE_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::System::String*>* get_RollResult()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_GET_ROLLRESULT_OFFSET))(this);
	}

	::System::Void set_RollResult(::System::Collections::Generic::List_1<::System::String*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_SET_ROLLRESULT_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::System::String*>* get_ConfirmResult()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_GET_CONFIRMRESULT_OFFSET))(this);
	}

	::System::Void set_ConfirmResult(::System::Collections::Generic::List_1<::System::String*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_SET_CONFIRMRESULT_OFFSET))(this, value);
	}

	::System::Int32 get_ConfirmSum()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_GET_CONFIRMSUM_OFFSET))(this);
	}

	::System::Void set_ConfirmSum(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_SET_CONFIRMSUM_OFFSET))(this, value);
	}

	static ::System::String* Method_1_242CCED06054A364()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_METHOD_1_242CCED06054A364_OFFSET))();
	}

	::System::String* Method_1_9239663B8D029640()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_METHOD_1_9239663B8D029640_OFFSET))(this);
	}
};
