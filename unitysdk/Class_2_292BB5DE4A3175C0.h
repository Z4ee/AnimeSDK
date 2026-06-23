#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsFilter.h"

namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_292BB5DE4A3175C0__CTOR_1_OFFSET UNITYSDK_OFFSET(0x140F7150)
#define CLASS_2_292BB5DE4A3175C0__CTOR_OFFSET UNITYSDK_OFFSET(0x140EBCF0)

inline static constexpr unsigned int Class_2_292BB5DE4A3175C0_TypeDefinitionIndex = 48724;

class Class_2_292BB5DE4A3175C0 : public ::Nap::NapECS::EcsFilter
{
public:
	::System::Void _ctor(::Nap::NapECS::EcsWorld* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_292BB5DE4A3175C0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Nap::NapECS::EcsWorld* a1, ::System::Action_1<::Nap::NapECS::EcsEntity*>* a2, ::System::Action_1<::Nap::NapECS::EcsEntity*>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::Action_1<::Nap::NapECS::EcsEntity*>*, ::System::Action_1<::Nap::NapECS::EcsEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_292BB5DE4A3175C0__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}
};
