#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03154A06B7628F3C.h"
#include "unitysdk/Enum_3_A6875CC70890641D.h"
#include "unitysdk/Struct_2_630AD1889871F484.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

inline static constexpr unsigned int Class_1_92033C64BB4E5240_TypeDefinitionIndex = 71076;

template <typename TSlotState>
class Class_1_92033C64BB4E5240 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<TSlotState, ::System::Action*>* Field_1_0; // 0x0
	::System::Collections::Generic::Dictionary_2<TSlotState, ::System::Action*>* Field_1_1; // 0x0
	::System::Collections::Generic::Dictionary_2<TSlotState, ::System::Collections::Generic::Dictionary_2<TSlotState, ::System::Action*>*>* Field_1_2; // 0x0
	TSlotState Field_1_3; // 0x0
	::Enum_3_03154A06B7628F3C Field_1_4; // 0x0
	::Struct_2_630AD1889871F484 Field_1_5; // 0x0
};
