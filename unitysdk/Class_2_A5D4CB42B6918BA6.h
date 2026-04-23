#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EA5232D6CAD71030.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_25;
class Class_2_1BB8CA1042AACD99;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A5D4CB42B6918BA6_GET_CONDITIONRESULT_OFFSET UNITYSDK_OFFSET(0x17DB2470)
#define CLASS_2_A5D4CB42B6918BA6_METHOD_2_2520D4BCE1479282_OFFSET UNITYSDK_OFFSET(0x17DB27F0)
#define CLASS_2_A5D4CB42B6918BA6_METHOD_2_3627F28F4940CC47_OFFSET UNITYSDK_OFFSET(0x17DB2500)
#define CLASS_2_A5D4CB42B6918BA6_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x17DB2A20)
#define CLASS_2_A5D4CB42B6918BA6_SET_CONDITIONRESULT_OFFSET UNITYSDK_OFFSET(0x17DB2480)
#define CLASS_2_A5D4CB42B6918BA6__CTOR_OFFSET UNITYSDK_OFFSET(0x17DB2490)

inline static constexpr unsigned int Class_2_A5D4CB42B6918BA6_TypeDefinitionIndex = 34013;

class Class_2_A5D4CB42B6918BA6 : public ::Class_1_EA5232D6CAD71030
{
public:
	::System::Boolean _ConditionResult_k__BackingField; // 0x38

	::System::Void _ctor(::Class_0_16E4307DCC419505_25* a1, ::Class_2_1BB8CA1042AACD99* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_25*, ::Class_2_1BB8CA1042AACD99*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_2_A5D4CB42B6918BA6__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean get_ConditionResult()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5D4CB42B6918BA6_GET_CONDITIONRESULT_OFFSET))(this);
	}

	::System::Void set_ConditionResult(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A5D4CB42B6918BA6_SET_CONDITIONRESULT_OFFSET))(this, value);
	}

	::Class_2_1BB8CA1042AACD99* Method_2_3627F28F4940CC47(::RPG::GameCore::DiceCombatTarget a1)
	{
		return ((::Class_2_1BB8CA1042AACD99*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + CLASS_2_A5D4CB42B6918BA6_METHOD_2_3627F28F4940CC47_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_1BB8CA1042AACD99*>* Method_2_2520D4BCE1479282(::RPG::GameCore::DiceCombatTarget a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1BB8CA1042AACD99*>*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + CLASS_2_A5D4CB42B6918BA6_METHOD_2_2520D4BCE1479282_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A5D4CB42B6918BA6_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
