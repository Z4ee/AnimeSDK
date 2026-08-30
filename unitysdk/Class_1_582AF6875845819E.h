#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateGameData; }

#define CLASS_1_582AF6875845819E__CTOR_OFFSET UNITYSDK_OFFSET(0x1711D200)

inline static constexpr unsigned int Class_1_582AF6875845819E_TypeDefinitionIndex = 64099;

class Class_1_582AF6875845819E : public ::System::Object
{
public:
	::RPG::Client::FateGameData* NHJHHOLAOHD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_582AF6875845819E__CTOR_OFFSET))(this);
	}
};
