#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class SkillData; }

#define CLASS_1_35A20A2C62F30D8B_METHOD_1_4A7143CA942AD4FA_OFFSET UNITYSDK_OFFSET(0xC10C7E0)

inline static constexpr unsigned int Class_1_35A20A2C62F30D8B_TypeDefinitionIndex = 57823;

class Class_1_35A20A2C62F30D8B : public ::System::Object
{
public:
	static ::RPG::GameCore::SkillData* Method_1_4A7143CA942AD4FA(::RPG::GameCore::GameWorld* a1)
	{
		return ((::RPG::GameCore::SkillData*(*)(::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_35A20A2C62F30D8B_METHOD_1_4A7143CA942AD4FA_OFFSET))(a1);
	}
};
