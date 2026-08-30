#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1342B57709FD7AC5;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_3C22A2774CF12AF2_CLASS_1_1B228CA44C16C5BC__CTOR_OFFSET UNITYSDK_OFFSET(0xED68E60)

inline static constexpr unsigned int Class_2_3C22A2774CF12AF2_Class_1_1B228CA44C16C5BC_TypeDefinitionIndex = 73176;

class Class_2_3C22A2774CF12AF2_Class_1_1B228CA44C16C5BC : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* KDIBGMJGPHG; // 0x10
	::UnityEngine::GameObject* NCHHLMEEMLC; // 0x18
	::Class_1_1342B57709FD7AC5* EGOMDGLJIGG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C22A2774CF12AF2_CLASS_1_1B228CA44C16C5BC__CTOR_OFFSET))(this);
	}
};
