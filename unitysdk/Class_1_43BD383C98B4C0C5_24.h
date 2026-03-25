#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_9DD8A46984F1AFFD;
namespace RPG { template <typename T> class PoolList_1; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_43BD383C98B4C0C5_24_CLEAR_OFFSET UNITYSDK_OFFSET(0x16828B30)
#define CLASS_1_43BD383C98B4C0C5_24__CTOR_OFFSET UNITYSDK_OFFSET(0x16828C00)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_24_TypeDefinitionIndex = 33584;

class Class_1_43BD383C98B4C0C5_24 : public ::System::Object
{
public:
	::System::Action_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_16; // 0x10
	::System::Action_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_15; // 0x18
	::Class_2_9DD8A46984F1AFFD* Field_1_13; // 0x20
	::System::Action_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_14; // 0x28
	::RPG::PoolList_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_4; // 0x30
	::Class_2_9DD8A46984F1AFFD* Field_1_12; // 0x38
	::Class_2_9DD8A46984F1AFFD* Field_1_8; // 0x40
	::RPG::PoolList_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_3; // 0x48
	::System::UInt16 Field_1_2; // 0x50
	::System::Boolean Field_1_5; // 0x52
	::UnityEngine::Vector2 Field_1_9; // 0x54
	::System::Int32 Field_1_11; // 0x5C
	::System::Int32 Field_1_7; // 0x60
	::System::Int32 Field_1_10; // 0x64
	::System::Single Field_1_6; // 0x68
	::System::Single Field_1_0; // 0x6C
	::System::Single Field_1_1; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_24__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_24_CLEAR_OFFSET))(this);
	}
};
