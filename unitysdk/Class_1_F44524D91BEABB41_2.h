#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_21055A9FA74B791E;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_F44524D91BEABB41_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17FF4ED0)

inline static constexpr unsigned int Class_1_F44524D91BEABB41_2_TypeDefinitionIndex = 57243;

class Class_1_F44524D91BEABB41_2 : public ::System::Object
{
public:
	::Class_2_21055A9FA74B791E* GMFMGOKJCKP; // 0x10
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
	::System::UInt32 PCCCKLNCLHB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44524D91BEABB41_2__CTOR_OFFSET))(this);
	}
};
