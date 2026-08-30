#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameModeParamNotifyType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_88CC6B0B7FF7BDD7_CLEAR_OFFSET UNITYSDK_OFFSET(0xE043480)
#define CLASS_1_88CC6B0B7FF7BDD7__CTOR_OFFSET UNITYSDK_OFFSET(0xE0434C0)

inline static constexpr unsigned int Class_1_88CC6B0B7FF7BDD7_TypeDefinitionIndex = 55437;

class Class_1_88CC6B0B7FF7BDD7 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint AALPICLABCO; // 0x10
	::RPG::GameCore::GameModeParamNotifyType JBPNBECLGKN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88CC6B0B7FF7BDD7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88CC6B0B7FF7BDD7_CLEAR_OFFSET))(this);
	}
};
