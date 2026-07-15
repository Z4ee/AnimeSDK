#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class IGridFightTraitEffect; }
namespace RPG::Client { template <typename T> class GridFightTraitComponent___c__7_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitComponent___c__7_1_TypeDefinitionIndex = 62513;

	template <typename T>
	class GridFightTraitComponent___c__7_1 : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightTraitComponent___c__7_1<T>** StaticGet___9()
		{
			return (::RPG::Client::GridFightTraitComponent___c__7_1<T>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitComponent___c__7_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IGridFightTraitEffect*>*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IGridFightTraitEffect*>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitComponent___c__7_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::System::Boolean>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitComponent___c__7_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
