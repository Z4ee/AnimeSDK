#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BA826F78A2D862D7.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_409;
class Class_0_16E4307DCC419505_410;
class Class_1_410757201D519965;
class Class_1_8709217D255ACE0E;
class Class_1_9747C838F50B576B;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

inline static constexpr unsigned int Struct_2_C54AF76392E17AE0_TypeDefinitionIndex = 44110;

template <typename TViewModel, typename TMessage>
struct Struct_2_C54AF76392E17AE0
{
	TViewModel _ViewModel_k__BackingField; // 0x0
	TMessage _Message_k__BackingField; // 0x0
	::Class_0_16E4307DCC419505_409* _Messenger_k__BackingField; // 0x0
	::Class_1_8709217D255ACE0E* _Session_k__BackingField; // 0x0
	::Struct_2_BA826F78A2D862D7<TViewModel, TMessage> _Scope_k__BackingField; // 0x0
	::System::Func_3<::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_410*>*>* HNPBPCDOLHI; // 0x0
};
