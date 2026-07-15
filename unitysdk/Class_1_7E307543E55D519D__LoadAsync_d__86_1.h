#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolLoadMode.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolPathType.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

inline static constexpr unsigned int Class_1_7E307543E55D519D__LoadAsync_d__86_1_TypeDefinitionIndex = 57369;

template <typename T>
struct Class_1_7E307543E55D519D__LoadAsync_d__86_1
{
	::System::Int32 __1__state; // 0x0
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x0
	::System::String* path; // 0x0
	::RPG::GameCore::ConfigDataPoolPathType pathType; // 0x0
	::RPG::GameCore::ConfigDataPoolLoadMode loadMode; // 0x0
	::System::Action_2<T, ::System::Object*>* onComplete; // 0x0
	::System::Object* userData; // 0x0
	::System::Boolean excludeLru; // 0x0
	::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x0
};
