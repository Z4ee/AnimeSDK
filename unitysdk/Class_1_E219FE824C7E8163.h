#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_BEF96FA2AEAB87CC;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_E219FE824C7E8163_METHOD_1_F98908824686970E_OFFSET UNITYSDK_OFFSET(0xC6FBE10)

inline static constexpr unsigned int Class_1_E219FE824C7E8163_TypeDefinitionIndex = 50218;

class Class_1_E219FE824C7E8163 : public ::System::Object
{
public:
	static ::Class_2_BEF96FA2AEAB87CC* Method_1_F98908824686970E(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_2_BEF96FA2AEAB87CC*(*)(::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_E219FE824C7E8163_METHOD_1_F98908824686970E_OFFSET))(a1);
	}
};
