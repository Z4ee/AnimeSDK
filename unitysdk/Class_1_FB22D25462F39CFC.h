#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCharacterAttachment; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FB22D25462F39CFC_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x113C5130)
#define CLASS_1_FB22D25462F39CFC_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x113C5040)

inline static constexpr unsigned int Class_1_FB22D25462F39CFC_TypeDefinitionIndex = 53845;

class Class_1_FB22D25462F39CFC : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCharacterAttachment*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCharacterAttachment*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB22D25462F39CFC_TypeDefinitionIndex)->GetStaticField(0x3FB30);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FB22D25462F39CFC_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_FB22D25462F39CFC_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}
};
