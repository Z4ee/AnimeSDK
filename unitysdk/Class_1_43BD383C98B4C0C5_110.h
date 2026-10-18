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

#define CLASS_1_43BD383C98B4C0C5_110_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1C9F6BC0)
#define CLASS_1_43BD383C98B4C0C5_110__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F6BD0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_110_TypeDefinitionIndex = 43686;

class Class_1_43BD383C98B4C0C5_110 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* DCLGGMAEMAO; // 0x10
	::Il2CppArray<::Class_1_5F1329F544AC1AFF*>* JIILNFBDFDK; // 0x18
	::RPG::GameCore::FixPoint BKEHIGDONML; // 0x20
	::RPG::GameCore::FixPoint EPKJNNKPIPI; // 0x28
	::RPG::GameCore::PixAirSlotType MPADIDFJBEF; // 0x30
	::RPG::GameCore::PixAirEnchantmentType CCBIIDDBFGK; // 0x34
	::RPG::GameCore::FixPoint CLNMPKLGCIH; // 0x38
	::RPG::GameCore::FixPoint DDPBPJMBFMH; // 0x40
	::System::Int32 EEFIPNFMELC; // 0x48
	::System::Boolean NCCJHHCGFHF; // 0x4C
	::RPG::GameCore::FixPoint FIDNHPLBGAO; // 0x50
	::System::Int32 NBFOFKGNNIO; // 0x58
	::RPG::GameCore::FixPoint DHMPEOAJCCK; // 0x60
	::UnityEngine::Quaternion OMFNPCMGBHF; // 0x68
	::UnityEngine::Vector3 NPKPNMLFOCA; // 0x78
	::UnityEngine::Vector3 JLPCCEMMJKG; // 0x84
	::System::UInt32 AAGKEBFHLMC; // 0x90
	::RPG::GameCore::FixPoint KIEICALFCEM; // 0x98
	::RPG::GameCore::FixPoint DIBNINJBFHN; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_110__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_110_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};
