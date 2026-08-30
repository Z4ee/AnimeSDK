#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_F05AF62BF42805D9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC4FF2A0)
#define CLASS_1_F05AF62BF42805D9___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC4FF2D0)
#define CLASS_1_F05AF62BF42805D9___C__OPENSCREENTRANSFER_B__68_2_OFFSET UNITYSDK_OFFSET(0xC4FF3F0)
#define CLASS_1_F05AF62BF42805D9___C___ONGAMEFINALLEAVE_B__38_0_OFFSET UNITYSDK_OFFSET(0xC4FF2E0)

inline static constexpr unsigned int Class_1_F05AF62BF42805D9___c_TypeDefinitionIndex = 60660;

class Class_1_F05AF62BF42805D9___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__68_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F05AF62BF42805D9___c_TypeDefinitionIndex)->GetStaticField(0x60680);
	}
	static ::Class_1_F05AF62BF42805D9___c** StaticGet___9()
	{
		return (::Class_1_F05AF62BF42805D9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F05AF62BF42805D9___c_TypeDefinitionIndex)->GetStaticField(0x60688);
	}
	static ::System::Action** StaticGet___9__38_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F05AF62BF42805D9___c_TypeDefinitionIndex)->GetStaticField(0x60690);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9___C__CTOR_OFFSET))(this);
	}

	::System::Void __OnGameFinalLeave_b__38_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9___C___ONGAMEFINALLEAVE_B__38_0_OFFSET))(this);
	}

	::System::Void _OpenScreenTransfer_b__68_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9___C__OPENSCREENTRANSFER_B__68_2_OFFSET))(this);
	}
};
