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

inline static constexpr unsigned int Struct_2_DF3F1B8142DB3648_TypeDefinitionIndex = 40719;

struct alignas(8) Struct_2_DF3F1B8142DB3648
{
	::System::String* Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x1C
	::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* Field_2_3; // 0x20
	::RPG::GCFreeClosure::ClosureEvent_2<::Entitas::IEntity*, ::Struct_2_4127FF4C06B070D3> Field_2_4; // 0x28
	::Struct_2_4127FF4C06B070D3 Field_2_5; // 0x38
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FiveDim::TimeScaleReason>* Field_2_6; // 0x48
};
