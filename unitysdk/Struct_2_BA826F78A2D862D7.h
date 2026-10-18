#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_409;
class Class_0_16E4307DCC419505_410;
class Class_1_410757201D519965;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

inline static constexpr unsigned int Struct_2_BA826F78A2D862D7_TypeDefinitionIndex = 44114;

template <typename TViewModel, typename TMessage>
struct Struct_2_BA826F78A2D862D7
{
	::System::Func_3<::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_410*>*>* HNPBPCDOLHI; // 0x0
	TViewModel _ViewModel_k__BackingField; // 0x0
	TMessage _Message_k__BackingField; // 0x0
	::Class_0_16E4307DCC419505_409* _Messenger_k__BackingField; // 0x0
	::Class_1_410757201D519965* _Blackboard_k__BackingField; // 0x0
};
