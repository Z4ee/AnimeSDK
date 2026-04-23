#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1DB6C02CA182EEBA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A8DC763178035551__CTOR_OFFSET UNITYSDK_OFFSET(0x905BC90)

inline static constexpr unsigned int Class_1_A8DC763178035551_TypeDefinitionIndex = 51491;

class Class_1_A8DC763178035551 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_1_1; // 0x10
	::Class_2_1DB6C02CA182EEBA* Field_1_2; // 0x18
	::RPG::GameCore::GameEntity* Field_1_3; // 0x20
	::System::Boolean Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8DC763178035551__CTOR_OFFSET))(this);
	}
};
