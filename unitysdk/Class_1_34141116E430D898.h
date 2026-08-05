#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Struct_2_9A6EB2DDAF7C08FF.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_0_16E4307DCC419505_259;
class Class_0_16E4307DCC419505_268;
namespace MoleMole { class MonoTriggerEventDispatcher; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

inline static constexpr unsigned int Class_1_34141116E430D898_TypeDefinitionIndex = 42889;

template <typename TCustomAction>
class Class_1_34141116E430D898 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x0
	::System::Nullable_1<TCustomAction> Field_1_1; // 0x0
	::System::Nullable_1<TCustomAction> Field_1_0; // 0x0
	::System::Threading::CancellationTokenSource* Field_1_7; // 0x0
	::System::Boolean Field_1_6; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_5; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* Field_1_4; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_11; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::MonoTriggerEventDispatcher*>* Field_1_10; // 0x0
	::System::Boolean Field_1_9; // 0x0
	::Class_0_16E4307DCC419505_268* Field_1_8; // 0x0
	::Class_0_16E4307DCC419505_259* Field_1_15; // 0x0
};
