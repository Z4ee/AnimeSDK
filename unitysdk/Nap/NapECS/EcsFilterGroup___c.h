#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsComponent; }
namespace System { template <typename T> class Predicate_1; }

#define NAP_NAPECS_ECSFILTERGROUP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x192D8F10)
#define NAP_NAPECS_ECSFILTERGROUP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x192D8F50)
#define NAP_NAPECS_ECSFILTERGROUP___C__REFRESH_B__14_0_OFFSET UNITYSDK_OFFSET(0x192D8F60)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsFilterGroup___c_TypeDefinitionIndex = 35669;

	class EcsFilterGroup___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::Nap::NapECS::EcsComponent*>** StaticGet___9__14_0()
		{
			return (::System::Predicate_1<::Nap::NapECS::EcsComponent*>**)Il2CppClass::FromTypeDefinitionIndex(EcsFilterGroup___c_TypeDefinitionIndex)->GetStaticField(0x26E20);
		}
		static ::Nap::NapECS::EcsFilterGroup___c** StaticGet___9()
		{
			return (::Nap::NapECS::EcsFilterGroup___c**)Il2CppClass::FromTypeDefinitionIndex(EcsFilterGroup___c_TypeDefinitionIndex)->GetStaticField(0x26E28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTERGROUP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTERGROUP___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _Refresh_b__14_0(::Nap::NapECS::EcsComponent* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTERGROUP___C__REFRESH_B__14_0_OFFSET))(this, a);
		}
	};
}
