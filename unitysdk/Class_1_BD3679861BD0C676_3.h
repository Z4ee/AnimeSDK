#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/AutoTestLogType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BD3679861BD0C676_3_GET_ATTACKERHP_OFFSET UNITYSDK_OFFSET(0x18AC5AE0)
#define CLASS_1_BD3679861BD0C676_3_GET_ATTACKERPOINT_OFFSET UNITYSDK_OFFSET(0x18AC5BC0)
#define CLASS_1_BD3679861BD0C676_3_GET_ATTACKER_OFFSET UNITYSDK_OFFSET(0x18AC5AA0)
#define CLASS_1_BD3679861BD0C676_3_GET_CONFIRMRESULT_OFFSET UNITYSDK_OFFSET(0x18AC5C80)
#define CLASS_1_BD3679861BD0C676_3_GET_CONFIRMSUM_OFFSET UNITYSDK_OFFSET(0x18AC5CA0)
#define CLASS_1_BD3679861BD0C676_3_GET_DAMAGETARGET_OFFSET UNITYSDK_OFFSET(0x18AC5BA0)
#define CLASS_1_BD3679861BD0C676_3_GET_DAMAGEVALUE_OFFSET UNITYSDK_OFFSET(0x18AC5C00)
#define CLASS_1_BD3679861BD0C676_3_GET_DEFENDERHP_OFFSET UNITYSDK_OFFSET(0x18AC5B00)
#define CLASS_1_BD3679861BD0C676_3_GET_DEFENDERPOINT_OFFSET UNITYSDK_OFFSET(0x18AC5BE0)
#define CLASS_1_BD3679861BD0C676_3_GET_DEFENDER_OFFSET UNITYSDK_OFFSET(0x18AC5AC0)
#define CLASS_1_BD3679861BD0C676_3_GET_FIRSTATTACK_OFFSET UNITYSDK_OFFSET(0x18AC5A40)
#define CLASS_1_BD3679861BD0C676_3_GET_HEALTARGET_OFFSET UNITYSDK_OFFSET(0x18AC5C20)
#define CLASS_1_BD3679861BD0C676_3_GET_HEALVALUE_OFFSET UNITYSDK_OFFSET(0x18AC5C40)
#define CLASS_1_BD3679861BD0C676_3_GET_LOGTYPE_OFFSET UNITYSDK_OFFSET(0x18AC5A20)
#define CLASS_1_BD3679861BD0C676_3_GET_LOSER_OFFSET UNITYSDK_OFFSET(0x18AC5A60)
#define CLASS_1_BD3679861BD0C676_3_GET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0x18AC5B40)
#define CLASS_1_BD3679861BD0C676_3_GET_MODIFIERLIFETIME_OFFSET UNITYSDK_OFFSET(0x18AC5B80)
#define CLASS_1_BD3679861BD0C676_3_GET_MODIFIERSTACK_OFFSET UNITYSDK_OFFSET(0x18AC5B60)
#define CLASS_1_BD3679861BD0C676_3_GET_MODIFIERTARGET_OFFSET UNITYSDK_OFFSET(0x18AC5B20)
#define CLASS_1_BD3679861BD0C676_3_GET_ROLLRESULT_OFFSET UNITYSDK_OFFSET(0x18AC5C60)
#define CLASS_1_BD3679861BD0C676_3_GET_TURN_OFFSET UNITYSDK_OFFSET(0x18AC5A80)
#define CLASS_1_BD3679861BD0C676_3_METHOD_1_242CCED06054A364_OFFSET UNITYSDK_OFFSET(0x18AC5CC0)
#define CLASS_1_BD3679861BD0C676_3_METHOD_1_D2CCE457E5DF65B5_OFFSET UNITYSDK_OFFSET(0x18AC5DF0)
#define CLASS_1_BD3679861BD0C676_3_SET_ATTACKERHP_OFFSET UNITYSDK_OFFSET(0x18AC5AF0)
#define CLASS_1_BD3679861BD0C676_3_SET_ATTACKERPOINT_OFFSET UNITYSDK_OFFSET(0x18AC5BD0)
#define CLASS_1_BD3679861BD0C676_3_SET_ATTACKER_OFFSET UNITYSDK_OFFSET(0x18AC5AB0)
#define CLASS_1_BD3679861BD0C676_3_SET_CONFIRMRESULT_OFFSET UNITYSDK_OFFSET(0x18AC5C90)
#define CLASS_1_BD3679861BD0C676_3_SET_CONFIRMSUM_OFFSET UNITYSDK_OFFSET(0x18AC5CB0)
#define CLASS_1_BD3679861BD0C676_3_SET_DAMAGETARGET_OFFSET UNITYSDK_OFFSET(0x18AC5BB0)
#define CLASS_1_BD3679861BD0C676_3_SET_DAMAGEVALUE_OFFSET UNITYSDK_OFFSET(0x18AC5C10)
#define CLASS_1_BD3679861BD0C676_3_SET_DEFENDERHP_OFFSET UNITYSDK_OFFSET(0x18AC5B10)
#define CLASS_1_BD3679861BD0C676_3_SET_DEFENDERPOINT_OFFSET UNITYSDK_OFFSET(0x18AC5BF0)
#define CLASS_1_BD3679861BD0C676_3_SET_DEFENDER_OFFSET UNITYSDK_OFFSET(0x18AC5AD0)
#define CLASS_1_BD3679861BD0C676_3_SET_FIRSTATTACK_OFFSET UNITYSDK_OFFSET(0x18AC5A50)
#define CLASS_1_BD3679861BD0C676_3_SET_HEALTARGET_OFFSET UNITYSDK_OFFSET(0x18AC5C30)
#define CLASS_1_BD3679861BD0C676_3_SET_HEALVALUE_OFFSET UNITYSDK_OFFSET(0x18AC5C50)
#define CLASS_1_BD3679861BD0C676_3_SET_LOGTYPE_OFFSET UNITYSDK_OFFSET(0x18AC5A30)
#define CLASS_1_BD3679861BD0C676_3_SET_LOSER_OFFSET UNITYSDK_OFFSET(0x18AC5A70)
#define CLASS_1_BD3679861BD0C676_3_SET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0x18AC5B50)
#define CLASS_1_BD3679861BD0C676_3_SET_MODIFIERLIFETIME_OFFSET UNITYSDK_OFFSET(0x18AC5B90)
#define CLASS_1_BD3679861BD0C676_3_SET_MODIFIERSTACK_OFFSET UNITYSDK_OFFSET(0x18AC5B70)
#define CLASS_1_BD3679861BD0C676_3_SET_MODIFIERTARGET_OFFSET UNITYSDK_OFFSET(0x18AC5B30)
#define CLASS_1_BD3679861BD0C676_3_SET_ROLLRESULT_OFFSET UNITYSDK_OFFSET(0x18AC5C70)
#define CLASS_1_BD3679861BD0C676_3_SET_TURN_OFFSET UNITYSDK_OFFSET(0x18AC5A90)
#define CLASS_1_BD3679861BD0C676_3__CTOR_OFFSET UNITYSDK_OFFSET(0x18AC67E0)

