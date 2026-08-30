#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_255;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define CLASS_1_DE003933A40BEE6E_GETVALUE_OFFSET UNITYSDK_OFFSET(0xB8E7700)
#define CLASS_1_DE003933A40BEE6E__CTOR_OFFSET UNITYSDK_OFFSET(0xB8E7900)

inline static constexpr unsigned int Class_1_DE003933A40BEE6E_TypeDefinitionIndex = 76929;

class Class_1_DE003933A40BEE6E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE003933A40BEE6E__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint GetValue(::Class_0_16E4307DCC419505_255* a1, ::Entitas::IEntity* a2, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_0_16E4307DCC419505_255*, ::Entitas::IEntity*, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_DE003933A40BEE6E_GETVALUE_OFFSET))(this, a1, a2, a3);
	}
};
