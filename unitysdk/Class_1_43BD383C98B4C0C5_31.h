#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_B9E8C2EEAA5C96EC;
namespace RPG { template <typename T> class PoolList_1; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_43BD383C98B4C0C5_31_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C1A1C0)
#define CLASS_1_43BD383C98B4C0C5_31__CTOR_OFFSET UNITYSDK_OFFSET(0x18C1A2A0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_31_TypeDefinitionIndex = 40155;

class Class_1_43BD383C98B4C0C5_31 : public ::System::Object
{
public:
	::Class_2_B9E8C2EEAA5C96EC* Field_1_0; // 0x10
	::Class_2_B9E8C2EEAA5C96EC* Field_1_1; // 0x18
	::System::Action_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_2; // 0x20
	::RPG::PoolList_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_3; // 0x28
	::System::Action_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_4; // 0x30
	::Class_2_B9E8C2EEAA5C96EC* Field_1_5; // 0x38
	::System::Action_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_6; // 0x40
	::RPG::PoolList_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_7; // 0x48
	::System::Single Field_1_8; // 0x50
	::System::Single Field_1_9; // 0x54
	::UnityEngine::Vector2 Field_1_10; // 0x58
	::System::Int32 Field_1_11; // 0x60
	::System::Int32 Field_1_12; // 0x64
	::System::UInt16 Field_1_13; // 0x68
	::System::Boolean Field_1_14; // 0x6A
	::System::Int32 Field_1_15; // 0x6C
	::System::Single Field_1_16; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_31__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_31_CLEAR_OFFSET))(this);
	}
};
