#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BossPhase.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1618E950EC8C78B1__CTOR_OFFSET UNITYSDK_OFFSET(0x16A541A0)

inline static constexpr unsigned int Class_1_1618E950EC8C78B1_TypeDefinitionIndex = 32843;

class Class_1_1618E950EC8C78B1 : public ::System::Object
{
public:
	::System::Int32 Field_1_2; // 0x10
	::RPG::Client::LittleGame::BossPhase Field_1_0; // 0x14
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1618E950EC8C78B1__CTOR_OFFSET))(this);
	}
};
