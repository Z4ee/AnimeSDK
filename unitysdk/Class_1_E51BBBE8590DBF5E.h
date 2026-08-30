#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E51BBBE8590DBF5E__CTOR_OFFSET UNITYSDK_OFFSET(0x198D8610)

inline static constexpr unsigned int Class_1_E51BBBE8590DBF5E_TypeDefinitionIndex = 56421;

class Class_1_E51BBBE8590DBF5E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* BJAKFBKHNKF; // 0x10
	::RPG::GameCore::GameEntity* GNOCBLOMLAC; // 0x18
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E51BBBE8590DBF5E__CTOR_OFFSET))(this);
	}
};
