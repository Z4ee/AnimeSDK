#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraShotData_Enum_3_60063ED21D7DBAFB.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AnchorPointForwardAxis.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

inline static constexpr unsigned int Struct_2_CC1AD73BA07FC070_TypeDefinitionIndex = 66037;

struct alignas(8) Struct_2_CC1AD73BA07FC070
{
	::System::String* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis Field_2_2; // 0x1C
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_3; // 0x20
	::System::Nullable_1<::UnityEngine::Quaternion> Field_2_4; // 0x30
	::System::Single Field_2_5; // 0x44
	::System::Single Field_2_6; // 0x48
	::System::Single Field_2_7; // 0x4C
	::System::Nullable_1<::MoleMole::CameraShotData_Enum_3_60063ED21D7DBAFB> Field_2_8; // 0x50
};
