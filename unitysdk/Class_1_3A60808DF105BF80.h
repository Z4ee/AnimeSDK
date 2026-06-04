#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterHUDType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_3A60808DF105BF80__CTOR_OFFSET UNITYSDK_OFFSET(0x1457A3D0)

inline static constexpr unsigned int Class_1_3A60808DF105BF80_TypeDefinitionIndex = 51876;

class Class_1_3A60808DF105BF80 : public ::System::Object
{
public:
	::RPG::GameCore::MonsterHUDType Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A60808DF105BF80__CTOR_OFFSET))(this);
	}
};
