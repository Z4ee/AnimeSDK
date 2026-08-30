#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E79EE3670D2EC49A;
namespace RPG::Client::FateRin { template <typename T> class PresentResult_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

inline static constexpr unsigned int Class_1_E79EE3670D2EC49A___c__DisplayClass4_0_1_TypeDefinitionIndex = 79294;

template <typename TViewModel>
class Class_1_E79EE3670D2EC49A___c__DisplayClass4_0_1 : public ::System::Object
{
public:
	::Class_1_E79EE3670D2EC49A* __4__this; // 0x0
	TViewModel viewModel; // 0x0
	::RPG::Client::Promises::Promise_1<::RPG::Client::FateRin::PresentResult_1<TViewModel>*>* resultPromise; // 0x0
};
