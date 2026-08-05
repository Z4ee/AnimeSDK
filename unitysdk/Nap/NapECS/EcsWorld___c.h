#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsComponent; }
namespace Nap::NapECS { class EcsFilter; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define NAP_NAPECS_ECSWORLD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C856D40)
#define NAP_NAPECS_ECSWORLD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C856D80)
#define NAP_NAPECS_ECSWORLD___C__LINKFILTERARCHETYPE_B__59_0_OFFSET UNITYSDK_OFFSET(0x1C856DB0)
#define NAP_NAPECS_ECSWORLD___C__MODIFYENTITYCOMPONENTSINTERNAL_B__53_0_OFFSET UNITYSDK_OFFSET(0x1C856D90)
#define NAP_NAPECS_ECSWORLD___C__MODIFYENTITYCOMPONENTSINTERNAL_B__53_1_OFFSET UNITYSDK_OFFSET(0x1C856DA0)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsWorld___c_TypeDefinitionIndex = 37978;

	class EcsWorld___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::Nap::NapECS::EcsComponent*>** StaticGet___9__53_1()
		{
			return (::System::Predicate_1<::Nap::NapECS::EcsComponent*>**)Il2CppClass::FromTypeDefinitionIndex(EcsWorld___c_TypeDefinitionIndex)->GetStaticField(0x2A3E0);
		}
		static ::System::Predicate_1<::Nap::NapECS::EcsComponent*>** StaticGet___9__53_0()
		{
			return (::System::Predicate_1<::Nap::NapECS::EcsComponent*>**)Il2CppClass::FromTypeDefinitionIndex(EcsWorld___c_TypeDefinitionIndex)->GetStaticField(0x2A3E8);
		}
		static ::System::Comparison_1<::Nap::NapECS::EcsFilter*>** StaticGet___9__59_0()
		{
			return (::System::Comparison_1<::Nap::NapECS::EcsFilter*>**)Il2CppClass::FromTypeDefinitionIndex(EcsWorld___c_TypeDefinitionIndex)->GetStaticField(0x2A3F0);
		}
		static ::Nap::NapECS::EcsWorld___c** StaticGet___9()
		{
			return (::Nap::NapECS::EcsWorld___c**)Il2CppClass::FromTypeDefinitionIndex(EcsWorld___c_TypeDefinitionIndex)->GetStaticField(0x2A3F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _ModifyEntityComponentsInternal_b__53_0(::Nap::NapECS::EcsComponent* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD___C__MODIFYENTITYCOMPONENTSINTERNAL_B__53_0_OFFSET))(this, a);
		}

		::System::Boolean _ModifyEntityComponentsInternal_b__53_1(::Nap::NapECS::EcsComponent* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD___C__MODIFYENTITYCOMPONENTSINTERNAL_B__53_1_OFFSET))(this, a);
		}

		::System::Int32 _LinkFilterArchetype_b__59_0(::Nap::NapECS::EcsFilter* a, ::Nap::NapECS::EcsFilter* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Nap::NapECS::EcsFilter*, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD___C__LINKFILTERARCHETYPE_B__59_0_OFFSET))(this, a, b);
		}
	};
}
