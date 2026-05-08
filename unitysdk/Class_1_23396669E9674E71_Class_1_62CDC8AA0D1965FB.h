#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityAttackEffectNames; }
namespace System { class Action; }

#define CLASS_1_23396669E9674E71_CLASS_1_62CDC8AA0D1965FB_METHOD_1_2BEA84041D022639_OFFSET UNITYSDK_OFFSET(0x16ADDA70)
#define CLASS_1_23396669E9674E71_CLASS_1_62CDC8AA0D1965FB__CTOR_OFFSET UNITYSDK_OFFSET(0x16ADDA60)

inline static constexpr unsigned int Class_1_23396669E9674E71_Class_1_62CDC8AA0D1965FB_TypeDefinitionIndex = 45716;

class Class_1_23396669E9674E71_Class_1_62CDC8AA0D1965FB : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23396669E9674E71_CLASS_1_62CDC8AA0D1965FB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2BEA84041D022639(::MoleMole::Config::ConfigEntityAttackEffectNames* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAttackEffectNames*))((::PBYTE)hIl2Cpp + CLASS_1_23396669E9674E71_CLASS_1_62CDC8AA0D1965FB_METHOD_1_2BEA84041D022639_OFFSET))(this, a1);
	}
};
