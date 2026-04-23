#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/EntityTag.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6E44C3C04E07AAD8__CTOR_OFFSET UNITYSDK_OFFSET(0x180A3FA0)

inline static constexpr unsigned int Class_1_6E44C3C04E07AAD8_TypeDefinitionIndex = 39102;

class Class_1_6E44C3C04E07AAD8 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::FiveDim::EntityTag Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E44C3C04E07AAD8__CTOR_OFFSET))(this);
	}
};
