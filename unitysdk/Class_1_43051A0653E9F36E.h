#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LanguageFontSizeConfig.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIFontSize; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_43051A0653E9F36E_METHOD_1_04E4F17DE941AF33_OFFSET UNITYSDK_OFFSET(0x12E2A500)
#define CLASS_1_43051A0653E9F36E_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x12E2A9B0)
#define CLASS_1_43051A0653E9F36E_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x12E2ABD0)

inline static constexpr unsigned int Class_1_43051A0653E9F36E_TypeDefinitionIndex = 68083;

class Class_1_43051A0653E9F36E : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigUIFontSize** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigUIFontSize**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43051A0653E9F36E_TypeDefinitionIndex)->GetStaticField(0x48FE0);
	}

	static ::System::Boolean Method_1_04E4F17DE941AF33(::System::String* a1, ::MoleMole::LanguageType a2, ::MoleMole::Config::LanguageFontSizeConfig& a3, ::System::Boolean& a4)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::LanguageType, ::MoleMole::Config::LanguageFontSizeConfig&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_43051A0653E9F36E_METHOD_1_04E4F17DE941AF33_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_43051A0653E9F36E_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_43051A0653E9F36E_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}
};
