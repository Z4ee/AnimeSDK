#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { template <typename T> class EcsCallbackAction_1; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A9FD2E04816D2D6B_METHOD_1_A5CC115F2938415E_OFFSET UNITYSDK_OFFSET(0x121CEAF0)
#define CLASS_1_A9FD2E04816D2D6B_METHOD_1_D25FEA4CBE419A93_OFFSET UNITYSDK_OFFSET(0x121CECA0)
#define CLASS_1_A9FD2E04816D2D6B_METHOD_1_DAD17F595B040FAB_OFFSET UNITYSDK_OFFSET(0x121CEA30)
#define CLASS_1_A9FD2E04816D2D6B__CTOR_OFFSET UNITYSDK_OFFSET(0x121CE9B0)

inline static constexpr unsigned int Class_1_A9FD2E04816D2D6B_TypeDefinitionIndex = 52492;

class Class_1_A9FD2E04816D2D6B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::MoleMole::Battle::Entity*>*>*>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9FD2E04816D2D6B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DAD17F595B040FAB(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_A9FD2E04816D2D6B_METHOD_1_DAD17F595B040FAB_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5CC115F2938415E(::System::Action_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_A9FD2E04816D2D6B_METHOD_1_A5CC115F2938415E_OFFSET))(this, a1);
	}

	::System::Void Method_1_D25FEA4CBE419A93(::System::Action_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_A9FD2E04816D2D6B_METHOD_1_D25FEA4CBE419A93_OFFSET))(this, a1);
	}
};
