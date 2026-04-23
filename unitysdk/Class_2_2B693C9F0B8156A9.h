#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_2B693C9F0B8156A9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x129F2FD0)
#define CLASS_2_2B693C9F0B8156A9__CTOR_OFFSET UNITYSDK_OFFSET(0x129F3020)

inline static constexpr unsigned int Class_2_2B693C9F0B8156A9_TypeDefinitionIndex = 53065;

class Class_2_2B693C9F0B8156A9 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::GameEntity* Field_2_1; // 0x18
	::RPG::GameCore::GameEntity* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B693C9F0B8156A9__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B693C9F0B8156A9_DISPOSE_OFFSET))(this);
	}
};
