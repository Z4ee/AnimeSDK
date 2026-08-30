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

#define CLASS_1_43BD383C98B4C0C5_108_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x181EB810)
#define CLASS_1_43BD383C98B4C0C5_108__CTOR_OFFSET UNITYSDK_OFFSET(0x181EB820)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_108_TypeDefinitionIndex = 42044;

class Class_1_43BD383C98B4C0C5_108 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_5F1329F544AC1AFF*>* JIILNFBDFDK; // 0x10
	::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* DCLGGMAEMAO; // 0x18
	::RPG::GameCore::FixPoint CLNMPKLGCIH; // 0x20
	::RPG::GameCore::FixPoint DIBNINJBFHN; // 0x28
	::System::Boolean NCCJHHCGFHF; // 0x30
	::UnityEngine::Vector3 JLPCCEMMJKG; // 0x34
	::UnityEngine::Quaternion OMFNPCMGBHF; // 0x40
	::RPG::GameCore::FixPoint EPKJNNKPIPI; // 0x50
	::RPG::GameCore::FixPoint KIEICALFCEM; // 0x58
	::RPG::GameCore::FixPoint DDPBPJMBFMH; // 0x60
	::UnityEngine::Vector3 NPKPNMLFOCA; // 0x68
	::System::UInt32 AAGKEBFHLMC; // 0x74
	::System::Int32 EEFIPNFMELC; // 0x78
	::System::Int32 NBFOFKGNNIO; // 0x7C
	::RPG::GameCore::FixPoint BKEHIGDONML; // 0x80
	::RPG::GameCore::FixPoint DHMPEOAJCCK; // 0x88
	::RPG::GameCore::PixAirSlotType MPADIDFJBEF; // 0x90
	::RPG::GameCore::PixAirEnchantmentType CCBIIDDBFGK; // 0x94
	::RPG::GameCore::FixPoint FIDNHPLBGAO; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_108__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_108_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};
