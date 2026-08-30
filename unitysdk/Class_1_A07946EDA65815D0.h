#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_255;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define CLASS_1_A07946EDA65815D0_GETVALUE_OFFSET UNITYSDK_OFFSET(0x17A18430)
#define CLASS_1_A07946EDA65815D0__CTOR_OFFSET UNITYSDK_OFFSET(0x17A186A0)

inline static constexpr unsigned int Class_1_A07946EDA65815D0_TypeDefinitionIndex = 76930;

class Class_1_A07946EDA65815D0 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07946EDA65815D0__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint GetValue(::Class_0_16E4307DCC419505_255* a1, ::Entitas::IEntity* a2, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_0_16E4307DCC419505_255*, ::Entitas::IEntity*, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A07946EDA65815D0_GETVALUE_OFFSET))(this, a1, a2, a3);
	}
};
