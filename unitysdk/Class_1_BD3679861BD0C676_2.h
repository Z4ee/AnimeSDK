#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/AutoTestLogType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BD3679861BD0C676_2_GET_ATTACKERHP_OFFSET UNITYSDK_OFFSET(0x17B08390)
#define CLASS_1_BD3679861BD0C676_2_GET_ATTACKERPOINT_OFFSET UNITYSDK_OFFSET(0x17B08470)
#define CLASS_1_BD3679861BD0C676_2_GET_ATTACKER_OFFSET UNITYSDK_OFFSET(0x17B08350)
#define CLASS_1_BD3679861BD0C676_2_GET_CONFIRMRESULT_OFFSET UNITYSDK_OFFSET(0x17B08530)
#define CLASS_1_BD3679861BD0C676_2_GET_CONFIRMSUM_OFFSET UNITYSDK_OFFSET(0x17B08550)
#define CLASS_1_BD3679861BD0C676_2_GET_DAMAGETARGET_OFFSET UNITYSDK_OFFSET(0x17B08450)
#define CLASS_1_BD3679861BD0C676_2_GET_DAMAGEVALUE_OFFSET UNITYSDK_OFFSET(0x17B084B0)
#define CLASS_1_BD3679861BD0C676_2_GET_DEFENDERHP_OFFSET UNITYSDK_OFFSET(0x17B083B0)
#define CLASS_1_BD3679861BD0C676_2_GET_DEFENDERPOINT_OFFSET UNITYSDK_OFFSET(0x17B08490)
#define CLASS_1_BD3679861BD0C676_2_GET_DEFENDER_OFFSET UNITYSDK_OFFSET(0x17B08370)
#define CLASS_1_BD3679861BD0C676_2_GET_FIRSTATTACK_OFFSET UNITYSDK_OFFSET(0x17B082F0)
#define CLASS_1_BD3679861BD0C676_2_GET_HEALTARGET_OFFSET UNITYSDK_OFFSET(0x17B084D0)
#define CLASS_1_BD3679861BD0C676_2_GET_HEALVALUE_OFFSET UNITYSDK_OFFSET(0x17B084F0)
#define CLASS_1_BD3679861BD0C676_2_GET_LOGTYPE_OFFSET UNITYSDK_OFFSET(0x17B082D0)
#define CLASS_1_BD3679861BD0C676_2_GET_LOSER_OFFSET UNITYSDK_OFFSET(0x17B08310)
#define CLASS_1_BD3679861BD0C676_2_GET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0x17B083F0)
#define CLASS_1_BD3679861BD0C676_2_GET_MODIFIERLIFETIME_OFFSET UNITYSDK_OFFSET(0x17B08430)
#define CLASS_1_BD3679861BD0C676_2_GET_MODIFIERSTACK_OFFSET UNITYSDK_OFFSET(0x17B08410)
#define CLASS_1_BD3679861BD0C676_2_GET_MODIFIERTARGET_OFFSET UNITYSDK_OFFSET(0x17B083D0)
#define CLASS_1_BD3679861BD0C676_2_GET_ROLLRESULT_OFFSET UNITYSDK_OFFSET(0x17B08510)
#define CLASS_1_BD3679861BD0C676_2_GET_TURN_OFFSET UNITYSDK_OFFSET(0x17B08330)
#define CLASS_1_BD3679861BD0C676_2_METHOD_1_242CCED06054A364_OFFSET UNITYSDK_OFFSET(0x17B08570)
#define CLASS_1_BD3679861BD0C676_2_METHOD_1_D0A5FD09C601F084_OFFSET UNITYSDK_OFFSET(0x17B086A0)
#define CLASS_1_BD3679861BD0C676_2_SET_ATTACKERHP_OFFSET UNITYSDK_OFFSET(0x17B083A0)
#define CLASS_1_BD3679861BD0C676_2_SET_ATTACKERPOINT_OFFSET UNITYSDK_OFFSET(0x17B08480)
#define CLASS_1_BD3679861BD0C676_2_SET_ATTACKER_OFFSET UNITYSDK_OFFSET(0x17B08360)
#define CLASS_1_BD3679861BD0C676_2_SET_CONFIRMRESULT_OFFSET UNITYSDK_OFFSET(0x17B08540)
#define CLASS_1_BD3679861BD0C676_2_SET_CONFIRMSUM_OFFSET UNITYSDK_OFFSET(0x17B08560)
#define CLASS_1_BD3679861BD0C676_2_SET_DAMAGETARGET_OFFSET UNITYSDK_OFFSET(0x17B08460)
#define CLASS_1_BD3679861BD0C676_2_SET_DAMAGEVALUE_OFFSET UNITYSDK_OFFSET(0x17B084C0)
#define CLASS_1_BD3679861BD0C676_2_SET_DEFENDERHP_OFFSET UNITYSDK_OFFSET(0x17B083C0)
#define CLASS_1_BD3679861BD0C676_2_SET_DEFENDERPOINT_OFFSET UNITYSDK_OFFSET(0x17B084A0)
#define CLASS_1_BD3679861BD0C676_2_SET_DEFENDER_OFFSET UNITYSDK_OFFSET(0x17B08380)
#define CLASS_1_BD3679861BD0C676_2_SET_FIRSTATTACK_OFFSET UNITYSDK_OFFSET(0x17B08300)
#define CLASS_1_BD3679861BD0C676_2_SET_HEALTARGET_OFFSET UNITYSDK_OFFSET(0x17B084E0)
#define CLASS_1_BD3679861BD0C676_2_SET_HEALVALUE_OFFSET UNITYSDK_OFFSET(0x17B08500)
#define CLASS_1_BD3679861BD0C676_2_SET_LOGTYPE_OFFSET UNITYSDK_OFFSET(0x17B082E0)
#define CLASS_1_BD3679861BD0C676_2_SET_LOSER_OFFSET UNITYSDK_OFFSET(0x17B08320)
#define CLASS_1_BD3679861BD0C676_2_SET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0x17B08400)
#define CLASS_1_BD3679861BD0C676_2_SET_MODIFIERLIFETIME_OFFSET UNITYSDK_OFFSET(0x17B08440)
#define CLASS_1_BD3679861BD0C676_2_SET_MODIFIERSTACK_OFFSET UNITYSDK_OFFSET(0x17B08420)
#define CLASS_1_BD3679861BD0C676_2_SET_MODIFIERTARGET_OFFSET UNITYSDK_OFFSET(0x17B083E0)
#define CLASS_1_BD3679861BD0C676_2_SET_ROLLRESULT_OFFSET UNITYSDK_OFFSET(0x17B08520)
#define CLASS_1_BD3679861BD0C676_2_SET_TURN_OFFSET UNITYSDK_OFFSET(0x17B08340)
#define CLASS_1_BD3679861BD0C676_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17B09100)

