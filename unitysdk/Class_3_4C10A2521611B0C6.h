#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_Hipplen_BubbleTalk; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4C10A2521611B0C6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB904130)
#define CLASS_3_4C10A2521611B0C6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB9043A0)
#define CLASS_3_4C10A2521611B0C6_TICK_OFFSET UNITYSDK_OFFSET(0xB904340)
#define CLASS_3_4C10A2521611B0C6__CTOR_OFFSET UNITYSDK_OFFSET(0xB904100)

inline static constexpr unsigned int Class_3_4C10A2521611B0C6_TypeDefinitionIndex = 52284;

class Class_3_4C10A2521611B0C6 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_Hipplen_BubbleTalk*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_Hipplen_BubbleTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_Hipplen_BubbleTalk*))((::PBYTE)hIl2Cpp + CLASS_3_4C10A2521611B0C6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4C10A2521611B0C6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4C10A2521611B0C6_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4C10A2521611B0C6_ONTASKRESET_OFFSET))(this);
	}
};
