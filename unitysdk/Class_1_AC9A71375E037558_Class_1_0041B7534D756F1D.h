#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
template <typename T> class Class_0_16E4307DCC419505_179;
template <typename T> class Class_1_533DA1C02014A312;

inline static constexpr unsigned int Class_1_AC9A71375E037558_Class_1_0041B7534D756F1D_TypeDefinitionIndex = 54833;

template <typename ConvertedT>
class Class_1_AC9A71375E037558_Class_1_0041B7534D756F1D : public ::System::Object
{
public:
	::System::Func_1<::Class_0_16E4307DCC419505_179<ConvertedT>*>* Field_1_0; // 0x0
	::Class_1_533DA1C02014A312<ConvertedT>* Field_1_1; // 0x0
	::System::Func_2<::System::Exception*, ::Class_0_16E4307DCC419505_179<ConvertedT>*>* Field_1_2; // 0x0
	::System::Action_1<::System::Single>* Field_1_3; // 0x0
	::System::Action_1<ConvertedT>* Field_1_4; // 0x0
	::System::Action_1<::System::Exception*>* Field_1_5; // 0x0
	::System::Action_1<ConvertedT>* Field_1_6; // 0x0
	::System::Action_1<::System::Exception*>* Field_1_7; // 0x0
};
