#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

inline static constexpr unsigned int Class_1_F15E7592281CED74_Class_1_3EECCF4C7D9069D7_TypeDefinitionIndex = 73762;

template <typename A, typename B, typename T>
class Class_1_F15E7592281CED74_Class_1_3EECCF4C7D9069D7 : public ::System::Object
{
public:
	::System::Int32 Field_1_2; // 0x0
	T Field_1_1; // 0x0
	::System::Int32 Field_1_0; // 0x0
	::System::Collections::Generic::IEnumerable_1<A>* Field_1_7; // 0x0
	::System::Collections::Generic::IEnumerable_1<A>* Field_1_6; // 0x0
	::System::Collections::Generic::IEnumerable_1<B>* Field_1_5; // 0x0
	::System::Collections::Generic::IEnumerable_1<B>* Field_1_4; // 0x0
	::System::Func_3<A, B, T>* Field_1_11; // 0x0
	::System::Func_3<A, B, T>* Field_1_10; // 0x0
	::System::Collections::Generic::IEnumerator_1<A>* Field_1_9; // 0x0
	::System::Collections::Generic::IEnumerator_1<B>* Field_1_8; // 0x0
};
