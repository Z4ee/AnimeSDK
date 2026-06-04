#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_260;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define CLASS_1_CC66515D70960CCE_GETVALUE_OFFSET UNITYSDK_OFFSET(0x14515AE0)
#define CLASS_1_CC66515D70960CCE__CTOR_OFFSET UNITYSDK_OFFSET(0x14515E00)

inline static constexpr unsigned int Class_1_CC66515D70960CCE_TypeDefinitionIndex = 71921;

class Class_1_CC66515D70960CCE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC66515D70960CCE__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint GetValue(::Class_0_16E4307DCC419505_260* a1, ::Entitas::IEntity* a2, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_0_16E4307DCC419505_260*, ::Entitas::IEntity*, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_CC66515D70960CCE_GETVALUE_OFFSET))(this, a1, a2, a3);
	}
};
