#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleItemType.h"
#include "unitysdk/RPG/GameCore/MarbleShapeType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_78C2963AC589BAA9__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4EF750)

inline static constexpr unsigned int Class_1_78C2963AC589BAA9_TypeDefinitionIndex = 40904;

class Class_1_78C2963AC589BAA9 : public ::System::Object
{
public:
	::RPG::GameCore::MarbleItemType LINLNNHIBAK; // 0x10
	::System::Single IDKONBFPBLH; // 0x14
	::RPG::GameCore::MarbleShapeType EDONJJDPDCD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78C2963AC589BAA9__CTOR_OFFSET))(this);
	}
};
