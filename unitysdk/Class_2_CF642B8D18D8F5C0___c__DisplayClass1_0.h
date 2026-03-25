#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_CF642B8D18D8F5C0;
namespace RPG::Client { class PartialFlipDeviceComponent; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_CF642B8D18D8F5C0___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8874230)
#define CLASS_2_CF642B8D18D8F5C0___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x88744C0)

inline static constexpr unsigned int Class_2_CF642B8D18D8F5C0___c__DisplayClass1_0_TypeDefinitionIndex = 42724;

class Class_2_CF642B8D18D8F5C0___c__DisplayClass1_0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* pPointTarget; // 0x10
	::RPG::Client::PartialFlipDeviceComponent* deviceComponent; // 0x18
	::Class_2_CF642B8D18D8F5C0* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF642B8D18D8F5C0___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF642B8D18D8F5C0___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET))(this);
	}
};
