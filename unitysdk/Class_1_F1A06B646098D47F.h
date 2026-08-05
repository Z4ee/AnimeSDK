#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigControllableObject; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_F1A06B646098D47F_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x133F4E20)
#define CLASS_1_F1A06B646098D47F_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x133F4D30)
#define CLASS_1_F1A06B646098D47F_METHOD_1_F830E2C5DD925993_OFFSET UNITYSDK_OFFSET(0x133F5030)

inline static constexpr unsigned int Class_1_F1A06B646098D47F_TypeDefinitionIndex = 57481;

class Class_1_F1A06B646098D47F : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigControllableObject** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigControllableObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F1A06B646098D47F_TypeDefinitionIndex)->GetStaticField(0x41F20);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F1A06B646098D47F_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F1A06B646098D47F_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigControllableObject* Method_1_F830E2C5DD925993()
	{
		return ((::MoleMole::Config::ConfigControllableObject*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F1A06B646098D47F_METHOD_1_F830E2C5DD925993_OFFSET))();
	}
};
