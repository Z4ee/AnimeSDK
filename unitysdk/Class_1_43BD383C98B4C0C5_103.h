#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PixAirEnchantmentType.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/RPG/GameCore/PixAirSlotType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5F1329F544AC1AFF;

#define CLASS_1_43BD383C98B4C0C5_103_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1C581420)
#define CLASS_1_43BD383C98B4C0C5_103__CTOR_OFFSET UNITYSDK_OFFSET(0x1C581430)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_103_TypeDefinitionIndex = 41084;

class Class_1_43BD383C98B4C0C5_103 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_5F1329F544AC1AFF*>* Field_1_0; // 0x10
	::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* Field_1_1; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x2C
	::RPG::GameCore::FixPoint Field_1_4; // 0x30
	::RPG::GameCore::FixPoint Field_1_5; // 0x38
	::RPG::GameCore::PixAirEnchantmentType Field_1_6; // 0x40
	::RPG::GameCore::FixPoint Field_1_7; // 0x48
	::UnityEngine::Quaternion Field_1_8; // 0x50
	::System::Int32 Field_1_9; // 0x60
	::RPG::GameCore::FixPoint Field_1_10; // 0x68
	::RPG::GameCore::PixAirSlotType Field_1_11; // 0x70
	::UnityEngine::Vector3 Field_1_12; // 0x74
	::RPG::GameCore::FixPoint Field_1_13; // 0x80
	::System::UInt32 Field_1_14; // 0x88
	::System::Int32 Field_1_15; // 0x8C
	::RPG::GameCore::FixPoint Field_1_16; // 0x90
	::RPG::GameCore::FixPoint Field_1_17; // 0x98
	::RPG::GameCore::FixPoint Field_1_18; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_103__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_103_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};
