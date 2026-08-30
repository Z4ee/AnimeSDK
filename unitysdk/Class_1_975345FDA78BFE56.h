#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatIgnoreDefendPointType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_975345FDA78BFE56__CTOR_OFFSET UNITYSDK_OFFSET(0x1C29D520)

inline static constexpr unsigned int Class_1_975345FDA78BFE56_TypeDefinitionIndex = 35780;

class Class_1_975345FDA78BFE56 : public ::System::Object
{
public:
	::System::Int32 CIIBJHAMJCK; // 0x10
	::RPG::GameCore::DiceCombatIgnoreDefendPointType PCBNGAJDNGD; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_975345FDA78BFE56__CTOR_OFFSET))(this);
	}
};
