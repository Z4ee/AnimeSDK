#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T1, typename T2, typename T3, typename T4> class PromiseHelpers___c__2_4; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Tuple_4; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T1, typename T2> class Tuple_2; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int PromiseHelpers___c__2_4_TypeDefinitionIndex = 9561;

	template <typename T1, typename T2, typename T3, typename T4>
	class PromiseHelpers___c__2_4 : public ::System::Object
	{
	public:
		static ::RPG::Client::Promises::PromiseHelpers___c__2_4<T1, T2, T3, T4>** StaticGet___9()
		{
			return (::RPG::Client::Promises::PromiseHelpers___c__2_4<T1, T2, T3, T4>**)Il2CppClass::FromTypeDefinitionIndex(PromiseHelpers___c__2_4_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Tuple_2<::System::Tuple_2<T1, T2>*, ::System::Tuple_2<T3, T4>*>*, ::System::Tuple_4<T1, T2, T3, T4>*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::Tuple_2<::System::Tuple_2<T1, T2>*, ::System::Tuple_2<T3, T4>*>*, ::System::Tuple_4<T1, T2, T3, T4>*>**)Il2CppClass::FromTypeDefinitionIndex(PromiseHelpers___c__2_4_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
