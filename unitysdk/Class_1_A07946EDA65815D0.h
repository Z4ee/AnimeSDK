#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_260;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define CLASS_1_A07946EDA65815D0_GETVALUE_OFFSET UNITYSDK_OFFSET(0xAC358C0)
#define CLASS_1_A07946EDA65815D0__CTOR_OFFSET UNITYSDK_OFFSET(0xAC35B30)

inline static constexpr unsigned int Class_1_A07946EDA65815D0_TypeDefinitionIndex = 71926;

class Class_1_A07946EDA65815D0 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07946EDA65815D0__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint GetValue(::Class_0_16E4307DCC419505_260* a1, ::Entitas::IEntity* a2, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_0_16E4307DCC419505_260*, ::Entitas::IEntity*, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A07946EDA65815D0_GETVALUE_OFFSET))(this, a1, a2, a3);
	}
};
