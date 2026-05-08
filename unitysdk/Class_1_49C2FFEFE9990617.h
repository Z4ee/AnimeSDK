#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGamepadTriggerEffect; }
namespace MoleMole::Config { class GamepadTriggerEffectEntryBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_49C2FFEFE9990617_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x112D5540)
#define CLASS_1_49C2FFEFE9990617_METHOD_1_1930B80CD8CDA11D_OFFSET UNITYSDK_OFFSET(0x112D57A0)
#define CLASS_1_49C2FFEFE9990617_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x112D5450)
#define CLASS_1_49C2FFEFE9990617_METHOD_1_F83FCDA12599C06B_OFFSET UNITYSDK_OFFSET(0x112D5750)

inline static constexpr unsigned int Class_1_49C2FFEFE9990617_TypeDefinitionIndex = 44481;

class Class_1_49C2FFEFE9990617 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigGamepadTriggerEffect** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigGamepadTriggerEffect**)Il2CppClass::FromTypeDefinitionIndex(Class_1_49C2FFEFE9990617_TypeDefinitionIndex)->GetStaticField(0x2F8E0);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_49C2FFEFE9990617_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigGamepadTriggerEffect* Method_1_F83FCDA12599C06B()
	{
		return ((::MoleMole::Config::ConfigGamepadTriggerEffect*(*)())((::PBYTE)hIl2Cpp + CLASS_1_49C2FFEFE9990617_METHOD_1_F83FCDA12599C06B_OFFSET))();
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_49C2FFEFE9990617_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::GamepadTriggerEffectEntryBase* Method_1_1930B80CD8CDA11D(::System::String* a1)
	{
		return ((::MoleMole::Config::GamepadTriggerEffectEntryBase*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_49C2FFEFE9990617_METHOD_1_1930B80CD8CDA11D_OFFSET))(a1);
	}
};
