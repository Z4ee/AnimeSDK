#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RtInsertSkill; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C96491D3374333EF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1423E470)
#define CLASS_3_C96491D3374333EF__CTOR_OFFSET UNITYSDK_OFFSET(0x1423E440)

inline static constexpr unsigned int Class_3_C96491D3374333EF_TypeDefinitionIndex = 51459;

class Class_3_C96491D3374333EF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtInsertSkill*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtInsertSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtInsertSkill*))((::PBYTE)hIl2Cpp + CLASS_3_C96491D3374333EF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C96491D3374333EF_ONTASKBEGIN_OFFSET))(this);
	}
};
