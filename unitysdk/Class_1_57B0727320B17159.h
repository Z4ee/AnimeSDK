#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameClientNetMode.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameNetMode.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_57B0727320B17159__CTOR_OFFSET UNITYSDK_OFFSET(0x17BF1C40)

inline static constexpr unsigned int Class_1_57B0727320B17159_TypeDefinitionIndex = 34370;

class Class_1_57B0727320B17159 : public ::System::Object
{
public:
	::RPG::Client::LittleGameShare::LittleGameNetMode Field_1_0; // 0x10
	::RPG::Client::LittleGameShare::LittleGameClientNetMode Field_1_1; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57B0727320B17159__CTOR_OFFSET))(this);
	}
};
