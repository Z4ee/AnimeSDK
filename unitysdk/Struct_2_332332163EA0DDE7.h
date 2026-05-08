#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Cameras { class OverrideConfigSideScrollingCamera; }
namespace MoleMole::Cameras { class SideScrollingCameraRuntimeParam; }
namespace System { class String; }

inline static constexpr unsigned int Struct_2_332332163EA0DDE7_TypeDefinitionIndex = 78677;

struct alignas(8) Struct_2_332332163EA0DDE7
{
	::System::String* Field_2_0; // 0x10
	::MoleMole::Cameras::SideScrollingCameraRuntimeParam* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::MoleMole::Cameras::OverrideConfigSideScrollingCamera* Field_2_3; // 0x28
};
