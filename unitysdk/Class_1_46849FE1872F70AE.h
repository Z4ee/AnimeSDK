#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BossTransitionReason.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_46849FE1872F70AE__CTOR_OFFSET UNITYSDK_OFFSET(0x17F50800)

inline static constexpr unsigned int Class_1_46849FE1872F70AE_TypeDefinitionIndex = 38634;

class Class_1_46849FE1872F70AE : public ::System::Object
{
public:
	::RPG::Client::LittleGame::BossTransitionReason Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46849FE1872F70AE__CTOR_OFFSET))(this);
	}
};
