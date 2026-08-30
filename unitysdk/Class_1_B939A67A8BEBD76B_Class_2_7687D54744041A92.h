#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseConditionExprTokenParser_1.h"
#include "unitysdk/RPG/GameCore/ConditionType.h"

class Class_1_47EB23CB5C4B2615_41_Class_1_9A90CD018E72DF20_10;
namespace System { class String; }

#define CLASS_1_B939A67A8BEBD76B_CLASS_2_7687D54744041A92__CREATECONDITION_OFFSET UNITYSDK_OFFSET(0xBB13110)
#define CLASS_1_B939A67A8BEBD76B_CLASS_2_7687D54744041A92__CTOR_OFFSET UNITYSDK_OFFSET(0xBB130E0)

inline static constexpr unsigned int Class_1_B939A67A8BEBD76B_Class_2_7687D54744041A92_TypeDefinitionIndex = 60045;

class Class_1_B939A67A8BEBD76B_Class_2_7687D54744041A92 : public ::RPG::Client::BaseConditionExprTokenParser_1<::RPG::GameCore::ConditionType>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B939A67A8BEBD76B_CLASS_2_7687D54744041A92__CTOR_OFFSET))(this);
	}

	::Class_1_47EB23CB5C4B2615_41_Class_1_9A90CD018E72DF20_10* _CreateCondition(::RPG::GameCore::ConditionType a1, ::System::String* a2)
	{
		return ((::Class_1_47EB23CB5C4B2615_41_Class_1_9A90CD018E72DF20_10*(*)(::PVOID, ::RPG::GameCore::ConditionType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B939A67A8BEBD76B_CLASS_2_7687D54744041A92__CREATECONDITION_OFFSET))(this, a1, a2);
	}
};
