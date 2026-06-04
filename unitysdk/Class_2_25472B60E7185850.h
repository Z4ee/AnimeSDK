#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D8BECDCE48063EC7.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_24;
class Class_2_AEE59ED8DADEC1A1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_25472B60E7185850_GET_CONDITIONRESULT_OFFSET UNITYSDK_OFFSET(0x189C1070)
#define CLASS_2_25472B60E7185850_METHOD_2_083231D68A4BA441_OFFSET UNITYSDK_OFFSET(0x189C1400)
#define CLASS_2_25472B60E7185850_METHOD_2_3627F28F4940CC47_OFFSET UNITYSDK_OFFSET(0x189C1100)
#define CLASS_2_25472B60E7185850_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x189C1690)
#define CLASS_2_25472B60E7185850_SET_CONDITIONRESULT_OFFSET UNITYSDK_OFFSET(0x189C1080)
#define CLASS_2_25472B60E7185850__CTOR_OFFSET UNITYSDK_OFFSET(0x189C1090)

inline static constexpr unsigned int Class_2_25472B60E7185850_TypeDefinitionIndex = 34295;

class Class_2_25472B60E7185850 : public ::Class_1_D8BECDCE48063EC7
{
public:
	::System::Boolean _ConditionResult_k__BackingField; // 0x38

	::System::Void _ctor(::Class_0_16E4307DCC419505_24* a1, ::Class_2_AEE59ED8DADEC1A1* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_24*, ::Class_2_AEE59ED8DADEC1A1*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_2_25472B60E7185850__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean get_ConditionResult()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25472B60E7185850_GET_CONDITIONRESULT_OFFSET))(this);
	}

	::System::Void set_ConditionResult(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_25472B60E7185850_SET_CONDITIONRESULT_OFFSET))(this, a1);
	}

	::Class_2_AEE59ED8DADEC1A1* Method_2_3627F28F4940CC47(::RPG::GameCore::DiceCombatTarget a1)
	{
		return ((::Class_2_AEE59ED8DADEC1A1*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + CLASS_2_25472B60E7185850_METHOD_2_3627F28F4940CC47_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_AEE59ED8DADEC1A1*>* Method_2_083231D68A4BA441(::RPG::GameCore::DiceCombatTarget a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_AEE59ED8DADEC1A1*>*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + CLASS_2_25472B60E7185850_METHOD_2_083231D68A4BA441_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_25472B60E7185850_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
