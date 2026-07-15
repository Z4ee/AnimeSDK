#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IGridFightTraitEffect; }
namespace RPG::Client { template <typename T> class GridFightTrait___c__18_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrait___c__18_1_TypeDefinitionIndex = 62503;

	template <typename T>
	class GridFightTrait___c__18_1 : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightTrait___c__18_1<T>** StaticGet___9()
		{
			return (::RPG::Client::GridFightTrait___c__18_1<T>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTrait___c__18_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::System::Boolean>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTrait___c__18_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
