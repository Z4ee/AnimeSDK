#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_E8ECC4E6ADAEEA66_CLEAR_OFFSET UNITYSDK_OFFSET(0x14D821C0)
#define CLASS_1_E8ECC4E6ADAEEA66__CTOR_OFFSET UNITYSDK_OFFSET(0x14D82220)

inline static constexpr unsigned int Class_1_E8ECC4E6ADAEEA66_TypeDefinitionIndex = 55145;

class Class_1_E8ECC4E6ADAEEA66 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::MVector3 Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8ECC4E6ADAEEA66__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8ECC4E6ADAEEA66_CLEAR_OFFSET))(this);
	}
};
