#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { template <typename T> class GroupSingleEntityException_1___c; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Entitas
{
	inline static constexpr unsigned int GroupSingleEntityException_1___c_TypeDefinitionIndex = 9694;

	template <typename TEntity>
	class GroupSingleEntityException_1___c : public ::System::Object
	{
	public:
		static ::Entitas::GroupSingleEntityException_1___c<TEntity>** StaticGet___9()
		{
			return (::Entitas::GroupSingleEntityException_1___c<TEntity>**)Il2CppClass::FromTypeDefinitionIndex(GroupSingleEntityException_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<TEntity, ::System::String*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<TEntity, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GroupSingleEntityException_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
