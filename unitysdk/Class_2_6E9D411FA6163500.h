#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7DC1DFEA80680036.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_6E9D411FA6163500_GET_ICONID_OFFSET UNITYSDK_OFFSET(0x16A15450)
#define CLASS_2_6E9D411FA6163500__CTOR_OFFSET UNITYSDK_OFFSET(0x16A15580)

inline static constexpr unsigned int Class_2_6E9D411FA6163500_TypeDefinitionIndex = 57924;

class Class_2_6E9D411FA6163500 : public ::Class_1_7DC1DFEA80680036
{
public:
	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6E9D411FA6163500__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_IconID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E9D411FA6163500_GET_ICONID_OFFSET))(this);
	}
};
