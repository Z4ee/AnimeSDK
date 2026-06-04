#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_0_16E4307DCC419505_356;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class InfectModifier; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D6FDAF436C08846B_METHOD_3_13C2C03BF999E28F_OFFSET UNITYSDK_OFFSET(0x1191BA10)
#define CLASS_3_D6FDAF436C08846B_METHOD_3_BC6AD13E09075B8C_OFFSET UNITYSDK_OFFSET(0x1191C290)
#define CLASS_3_D6FDAF436C08846B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1191AE30)
#define CLASS_3_D6FDAF436C08846B__CTOR_OFFSET UNITYSDK_OFFSET(0x1191AE00)

inline static constexpr unsigned int Class_3_D6FDAF436C08846B_TypeDefinitionIndex = 51473;

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

	::System::Void Method_3_13C2C03BF999E28F(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_356*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_356*>*))((::PBYTE)hIl2Cpp + CLASS_3_D6FDAF436C08846B_METHOD_3_13C2C03BF999E28F_OFFSET))(this, a1);
	}
};
