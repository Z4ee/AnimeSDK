#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
template <typename T> class Class_0_16E4307DCC419505_378;
template <typename T> class Class_1_9C51B68CF7E8F959;

inline static constexpr unsigned int Class_1_9C51B68CF7E8F959_Class_1_160B1446C23E6502_TypeDefinitionIndex = 60966;

template <typename PromisedT, typename ConvertedT>
class Class_1_9C51B68CF7E8F959_Class_1_160B1446C23E6502 : public ::System::Object
{
public:
	::System::Func_2<PromisedT, ::Class_0_16E4307DCC419505_378<ConvertedT>*>* Field_1_0; // 0x0
	::Class_1_9C51B68CF7E8F959<ConvertedT>* Field_1_1; // 0x0
	::System::Func_2<::System::Exception*, ::Class_0_16E4307DCC419505_378<ConvertedT>*>* Field_1_2; // 0x0
	::System::Action_1<::System::Single>* Field_1_3; // 0x0
	::System::Action_1<ConvertedT>* Field_1_4; // 0x0
	::System::Action_1<::System::Exception*>* Field_1_5; // 0x0
	::System::Action_1<ConvertedT>* Field_1_6; // 0x0
	::System::Action_1<::System::Exception*>* Field_1_7; // 0x0
};
