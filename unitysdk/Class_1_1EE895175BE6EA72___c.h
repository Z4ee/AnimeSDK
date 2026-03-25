#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EE895175BE6EA72;
class Class_2_9DD8A46984F1AFFD;
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_1_1EE895175BE6EA72___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11055D80)
#define CLASS_1_1EE895175BE6EA72___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11055DB0)
#define CLASS_1_1EE895175BE6EA72___C___CREATETRIGGER_B__4_0_OFFSET UNITYSDK_OFFSET(0x11055DC0)

inline static constexpr unsigned int Class_1_1EE895175BE6EA72___c_TypeDefinitionIndex = 62793;

class Class_1_1EE895175BE6EA72___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_1_1EE895175BE6EA72*, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::LittleGameEvent*>** StaticGet___9__4_0()
	{
		return (::System::Action_3<::Class_1_1EE895175BE6EA72*, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::LittleGameEvent*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1EE895175BE6EA72___c_TypeDefinitionIndex)->GetStaticField(0x2F9C0);
	}
	static ::Class_1_1EE895175BE6EA72___c** StaticGet___9()
	{
		return (::Class_1_1EE895175BE6EA72___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1EE895175BE6EA72___c_TypeDefinitionIndex)->GetStaticField(0x2F9C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1EE895175BE6EA72___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EE895175BE6EA72___C__CTOR_OFFSET))(this);
	}

	::System::Void __CreateTrigger_b__4_0(::Class_1_1EE895175BE6EA72* self, ::Class_2_9DD8A46984F1AFFD* ent, ::RPG::GameCore::LittleGameEvent* ev)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1EE895175BE6EA72*, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::LittleGameEvent*))((::PBYTE)hIl2Cpp + CLASS_1_1EE895175BE6EA72___C___CREATETRIGGER_B__4_0_OFFSET))(this, self, ent, ev);
	}
};
