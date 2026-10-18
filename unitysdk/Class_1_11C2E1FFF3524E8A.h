#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace RPG::Client { class UIDragSource; }
namespace System { class Action; }

inline static constexpr unsigned int Class_1_11C2E1FFF3524E8A_TypeDefinitionIndex = 49853;

template <typename TDragged>
class Class_1_11C2E1FFF3524E8A : public ::System::Object
{
public:
	::System::Action* MBOEDFCNCJF; // 0x0
	::R3::ReactiveProperty_1<TDragged>* OIKMINGBJKF; // 0x0
	TDragged AIKAPJELHNK; // 0x0
	::RPG::Client::UIDragSource* BPKKKMOCFIP; // 0x0
};
