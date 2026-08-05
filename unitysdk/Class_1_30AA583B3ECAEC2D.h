#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_30AA583B3ECAEC2D_Struct_2_06BEE63A7C8662E3.h"
#include "unitysdk/Struct_2_7893161BBCA8DCAD.h"
#include "unitysdk/Struct_2_941CB6CDBCA0A3A7.h"
#include "unitysdk/Struct_2_E9EAF21FC28EAA74.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_1_30AA583B3ECAEC2D_TypeDefinitionIndex = 54667;

template <typename TData, typename TTimeScale>
class Class_1_30AA583B3ECAEC2D : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x10; // 0x0
	::Il2CppArray<::Class_1_30AA583B3ECAEC2D_Struct_2_06BEE63A7C8662E3<TData, TTimeScale>>* Field_1_7; // 0x0
	::System::Int32 Field_1_6; // 0x0
	::System::Int32 Field_1_5; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_941CB6CDBCA0A3A7>* Field_1_4; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Struct_2_941CB6CDBCA0A3A7>*>* Field_1_11; // 0x0
	::System::Collections::Generic::List_1<::System::ValueTuple_3<::Struct_2_941CB6CDBCA0A3A7, TData, ::Struct_2_7893161BBCA8DCAD>>* Field_1_10; // 0x0
	::System::Action_3<::Struct_2_941CB6CDBCA0A3A7, TData, ::Struct_2_7893161BBCA8DCAD>* Field_1_9; // 0x0
};
