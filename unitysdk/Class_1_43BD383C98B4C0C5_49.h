#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4A097505A5A1A069.h"
#include "unitysdk/Enum_3_801EC18359FE40A3.h"
#include "unitysdk/Enum_3_B14F8B04216FFB95.h"
#include "unitysdk/Enum_3_DAFCB1AA7EAADD66.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/MoleMole/Config/ConfigInteractionFanCylinder.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_43BD383C98B4C0C5_49__CTOR_OFFSET UNITYSDK_OFFSET(0x139E9830)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_49_TypeDefinitionIndex = 46153;

class Class_1_43BD383C98B4C0C5_49 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_19; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_14; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_1_16; // 0x28
	::System::String* Field_1_29; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* Field_1_17; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* Field_1_13; // 0x40
	::System::Collections::Generic::List_1<::System::String*>* Field_1_15; // 0x48
	::Enum_3_DAFCB1AA7EAADD66 Field_1_10; // 0x50
	::System::Int32 Field_1_23; // 0x54
	::System::Boolean Field_1_18; // 0x58
	::System::Boolean Field_1_20; // 0x59
	::System::Boolean Field_1_12; // 0x5A
	::System::Int32 Field_1_24; // 0x5C
	::System::Int32 Field_1_28; // 0x60
	::System::Int32 Field_1_4; // 0x64
	::System::Single Field_1_25; // 0x68
	::MoleMole::Config::ConfigInteractionFanCylinder Field_1_7; // 0x6C
	::System::Int32 Field_1_0; // 0x94
	::Enum_3_B14F8B04216FFB95 Field_1_21; // 0x98
	::System::Int32 Field_1_2; // 0x9C
	::System::Boolean Field_1_26; // 0xA0
	::System::Boolean Field_1_5; // 0xA1
	::System::Boolean Field_1_8; // 0xA2
	::Enum_3_4A097505A5A1A069 Field_1_6; // 0xA3
	::Enum_3_801EC18359FE40A3 Field_1_22; // 0xA4
	::Foundation::ViewObject::GroupMemberIdentifier Field_1_3; // 0xA8
	::System::Boolean Field_1_11; // 0xB0
	::System::Boolean Field_1_27; // 0xB1
	::MoleMole::Config::ConfigInteractionFanCylinder Field_1_9; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_49__CTOR_OFFSET))(this);
	}
};
