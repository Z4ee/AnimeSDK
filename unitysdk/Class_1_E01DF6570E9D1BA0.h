#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_469;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_E01DF6570E9D1BA0__CTOR_OFFSET UNITYSDK_OFFSET(0x11A03430)

inline static constexpr unsigned int Class_1_E01DF6570E9D1BA0_TypeDefinitionIndex = 53121;

class Class_1_E01DF6570E9D1BA0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_1; // 0x10
	::Class_0_16E4307DCC419505_469* Field_1_3; // 0x18
	::RPG::GameCore::GameEntity* Field_1_0; // 0x20
	::System::UInt32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E01DF6570E9D1BA0__CTOR_OFFSET))(this);
	}
};
