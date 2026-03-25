#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_401B04C8577D73B5__CTOR_OFFSET UNITYSDK_OFFSET(0x10C32E90)

inline static constexpr unsigned int Class_1_401B04C8577D73B5_TypeDefinitionIndex = 58966;

class Class_1_401B04C8577D73B5 : public ::System::Object
{
public:
	::RPG::Client::TextID Field_1_1; // 0x10
	::RPG::GameCore::ControlSkillType Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_401B04C8577D73B5__CTOR_OFFSET))(this);
	}
};
