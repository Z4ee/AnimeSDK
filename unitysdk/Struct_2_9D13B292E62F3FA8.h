#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }

#define STRUCT_2_9D13B292E62F3FA8_METHOD_2_DB6449FB95F85AB2_OFFSET UNITYSDK_OFFSET(0x18B43E20)
#define STRUCT_2_9D13B292E62F3FA8_METHOD_2_F72A3B5D3C75DBD7_OFFSET UNITYSDK_OFFSET(0x885020)
#define STRUCT_2_9D13B292E62F3FA8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x885010)
#define STRUCT_2_9D13B292E62F3FA8__CTOR_OFFSET UNITYSDK_OFFSET(0x884DC0)

inline static constexpr unsigned int Struct_2_9D13B292E62F3FA8_TypeDefinitionIndex = 50812;

struct alignas(8) Struct_2_9D13B292E62F3FA8
{
	::Nap::NapECS::ComponentMask Field_2_1; // 0x10
	::Nap::NapECS::ComponentMask Field_2_0; // 0x50
	::System::Boolean Field_2_7; // 0x90
	::System::Boolean Field_2_6; // 0x91

	::System::Void _ctor(::Nap::NapECS::ComponentMask a1, ::Nap::NapECS::ComponentMask a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::ComponentMask, ::Nap::NapECS::ComponentMask, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_9D13B292E62F3FA8__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::Nap::NapECS::EcsFilter* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_9D13B292E62F3FA8__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F72A3B5D3C75DBD7(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + STRUCT_2_9D13B292E62F3FA8_METHOD_2_F72A3B5D3C75DBD7_OFFSET))(this, a1);
	}

	static ::Struct_2_9D13B292E62F3FA8 Method_2_DB6449FB95F85AB2(::Nap::NapECS::EcsFilter* a1)
	{
		return ((::Struct_2_9D13B292E62F3FA8(*)(::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + STRUCT_2_9D13B292E62F3FA8_METHOD_2_DB6449FB95F85AB2_OFFSET))(a1);
	}
};
