#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifySpecialSP; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_89C684515684E685_METHOD_3_D6972F824E36EBF2_OFFSET UNITYSDK_OFFSET(0xB211270)
#define CLASS_3_89C684515684E685_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2101D0)
#define CLASS_3_89C684515684E685__CTOR_OFFSET UNITYSDK_OFFSET(0xB2101A0)

inline static constexpr unsigned int Class_3_89C684515684E685_TypeDefinitionIndex = 50907;

class Class_3_89C684515684E685 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifySpecialSP*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifySpecialSP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifySpecialSP*))((::PBYTE)hIl2Cpp + CLASS_3_89C684515684E685__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89C684515684E685_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::SkillData* Method_3_D6972F824E36EBF2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_89C684515684E685_METHOD_3_D6972F824E36EBF2_OFFSET))(this, a1);
	}
};
