#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BA826F78A2D862D7.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_412;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Transform; }
template <typename T1, typename T2> class Class_1_E17BF4EBE72A7203;

inline static constexpr unsigned int Class_1_E165B1EA4D4F3140_TypeDefinitionIndex = 49742;

template <typename TViewModel, typename TMessage>
class Class_1_E165B1EA4D4F3140 : public ::System::Object
{
public:
	::System::Func_2<::Struct_2_BA826F78A2D862D7<TViewModel, TMessage>, ::UnityEngine::Transform*>* _FromSelector_k__BackingField; // 0x0
	::System::Func_2<::Struct_2_BA826F78A2D862D7<TViewModel, TMessage>, ::UnityEngine::Transform*>* _ToSelector_k__BackingField; // 0x0
	::System::Func_2<::Struct_2_BA826F78A2D862D7<TViewModel, TMessage>, ::System::Single>* _DurationSelector_k__BackingField; // 0x0
};
