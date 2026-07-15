#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_95D444975EC437CC_Struct_2_79A7327EFE754135.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine::Events { template <typename T1, typename T2> class UnityAction_2; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

inline static constexpr unsigned int Class_1_95D444975EC437CC_TypeDefinitionIndex = 47316;

template <typename T>
class Class_1_95D444975EC437CC : public ::System::Object
{
public:
	::System::Collections::Generic::Stack_1<T>* Field_1_0; // 0x0
	::UnityEngine::Events::UnityAction_2<T, ::System::Boolean>* Field_1_1; // 0x0
	::UnityEngine::Events::UnityAction_1<T>* Field_1_2; // 0x0
	::System::Boolean Field_1_3; // 0x0
	::System::Int32 Field_1_4; // 0x0
	::System::Int32 _countAll_k__BackingField; // 0x0
};
