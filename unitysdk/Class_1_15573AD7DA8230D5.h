#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDamageStaggerLevel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_15573AD7DA8230D5_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x17DCDD10)
#define CLASS_1_15573AD7DA8230D5_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x17DCDF20)
#define CLASS_1_15573AD7DA8230D5_METHOD_1_F76B97B9A9C4402E_OFFSET UNITYSDK_OFFSET(0x17DCE010)

inline static constexpr unsigned int Class_1_15573AD7DA8230D5_TypeDefinitionIndex = 46080;

class Class_1_15573AD7DA8230D5 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigDamageStaggerLevel** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigDamageStaggerLevel**)Il2CppClass::FromTypeDefinitionIndex(Class_1_15573AD7DA8230D5_TypeDefinitionIndex)->GetStaticField(0x2F6C0);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_15573AD7DA8230D5_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_15573AD7DA8230D5_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_F76B97B9A9C4402E(::MoleMole::Config::AnimatorHitEffect a1, ::System::Int32 a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::AnimatorHitEffect, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_15573AD7DA8230D5_METHOD_1_F76B97B9A9C4402E_OFFSET))(a1, a2, a3);
	}
};
