#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EF14D1B03392412E;
class Class_2_B9E8C2EEAA5C96EC;
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_1_EF14D1B03392412E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4C38B0)
#define CLASS_1_EF14D1B03392412E___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB4C38E0)
#define CLASS_1_EF14D1B03392412E___C___CREATETRIGGER_B__4_0_OFFSET UNITYSDK_OFFSET(0xB4C38F0)

inline static constexpr unsigned int Class_1_EF14D1B03392412E___c_TypeDefinitionIndex = 76652;

class Class_1_EF14D1B03392412E___c : public ::System::Object
{
public:
	static ::Class_1_EF14D1B03392412E___c** StaticGet___9()
	{
		return (::Class_1_EF14D1B03392412E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF14D1B03392412E___c_TypeDefinitionIndex)->GetStaticField(0x413E0);
	}
	static ::System::Action_3<::Class_1_EF14D1B03392412E*, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::LittleGameEvent*>** StaticGet___9__4_0()
	{
		return (::System::Action_3<::Class_1_EF14D1B03392412E*, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::LittleGameEvent*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF14D1B03392412E___c_TypeDefinitionIndex)->GetStaticField(0x413E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EF14D1B03392412E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF14D1B03392412E___C__CTOR_OFFSET))(this);
	}

	::System::Void __CreateTrigger_b__4_0(::Class_1_EF14D1B03392412E* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::RPG::GameCore::LittleGameEvent* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF14D1B03392412E*, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::LittleGameEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF14D1B03392412E___C___CREATETRIGGER_B__4_0_OFFSET))(this, a1, a2, a3);
	}
};
