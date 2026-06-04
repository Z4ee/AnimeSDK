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

#define CLASS_1_43BD383C98B4C0C5_101_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18CCA310)
#define CLASS_1_43BD383C98B4C0C5_101__CTOR_OFFSET UNITYSDK_OFFSET(0x18CCA320)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_101_TypeDefinitionIndex = 40269;

class Class_1_43BD383C98B4C0C5_101 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_5F1329F544AC1AFF*>* Field_1_0; // 0x10
	::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* Field_1_1; // 0x18
	::UnityEngine::Quaternion Field_1_2; // 0x20
	::RPG::GameCore::FixPoint Field_1_3; // 0x30
	::RPG::GameCore::FixPoint Field_1_4; // 0x38
	::System::Int32 Field_1_5; // 0x40
	::RPG::GameCore::PixAirSlotType Field_1_6; // 0x44
	::UnityEngine::Vector3 Field_1_7; // 0x48
	::System::UInt32 Field_1_8; // 0x54
	::RPG::GameCore::PixAirEnchantmentType Field_1_9; // 0x58
	::UnityEngine::Vector3 Field_1_10; // 0x5C
	::RPG::GameCore::FixPoint Field_1_11; // 0x68
	::RPG::GameCore::FixPoint Field_1_12; // 0x70
	::RPG::GameCore::FixPoint Field_1_13; // 0x78
	::RPG::GameCore::FixPoint Field_1_14; // 0x80
	::RPG::GameCore::FixPoint Field_1_15; // 0x88
	::System::Boolean Field_1_16; // 0x90
	::System::Int32 Field_1_17; // 0x94
	::RPG::GameCore::FixPoint Field_1_18; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_101__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_101_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};
