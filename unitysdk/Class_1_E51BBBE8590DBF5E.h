#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E51BBBE8590DBF5E__CTOR_OFFSET UNITYSDK_OFFSET(0x17F81FB0)

inline static constexpr unsigned int Class_1_E51BBBE8590DBF5E_TypeDefinitionIndex = 53702;

class Class_1_E51BBBE8590DBF5E : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E51BBBE8590DBF5E__CTOR_OFFSET))(this);
	}
};
