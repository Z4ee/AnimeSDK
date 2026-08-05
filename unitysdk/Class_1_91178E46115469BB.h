#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { template <typename T> class EcsCallbackAction_1; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_91178E46115469BB_METHOD_1_D25FEA4CBE419A93_OFFSET UNITYSDK_OFFSET(0x11BE1950)
#define CLASS_1_91178E46115469BB_METHOD_1_DAD17F595B040FAB_OFFSET UNITYSDK_OFFSET(0x11BE16C0)
#define CLASS_1_91178E46115469BB_METHOD_1_E00DC842E87388BD_OFFSET UNITYSDK_OFFSET(0x11BE1780)
#define CLASS_1_91178E46115469BB__CTOR_OFFSET UNITYSDK_OFFSET(0x11BE1640)

inline static constexpr unsigned int Class_1_91178E46115469BB_TypeDefinitionIndex = 63320;

class Class_1_91178E46115469BB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::MoleMole::Battle::Entity*>*>*>* Field_1_7; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91178E46115469BB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DAD17F595B040FAB(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_91178E46115469BB_METHOD_1_DAD17F595B040FAB_OFFSET))(this, a1);
	}

	::System::Void Method_1_E00DC842E87388BD(::System::Action_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_91178E46115469BB_METHOD_1_E00DC842E87388BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_D25FEA4CBE419A93(::System::Action_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_91178E46115469BB_METHOD_1_D25FEA4CBE419A93_OFFSET))(this, a1);
	}
};
