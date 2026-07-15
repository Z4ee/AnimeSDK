#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyStacking.h"
#include "unitysdk/RPG/GameCore/RtPropertyCategory.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_472;
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Struct_2_CDDA80E42119714A_TypeDefinitionIndex = 51541;

struct alignas(8) Struct_2_CDDA80E42119714A
{
	::RPG::GameCore::RtPropertyCategory Field_2_0; // 0x10
	::RPG::GameCore::FixPoint Field_2_1; // 0x18
	::RPG::GameCore::PropertyStacking Field_2_2; // 0x20
	::System::Int32 Field_2_3; // 0x24
	::System::Int32 Field_2_4; // 0x28
	::System::Int32 Field_2_5; // 0x2C
	::System::Int32 Field_2_6; // 0x30
	::System::Int32 Field_2_7; // 0x34
	::System::Int32 Field_2_8; // 0x38
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_472*>* Field_2_9; // 0x40
};
