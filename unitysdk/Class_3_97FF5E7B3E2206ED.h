#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_RecordGuardPosition; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_97FF5E7B3E2206ED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F075F0)
#define CLASS_3_97FF5E7B3E2206ED_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15F07640)
#define CLASS_3_97FF5E7B3E2206ED__CTOR_OFFSET UNITYSDK_OFFSET(0x15F075C0)

inline static constexpr unsigned int Class_3_97FF5E7B3E2206ED_TypeDefinitionIndex = 49868;

class Class_3_97FF5E7B3E2206ED : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_RecordGuardPosition*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_RecordGuardPosition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_RecordGuardPosition*))((::PBYTE)hIl2Cpp + CLASS_3_97FF5E7B3E2206ED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97FF5E7B3E2206ED_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97FF5E7B3E2206ED_ONTASKRESET_OFFSET))(this);
	}
};
