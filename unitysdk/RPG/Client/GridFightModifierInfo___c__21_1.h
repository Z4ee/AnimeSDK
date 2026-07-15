#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameModifier; }
namespace RPG::Client { template <typename T> class GridFightModifierInfo___c__21_1; }
namespace System { template <typename T> class Predicate_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierInfo___c__21_1_TypeDefinitionIndex = 62116;

	template <typename T>
	class GridFightModifierInfo___c__21_1 : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightModifierInfo___c__21_1<T>** StaticGet___9()
		{
			return (::RPG::Client::GridFightModifierInfo___c__21_1<T>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModifierInfo___c__21_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Predicate_1<::RPG::Client::GridFightGameModifier*>** StaticGet___9__21_0()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightGameModifier*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModifierInfo___c__21_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
