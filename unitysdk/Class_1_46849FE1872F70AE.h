#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BossTransitionReason.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_46849FE1872F70AE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE007C0)

inline static constexpr unsigned int Class_1_46849FE1872F70AE_TypeDefinitionIndex = 41089;

class Class_1_46849FE1872F70AE : public ::System::Object
{
public:
	::System::Single HMBJNEIEIJK; // 0x10
	::RPG::Client::LittleGame::BossTransitionReason KDHPKOFLNFM; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46849FE1872F70AE__CTOR_OFFSET))(this);
	}
};
