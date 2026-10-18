#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace RPG::Client { class UIDragScope; }
namespace System { class Action; }

inline static constexpr unsigned int Class_1_708D3C0896FED385_TypeDefinitionIndex = 49854;

template <typename TDragged>
class Class_1_708D3C0896FED385 : public ::System::Object
{
public:
	::System::Action* MBOEDFCNCJF; // 0x0
	::RPG::Client::UIDragScope* OAMCDOCACHG; // 0x0
	::R3::ReactiveProperty_1<TDragged>* OIKMINGBJKF; // 0x0
	TDragged AIKAPJELHNK; // 0x0
};
