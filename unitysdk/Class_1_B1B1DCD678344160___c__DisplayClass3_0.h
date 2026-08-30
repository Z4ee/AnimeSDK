#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_321;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace RPG::Client { class ListView; }
namespace System { template <typename T1, typename T2> class Func_2; }

inline static constexpr unsigned int Class_1_B1B1DCD678344160___c__DisplayClass3_0_TypeDefinitionIndex = 50176;

template <typename TViewModel, typename TItem, typename TMessage>
class Class_1_B1B1DCD678344160___c__DisplayClass3_0 : public ::System::Object
{
public:
	::RPG::Client::ListView* view; // 0x0
	::System::Func_2<TViewModel, ::R3::ReactiveProperty_1<TItem>*>* selector; // 0x0
	TViewModel vm; // 0x0
	::Class_0_16E4307DCC419505_321* logger; // 0x0
};
