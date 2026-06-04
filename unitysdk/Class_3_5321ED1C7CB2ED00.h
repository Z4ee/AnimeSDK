#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ResetTeammateAttackPerform; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5321ED1C7CB2ED00_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA8434A0)
#define CLASS_3_5321ED1C7CB2ED00__CTOR_OFFSET UNITYSDK_OFFSET(0xA843470)

inline static constexpr unsigned int Class_3_5321ED1C7CB2ED00_TypeDefinitionIndex = 52648;

class Class_3_5321ED1C7CB2ED00 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ResetTeammateAttackPerform*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetTeammateAttackPerform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetTeammateAttackPerform*))((::PBYTE)hIl2Cpp + CLASS_3_5321ED1C7CB2ED00__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5321ED1C7CB2ED00_ONTASKBEGIN_OFFSET))(this);
	}
};
