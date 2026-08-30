#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ListView; }

inline static constexpr unsigned int Class_1_B1B1DCD678344160___SelectWhenShown_d__5_TypeDefinitionIndex = 50177;

template <typename TViewModel, typename TItem, typename TMessage>
class Class_1_B1B1DCD678344160___SelectWhenShown_d__5 : public ::System::Object
{
public:
	::System::Int32 __1__state; // 0x0
	::System::Object* __2__current; // 0x0
	::RPG::Client::ListView* view; // 0x0
	::System::Int32 index; // 0x0
	::System::Int32 _frame_5__2; // 0x0
};
