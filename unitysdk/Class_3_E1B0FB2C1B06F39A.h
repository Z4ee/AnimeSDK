#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ActiveCommonSkillPool; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E1B0FB2C1B06F39A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA9B4E60)
#define CLASS_3_E1B0FB2C1B06F39A__CTOR_OFFSET UNITYSDK_OFFSET(0xA9B4E30)

inline static constexpr unsigned int Class_3_E1B0FB2C1B06F39A_TypeDefinitionIndex = 51232;

class Class_3_E1B0FB2C1B06F39A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ActiveCommonSkillPool*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActiveCommonSkillPool* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActiveCommonSkillPool*))((::PBYTE)hIl2Cpp + CLASS_3_E1B0FB2C1B06F39A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E1B0FB2C1B06F39A_ONTASKBEGIN_OFFSET))(this);
	}
};
