#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Enum_3_38FAF3C017E0DB11.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }

inline static constexpr unsigned int Class_1_14848F180B02879F_TypeDefinitionIndex = 47908;

template <typename T>
class Class_1_14848F180B02879F : public ::System::Object
{
public:
	::MoleMole::Utils::TaskBasedEventCollection_1<::Enum_3_38FAF3C017E0DB11>* Field_1_1; // 0x0
	::MoleMole::Utils::TaskBasedEventCollection_1<T>* Field_1_0; // 0x0
};
