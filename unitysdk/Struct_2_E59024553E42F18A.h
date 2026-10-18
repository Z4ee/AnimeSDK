#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/PetPartyAssignmentMode.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_E59024553E42F18A_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x101F0)
#define STRUCT_2_E59024553E42F18A_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10240)

inline static constexpr unsigned int Struct_2_E59024553E42F18A_TypeDefinitionIndex = 53507;

struct alignas(4) Struct_2_E59024553E42F18A
{
	::RPG::GameCore::PetPartyAssignmentMode FCGFFAJIBKA; // 0x10
	::System::UInt32 DCAJKDIBHHP; // 0x14
	::UnityEngine::Vector3 OPMGDNNAEJF; // 0x18
	::UnityEngine::Vector3 BNNOBAMFNCJ; // 0x24
	::System::Boolean KNHPJEGFEPJ; // 0x30
	::System::Boolean LKBKPEELELG; // 0x31
	::UnityEngine::Quaternion GMAGENDCBLH; // 0x34
	::RPG::GameCore::CharacterMotionFlag FPHBEHJJBIA; // 0x44

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E59024553E42F18A_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E59024553E42F18A_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
