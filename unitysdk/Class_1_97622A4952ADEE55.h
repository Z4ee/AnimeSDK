#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigFlowerShopActivityScriptableObject; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_97622A4952ADEE55_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x16E0AC80)
#define CLASS_1_97622A4952ADEE55_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x16E0AEA0)
#define CLASS_1_97622A4952ADEE55_METHOD_1_E1ABF9240A369A10_OFFSET UNITYSDK_OFFSET(0x16E0AE90)
#define CLASS_1_97622A4952ADEE55__CTOR_OFFSET UNITYSDK_OFFSET(0x16E0AC70)

inline static constexpr unsigned int Class_1_97622A4952ADEE55_TypeDefinitionIndex = 62676;

class Class_1_97622A4952ADEE55 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigFlowerShopActivityScriptableObject** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigFlowerShopActivityScriptableObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_97622A4952ADEE55_TypeDefinitionIndex)->GetStaticField(0x3BE30);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97622A4952ADEE55__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_97622A4952ADEE55_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigFlowerShopActivityScriptableObject* Method_1_E1ABF9240A369A10()
	{
		return ((::MoleMole::Config::ConfigFlowerShopActivityScriptableObject*(*)())((::PBYTE)hIl2Cpp + CLASS_1_97622A4952ADEE55_METHOD_1_E1ABF9240A369A10_OFFSET))();
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_97622A4952ADEE55_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}
};
