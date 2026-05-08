#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsComponent; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define NAP_NAPECS_ECSENTITY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x192D3780)
#define NAP_NAPECS_ECSENTITY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x192D37C0)
#define NAP_NAPECS_ECSENTITY___C__ONUPDATEARCHETYPE_B__67_0_OFFSET UNITYSDK_OFFSET(0x192D37D0)
#define NAP_NAPECS_ECSENTITY___C__ONUPDATEARCHETYPE_B__67_1_OFFSET UNITYSDK_OFFSET(0x192D37E0)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsEntity___c_TypeDefinitionIndex = 35742;

	class EcsEntity___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Nap::NapECS::EcsComponent*>** StaticGet___9__67_1()
		{
			return (::System::Comparison_1<::Nap::NapECS::EcsComponent*>**)Il2CppClass::FromTypeDefinitionIndex(EcsEntity___c_TypeDefinitionIndex)->GetStaticField(0x26DF0);
		}
		static ::System::Predicate_1<::Nap::NapECS::EcsComponent*>** StaticGet___9__67_0()
		{
			return (::System::Predicate_1<::Nap::NapECS::EcsComponent*>**)Il2CppClass::FromTypeDefinitionIndex(EcsEntity___c_TypeDefinitionIndex)->GetStaticField(0x26DF8);
		}
		static ::Nap::NapECS::EcsEntity___c** StaticGet___9()
		{
			return (::Nap::NapECS::EcsEntity___c**)Il2CppClass::FromTypeDefinitionIndex(EcsEntity___c_TypeDefinitionIndex)->GetStaticField(0x26E00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUpdateArchetype_b__67_0(::Nap::NapECS::EcsComponent* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY___C__ONUPDATEARCHETYPE_B__67_0_OFFSET))(this, a);
		}

		::System::Int32 _OnUpdateArchetype_b__67_1(::Nap::NapECS::EcsComponent* a, ::Nap::NapECS::EcsComponent* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Nap::NapECS::EcsComponent*, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY___C__ONUPDATEARCHETYPE_B__67_1_OFFSET))(this, a, b);
		}
	};
}
