#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_2B693C9F0B8156A9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C333D0)
#define CLASS_2_2B693C9F0B8156A9__CTOR_OFFSET UNITYSDK_OFFSET(0x15C33420)

inline static constexpr unsigned int Class_2_2B693C9F0B8156A9_TypeDefinitionIndex = 57565;

class Class_2_2B693C9F0B8156A9 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::GameEntity* FNDHDEOILCK; // 0x18
	::RPG::GameCore::GameEntity* EOBLJJBOBIN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B693C9F0B8156A9__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B693C9F0B8156A9_DISPOSE_OFFSET))(this);
	}
};
