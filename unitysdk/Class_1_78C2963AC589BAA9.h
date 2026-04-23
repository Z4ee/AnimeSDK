#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleItemType.h"
#include "unitysdk/RPG/GameCore/MarbleShapeType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_78C2963AC589BAA9__CTOR_OFFSET UNITYSDK_OFFSET(0x18082B90)

inline static constexpr unsigned int Class_1_78C2963AC589BAA9_TypeDefinitionIndex = 38449;

class Class_1_78C2963AC589BAA9 : public ::System::Object
{
public:
	::System::Single Field_1_2; // 0x10
	::RPG::GameCore::MarbleShapeType Field_1_1; // 0x14
	::RPG::GameCore::MarbleItemType Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78C2963AC589BAA9__CTOR_OFFSET))(this);
	}
};
