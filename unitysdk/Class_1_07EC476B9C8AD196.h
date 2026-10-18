#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirEquipmentState.h"
#include "unitysdk/RPG/GameCore/PixAirEnchantmentType.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/RPG/GameCore/PixAirSlotType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_07EC476B9C8AD196__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E1340)

inline static constexpr unsigned int Class_1_07EC476B9C8AD196_TypeDefinitionIndex = 43682;

class Class_1_07EC476B9C8AD196 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::PixAirEquipTag>* OJFFPIIKPDJ; // 0x10
	::RPG::GameCore::PixAirEnchantmentType CCBIIDDBFGK; // 0x18
	::RPG::Client::LittleGame::PixAir::PixAirEquipmentState MEPFOEEGBEA; // 0x1C
	::System::Int32 NBFOFKGNNIO; // 0x20
	::RPG::GameCore::PixAirSlotType MPADIDFJBEF; // 0x24
	::System::Boolean NCCJHHCGFHF; // 0x28
	::System::Boolean HGEOCDHCKFN; // 0x29
	::System::Int32 EEFIPNFMELC; // 0x2C
	::System::Int32 NMOKIHDMMNG; // 0x30
	::System::Int32 NPHAJEKCBKF; // 0x34
	::System::UInt32 AAGKEBFHLMC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07EC476B9C8AD196__CTOR_OFFSET))(this);
	}
};
