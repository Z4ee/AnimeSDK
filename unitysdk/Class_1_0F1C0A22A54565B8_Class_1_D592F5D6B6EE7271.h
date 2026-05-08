#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class EffectPatternInfoConfig; }
namespace System { class Action; }

#define CLASS_1_0F1C0A22A54565B8_CLASS_1_D592F5D6B6EE7271_METHOD_1_63BF6DA0B424FF1C_OFFSET UNITYSDK_OFFSET(0xE138570)
#define CLASS_1_0F1C0A22A54565B8_CLASS_1_D592F5D6B6EE7271__CTOR_OFFSET UNITYSDK_OFFSET(0xE138560)

inline static constexpr unsigned int Class_1_0F1C0A22A54565B8_Class_1_D592F5D6B6EE7271_TypeDefinitionIndex = 78461;

class Class_1_0F1C0A22A54565B8_Class_1_D592F5D6B6EE7271 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F1C0A22A54565B8_CLASS_1_D592F5D6B6EE7271__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_63BF6DA0B424FF1C(::MoleMole::Config::EffectPatternInfoConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EffectPatternInfoConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F1C0A22A54565B8_CLASS_1_D592F5D6B6EE7271_METHOD_1_63BF6DA0B424FF1C_OFFSET))(this, a1);
	}
};
