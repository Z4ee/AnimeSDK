#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_255;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityValueGetterConstantConfig; }

#define CLASS_1_0ACACAEB05D855C3_GETVALUE_OFFSET UNITYSDK_OFFSET(0x15805E10)
#define CLASS_1_0ACACAEB05D855C3_METHOD_1_6F63188617A9C728_OFFSET UNITYSDK_OFFSET(0x15805EA0)
#define CLASS_1_0ACACAEB05D855C3__CTOR_OFFSET UNITYSDK_OFFSET(0x15805F60)

inline static constexpr unsigned int Class_1_0ACACAEB05D855C3_TypeDefinitionIndex = 76924;

class Class_1_0ACACAEB05D855C3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ACACAEB05D855C3__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint GetValue(::Class_0_16E4307DCC419505_255* a1, ::Entitas::IEntity* a2, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_0_16E4307DCC419505_255*, ::Entitas::IEntity*, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0ACACAEB05D855C3_GETVALUE_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_1_6F63188617A9C728(::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a1, ::RPG::GameCore::LittleGameAbilityValueGetterConstantConfig*& a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*, ::RPG::GameCore::LittleGameAbilityValueGetterConstantConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_0ACACAEB05D855C3_METHOD_1_6F63188617A9C728_OFFSET))(a1, a2);
	}
};
