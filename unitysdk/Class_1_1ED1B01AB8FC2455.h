#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_56DCF6A4D2886760.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_39;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_7B0E7A2E23B4F0CB;

inline static constexpr unsigned int Class_1_1ED1B01AB8FC2455_TypeDefinitionIndex = 61580;

template <typename TUserData>
class Class_1_1ED1B01AB8FC2455 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_7B0E7A2E23B4F0CB<TUserData>*>* Field_1_1; // 0x0
	::System::Collections::Generic::HashSet_1<::Class_1_7B0E7A2E23B4F0CB<TUserData>*>* Field_1_0; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_56DCF6A4D2886760<TUserData>>*>* Field_1_7; // 0x0
	::System::Int32 Field_1_6; // 0x0
	::Class_1_7B0E7A2E23B4F0CB<TUserData>* Field_1_5; // 0x0
	::System::Int32 Field_1_4; // 0x0
	::System::Boolean Field_1_11; // 0x0
	TUserData Field_1_10; // 0x0
};
