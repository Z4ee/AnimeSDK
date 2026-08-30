#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E00ED5CEE1C3E244.h"

class Class_1_843DD6330B22E422;
class Class_4_C2AAEF1698C1444C;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_04A7CAAFD50F142D_METHOD_3_330EACA37EC6A275_OFFSET UNITYSDK_OFFSET(0xC7E7630)
#define CLASS_3_04A7CAAFD50F142D__CTOR_OFFSET UNITYSDK_OFFSET(0xC7E7620)

inline static constexpr unsigned int Class_3_04A7CAAFD50F142D_TypeDefinitionIndex = 56163;

class Class_3_04A7CAAFD50F142D : public ::Class_2_E00ED5CEE1C3E244
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_C2AAEF1698C1444C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_C2AAEF1698C1444C*))((::PBYTE)hIl2Cpp + CLASS_3_04A7CAAFD50F142D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_330EACA37EC6A275(::Class_1_843DD6330B22E422*& a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_843DD6330B22E422*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_04A7CAAFD50F142D_METHOD_3_330EACA37EC6A275_OFFSET))(this, a1, a2);
	}
};
