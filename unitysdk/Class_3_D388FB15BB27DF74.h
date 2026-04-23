#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_RtTask_1.h"

namespace RPG::GameCore { class ST_RtSelectSkill; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D388FB15BB27DF74_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC71CB90)
#define CLASS_3_D388FB15BB27DF74_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC71CE10)
#define CLASS_3_D388FB15BB27DF74__CTOR_OFFSET UNITYSDK_OFFSET(0xC71CB60)

inline static constexpr unsigned int Class_3_D388FB15BB27DF74_TypeDefinitionIndex = 49928;

class Class_3_D388FB15BB27DF74 : public ::RPG::GameCore::ST_RtTask_1<::RPG::GameCore::ST_RtSelectSkill*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_RtSelectSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_RtSelectSkill*))((::PBYTE)hIl2Cpp + CLASS_3_D388FB15BB27DF74__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D388FB15BB27DF74_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D388FB15BB27DF74_ONTASKRESET_OFFSET))(this);
	}
};
