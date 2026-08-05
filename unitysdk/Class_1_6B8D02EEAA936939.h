#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9A6EB2DDAF7C08FF.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_259;
class Class_0_16E4307DCC419505_268;
namespace MoleMole { class MonoTriggerEventDispatcher; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_1_6B8D02EEAA936939_TypeDefinitionIndex = 83737;

template <typename TCustomAction>
class Class_1_6B8D02EEAA936939 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x0
	::System::Nullable_1<TCustomAction> Field_1_7; // 0x0
	::System::Nullable_1<TCustomAction> Field_1_6; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_5; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::MonoTriggerEventDispatcher*>* Field_1_4; // 0x0
	::System::Boolean Field_1_11; // 0x0
	::Class_0_16E4307DCC419505_268* Field_1_10; // 0x0
	::Class_0_16E4307DCC419505_259* Field_1_9; // 0x0
};
