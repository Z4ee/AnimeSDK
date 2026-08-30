#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }

#define CLASS_1_A647891BD35413FE_CLEAR_OFFSET UNITYSDK_OFFSET(0xBFAA200)
#define CLASS_1_A647891BD35413FE_METHOD_1_7A2DB6C2ED8E8BBA_OFFSET UNITYSDK_OFFSET(0xBFAA1A0)
#define CLASS_1_A647891BD35413FE__CTOR_OFFSET UNITYSDK_OFFSET(0xBFAA250)

inline static constexpr unsigned int Class_1_A647891BD35413FE_TypeDefinitionIndex = 55447;

class Class_1_A647891BD35413FE : public ::System::Object
{
public:
	::RPG::GameCore::SkillData* IJGAPCNDIAG; // 0x10
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A647891BD35413FE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7A2DB6C2ED8E8BBA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_A647891BD35413FE_METHOD_1_7A2DB6C2ED8E8BBA_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A647891BD35413FE_CLEAR_OFFSET))(this);
	}
};
