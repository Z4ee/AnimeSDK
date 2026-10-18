#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BA826F78A2D862D7.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_410;
class Class_0_16E4307DCC419505_412;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_E17BF4EBE72A7203;

inline static constexpr unsigned int Class_1_F62E7D36430E4EEE_TypeDefinitionIndex = 44141;

template <typename TViewModel, typename TMessage>
class Class_1_F62E7D36430E4EEE : public ::System::Object
{
public:
	::System::String* _CueName_k__BackingField; // 0x0
	::System::Func_2<::Struct_2_BA826F78A2D862D7<TViewModel, TMessage>, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* _ViewModelsSelector_k__BackingField; // 0x0
};
