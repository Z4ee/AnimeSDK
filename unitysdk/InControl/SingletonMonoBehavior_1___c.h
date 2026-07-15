#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace InControl { template <typename T> class SingletonMonoBehavior_1___c; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

namespace InControl
{
	inline static constexpr unsigned int SingletonMonoBehavior_1___c_TypeDefinitionIndex = 38759;

	template <typename TComponent>
	class SingletonMonoBehavior_1___c : public ::System::Object
	{
	public:
		static ::InControl::SingletonMonoBehavior_1___c<TComponent>** StaticGet___9()
		{
			return (::InControl::SingletonMonoBehavior_1___c<TComponent>**)Il2CppClass::FromTypeDefinitionIndex(SingletonMonoBehavior_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Comparison_1<TComponent>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<TComponent>**)Il2CppClass::FromTypeDefinitionIndex(SingletonMonoBehavior_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<TComponent, ::System::Boolean>** StaticGet___9__14_0()
		{
			return (::System::Func_2<TComponent, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SingletonMonoBehavior_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
