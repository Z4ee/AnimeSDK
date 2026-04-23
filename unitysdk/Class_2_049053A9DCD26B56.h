#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SummonUnitChildEffectConfig; }
namespace System { class String; }

#define CLASS_2_049053A9DCD26B56_METHOD_2_920F08E4FDC4E588_OFFSET UNITYSDK_OFFSET(0x1846F0A0)
#define CLASS_2_049053A9DCD26B56_METHOD_2_A3DDF587C60A9EF5_OFFSET UNITYSDK_OFFSET(0x1846EF40)
#define CLASS_2_049053A9DCD26B56__CTOR_OFFSET UNITYSDK_OFFSET(0x1846F090)

inline static constexpr unsigned int Class_2_049053A9DCD26B56_TypeDefinitionIndex = 20047;

class Class_2_049053A9DCD26B56 : public ::RPG::GameCore::JsonConfig
{
public:
	::RPG::GameCore::SummonUnitChildEffectConfig* Field_2_2; // 0x10
	::System::String* Field_2_1; // 0x18
	::RPG::GameCore::SummonUnitChildEffectConfig* Field_2_3; // 0x20
	::System::Single Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_049053A9DCD26B56__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_A3DDF587C60A9EF5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_049053A9DCD26B56*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_049053A9DCD26B56*&))((::PBYTE)hIl2Cpp + CLASS_2_049053A9DCD26B56_METHOD_2_A3DDF587C60A9EF5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_920F08E4FDC4E588(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_049053A9DCD26B56* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_049053A9DCD26B56*))((::PBYTE)hIl2Cpp + CLASS_2_049053A9DCD26B56_METHOD_2_920F08E4FDC4E588_OFFSET))(a1, a2);
	}
};
