#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BA826F78A2D862D7.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_412;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Animation; }
template <typename T1, typename T2> class Class_1_E17BF4EBE72A7203;

inline static constexpr unsigned int Class_1_8B9A5F3644402816_TypeDefinitionIndex = 49743;

template <typename TViewModel, typename TMessage>
class Class_1_8B9A5F3644402816 : public ::System::Object
{
public:
	::UnityEngine::Animation* _Animation_k__BackingField; // 0x0
	::System::Func_2<::Struct_2_BA826F78A2D862D7<TViewModel, TMessage>, ::System::String*>* _ClipSelector_k__BackingField; // 0x0
};