inline static constexpr unsigned int Class_1_BD3679861BD0C676_3_TypeDefinitionIndex = 34335;

class Class_1_BD3679861BD0C676_3 : public ::System::Object
{
public:
	::System::String* _Defender_k__BackingField; // 0x10
	::System::String* _FirstAttack_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* _RollResult_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* _ConfirmResult_k__BackingField; // 0x28
	::System::String* _Attacker_k__BackingField; // 0x30
	::RPG::LittleGameShare::DiceCombatCore::AutoTestLogType _LogType_k__BackingField; // 0x38
	::System::UInt32 _Turn_k__BackingField; // 0x3C
	::System::UInt32 _Loser_k__BackingField; // 0x40
	::System::UInt32 _DamageTarget_k__BackingField; // 0x44
	::System::Int32 _ModifierLifetime_k__BackingField; // 0x48
	::System::Int32 _DefenderPoint_k__BackingField; // 0x4C
	::System::Int32 _DamageValue_k__BackingField; // 0x50
	::System::Int32 _AttackerPoint_k__BackingField; // 0x54
	::System::UInt32 _ModifierID_k__BackingField; // 0x58
	::System::UInt32 _HealTarget_k__BackingField; // 0x5C
	::System::UInt32 _ModifierTarget_k__BackingField; // 0x60
	::System::Int32 _AttackerHP_k__BackingField; // 0x64
	::System::Int32 _DefenderHP_k__BackingField; // 0x68
	::System::Int32 _ConfirmSum_k__BackingField; // 0x6C
	::System::Int32 _HealValue_k__BackingField; // 0x70
	::System::Int32 _ModifierStack_k__BackingField; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3__CTOR_OFFSET))(this);
	}

	::RPG::LittleGameShare::DiceCombatCore::AutoTestLogType get_LogType()
	{
		return ((::RPG::LittleGameShare::DiceCombatCore::AutoTestLogType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_GET_LOGTYPE_OFFSET))(this);
	}

	::System::Void set_LogType(::RPG::LittleGameShare::DiceCombatCore::AutoTestLogType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::DiceCombatCore::AutoTestLogType))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_SET_LOGTYPE_OFFSET))(this, a1);
	}

	::System::String* get_FirstAttack()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_GET_FIRSTATTACK_OFFSET))(this);
	}

	::System::Void set_FirstAttack(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_SET_FIRSTATTACK_OFFSET))(this, a1);
	}

	::System::UInt32 get_Loser()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_GET_LOSER_OFFSET))(this);
	}

	::System::Void set_Loser(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_SET_LOSER_OFFSET))(this, a1);
	}

	::System::UInt32 get_Turn()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_GET_TURN_OFFSET))(this);
	}

	::System::Void set_Turn(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_SET_TURN_OFFSET))(this, a1);
	}

	::System::String* get_Attacker()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_GET_ATTACKER_OFFSET))(this);
	}

	::System::Void set_Attacker(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_SET_ATTACKER_OFFSET))(this, a1);
	}

	::System::String* get_Defender()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_GET_DEFENDER_OFFSET))(this);
	}

	::System::Void set_Defender(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_SET_DEFENDER_OFFSET))(this, a1);
	}

	::System::Int32 get_AttackerHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_GET_ATTACKERHP_OFFSET))(this);
	}

	::System::Void set_AttackerHP(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_SET_ATTACKERHP_OFFSET))(this, a1);
	}

	::System::Int32 get_DefenderHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_GET_DEFENDERHP_OFFSET))(this);
	}

	::System::Void set_DefenderHP(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_SET_DEFENDERHP_OFFSET))(this, a1);
	}

	::System::UInt32 get_ModifierTarget()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_GET_MODIFIERTARGET_OFFSET))(this);
	}

	::System::Void set_ModifierTarget(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_SET_MODIFIERTARGET_OFFSET))(this, a1);
	}

	::System::UInt32 get_ModifierID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_GET_MODIFIERID_OFFSET))(this);
	}

	::System::Void set_ModifierID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_SET_MODIFIERID_OFFSET))(this, a1);
	}

	::System::Int32 get_ModifierStack()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_GET_MODIFIERSTACK_OFFSET))(this);
	}

	::System::Void set_ModifierStack(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_SET_MODIFIERSTACK_OFFSET))(this, a1);
	}

	::System::Int32 get_ModifierLifetime()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_GET_MODIFIERLIFETIME_OFFSET))(this);
	}

	::System::Void set_ModifierLifetime(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_SET_MODIFIERLIFETIME_OFFSET))(this, a1);
	}

	::System::UInt32 get_DamageTarget()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_GET_DAMAGETARGET_OFFSET))(this);
	}

	::System::Void set_DamageTarget(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_SET_DAMAGETARGET_OFFSET))(this, a1);
	}

	::System::Int32 get_AttackerPoint()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_GET_ATTACKERPOINT_OFFSET))(this);
	}

	::System::Void set_AttackerPoint(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_SET_ATTACKERPOINT_OFFSET))(this, a1);
	}

	::System::Int32 get_DefenderPoint()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_GET_DEFENDERPOINT_OFFSET))(this);
	}

	::System::Void set_DefenderPoint(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_SET_DEFENDERPOINT_OFFSET))(this, a1);
	}

	::System::Int32 get_DamageValue()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_GET_DAMAGEVALUE_OFFSET))(this);
	}

	::System::Void set_DamageValue(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_SET_DAMAGEVALUE_OFFSET))(this, a1);
	}

	::System::UInt32 get_HealTarget()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_GET_HEALTARGET_OFFSET))(this);
	}

	::System::Void set_HealTarget(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_SET_HEALTARGET_OFFSET))(this, a1);
	}

	::System::Int32 get_HealValue()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_GET_HEALVALUE_OFFSET))(this);
	}

	::System::Void set_HealValue(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_SET_HEALVALUE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* get_RollResult()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_GET_ROLLRESULT_OFFSET))(this);
	}

	::System::Void set_RollResult(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_SET_ROLLRESULT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* get_ConfirmResult()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_GET_CONFIRMRESULT_OFFSET))(this);
	}

	::System::Void set_ConfirmResult(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_SET_CONFIRMRESULT_OFFSET))(this, a1);
	}

	::System::Int32 get_ConfirmSum()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_GET_CONFIRMSUM_OFFSET))(this);
	}

	::System::Void set_ConfirmSum(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_SET_CONFIRMSUM_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_242CCED06054A364()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_METHOD_1_242CCED06054A364_OFFSET))();
	}

	::System::String* Method_1_D2CCE457E5DF65B5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_3_METHOD_1_D2CCE457E5DF65B5_OFFSET))(this);
	}
};
