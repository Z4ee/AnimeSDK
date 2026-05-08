#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }

#define STRUCT_2_9D13B292E62F3FA8_METHOD_2_BFBB04EEF1D2806B_OFFSET UNITYSDK_OFFSET(0x1536E5A0)
#define STRUCT_2_9D13B292E62F3FA8_METHOD_2_F5E78B02726AA64E_OFFSET UNITYSDK_OFFSET(0x79D2B0)
#define STRUCT_2_9D13B292E62F3FA8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x755BA0)
#define STRUCT_2_9D13B292E62F3FA8__CTOR_OFFSET UNITYSDK_OFFSET(0x755950)

inline static constexpr unsigned int Struct_2_9D13B292E62F3FA8_TypeDefinitionIndex = 48191;

struct alignas(8) Struct_2_9D13B292E62F3FA8
{
	::Nap::NapECS::ComponentMask Field_2_0; // 0x10
	::Nap::NapECS::ComponentMask Field_2_1; // 0x50
	::System::Boolean Field_2_2; // 0x90
	::System::Boolean Field_2_3; // 0x91

	::System::Void _ctor(::Nap::NapECS::ComponentMask a1, ::Nap::NapECS::ComponentMask a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::ComponentMask, ::Nap::NapECS::ComponentMask, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_9D13B292E62F3FA8__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::Nap::NapECS::EcsFilter* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_9D13B292E62F3FA8__CTOR_1_OFFSET))(this, a1, a2);
	}

	static ::Struct_2_9D13B292E62F3FA8 Method_2_BFBB04EEF1D2806B(::Nap::NapECS::EcsFilter* a1)
	{
		return ((::Struct_2_9D13B292E62F3FA8(*)(::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + STRUCT_2_9D13B292E62F3FA8_METHOD_2_BFBB04EEF1D2806B_OFFSET))(a1);
	}

	::System::Boolean Method_2_F5E78B02726AA64E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + STRUCT_2_9D13B292E62F3FA8_METHOD_2_F5E78B02726AA64E_OFFSET))(this, a1);
	}
};
