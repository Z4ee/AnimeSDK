#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T> class Class_0_16E4307DCC419505_378;
template <typename T> class Class_1_9C51B68CF7E8F959;

inline static constexpr unsigned int Class_1_9C51B68CF7E8F959_Class_1_806E6A38310BDE1B_TypeDefinitionIndex = 60967;

template <typename PromisedT>
class Class_1_9C51B68CF7E8F959_Class_1_806E6A38310BDE1B : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* Field_1_0; // 0x0
	::Class_1_9C51B68CF7E8F959<::System::Collections::Generic::IEnumerable_1<PromisedT>*>* Field_1_1; // 0x0
	::Il2CppArray<PromisedT>* Field_1_2; // 0x0
	::System::Int32 Field_1_3; // 0x0
	::System::Action_1<::System::Exception*>* Field_1_4; // 0x0
};
