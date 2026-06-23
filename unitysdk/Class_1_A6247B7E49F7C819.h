#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_369D88019B769C43.h"
#include "unitysdk/Enum_3_74B8771726734F6D.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/MoleMole/LanguageVoiceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/Extension/UIButtonEx_ClickSoundType.h"

class Class_0_16E4307DCC419505_11;
class Class_0_16E4307DCC419505_197;
class Class_1_03012F75E773046C_1;
class Class_2_208CC9941471731A_230;
class Class_2_208CC9941471731A_483;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_A6247B7E49F7C819_METHOD_1_09A39B89545FE101_OFFSET UNITYSDK_OFFSET(0x10811630)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_163C5E3BE9AA514F_OFFSET UNITYSDK_OFFSET(0x108116D0)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_1905838B1254B3EC_OFFSET UNITYSDK_OFFSET(0x1080FBE0)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_2692BF00C72E4031_OFFSET UNITYSDK_OFFSET(0x1080ED80)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_2917BB48A903B3F0_OFFSET UNITYSDK_OFFSET(0x108112C0)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_46216877D2B96F5A_OFFSET UNITYSDK_OFFSET(0x10811A30)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_4CA8BDF5B10C49D5_OFFSET UNITYSDK_OFFSET(0x1080FE70)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_4ED7B34994A602BE_OFFSET UNITYSDK_OFFSET(0x10811BD0)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_531C9B5445577CF3_OFFSET UNITYSDK_OFFSET(0x10810640)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_54EF232E17317F70_OFFSET UNITYSDK_OFFSET(0x1080FF30)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_55BCCA949D18072F_OFFSET UNITYSDK_OFFSET(0x10812640)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_5CEF35BD8259B218_OFFSET UNITYSDK_OFFSET(0x1080EF10)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_5F3030E55C8D3823_OFFSET UNITYSDK_OFFSET(0x108102D0)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_699A6F82D1557D91_OFFSET UNITYSDK_OFFSET(0x10812A80)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_732AD16A66623CCD_OFFSET UNITYSDK_OFFSET(0x108103A0)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_8BC85DADEC2C3862_OFFSET UNITYSDK_OFFSET(0x108107B0)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_9224F4728A32C68B_OFFSET UNITYSDK_OFFSET(0x108120F0)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_9A85BF10BBD92F87_OFFSET UNITYSDK_OFFSET(0x10810450)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_A25D45EF431C8895_OFFSET UNITYSDK_OFFSET(0x108111F0)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_B2D2E8031698F86A_OFFSET UNITYSDK_OFFSET(0x108104D0)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_BE9C2D65FAE4CFF9_OFFSET UNITYSDK_OFFSET(0x10811CE0)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_CDC3C41886CF8A4C_OFFSET UNITYSDK_OFFSET(0x10810050)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_CFAB49FD2BDE40CE_OFFSET UNITYSDK_OFFSET(0x10810B30)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_DD0303AAEA4A89C7_OFFSET UNITYSDK_OFFSET(0x1080F980)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_E743D6E80FB677DE_OFFSET UNITYSDK_OFFSET(0x1080ECD0)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_EB1DC03F9DF5A9C3_OFFSET UNITYSDK_OFFSET(0x10810310)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_F1BF435FEF7672EB_OFFSET UNITYSDK_OFFSET(0x1080F050)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_F41281154A23329D_OFFSET UNITYSDK_OFFSET(0x1080FB10)
#define CLASS_1_A6247B7E49F7C819__CCTOR_OFFSET UNITYSDK_OFFSET(0x1080EAC0)
#define CLASS_1_A6247B7E49F7C819__CTOR_OFFSET UNITYSDK_OFFSET(0x1080EAB0)

inline static constexpr unsigned int Class_1_A6247B7E49F7C819_TypeDefinitionIndex = 43449;

