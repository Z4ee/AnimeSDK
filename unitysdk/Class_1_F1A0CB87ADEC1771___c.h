#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_F1A0CB87ADEC1771___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18BB3A90)
#define CLASS_1_F1A0CB87ADEC1771___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18BB3AC0)
#define CLASS_1_F1A0CB87ADEC1771___C__OPENSCREENTRANSFER_B__56_2_OFFSET UNITYSDK_OFFSET(0x18BB3BE0)
#define CLASS_1_F1A0CB87ADEC1771___C___ONGAMEFINALLEAVE_B__31_0_OFFSET UNITYSDK_OFFSET(0x18BB3AD0)

inline static constexpr unsigned int Class_1_F1A0CB87ADEC1771___c_TypeDefinitionIndex = 57840;

class Class_1_F1A0CB87ADEC1771___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__31_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F1A0CB87ADEC1771___c_TypeDefinitionIndex)->GetStaticField(0x4D700);
	}
	static ::System::Action** StaticGet___9__56_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F1A0CB87ADEC1771___c_TypeDefinitionIndex)->GetStaticField(0x4D708);
	}
	static ::Class_1_F1A0CB87ADEC1771___c** StaticGet___9()
	{
		return (::Class_1_F1A0CB87ADEC1771___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F1A0CB87ADEC1771___c_TypeDefinitionIndex)->GetStaticField(0x4D710);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771___C__CTOR_OFFSET))(this);
	}

	::System::Void __OnGameFinalLeave_b__31_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771___C___ONGAMEFINALLEAVE_B__31_0_OFFSET))(this);
	}

	::System::Void _OpenScreenTransfer_b__56_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771___C__OPENSCREENTRANSFER_B__56_2_OFFSET))(this);
	}
};
