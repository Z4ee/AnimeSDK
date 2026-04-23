#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B8CD4F1CB8207431;
namespace RPG::GameCore { class FiveDimGravitySwitchLineConfig; }

#define CLASS_1_6AE8A317E51C99FC_CLEAR_OFFSET UNITYSDK_OFFSET(0x17EF8A70)
#define CLASS_1_6AE8A317E51C99FC__CTOR_OFFSET UNITYSDK_OFFSET(0x17EF8AE0)

inline static constexpr unsigned int Class_1_6AE8A317E51C99FC_TypeDefinitionIndex = 39325;

class Class_1_6AE8A317E51C99FC : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimGravitySwitchLineConfig* Field_1_0; // 0x10
	::Class_1_B8CD4F1CB8207431* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AE8A317E51C99FC__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AE8A317E51C99FC_CLEAR_OFFSET))(this);
	}
};
