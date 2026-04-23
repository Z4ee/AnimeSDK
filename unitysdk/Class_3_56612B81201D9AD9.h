#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UseSkillOneMore; }

#define CLASS_3_56612B81201D9AD9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9092BF0)
#define CLASS_3_56612B81201D9AD9__CTOR_OFFSET UNITYSDK_OFFSET(0x9092BC0)

inline static constexpr unsigned int Class_3_56612B81201D9AD9_TypeDefinitionIndex = 51444;

class Class_3_56612B81201D9AD9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::UseSkillOneMore*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UseSkillOneMore* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UseSkillOneMore*))((::PBYTE)hIl2Cpp + CLASS_3_56612B81201D9AD9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_56612B81201D9AD9_ONTASKBEGIN_OFFSET))(this);
	}
};
