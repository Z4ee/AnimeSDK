#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/VersusBarQuestStatus.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_E54220BE5BFB3B20__CTOR_OFFSET UNITYSDK_OFFSET(0x178EBEA0)

inline static constexpr unsigned int Class_1_E54220BE5BFB3B20_TypeDefinitionIndex = 55780;

class Class_1_E54220BE5BFB3B20 : public ::System::Object
{
public:
	::RPG::Client::TextID CFILBELOBAL; // 0x10
	::RPG::GameCore::VersusBarQuestStatus FFEPLIHOFLA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E54220BE5BFB3B20__CTOR_OFFSET))(this);
	}
};
