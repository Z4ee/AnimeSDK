#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_40503CAE2FA0ADB9;
namespace RPG::GameCore { class GameWorld; }

#define CLASS_1_778AF567D749B9CD_METHOD_1_1911A9D3E939A8C8_OFFSET UNITYSDK_OFFSET(0x15843740)
#define CLASS_1_778AF567D749B9CD_METHOD_1_4CB7261F8A7A0FB1_OFFSET UNITYSDK_OFFSET(0x158436B0)

inline static constexpr unsigned int Class_1_778AF567D749B9CD_TypeDefinitionIndex = 53927;

class Class_1_778AF567D749B9CD : public ::System::Object
{
public:
	static ::RPG::GameCore::GameWorld* Method_1_4CB7261F8A7A0FB1(::RPG::GameCore::GameWorld* a1, ::Class_1_40503CAE2FA0ADB9* a2)
	{
		return ((::RPG::GameCore::GameWorld*(*)(::RPG::GameCore::GameWorld*, ::Class_1_40503CAE2FA0ADB9*))((::PBYTE)hIl2Cpp + CLASS_1_778AF567D749B9CD_METHOD_1_4CB7261F8A7A0FB1_OFFSET))(a1, a2);
	}

	static ::Class_1_40503CAE2FA0ADB9* Method_1_1911A9D3E939A8C8(::RPG::GameCore::GameWorld* a1)
	{
		return ((::Class_1_40503CAE2FA0ADB9*(*)(::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_778AF567D749B9CD_METHOD_1_1911A9D3E939A8C8_OFFSET))(a1);
	}
};
