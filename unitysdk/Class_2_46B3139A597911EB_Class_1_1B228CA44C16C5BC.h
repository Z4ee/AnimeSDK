#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9CBC71DC5240DC00;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_46B3139A597911EB_CLASS_1_1B228CA44C16C5BC__CTOR_OFFSET UNITYSDK_OFFSET(0x11E80960)

inline static constexpr unsigned int Class_2_46B3139A597911EB_Class_1_1B228CA44C16C5BC_TypeDefinitionIndex = 67472;

class Class_2_46B3139A597911EB_Class_1_1B228CA44C16C5BC : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_2; // 0x10
	::UnityEngine::GameObject* Field_1_0; // 0x18
	::Class_1_9CBC71DC5240DC00* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46B3139A597911EB_CLASS_1_1B228CA44C16C5BC__CTOR_OFFSET))(this);
	}
};
