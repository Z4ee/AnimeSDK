#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_401B04C8577D73B5__CTOR_OFFSET UNITYSDK_OFFSET(0x15421490)

inline static constexpr unsigned int Class_1_401B04C8577D73B5_TypeDefinitionIndex = 71939;

class Class_1_401B04C8577D73B5 : public ::System::Object
{
public:
	::RPG::Client::TextID DKLKGHFLMDO; // 0x10
	::RPG::GameCore::ControlSkillType GMLGNNPDCJG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_401B04C8577D73B5__CTOR_OFFSET))(this);
	}
};
