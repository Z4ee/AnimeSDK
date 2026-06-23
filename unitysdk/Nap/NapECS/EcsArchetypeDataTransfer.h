#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Nap::NapECS { class EcsArchetype; }

#define NAP_NAPECS_ECSARCHETYPEDATATRANSFER_FLUSH_OFFSET UNITYSDK_OFFSET(0x90D140)
#define NAP_NAPECS_ECSARCHETYPEDATATRANSFER__CTOR_OFFSET UNITYSDK_OFFSET(0x90D120)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsArchetypeDataTransfer_TypeDefinitionIndex = 37378;

	struct alignas(8) EcsArchetypeDataTransfer
	{
		::Nap::NapECS::EcsArchetype* from; // 0x10
		::Nap::NapECS::EcsArchetype* target; // 0x18
		::System::Int32 fromIndex; // 0x20
		::System::Int32 targetIndex; // 0x24

		::System::Void _ctor(::Nap::NapECS::EcsArchetype* from)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsArchetype*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPEDATATRANSFER__CTOR_OFFSET))(this, from);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPEDATATRANSFER_FLUSH_OFFSET))(this);
		}
	};
}
