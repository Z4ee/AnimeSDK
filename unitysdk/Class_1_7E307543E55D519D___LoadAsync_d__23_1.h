#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolLoadMode.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolPathType.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { template <typename T> class ConfigDataPool_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class Class_1_7E307543E55D519D___c__DisplayClass23_1_1;

inline static constexpr unsigned int Class_1_7E307543E55D519D___LoadAsync_d__23_1_TypeDefinitionIndex = 57370;

template <typename T>
struct Class_1_7E307543E55D519D___LoadAsync_d__23_1
{
	::System::Int32 __1__state; // 0x0
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x0
	::System::String* path; // 0x0
	::RPG::GameCore::ConfigDataPoolPathType pathType; // 0x0
	::RPG::GameCore::ConfigDataPoolLoadMode loadMode; // 0x0
	::Class_1_7E307543E55D519D___c__DisplayClass23_1_1<T>* __8__1; // 0x0
	::System::Action_2<T, ::System::Object*>* onComplete; // 0x0
	::System::Object* userData; // 0x0
	::System::Boolean excludeLru; // 0x0
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::String*> __u__1; // 0x0
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::RPG::GameCore::ConfigDataPool_1<T>*, ::System::String*>> __u__2; // 0x0
	::System::Runtime::CompilerServices::TaskAwaiter __u__3; // 0x0
};