inline static constexpr unsigned int Class_1_BD3679861BD0C676_2_TypeDefinitionIndex = 34717;

class Class_1_BD3679861BD0C676_2 : public ::System::Object
{
public:
	::System::String* _Attacker_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* _ConfirmResult_k__BackingField; // 0x18
	::System::String* _FirstAttack_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* _RollResult_k__BackingField; // 0x28
	::System::String* _Defender_k__BackingField; // 0x30
	::System::UInt32 _ModifierTarget_k__BackingField; // 0x38
	::System::UInt32 _ModifierID_k__BackingField; // 0x3C
	::RPG::LittleGameShare::DiceCombatCore::AutoTestLogType _LogType_k__BackingField; // 0x40
	::System::UInt32 _Turn_k__BackingField; // 0x44
	::System::Int32 _ModifierStack_k__BackingField; // 0x48
	::System::UInt32 _Loser_k__BackingField; // 0x4C
	::System::UInt32 _DamageTarget_k__BackingField; // 0x50
	::System::Int32 _HealValue_k__BackingField; // 0x54
	::System::Int32 _DamageValue_k__BackingField; // 0x58
	::System::Int32 _DefenderPoint_k__BackingField; // 0x5C
	::System::Int32 _AttackerHP_k__BackingField; // 0x60
	::System::Int32 _ModifierLifetime_k__BackingField; // 0x64
	::System::UInt32 _HealTarget_k__BackingField; // 0x68
	::System::Int32 _AttackerPoint_k__BackingField; // 0x6C
	::System::Int32 _ConfirmSum_k__BackingField; // 0x70
	::System::Int32 _DefenderHP_k__BackingField; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2__CTOR_OFFSET))(this);
	}

	::RPG::LittleGameShare::DiceCombatCore::AutoTestLogType get_LogType()
	{
		return ((::RPG::LittleGameShare::DiceCombatCore::AutoTestLogType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_GET_LOGTYPE_OFFSET))(this);
	}

	::System::Void set_LogType(::RPG::LittleGameShare::DiceCombatCore::AutoTestLogType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::DiceCombatCore::AutoTestLogType))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_SET_LOGTYPE_OFFSET))(this, a1);
	}

	::System::String* get_FirstAttack()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_GET_FIRSTATTACK_OFFSET))(this);
	}

	::System::Void set_FirstAttack(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_SET_FIRSTATTACK_OFFSET))(this, a1);
	}

	::System::UInt32 get_Loser()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_GET_LOSER_OFFSET))(this);
	}

	::System::Void set_Loser(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_SET_LOSER_OFFSET))(this, a1);
	}

	::System::UInt32 get_Turn()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_GET_TURN_OFFSET))(this);
	}

	::System::Void set_Turn(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_SET_TURN_OFFSET))(this, a1);
	}

	::System::String* get_Attacker()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_GET_ATTACKER_OFFSET))(this);
	}

	::System::Void set_Attacker(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_SET_ATTACKER_OFFSET))(this, a1);
	}

	::System::String* get_Defender()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_GET_DEFENDER_OFFSET))(this);
	}

	::System::Void set_Defender(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_SET_DEFENDER_OFFSET))(this, a1);
	}

	::System::Int32 get_AttackerHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_GET_ATTACKERHP_OFFSET))(this);
	}

	::System::Void set_AttackerHP(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_SET_ATTACKERHP_OFFSET))(this, a1);
	}

	::System::Int32 get_DefenderHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_GET_DEFENDERHP_OFFSET))(this);
	}

	::System::Void set_DefenderHP(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_SET_DEFENDERHP_OFFSET))(this, a1);
	}

	::System::UInt32 get_ModifierTarget()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_GET_MODIFIERTARGET_OFFSET))(this);
	}

	::System::Void set_ModifierTarget(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_SET_MODIFIERTARGET_OFFSET))(this, a1);
	}

	::System::UInt32 get_ModifierID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_GET_MODIFIERID_OFFSET))(this);
	}

	::System::Void set_ModifierID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_SET_MODIFIERID_OFFSET))(this, a1);
	}

	::System::Int32 get_ModifierStack()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_GET_MODIFIERSTACK_OFFSET))(this);
	}

	::System::Void set_ModifierStack(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_SET_MODIFIERSTACK_OFFSET))(this, a1);
	}

	::System::Int32 get_ModifierLifetime()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_GET_MODIFIERLIFETIME_OFFSET))(this);
	}

	::System::Void set_ModifierLifetime(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_SET_MODIFIERLIFETIME_OFFSET))(this, a1);
	}

	::System::UInt32 get_DamageTarget()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_GET_DAMAGETARGET_OFFSET))(this);
	}

	::System::Void set_DamageTarget(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_SET_DAMAGETARGET_OFFSET))(this, a1);
	}

	::System::Int32 get_AttackerPoint()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_GET_ATTACKERPOINT_OFFSET))(this);
	}

	::System::Void set_AttackerPoint(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_SET_ATTACKERPOINT_OFFSET))(this, a1);
	}

	::System::Int32 get_DefenderPoint()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_GET_DEFENDERPOINT_OFFSET))(this);
	}

	::System::Void set_DefenderPoint(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_SET_DEFENDERPOINT_OFFSET))(this, a1);
	}

	::System::Int32 get_DamageValue()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_GET_DAMAGEVALUE_OFFSET))(this);
	}

	::System::Void set_DamageValue(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_SET_DAMAGEVALUE_OFFSET))(this, a1);
	}

	::System::UInt32 get_HealTarget()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_GET_HEALTARGET_OFFSET))(this);
	}

	::System::Void set_HealTarget(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_SET_HEALTARGET_OFFSET))(this, a1);
	}

	::System::Int32 get_HealValue()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_GET_HEALVALUE_OFFSET))(this);
	}

	::System::Void set_HealValue(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_SET_HEALVALUE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* get_RollResult()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_GET_ROLLRESULT_OFFSET))(this);
	}

	::System::Void set_RollResult(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_SET_ROLLRESULT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* get_ConfirmResult()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_GET_CONFIRMRESULT_OFFSET))(this);
	}

	::System::Void set_ConfirmResult(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_SET_CONFIRMRESULT_OFFSET))(this, a1);
	}

	::System::Int32 get_ConfirmSum()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_GET_CONFIRMSUM_OFFSET))(this);
	}

	::System::Void set_ConfirmSum(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_SET_CONFIRMSUM_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_242CCED06054A364()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_METHOD_1_242CCED06054A364_OFFSET))();
	}

	::System::String* Method_1_D0A5FD09C601F084()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD3679861BD0C676_2_METHOD_1_D0A5FD09C601F084_OFFSET))(this);
	}
};
