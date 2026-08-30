#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/TimeScaleReason.h"
#include "unitysdk/RPG/GCFreeClosure/ClosureEvent_2.h"
#include "unitysdk/Struct_2_4127FF4C06B070D3.h"
#include "unitysdk/System/ValueType.h"

namespace Entitas { class IEntity; }
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Struct_2_DF3F1B8142DB3648_TypeDefinitionIndex = 41672;

struct alignas(8) Struct_2_DF3F1B8142DB3648
{
	::System::String* OEPLADOIMOC; // 0x10
	::System::Single PNJEGPAFNCI; // 0x18
	::System::Boolean KAGICIAJEEA; // 0x1C
	::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* GGHCKBHGHFC; // 0x20
	::RPG::GCFreeClosure::ClosureEvent_2<::Entitas::IEntity*, ::Struct_2_4127FF4C06B070D3> ECIECIEAMOK; // 0x28
	::Struct_2_4127FF4C06B070D3 NNACKOBKFGE; // 0x38
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FiveDim::TimeScaleReason>* BEJCJLENKBN; // 0x48
};
