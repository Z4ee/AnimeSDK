#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BA826F78A2D862D7.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_412;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
template <typename T1, typename T2> class Class_1_E17BF4EBE72A7203;

inline static constexpr unsigned int Class_1_605B175AA3E4038E_TypeDefinitionIndex = 44125;

template <typename TViewModel, typename TMessage>
class Class_1_605B175AA3E4038E : public ::System::Object
{
public:
	::System::String* _Key_k__BackingField; // 0x0
	::System::Func_2<::Struct_2_BA826F78A2D862D7<TViewModel, TMessage>, ::System::Object*>* _ValueSelector_k__BackingField; // 0x0
};
