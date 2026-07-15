#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingFesItemConfig; }
namespace RPG::GameCore { class ChenLingFesPosition; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FDADBACCDB81CB2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A905C10)

inline static constexpr unsigned int Class_1_FDADBACCDB81CB2D_TypeDefinitionIndex = 41115;

class Class_1_FDADBACCDB81CB2D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x18
	::RPG::GameCore::ChenLingFesItemConfig* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x40
	::RPG::GameCore::ChenLingFesPosition* Field_1_7; // 0x48
	::System::Single Field_1_8; // 0x50
	::System::Single Field_1_9; // 0x54
	::System::UInt32 Field_1_10; // 0x58
	::System::Single Field_1_11; // 0x5C
	::System::Single Field_1_12; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDADBACCDB81CB2D__CTOR_OFFSET))(this);
	}
};
