#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/MaterialPropertyModifierExtraParams.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class RenderMaterial; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Struct_2_25797252421662EF_TypeDefinitionIndex = 70037;

struct alignas(8) Struct_2_25797252421662EF
{
	::System::String* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x1C
	::System::String* Field_2_3; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* Field_2_4; // 0x28
	::System::Boolean Field_2_5; // 0x30
	::MoleMole::Battle::MaterialPropertyModifierExtraParams Field_2_6; // 0x38
};
