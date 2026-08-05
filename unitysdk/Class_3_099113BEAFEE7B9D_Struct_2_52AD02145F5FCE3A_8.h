#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/MaterialPropertyModifierExtraParams.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::Config { class RenderMaterial; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_3_099113BEAFEE7B9D_Struct_2_52AD02145F5FCE3A_8_TypeDefinitionIndex = 75698;

struct alignas(8) Class_3_099113BEAFEE7B9D_Struct_2_52AD02145F5FCE3A_8
{
	::System::String* Field_2_0; // 0x10
	::MoleMole::ConfigMaterialPropertyModifier* Field_2_7; // 0x18
	::System::Boolean Field_2_6; // 0x20
	::System::Int32 Field_2_5; // 0x24
	::System::String* Field_2_4; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* Field_2_11; // 0x30
	::System::Boolean Field_2_10; // 0x38
	::MoleMole::Battle::MaterialPropertyModifierExtraParams Field_2_9; // 0x40
	::System::Boolean Field_2_8; // 0x60
	::System::Boolean Field_2_15; // 0x61
	::System::Boolean Field_2_14; // 0x62
	::System::Boolean Field_2_13; // 0x63
	::System::Single Field_2_12; // 0x64
	::System::Single Field_2_19; // 0x68
	::System::Single Field_2_18; // 0x6C
};
