#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0FC69F51F876980B_1.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_54;
class Class_3_059E2E4F7467C2BC;
class Class_3_88D140F5E09465E1_4;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_80CEC7B990B4301D__CTOR_OFFSET UNITYSDK_OFFSET(0x16748F70)

inline static constexpr unsigned int Class_1_80CEC7B990B4301D_TypeDefinitionIndex = 45719;

class Class_1_80CEC7B990B4301D : public ::System::Object
{
public:
	::System::Action* Field_1_9; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_12; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_11; // 0x20
	::System::String* Field_1_15; // 0x28
	::System::Action* Field_1_10; // 0x30
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>* Field_1_2; // 0x38
	::System::String* Field_1_6; // 0x40
	::Class_3_059E2E4F7467C2BC* Field_1_19; // 0x48
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_4; // 0x50
	::System::String* Field_1_14; // 0x58
	::System::String* Field_1_17; // 0x60
	::Class_1_43BD383C98B4C0C5_54* Field_1_7; // 0x68
	::System::String* Field_1_16; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>* Field_1_1; // 0x78
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>* Field_1_0; // 0x80
	::Class_3_88D140F5E09465E1_4* Field_1_18; // 0x88
	::System::Int32 Field_1_8; // 0x90
	::Enum_3_0FC69F51F876980B_1 Field_1_13; // 0x94
	::MoleMole::HollowChessboard::HollowCell Field_1_3; // 0x98
	::System::Single Field_1_5; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80CEC7B990B4301D__CTOR_OFFSET))(this);
	}
};
