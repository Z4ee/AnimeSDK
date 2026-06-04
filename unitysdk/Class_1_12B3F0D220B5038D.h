#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D8203AFB32E9259C;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_12B3F0D220B5038D__CTOR_OFFSET UNITYSDK_OFFSET(0xA784BD0)

inline static constexpr unsigned int Class_1_12B3F0D220B5038D_TypeDefinitionIndex = 50586;

class Class_1_12B3F0D220B5038D : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::Class_3_07C3C4D2990C49EE* Field_1_1; // 0x18
	::Class_1_D8203AFB32E9259C* Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12B3F0D220B5038D__CTOR_OFFSET))(this);
	}
};
