#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_E8ECC4E6ADAEEA66_CLEAR_OFFSET UNITYSDK_OFFSET(0x964ABE0)
#define CLASS_1_E8ECC4E6ADAEEA66__CTOR_OFFSET UNITYSDK_OFFSET(0x964AC40)

inline static constexpr unsigned int Class_1_E8ECC4E6ADAEEA66_TypeDefinitionIndex = 53209;

class Class_1_E8ECC4E6ADAEEA66 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::Single Field_1_2; // 0x18
	::RPG::MVector3 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8ECC4E6ADAEEA66__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8ECC4E6ADAEEA66_CLEAR_OFFSET))(this);
	}
};
