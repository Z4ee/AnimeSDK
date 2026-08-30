#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EInflatableFighterSide.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_B4A74ED2BE491B9A_STRUCT_2_0A1006A3711077C2__CTOR_OFFSET UNITYSDK_OFFSET(0x1597D0)

inline static constexpr unsigned int Class_1_B4A74ED2BE491B9A_Struct_2_0A1006A3711077C2_TypeDefinitionIndex = 68637;

struct alignas(4) Class_1_B4A74ED2BE491B9A_Struct_2_0A1006A3711077C2
{
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x10
	::RPG::Client::EInflatableFighterSide EGHDMDEJICM; // 0x1C
	::System::Boolean GBIPEDLCOKN; // 0x20

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::RPG::Client::EInflatableFighterSide a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::EInflatableFighterSide, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4A74ED2BE491B9A_STRUCT_2_0A1006A3711077C2__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
