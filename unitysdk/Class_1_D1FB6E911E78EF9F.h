#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MatchThreeV2ConditionType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_898;
class Class_1_ABE8D38DFA4EFF6A;
namespace System { class String; }

#define CLASS_1_D1FB6E911E78EF9F_METHOD_1_45FB2AAEBAA84140_OFFSET UNITYSDK_OFFSET(0x16EC7EC0)
#define CLASS_1_D1FB6E911E78EF9F_METHOD_1_EE76B99503A5D8A6_OFFSET UNITYSDK_OFFSET(0x16EC7C50)
#define CLASS_1_D1FB6E911E78EF9F__CTOR_OFFSET UNITYSDK_OFFSET(0x16EC8070)

inline static constexpr unsigned int Class_1_D1FB6E911E78EF9F_TypeDefinitionIndex = 66032;

class Class_1_D1FB6E911E78EF9F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1FB6E911E78EF9F__CTOR_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_898* Method_1_EE76B99503A5D8A6(::Il2CppArray<::Class_1_ABE8D38DFA4EFF6A*>* a1)
	{
		return ((::Class_0_16E4307DCC419505_898*(*)(::Il2CppArray<::Class_1_ABE8D38DFA4EFF6A*>*))((::PBYTE)hIl2Cpp + CLASS_1_D1FB6E911E78EF9F_METHOD_1_EE76B99503A5D8A6_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_898* Method_1_45FB2AAEBAA84140(::RPG::GameCore::MatchThreeV2ConditionType a1, ::System::String* a2)
	{
		return ((::Class_0_16E4307DCC419505_898*(*)(::RPG::GameCore::MatchThreeV2ConditionType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D1FB6E911E78EF9F_METHOD_1_45FB2AAEBAA84140_OFFSET))(a1, a2);
	}
};
