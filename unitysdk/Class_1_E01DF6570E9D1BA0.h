#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_547;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_E01DF6570E9D1BA0__CTOR_OFFSET UNITYSDK_OFFSET(0x1593D080)

inline static constexpr unsigned int Class_1_E01DF6570E9D1BA0_TypeDefinitionIndex = 57776;

class Class_1_E01DF6570E9D1BA0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x10
	::Class_0_16E4307DCC419505_547* DMHBAGOCBJM; // 0x18
	::RPG::GameCore::GameEntity* MPCIHMBILNI; // 0x20
	::System::UInt32 FMCGKCIIKCM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E01DF6570E9D1BA0__CTOR_OFFSET))(this);
	}
};
