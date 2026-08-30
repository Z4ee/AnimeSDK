#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PingPong/ProjectileOwnerType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_9421324F63207121__CTOR_OFFSET UNITYSDK_OFFSET(0x1C167240)

inline static constexpr unsigned int Class_1_9421324F63207121_TypeDefinitionIndex = 41367;

class Class_1_9421324F63207121 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::PingPong::ProjectileOwnerType GHNJCLNKGHH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9421324F63207121__CTOR_OFFSET))(this);
	}
};
