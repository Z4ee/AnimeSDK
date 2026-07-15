#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T1, typename T2, typename T3> class PromiseHelpers___c__1_3; }
namespace System { template <typename T1, typename T2, typename T3> class Tuple_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T1, typename T2> class Tuple_2; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int PromiseHelpers___c__1_3_TypeDefinitionIndex = 9560;

	template <typename T1, typename T2, typename T3>
	class PromiseHelpers___c__1_3 : public ::System::Object
	{
	public:
		static ::RPG::Client::Promises::PromiseHelpers___c__1_3<T1, T2, T3>** StaticGet___9()
		{
			return (::RPG::Client::Promises::PromiseHelpers___c__1_3<T1, T2, T3>**)Il2CppClass::FromTypeDefinitionIndex(PromiseHelpers___c__1_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Tuple_2<::System::Tuple_2<T1, T2>*, T3>*, ::System::Tuple_3<T1, T2, T3>*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Tuple_2<::System::Tuple_2<T1, T2>*, T3>*, ::System::Tuple_3<T1, T2, T3>*>**)Il2CppClass::FromTypeDefinitionIndex(PromiseHelpers___c__1_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
