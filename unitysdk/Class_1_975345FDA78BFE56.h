#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatIgnoreDefendPointType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_975345FDA78BFE56__CTOR_OFFSET UNITYSDK_OFFSET(0x18B84810)

inline static constexpr unsigned int Class_1_975345FDA78BFE56_TypeDefinitionIndex = 34537;

class Class_1_975345FDA78BFE56 : public ::System::Object
{
public:
	::RPG::GameCore::DiceCombatIgnoreDefendPointType Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_975345FDA78BFE56__CTOR_OFFSET))(this);
	}
};
