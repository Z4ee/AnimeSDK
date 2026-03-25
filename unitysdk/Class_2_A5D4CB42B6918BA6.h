#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B1A7D8EBAB39D13D.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_25;
class Class_2_569DE47525C5FD32;

#define CLASS_2_A5D4CB42B6918BA6_GET_CONDITIONRESULT_OFFSET UNITYSDK_OFFSET(0x166A02E0)
#define CLASS_2_A5D4CB42B6918BA6_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x166A0500)
#define CLASS_2_A5D4CB42B6918BA6_METHOD_2_5EC8047AD3523C90_OFFSET UNITYSDK_OFFSET(0x166A0370)
#define CLASS_2_A5D4CB42B6918BA6_SET_CONDITIONRESULT_OFFSET UNITYSDK_OFFSET(0x166A02F0)
#define CLASS_2_A5D4CB42B6918BA6__CTOR_OFFSET UNITYSDK_OFFSET(0x166A0300)

inline static constexpr unsigned int Class_2_A5D4CB42B6918BA6_TypeDefinitionIndex = 28365;

class Class_2_A5D4CB42B6918BA6 : public ::Class_1_B1A7D8EBAB39D13D
{
public:
	::System::Boolean _ConditionResult_k__BackingField; // 0x30

	::System::Void _ctor(::Class_0_16E4307DCC419505_25* a1, ::Class_2_569DE47525C5FD32* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_25*, ::Class_2_569DE47525C5FD32*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_2_A5D4CB42B6918BA6__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean get_ConditionResult()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5D4CB42B6918BA6_GET_CONDITIONRESULT_OFFSET))(this);
	}

	::System::Void set_ConditionResult(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A5D4CB42B6918BA6_SET_CONDITIONRESULT_OFFSET))(this, value);
	}

	::Class_2_569DE47525C5FD32* Method_2_5EC8047AD3523C90(::RPG::GameCore::DiceCombatTarget a1)
	{
		return ((::Class_2_569DE47525C5FD32*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + CLASS_2_A5D4CB42B6918BA6_METHOD_2_5EC8047AD3523C90_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A5D4CB42B6918BA6_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
