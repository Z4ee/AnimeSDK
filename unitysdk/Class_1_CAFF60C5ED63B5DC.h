#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/CustomPropMoveType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_23;

#define CLASS_1_CAFF60C5ED63B5DC_CLEAR_OFFSET UNITYSDK_OFFSET(0x17EC50B0)
#define CLASS_1_CAFF60C5ED63B5DC__CTOR_OFFSET UNITYSDK_OFFSET(0x17EC5130)

inline static constexpr unsigned int Class_1_CAFF60C5ED63B5DC_TypeDefinitionIndex = 39362;

class Class_1_CAFF60C5ED63B5DC : public ::System::Object
{
public:
	::Class_1_43BD383C98B4C0C5_23* Field_1_1; // 0x10
	::RPG::Client::LittleGame::FiveDim::CustomPropMoveType Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CAFF60C5ED63B5DC__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CAFF60C5ED63B5DC_CLEAR_OFFSET))(this);
	}
};
