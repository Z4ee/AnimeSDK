#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ChimePuzzleLitBoard; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9590D738F9D25CDB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16BA2070)
#define CLASS_3_9590D738F9D25CDB__CTOR_OFFSET UNITYSDK_OFFSET(0x16BA2040)

inline static constexpr unsigned int Class_3_9590D738F9D25CDB_TypeDefinitionIndex = 55440;

class Class_3_9590D738F9D25CDB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChimePuzzleLitBoard*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChimePuzzleLitBoard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChimePuzzleLitBoard*))((::PBYTE)hIl2Cpp + CLASS_3_9590D738F9D25CDB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9590D738F9D25CDB_ONTASKBEGIN_OFFSET))(this);
	}
};
