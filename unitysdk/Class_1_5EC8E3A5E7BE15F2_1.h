#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5EC8E3A5E7BE15F2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9241B20)

inline static constexpr unsigned int Class_1_5EC8E3A5E7BE15F2_1_TypeDefinitionIndex = 50097;

class Class_1_5EC8E3A5E7BE15F2_1 : public ::System::Object
{
public:
	::System::Boolean Field_1_1; // 0x10
	::RPG::GameCore::TeamType Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EC8E3A5E7BE15F2_1__CTOR_OFFSET))(this);
	}
};
