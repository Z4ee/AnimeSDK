#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_166EA563588A34AF.h"
#include "unitysdk/Enum_3_52BF7B0B9861B642.h"
#include "unitysdk/SGF/SEvent/DelegateEx.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"

class Class_0_16E4307DCC419505_96;
class Class_0_16E4307DCC419505_99;
class Class_3_D92ADC48CDFCC09B;
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T> class Class_2_0CA18452022DDC0A;

inline static constexpr unsigned int Class_2_0CA18452022DDC0A_TypeDefinitionIndex = 32998;

template <typename T>
class Class_2_0CA18452022DDC0A : public ::Class_1_166EA563588A34AF
{
public:
	::Il2CppArray<::Class_0_16E4307DCC419505_96*>* Field_2_0; // 0x0
	::System::String* Field_2_1; // 0x0
	::System::Func_1<T>* Field_2_2; // 0x0
	::System::Boolean Field_2_3; // 0x0
	T Field_2_4; // 0x0
	::SGF::SEvent::DelegateEx Field_2_5; // 0x0
};
