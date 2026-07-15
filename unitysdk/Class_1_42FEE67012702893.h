#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraLockReason.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_42FEE67012702893__CTOR_OFFSET UNITYSDK_OFFSET(0x1B255060)

inline static constexpr unsigned int Class_1_42FEE67012702893_TypeDefinitionIndex = 39533;

class Class_1_42FEE67012702893 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::ChimeraLockReason Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42FEE67012702893__CTOR_OFFSET))(this);
	}
};
