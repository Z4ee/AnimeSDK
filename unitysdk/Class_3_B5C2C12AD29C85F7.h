#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifySPNew; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B5C2C12AD29C85F7_METHOD_3_E22342BF7313EA8D_OFFSET UNITYSDK_OFFSET(0x105B2180)
#define CLASS_3_B5C2C12AD29C85F7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x105B16D0)
#define CLASS_3_B5C2C12AD29C85F7__CTOR_OFFSET UNITYSDK_OFFSET(0x105B16A0)

inline static constexpr unsigned int Class_3_B5C2C12AD29C85F7_TypeDefinitionIndex = 55410;

class Class_3_B5C2C12AD29C85F7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifySPNew*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifySPNew* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifySPNew*))((::PBYTE)hIl2Cpp + CLASS_3_B5C2C12AD29C85F7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B5C2C12AD29C85F7_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::SkillData* Method_3_E22342BF7313EA8D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B5C2C12AD29C85F7_METHOD_3_E22342BF7313EA8D_OFFSET))(this, a1);
	}
};
