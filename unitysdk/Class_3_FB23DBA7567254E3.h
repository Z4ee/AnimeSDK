#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_RemoveModifierWhenReset; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FB23DBA7567254E3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF6CED0)
#define CLASS_3_FB23DBA7567254E3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF6CF20)
#define CLASS_3_FB23DBA7567254E3__CTOR_OFFSET UNITYSDK_OFFSET(0xBF6CEA0)

inline static constexpr unsigned int Class_3_FB23DBA7567254E3_TypeDefinitionIndex = 48858;

class Class_3_FB23DBA7567254E3 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_RemoveModifierWhenReset*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_RemoveModifierWhenReset* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_RemoveModifierWhenReset*))((::PBYTE)hIl2Cpp + CLASS_3_FB23DBA7567254E3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB23DBA7567254E3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB23DBA7567254E3_ONTASKRESET_OFFSET))(this);
	}
};
