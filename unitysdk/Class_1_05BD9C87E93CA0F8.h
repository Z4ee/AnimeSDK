#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }

#define CLASS_1_05BD9C87E93CA0F8_CLEAR_OFFSET UNITYSDK_OFFSET(0x144E0F60)
#define CLASS_1_05BD9C87E93CA0F8_METHOD_1_BAFE6370FC9E3E98_OFFSET UNITYSDK_OFFSET(0x144E0EF0)
#define CLASS_1_05BD9C87E93CA0F8__CTOR_OFFSET UNITYSDK_OFFSET(0x144E0FB0)

inline static constexpr unsigned int Class_1_05BD9C87E93CA0F8_TypeDefinitionIndex = 51729;

class Class_1_05BD9C87E93CA0F8 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::SkillData* Field_1_1; // 0x18
	::RPG::GameCore::SkillData* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05BD9C87E93CA0F8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BAFE6370FC9E3E98(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2, ::RPG::GameCore::SkillData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_05BD9C87E93CA0F8_METHOD_1_BAFE6370FC9E3E98_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05BD9C87E93CA0F8_CLEAR_OFFSET))(this);
	}
};
