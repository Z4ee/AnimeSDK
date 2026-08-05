#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZenkovSpecialAvatar; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_45C9EB18BB7721EA_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x11B263F0)
#define CLASS_1_45C9EB18BB7721EA_METHOD_1_131D79449E2C052E_OFFSET UNITYSDK_OFFSET(0x11B266F0)
#define CLASS_1_45C9EB18BB7721EA_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x11B26600)

inline static constexpr unsigned int Class_1_45C9EB18BB7721EA_TypeDefinitionIndex = 67461;

class Class_1_45C9EB18BB7721EA : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigZenkovSpecialAvatar** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigZenkovSpecialAvatar**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45C9EB18BB7721EA_TypeDefinitionIndex)->GetStaticField(0x41DB0);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_45C9EB18BB7721EA_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_45C9EB18BB7721EA_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigZenkovSpecialAvatar* Method_1_131D79449E2C052E()
	{
		return ((::MoleMole::Config::ConfigZenkovSpecialAvatar*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45C9EB18BB7721EA_METHOD_1_131D79449E2C052E_OFFSET))();
	}
};
