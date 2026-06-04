#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirEquipmentState.h"
#include "unitysdk/RPG/GameCore/PixAirEnchantmentType.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/RPG/GameCore/PixAirSlotType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_07EC476B9C8AD196__CTOR_OFFSET UNITYSDK_OFFSET(0x18BF5F20)

inline static constexpr unsigned int Class_1_07EC476B9C8AD196_TypeDefinitionIndex = 40265;

class Class_1_07EC476B9C8AD196 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::PixAirEquipTag>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::Int32 Field_1_3; // 0x20
	::System::Int32 Field_1_4; // 0x24
	::System::UInt32 Field_1_5; // 0x28
	::RPG::GameCore::PixAirEnchantmentType Field_1_6; // 0x2C
	::System::Boolean Field_1_7; // 0x30
	::System::Boolean Field_1_8; // 0x31
	::RPG::Client::LittleGame::PixAir::PixAirEquipmentState Field_1_9; // 0x34
	::RPG::GameCore::PixAirSlotType Field_1_10; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07EC476B9C8AD196__CTOR_OFFSET))(this);
	}
};
