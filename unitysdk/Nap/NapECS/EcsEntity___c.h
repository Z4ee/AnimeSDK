#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsComponent; }

#define NAP_NAPECS_ECSENTITY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C841690)
#define NAP_NAPECS_ECSENTITY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8416D0)
#define NAP_NAPECS_ECSENTITY___C___CCTOR_B__110_0_OFFSET UNITYSDK_OFFSET(0x1C8416E0)
#define NAP_NAPECS_ECSENTITY___C___CCTOR_B__110_1_OFFSET UNITYSDK_OFFSET(0x1C8416F0)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsEntity___c_TypeDefinitionIndex = 38000;

	class EcsEntity___c : public ::System::Object
	{
	public:
		static ::Nap::NapECS::EcsEntity___c** StaticGet___9()
		{
			return (::Nap::NapECS::EcsEntity___c**)Il2CppClass::FromTypeDefinitionIndex(EcsEntity___c_TypeDefinitionIndex)->GetStaticField(0x2A390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __cctor_b__110_0(::Nap::NapECS::EcsComponent* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY___C___CCTOR_B__110_0_OFFSET))(this, a);
		}

		::System::Int32 __cctor_b__110_1(::Nap::NapECS::EcsComponent* a, ::Nap::NapECS::EcsComponent* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Nap::NapECS::EcsComponent*, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY___C___CCTOR_B__110_1_OFFSET))(this, a, b);
		}
	};
}
