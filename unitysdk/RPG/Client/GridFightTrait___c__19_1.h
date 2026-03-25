#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IGridFightTraitEffect; }
namespace RPG::Client { template <typename T> class GridFightTrait___c__19_1; }
namespace System { template <typename T> class Predicate_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrait___c__19_1_TypeDefinitionIndex = 53112;

	template <typename T>
	class GridFightTrait___c__19_1 : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightTrait___c__19_1<T>** StaticGet___9()
		{
			return (::RPG::Client::GridFightTrait___c__19_1<T>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTrait___c__19_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Predicate_1<::RPG::Client::IGridFightTraitEffect*>** StaticGet___9__19_0()
		{
			return (::System::Predicate_1<::RPG::Client::IGridFightTraitEffect*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTrait___c__19_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
