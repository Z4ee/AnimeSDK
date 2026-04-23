#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0648CB3ED0A09425.h"
#include "unitysdk/System/Object.h"

class Class_1_05E595DC72CB83CA;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_503F91D5A9A9E6E5__CTOR_OFFSET UNITYSDK_OFFSET(0x12A01D00)

inline static constexpr unsigned int Class_1_503F91D5A9A9E6E5_TypeDefinitionIndex = 49832;

class Class_1_503F91D5A9A9E6E5 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_1; // 0x10
	::Class_1_05E595DC72CB83CA* Field_1_0; // 0x18
	::Struct_2_0648CB3ED0A09425 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_503F91D5A9A9E6E5__CTOR_OFFSET))(this);
	}
};
