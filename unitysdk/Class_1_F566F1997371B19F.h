#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }

#define CLASS_1_F566F1997371B19F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x129DF070)
#define CLASS_1_F566F1997371B19F__CTOR_OFFSET UNITYSDK_OFFSET(0x129DF0E0)

inline static constexpr unsigned int Class_1_F566F1997371B19F_TypeDefinitionIndex = 50944;

class Class_1_F566F1997371B19F : public ::System::Object
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_1_1; // 0x10
	::RPG::GameCore::GameEntityList* Field_1_4; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::System::Boolean Field_1_5; // 0x28
	::System::Single Field_1_0; // 0x2C
	::System::Single Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F566F1997371B19F__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F566F1997371B19F_DISPOSE_OFFSET))(this);
	}
};
