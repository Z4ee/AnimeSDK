#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { template <typename T> class EcsCallbackAction_1; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_A9FD2E04816D2D6B_CLASS_1_D21BE973AB9FBD18_METHOD_1_5F49ECADE488D7C3_OFFSET UNITYSDK_OFFSET(0x16233050)
#define CLASS_1_A9FD2E04816D2D6B_CLASS_1_D21BE973AB9FBD18__CTOR_OFFSET UNITYSDK_OFFSET(0x16233040)

inline static constexpr unsigned int Class_1_A9FD2E04816D2D6B_Class_1_D21BE973AB9FBD18_TypeDefinitionIndex = 56723;

class Class_1_A9FD2E04816D2D6B_Class_1_D21BE973AB9FBD18 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Battle::Entity*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9FD2E04816D2D6B_CLASS_1_D21BE973AB9FBD18__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_5F49ECADE488D7C3(::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::MoleMole::Battle::Entity*>*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::MoleMole::Battle::Entity*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_A9FD2E04816D2D6B_CLASS_1_D21BE973AB9FBD18_METHOD_1_5F49ECADE488D7C3_OFFSET))(this, a1);
	}
};
