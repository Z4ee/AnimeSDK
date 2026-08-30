#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DamageTypeRow; }
namespace System { class String; }

#define CLASS_1_1B87F13B476B57A4_METHOD_1_4A1F5357589275D0_OFFSET UNITYSDK_OFFSET(0xBCD4440)
#define CLASS_1_1B87F13B476B57A4_METHOD_1_ACE8C0CE7FFBC601_OFFSET UNITYSDK_OFFSET(0xBCD44B0)
#define CLASS_1_1B87F13B476B57A4__CTOR_OFFSET UNITYSDK_OFFSET(0xBCD4590)

inline static constexpr unsigned int Class_1_1B87F13B476B57A4_TypeDefinitionIndex = 79719;

class Class_1_1B87F13B476B57A4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B87F13B476B57A4__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::DamageTypeRow* Method_1_4A1F5357589275D0(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::RPG::GameCore::DamageTypeRow*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_1B87F13B476B57A4_METHOD_1_4A1F5357589275D0_OFFSET))(this, a1);
	}

	::System::String* Method_1_ACE8C0CE7FFBC601(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_1B87F13B476B57A4_METHOD_1_ACE8C0CE7FFBC601_OFFSET))(this, a1);
	}
};
