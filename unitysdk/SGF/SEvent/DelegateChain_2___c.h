#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SGF::SEvent { template <typename T1, typename T2> class DelegateChain_2___c; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace SGF::SEvent
{
	inline static constexpr unsigned int DelegateChain_2___c_TypeDefinitionIndex = 7892;

	template <typename TInput, typename TOutput>
	class DelegateChain_2___c : public ::System::Object
	{
	public:
		static ::SGF::SEvent::DelegateChain_2___c<TInput, TOutput>** StaticGet___9()
		{
			return (::SGF::SEvent::DelegateChain_2___c<TInput, TOutput>**)Il2CppClass::FromTypeDefinitionIndex(DelegateChain_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<TOutput, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<TOutput, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DelegateChain_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<TOutput, ::System::Boolean>** StaticGet___9__3_1()
		{
			return (::System::Func_2<TOutput, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DelegateChain_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
