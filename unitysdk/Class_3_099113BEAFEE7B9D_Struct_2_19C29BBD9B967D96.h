#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/MaterialPropertyModifierExtraParams.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::Config { class RenderMaterial; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_3_099113BEAFEE7B9D_Struct_2_19C29BBD9B967D96_TypeDefinitionIndex = 66394;

struct alignas(8) Class_3_099113BEAFEE7B9D_Struct_2_19C29BBD9B967D96
{
	::System::String* Field_2_0; // 0x10
	::MoleMole::ConfigMaterialPropertyModifier* Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x20
	::System::Int32 Field_2_3; // 0x24
	::System::String* Field_2_4; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* Field_2_5; // 0x30
	::System::Boolean Field_2_6; // 0x38
	::MoleMole::Battle::MaterialPropertyModifierExtraParams Field_2_7; // 0x40
	::System::Boolean Field_2_8; // 0x60
};
