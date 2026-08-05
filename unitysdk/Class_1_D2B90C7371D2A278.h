#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_785FDC7D0DA58280;
namespace MoleMole::Arcade::BallsRace { class BrConstantCfg; }

#define CLASS_1_D2B90C7371D2A278_METHOD_1_5C4B0A816B8D43A1_OFFSET UNITYSDK_OFFSET(0x1D7DE710)
#define CLASS_1_D2B90C7371D2A278_METHOD_1_BF30D754A7BB8E63_OFFSET UNITYSDK_OFFSET(0x1D7DE8B0)
#define CLASS_1_D2B90C7371D2A278_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x1D7DE9C0)
#define CLASS_1_D2B90C7371D2A278__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7DE700)

inline static constexpr unsigned int Class_1_D2B90C7371D2A278_TypeDefinitionIndex = 92386;

class Class_1_D2B90C7371D2A278 : public ::System::Object
{
public:
	static ::MoleMole::Arcade::BallsRace::BrConstantCfg** StaticGet_Field_1_5()
	{
		return (::MoleMole::Arcade::BallsRace::BrConstantCfg**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D2B90C7371D2A278_TypeDefinitionIndex)->GetStaticField(0x51E60);
	}
	static ::System::Single* StaticGet_Field_1_6()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D2B90C7371D2A278_TypeDefinitionIndex)->GetStaticField(0x12FC0);
	}
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D2B90C7371D2A278_TypeDefinitionIndex)->GetStaticField(0x12FC4);
	}
	static ::System::Single* StaticGet_Field_1_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D2B90C7371D2A278_TypeDefinitionIndex)->GetStaticField(0x12FC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D2B90C7371D2A278__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_5C4B0A816B8D43A1(::Class_2_785FDC7D0DA58280* a1)
	{
		return ((::System::Void(*)(::Class_2_785FDC7D0DA58280*))((::PBYTE)hIl2Cpp + CLASS_1_D2B90C7371D2A278_METHOD_1_5C4B0A816B8D43A1_OFFSET))(a1);
	}

	static ::System::Void Method_1_BF30D754A7BB8E63(::Class_2_785FDC7D0DA58280* a1, ::MoleMole::Arcade::BallsRace::BrConstantCfg* a2)
	{
		return ((::System::Void(*)(::Class_2_785FDC7D0DA58280*, ::MoleMole::Arcade::BallsRace::BrConstantCfg*))((::PBYTE)hIl2Cpp + CLASS_1_D2B90C7371D2A278_METHOD_1_BF30D754A7BB8E63_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D2B90C7371D2A278_METHOD_1_F730968E2645E14B_OFFSET))();
	}
};