class Class_1_A6247B7E49F7C819 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6247B7E49F7C819_TypeDefinitionIndex)->GetStaticField(0x32DC0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6247B7E49F7C819_TypeDefinitionIndex)->GetStaticField(0x32DC8);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6247B7E49F7C819_TypeDefinitionIndex)->GetStaticField(0x32DD0);
	}
	static ::Class_1_03012F75E773046C_1** StaticGet_Field_1_7()
	{
		return (::Class_1_03012F75E773046C_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6247B7E49F7C819_TypeDefinitionIndex)->GetStaticField(0x32DD8);
	}
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_5()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6247B7E49F7C819_TypeDefinitionIndex)->GetStaticField(0x32DE0);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6247B7E49F7C819_TypeDefinitionIndex)->GetStaticField(0x32DE8);
	}
	static ::Il2CppArray<::System::Char>** StaticGet_Field_1_6()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6247B7E49F7C819_TypeDefinitionIndex)->GetStaticField(0x32DF0);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6247B7E49F7C819_TypeDefinitionIndex)->GetStaticField(0x32DF8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819__CCTOR_OFFSET))();
	}

	static ::Class_2_208CC9941471731A_483* Method_1_E743D6E80FB677DE(::System::String* a1)
	{
		return ((::Class_2_208CC9941471731A_483*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_E743D6E80FB677DE_OFFSET))(a1);
	}

	static ::System::String* Method_1_2692BF00C72E4031(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_2692BF00C72E4031_OFFSET))(a1);
	}

	static ::System::Void Method_1_5CEF35BD8259B218(::System::String* a1, ::Class_0_16E4307DCC419505_197* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_5CEF35BD8259B218_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_DD0303AAEA4A89C7(::Enum_3_74B8771726734F6D a1)
	{
		return ((::System::UInt32(*)(::Enum_3_74B8771726734F6D))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_DD0303AAEA4A89C7_OFFSET))(a1);
	}

	static ::System::String* Method_1_1905838B1254B3EC(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_1905838B1254B3EC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4CA8BDF5B10C49D5(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_4CA8BDF5B10C49D5_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_54EF232E17317F70(::System::String* a1)
	{
		return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_54EF232E17317F70_OFFSET))(a1);
	}

	static ::System::String* Method_1_CDC3C41886CF8A4C(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_CDC3C41886CF8A4C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_5F3030E55C8D3823(::MoleMole::LanguageVoiceType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::LanguageVoiceType))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_5F3030E55C8D3823_OFFSET))(a1);
	}

	static ::System::String* Method_1_EB1DC03F9DF5A9C3(::MoleMole::Config::TimePeriodType a1)
	{
		return ((::System::String*(*)(::MoleMole::Config::TimePeriodType))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_EB1DC03F9DF5A9C3_OFFSET))(a1);
	}

	static ::System::Void Method_1_732AD16A66623CCD(::Class_2_208CC9941471731A_230* a1)
	{
		return ((::System::Void(*)(::Class_2_208CC9941471731A_230*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_732AD16A66623CCD_OFFSET))(a1);
	}

	static ::Class_2_208CC9941471731A_483* Method_1_F41281154A23329D(::Enum_3_74B8771726734F6D a1)
	{
		return ((::Class_2_208CC9941471731A_483*(*)(::Enum_3_74B8771726734F6D))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_F41281154A23329D_OFFSET))(a1);
	}

	static ::System::String* Method_1_9A85BF10BBD92F87(::MoleMole::Config::WeatherType a1)
	{
		return ((::System::String*(*)(::MoleMole::Config::WeatherType))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_9A85BF10BBD92F87_OFFSET))(a1);
	}

	static ::System::Void Method_1_B2D2E8031698F86A(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_B2D2E8031698F86A_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_531C9B5445577CF3(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_531C9B5445577CF3_OFFSET))(a1);
	}

	static ::System::Void Method_1_8BC85DADEC2C3862()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_8BC85DADEC2C3862_OFFSET))();
	}

	static ::System::Void Method_1_CFAB49FD2BDE40CE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_CFAB49FD2BDE40CE_OFFSET))();
	}

	static ::UnityEngine::GameObject* Method_1_A25D45EF431C8895()
	{
		return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_A25D45EF431C8895_OFFSET))();
	}

	static ::System::Void Method_1_2917BB48A903B3F0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_2917BB48A903B3F0_OFFSET))();
	}

	static ::System::Void Method_1_F1BF435FEF7672EB(::System::String* a1, ::Class_0_16E4307DCC419505_197* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_F1BF435FEF7672EB_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_09A39B89545FE101()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_09A39B89545FE101_OFFSET))();
	}

	static ::System::Void Method_1_163C5E3BE9AA514F(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_163C5E3BE9AA514F_OFFSET))(a1);
	}

	static ::System::Void Method_1_46216877D2B96F5A(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_46216877D2B96F5A_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_11* Method_1_4ED7B34994A602BE(::Enum_3_369D88019B769C43 a1)
	{
		return ((::Class_0_16E4307DCC419505_11*(*)(::Enum_3_369D88019B769C43))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_4ED7B34994A602BE_OFFSET))(a1);
	}

	static ::System::Void Method_1_BE9C2D65FAE4CFF9(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_BE9C2D65FAE4CFF9_OFFSET))(a1);
	}

	static ::System::Void Method_1_9224F4728A32C68B(::UnityEngine::UI::Extension::UIButtonEx_ClickSoundType a1, ::System::Int32 a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::UnityEngine::UI::Extension::UIButtonEx_ClickSoundType, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_9224F4728A32C68B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_55BCCA949D18072F(::MoleMole::LanguageVoiceType a1)
	{
		return ((::System::Void(*)(::MoleMole::LanguageVoiceType))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_55BCCA949D18072F_OFFSET))(a1);
	}

	static ::System::Void Method_1_699A6F82D1557D91(::Class_2_208CC9941471731A_230* a1)
	{
		return ((::System::Void(*)(::Class_2_208CC9941471731A_230*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_699A6F82D1557D91_OFFSET))(a1);
	}
};
