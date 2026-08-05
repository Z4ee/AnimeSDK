#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0FC69F51F876980B_4.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_102;
class Class_3_5326F252094DDA79;
class Class_3_7E21E2F8DEAA5F4C_14;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_80CEC7B990B4301D__CTOR_OFFSET UNITYSDK_OFFSET(0x13C50C40)

inline static constexpr unsigned int Class_1_80CEC7B990B4301D_TypeDefinitionIndex = 56545;

class Class_1_80CEC7B990B4301D : public ::System::Object
{
public:
	::System::String* Field_1_18; // 0x10
	::Class_3_5326F252094DDA79* Field_1_16; // 0x18
	::Class_1_43BD383C98B4C0C5_102* Field_1_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>* Field_1_3; // 0x28
	::System::String* Field_1_12; // 0x30
	::System::String* Field_1_19; // 0x38
	::System::String* Field_1_13; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>* Field_1_2; // 0x48
	::System::Action* Field_1_9; // 0x50
	::Class_3_7E21E2F8DEAA5F4C_14* Field_1_17; // 0x58
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_8; // 0x60
	::System::Action* Field_1_10; // 0x68
	::System::String* Field_1_5; // 0x70
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_7; // 0x78
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>* Field_1_1; // 0x80
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_15; // 0x88
	::System::Single Field_1_6; // 0x90
	::System::Int32 Field_1_11; // 0x94
	::MoleMole::HollowChessboard::HollowCell Field_1_0; // 0x98
	::Enum_3_0FC69F51F876980B_4 Field_1_14; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80CEC7B990B4301D__CTOR_OFFSET))(this);
	}
};
