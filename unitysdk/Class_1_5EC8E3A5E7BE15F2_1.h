#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5EC8E3A5E7BE15F2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16862090)

inline static constexpr unsigned int Class_1_5EC8E3A5E7BE15F2_1_TypeDefinitionIndex = 54530;

class Class_1_5EC8E3A5E7BE15F2_1 : public ::System::Object
{
public:
	::System::Boolean BHCLAFHOEAO; // 0x10
	::RPG::GameCore::TeamType BEGKIKOGEOD; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EC8E3A5E7BE15F2_1__CTOR_OFFSET))(this);
	}
};
