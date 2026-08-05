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
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_1_6D231F65FF356459_TypeDefinitionIndex = 63633;

template <typename TCustomAction, typename TTriggerEntityPolicy>
class Class_1_6D231F65FF356459 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x0
	::System::Nullable_1<TCustomAction> Field_1_1; // 0x0
	::System::Nullable_1<TCustomAction> Field_1_0; // 0x0
	::System::Boolean Field_1_7; // 0x0
	::System::Boolean Field_1_6; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_5; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* Field_1_4; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_11; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::MonoTriggerEventDispatcher*>* Field_1_10; // 0x0
	::System::Boolean Field_1_9; // 0x0
	::Class_0_16E4307DCC419505_268* Field_1_8; // 0x0
	::Class_0_16E4307DCC419505_259* Field_1_15; // 0x0
	TTriggerEntityPolicy Field_1_14; // 0x0
};
