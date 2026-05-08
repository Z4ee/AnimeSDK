#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_9A6EB2DDAF7C08FF.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_0_16E4307DCC419505_306;
namespace MoleMole { class MonoTriggerEventDispatcher; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Collider; }

inline static constexpr unsigned int Class_1_18834A43CDD11057_TypeDefinitionIndex = 77925;

template <typename TCustomAction>
class Class_1_18834A43CDD11057 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x0
	::System::Nullable_1<TCustomAction> Field_1_1; // 0x0
	::System::Nullable_1<TCustomAction> Field_1_2; // 0x0
	::System::Threading::CancellationTokenSource* Field_1_3; // 0x0
	::System::Boolean Field_1_4; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_5; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* Field_1_6; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_7; // 0x0
	::System::Collections::Generic::HashSet_1<::MoleMole::MonoTriggerEventDispatcher*>* Field_1_8; // 0x0
	::System::Boolean Field_1_9; // 0x0
	::Class_0_16E4307DCC419505_306* Field_1_10; // 0x0
};
