#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsComponentMetaInfo_CreateComponentList; }
namespace Nap::NapECS { class IEcsComponentList; }
namespace Nap::NapECS { template <typename T1, typename T2> class EcsComponentMeta_1___c__13_1; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsComponentMeta_1___c__13_1_TypeDefinitionIndex = 38019;

	template <typename T, typename TComp>
	class EcsComponentMeta_1___c__13_1 : public ::System::Object
	{
	public:
		static ::Nap::NapECS::EcsComponentMeta_1___c__13_1<T, TComp>** StaticGet___9()
		{
			return (::Nap::NapECS::EcsComponentMeta_1___c__13_1<T, TComp>**)Il2CppClass::FromTypeDefinitionIndex(EcsComponentMeta_1___c__13_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Nap::NapECS::EcsComponentMetaInfo_CreateComponentList** StaticGet___9__13_0()
		{
			return (::Nap::NapECS::EcsComponentMetaInfo_CreateComponentList**)Il2CppClass::FromTypeDefinitionIndex(EcsComponentMeta_1___c__13_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
