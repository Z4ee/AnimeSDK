#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6B41D5D37BA0605F__CTOR_OFFSET UNITYSDK_OFFSET(0x157E3A00)

inline static constexpr unsigned int Class_1_6B41D5D37BA0605F_TypeDefinitionIndex = 61219;

class Class_1_6B41D5D37BA0605F : public ::System::Object
{
public:
	::System::Object* JJPLMHOABCM; // 0x10
	::RPG::Client::GamePhaseType ODPELJAIPHL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B41D5D37BA0605F__CTOR_OFFSET))(this);
	}
};
