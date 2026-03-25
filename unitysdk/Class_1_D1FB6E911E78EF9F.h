#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MatchThreeV2ConditionType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_658;
class Class_1_ABE8D38DFA4EFF6A;
namespace System { class String; }

#define CLASS_1_D1FB6E911E78EF9F_METHOD_1_42C79F6656938DA0_OFFSET UNITYSDK_OFFSET(0x11508B30)
#define CLASS_1_D1FB6E911E78EF9F_METHOD_1_45FB2AAEBAA84140_OFFSET UNITYSDK_OFFSET(0x11508D30)
#define CLASS_1_D1FB6E911E78EF9F__CTOR_OFFSET UNITYSDK_OFFSET(0x11508EE0)

inline static constexpr unsigned int Class_1_D1FB6E911E78EF9F_TypeDefinitionIndex = 53607;

class Class_1_D1FB6E911E78EF9F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1FB6E911E78EF9F__CTOR_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_658* Method_1_42C79F6656938DA0(::Il2CppArray<::Class_1_ABE8D38DFA4EFF6A*>* a1)
	{
		return ((::Class_0_16E4307DCC419505_658*(*)(::Il2CppArray<::Class_1_ABE8D38DFA4EFF6A*>*))((::PBYTE)hIl2Cpp + CLASS_1_D1FB6E911E78EF9F_METHOD_1_42C79F6656938DA0_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_658* Method_1_45FB2AAEBAA84140(::RPG::GameCore::MatchThreeV2ConditionType a1, ::System::String* a2)
	{
		return ((::Class_0_16E4307DCC419505_658*(*)(::RPG::GameCore::MatchThreeV2ConditionType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D1FB6E911E78EF9F_METHOD_1_45FB2AAEBAA84140_OFFSET))(a1, a2);
	}
};
