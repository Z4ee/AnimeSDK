#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SubMissionData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphComponent; }

#define CLASS_1_E7547CA6D0A93620_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x16160290)
#define CLASS_1_E7547CA6D0A93620_METHOD_1_79AA3BF83E5C6764_OFFSET UNITYSDK_OFFSET(0x161602F0)
#define CLASS_1_E7547CA6D0A93620_METHOD_1_96423E189D7E47C7_OFFSET UNITYSDK_OFFSET(0x16160210)
#define CLASS_1_E7547CA6D0A93620_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x161602E0)
#define CLASS_1_E7547CA6D0A93620__CTOR_OFFSET UNITYSDK_OFFSET(0x16160110)

inline static constexpr unsigned int Class_1_E7547CA6D0A93620_TypeDefinitionIndex = 58179;

class Class_1_E7547CA6D0A93620 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::LevelGraphComponent* Field_1_1; // 0x18
	::RPG::Client::SubMissionData* Field_1_2; // 0x20

	::System::Void _ctor(::RPG::Client::SubMissionData* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E7547CA6D0A93620__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_96423E189D7E47C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7547CA6D0A93620_METHOD_1_96423E189D7E47C7_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7547CA6D0A93620_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7547CA6D0A93620_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::RPG::Client::SubMissionData* Method_1_79AA3BF83E5C6764()
	{
		return ((::RPG::Client::SubMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7547CA6D0A93620_METHOD_1_79AA3BF83E5C6764_OFFSET))(this);
	}
};
