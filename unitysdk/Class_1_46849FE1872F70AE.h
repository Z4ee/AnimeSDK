#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BossTransitionReason.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_46849FE1872F70AE__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC39A0)

inline static constexpr unsigned int Class_1_46849FE1872F70AE_TypeDefinitionIndex = 39401;

class Class_1_46849FE1872F70AE : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::RPG::Client::LittleGame::BossTransitionReason Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46849FE1872F70AE__CTOR_OFFSET))(this);
	}
};
