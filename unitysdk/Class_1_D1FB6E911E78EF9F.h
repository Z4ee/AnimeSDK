#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MatchThreeV2ConditionType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_758;
class Class_1_ABE8D38DFA4EFF6A;
namespace System { class String; }

#define CLASS_1_D1FB6E911E78EF9F_METHOD_1_38669C24B696C2F1_OFFSET UNITYSDK_OFFSET(0x12878B50)
#define CLASS_1_D1FB6E911E78EF9F_METHOD_1_45FB2AAEBAA84140_OFFSET UNITYSDK_OFFSET(0x12878D50)
#define CLASS_1_D1FB6E911E78EF9F__CTOR_OFFSET UNITYSDK_OFFSET(0x12878F00)

inline static constexpr unsigned int Class_1_D1FB6E911E78EF9F_TypeDefinitionIndex = 60751;

class Class_1_D1FB6E911E78EF9F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1FB6E911E78EF9F__CTOR_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_758* Method_1_38669C24B696C2F1(::Il2CppArray<::Class_1_ABE8D38DFA4EFF6A*>* a1)
	{
		return ((::Class_0_16E4307DCC419505_758*(*)(::Il2CppArray<::Class_1_ABE8D38DFA4EFF6A*>*))((::PBYTE)hIl2Cpp + CLASS_1_D1FB6E911E78EF9F_METHOD_1_38669C24B696C2F1_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_758* Method_1_45FB2AAEBAA84140(::RPG::GameCore::MatchThreeV2ConditionType a1, ::System::String* a2)
	{
		return ((::Class_0_16E4307DCC419505_758*(*)(::RPG::GameCore::MatchThreeV2ConditionType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D1FB6E911E78EF9F_METHOD_1_45FB2AAEBAA84140_OFFSET))(a1, a2);
	}
};
