#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceAnimState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_742C719111A286CA__CTOR_OFFSET UNITYSDK_OFFSET(0x17C0A4A0)

inline static constexpr unsigned int Class_1_742C719111A286CA_TypeDefinitionIndex = 34636;

class Class_1_742C719111A286CA : public ::System::Object
{
public:
	::RPG::GameCore::CakeRaceAnimState Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_742C719111A286CA__CTOR_OFFSET))(this);
	}
};
