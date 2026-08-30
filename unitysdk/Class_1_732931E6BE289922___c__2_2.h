#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { template <typename T1, typename T2> class UnityAction_2; }
template <typename T1, typename T2> class Class_1_732931E6BE289922___c__2_2;

inline static constexpr unsigned int Class_1_732931E6BE289922___c__2_2_TypeDefinitionIndex = 50312;

template <typename T0, typename T1>
class Class_1_732931E6BE289922___c__2_2 : public ::System::Object
{
public:
	static ::Class_1_732931E6BE289922___c__2_2<T0, T1>** StaticGet___9()
	{
		return (::Class_1_732931E6BE289922___c__2_2<T0, T1>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_732931E6BE289922___c__2_2_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::System::Action_1<::System::ValueTuple_2<T0, T1>>*, ::UnityEngine::Events::UnityAction_2<T0, T1>*>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::System::Action_1<::System::ValueTuple_2<T0, T1>>*, ::UnityEngine::Events::UnityAction_2<T0, T1>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_732931E6BE289922___c__2_2_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};
