#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BoxingClubLevelInstance; }

#define CLASS_1_83B6753C399096EE_METHOD_1_D2398F4A4ABC5BE3_OFFSET UNITYSDK_OFFSET(0x16AA85F0)
#define CLASS_1_83B6753C399096EE__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA8730)

inline static constexpr unsigned int Class_1_83B6753C399096EE_TypeDefinitionIndex = 60169;

class Class_1_83B6753C399096EE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83B6753C399096EE__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::BoxingClubLevelInstance* Method_1_D2398F4A4ABC5BE3(::System::UInt32 a1)
	{
		return ((::RPG::Client::BoxingClubLevelInstance*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_83B6753C399096EE_METHOD_1_D2398F4A4ABC5BE3_OFFSET))(a1);
	}
};
