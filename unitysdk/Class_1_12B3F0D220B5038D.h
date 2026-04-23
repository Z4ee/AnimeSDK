#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_05E595DC72CB83CA;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_12B3F0D220B5038D__CTOR_OFFSET UNITYSDK_OFFSET(0x915CC70)

inline static constexpr unsigned int Class_1_12B3F0D220B5038D_TypeDefinitionIndex = 49919;

class Class_1_12B3F0D220B5038D : public ::System::Object
{
public:
	::Class_1_05E595DC72CB83CA* Field_1_0; // 0x10
	::Class_3_E21F6DE9B7FA4D05* Field_1_3; // 0x18
	::RPG::GameCore::GameEntity* Field_1_1; // 0x20
	::System::Int32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12B3F0D220B5038D__CTOR_OFFSET))(this);
	}
};
