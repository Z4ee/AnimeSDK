#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RtSkillReturnToken; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_48441C931899C8E7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157E9670)
#define CLASS_3_48441C931899C8E7__CTOR_OFFSET UNITYSDK_OFFSET(0x157E9640)

inline static constexpr unsigned int Class_3_48441C931899C8E7_TypeDefinitionIndex = 51465;

class Class_3_48441C931899C8E7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtSkillReturnToken*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtSkillReturnToken* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtSkillReturnToken*))((::PBYTE)hIl2Cpp + CLASS_3_48441C931899C8E7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_48441C931899C8E7_ONTASKBEGIN_OFFSET))(this);
	}
};
