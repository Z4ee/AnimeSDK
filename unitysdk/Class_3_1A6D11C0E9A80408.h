#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnableDynamicSkillButtonInput; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1A6D11C0E9A80408_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1068A3E0)
#define CLASS_3_1A6D11C0E9A80408__CTOR_OFFSET UNITYSDK_OFFSET(0x1068A3B0)

inline static constexpr unsigned int Class_3_1A6D11C0E9A80408_TypeDefinitionIndex = 44042;

class Class_3_1A6D11C0E9A80408 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnableDynamicSkillButtonInput*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableDynamicSkillButtonInput* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableDynamicSkillButtonInput*))((::PBYTE)hIl2Cpp + CLASS_3_1A6D11C0E9A80408__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A6D11C0E9A80408_ONTASKBEGIN_OFFSET))(this);
	}
};
