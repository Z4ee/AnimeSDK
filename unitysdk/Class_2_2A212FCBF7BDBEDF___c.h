#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA8435E138F2E03;
class Class_2_208CC9941471731A_1155;
namespace MoleMole { class UICoopLevelRewardRowWidgetController_Context; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_2A212FCBF7BDBEDF___C_METHOD_1_516FA65BE5B87DF2_OFFSET UNITYSDK_OFFSET(0x16B0F890)
#define CLASS_2_2A212FCBF7BDBEDF___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x16B0F880)
#define CLASS_2_2A212FCBF7BDBEDF___C_METHOD_1_DB590080B7671A65_OFFSET UNITYSDK_OFFSET(0x16B0F870)
#define CLASS_2_2A212FCBF7BDBEDF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B0F820)
#define CLASS_2_2A212FCBF7BDBEDF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16B0F860)

inline static constexpr unsigned int Class_2_2A212FCBF7BDBEDF___c_TypeDefinitionIndex = 66088;

class Class_2_2A212FCBF7BDBEDF___c : public ::System::Object
{
public:
	static ::Class_2_2A212FCBF7BDBEDF___c** StaticGet___9()
	{
		return (::Class_2_2A212FCBF7BDBEDF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2A212FCBF7BDBEDF___c_TypeDefinitionIndex)->GetStaticField(0x439C0);
	}
	static ::System::Action** StaticGet___9__13_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2A212FCBF7BDBEDF___c_TypeDefinitionIndex)->GetStaticField(0x439C8);
	}
	static ::System::Func_1<::Class_1_1EA8435E138F2E03*>** StaticGet___9__11_1()
	{
		return (::System::Func_1<::Class_1_1EA8435E138F2E03*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2A212FCBF7BDBEDF___c_TypeDefinitionIndex)->GetStaticField(0x439D0);
	}
	static ::System::Converter_2<::Class_2_208CC9941471731A_1155*, ::MoleMole::UICoopLevelRewardRowWidgetController_Context*>** StaticGet___9__18_0()
	{
		return (::System::Converter_2<::Class_2_208CC9941471731A_1155*, ::MoleMole::UICoopLevelRewardRowWidgetController_Context*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2A212FCBF7BDBEDF___c_TypeDefinitionIndex)->GetStaticField(0x439D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2A212FCBF7BDBEDF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A212FCBF7BDBEDF___C__CTOR_OFFSET))(this);
	}

	::Class_1_1EA8435E138F2E03* Method_1_DB590080B7671A65()
	{
		return ((::Class_1_1EA8435E138F2E03*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A212FCBF7BDBEDF___C_METHOD_1_DB590080B7671A65_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A212FCBF7BDBEDF___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::MoleMole::UICoopLevelRewardRowWidgetController_Context* Method_1_516FA65BE5B87DF2(::Class_2_208CC9941471731A_1155* a1)
	{
		return ((::MoleMole::UICoopLevelRewardRowWidgetController_Context*(*)(::PVOID, ::Class_2_208CC9941471731A_1155*))((::PBYTE)hIl2Cpp + CLASS_2_2A212FCBF7BDBEDF___C_METHOD_1_516FA65BE5B87DF2_OFFSET))(this, a1);
	}
};
