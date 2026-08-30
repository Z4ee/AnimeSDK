#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_777D2B452DC9D1CF_CLEAR_OFFSET UNITYSDK_OFFSET(0x160C28D0)
#define CLASS_1_777D2B452DC9D1CF__CTOR_OFFSET UNITYSDK_OFFSET(0x160C2920)

inline static constexpr unsigned int Class_1_777D2B452DC9D1CF_TypeDefinitionIndex = 55708;

class Class_1_777D2B452DC9D1CF : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* IEDIIFJOOGF; // 0x10
	::System::Single GBOEIMOIMJG; // 0x18
	::System::Single BIFBJDKMKDL; // 0x1C
	::System::Single NMCLEENBEAL; // 0x20
	::System::Boolean GFDBIGKJAGK; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777D2B452DC9D1CF__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777D2B452DC9D1CF_CLEAR_OFFSET))(this);
	}
};
