#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_0_16E4307DCC419505_336;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class InfectModifier; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D6FDAF436C08846B_METHOD_3_6BEC93430EEEE046_OFFSET UNITYSDK_OFFSET(0x113A44B0)
#define CLASS_3_D6FDAF436C08846B_METHOD_3_BC6AD13E09075B8C_OFFSET UNITYSDK_OFFSET(0x113A4B60)
#define CLASS_3_D6FDAF436C08846B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x113A38E0)
#define CLASS_3_D6FDAF436C08846B__CTOR_OFFSET UNITYSDK_OFFSET(0x113A38B0)

inline static constexpr unsigned int Class_3_D6FDAF436C08846B_TypeDefinitionIndex = 44100;

class Class_3_D6FDAF436C08846B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::InfectModifier*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InfectModifier* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InfectModifier*))((::PBYTE)hIl2Cpp + CLASS_3_D6FDAF436C08846B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6FDAF436C08846B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_BC6AD13E09075B8C(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_D6FDAF436C08846B_METHOD_3_BC6AD13E09075B8C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6BEC93430EEEE046(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_336*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_336*>*))((::PBYTE)hIl2Cpp + CLASS_3_D6FDAF436C08846B_METHOD_3_6BEC93430EEEE046_OFFSET))(this, a1);
	}
};
