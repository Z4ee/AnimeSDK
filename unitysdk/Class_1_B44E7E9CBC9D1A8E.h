#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingHitType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_B44E7E9CBC9D1A8E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1480B0)

inline static constexpr unsigned int Class_1_B44E7E9CBC9D1A8E_TypeDefinitionIndex = 42108;

class Class_1_B44E7E9CBC9D1A8E : public ::System::Object
{
public:
	::UnityEngine::Vector3 GPGNBLLEFHA; // 0x10
	::RPG::Client::LittleGame::ChenLing::ChenLingHitType EENDFLPBDFK; // 0x1C
	::RPG::GameCore::FixPoint KFBHFFHDCCN; // 0x20
	::UnityEngine::Vector3 NAHBPNCLGHE; // 0x28
	::System::UInt32 BKGJPJLLEDI; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B44E7E9CBC9D1A8E__CTOR_OFFSET))(this);
	}
};
