#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsComponent; }

#define NAP_NAPECS_ECSFILTERGROUP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C846D70)
#define NAP_NAPECS_ECSFILTERGROUP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C846DB0)
#define NAP_NAPECS_ECSFILTERGROUP___C___CCTOR_B__19_0_OFFSET UNITYSDK_OFFSET(0x1C846DC0)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsFilterGroup___c_TypeDefinitionIndex = 37944;

	class EcsFilterGroup___c : public ::System::Object
	{
	public:
		static ::Nap::NapECS::EcsFilterGroup___c** StaticGet___9()
		{
			return (::Nap::NapECS::EcsFilterGroup___c**)Il2CppClass::FromTypeDefinitionIndex(EcsFilterGroup___c_TypeDefinitionIndex)->GetStaticField(0x2A3C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTERGROUP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTERGROUP___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __cctor_b__19_0(::Nap::NapECS::EcsComponent* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTERGROUP___C___CCTOR_B__19_0_OFFSET))(this, a);
		}
	};
}
