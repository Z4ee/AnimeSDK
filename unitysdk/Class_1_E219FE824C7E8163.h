#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A3725E92DC8B7EAB;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_E219FE824C7E8163_METHOD_1_F98908824686970E_OFFSET UNITYSDK_OFFSET(0x104D6A00)

inline static constexpr unsigned int Class_1_E219FE824C7E8163_TypeDefinitionIndex = 43521;

class Class_1_E219FE824C7E8163 : public ::System::Object
{
public:
	static ::Class_2_A3725E92DC8B7EAB* Method_1_F98908824686970E(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_2_A3725E92DC8B7EAB*(*)(::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_E219FE824C7E8163_METHOD_1_F98908824686970E_OFFSET))(a1);
	}
};
