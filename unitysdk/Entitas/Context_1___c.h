#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class Context_1___c; }
namespace Entitas { template <typename T> class GroupChanged_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Entitas
{
	inline static constexpr unsigned int Context_1___c_TypeDefinitionIndex = 9650;

	template <typename TEntity>
	class Context_1___c : public ::System::Object
	{
	public:
		static ::Entitas::Context_1___c<TEntity>** StaticGet___9()
		{
			return (::Entitas::Context_1___c<TEntity>**)Il2CppClass::FromTypeDefinitionIndex(Context_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__44_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Context_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_1<::System::Collections::Generic::List_1<::Entitas::GroupChanged_1<TEntity>*>*>** StaticGet___9__44_1()
		{
			return (::System::Func_1<::System::Collections::Generic::List_1<::Entitas::GroupChanged_1<TEntity>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Context_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Collections::Generic::List_1<::Entitas::GroupChanged_1<TEntity>*>*>** StaticGet___9__44_2()
		{
			return (::System::Action_1<::System::Collections::Generic::List_1<::Entitas::GroupChanged_1<TEntity>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Context_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
