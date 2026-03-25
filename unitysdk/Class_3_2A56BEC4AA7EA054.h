#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_HaltCD; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2A56BEC4AA7EA054_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8A20D60)
#define CLASS_3_2A56BEC4AA7EA054_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8A20DD0)
#define CLASS_3_2A56BEC4AA7EA054__CTOR_OFFSET UNITYSDK_OFFSET(0x8A20D30)

inline static constexpr unsigned int Class_3_2A56BEC4AA7EA054_TypeDefinitionIndex = 42257;

class Class_3_2A56BEC4AA7EA054 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_HaltCD*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_HaltCD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_HaltCD*))((::PBYTE)hIl2Cpp + CLASS_3_2A56BEC4AA7EA054__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2A56BEC4AA7EA054_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2A56BEC4AA7EA054_ONTASKRESET_OFFSET))(this);
	}
};
