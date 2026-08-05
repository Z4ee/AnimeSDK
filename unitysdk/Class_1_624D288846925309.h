#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

inline static constexpr unsigned int Class_1_624D288846925309_TypeDefinitionIndex = 56736;

template <typename T>
class Class_1_624D288846925309 : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x0
	::System::Int32 Field_1_0; // 0x0
	::System::Collections::Generic::IList_1<T>* Field_1_7; // 0x0
	::System::Int32 Field_1_6; // 0x0
	T Field_1_5; // 0x0
	T Field_1_4; // 0x0
	::System::Action_2<::System::Int32, T>* Field_1_11; // 0x0
	::System::Func_3<::System::Int32, T, ::System::Boolean>* Field_1_10; // 0x0
	::System::Action_2<::System::Int32, T>* Field_1_9; // 0x0
	::MonoUITableScrollV2* Field_1_8; // 0x0
};
