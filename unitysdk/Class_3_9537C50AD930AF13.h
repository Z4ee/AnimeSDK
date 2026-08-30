#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_Hipplen_Unlock_Trait; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9537C50AD930AF13_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDAA96F0)
#define CLASS_3_9537C50AD930AF13_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDAA95D0)
#define CLASS_3_9537C50AD930AF13_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDAA96A0)
#define CLASS_3_9537C50AD930AF13_TICK_OFFSET UNITYSDK_OFFSET(0xDAA9640)
#define CLASS_3_9537C50AD930AF13__CTOR_OFFSET UNITYSDK_OFFSET(0xDAA95A0)

inline static constexpr unsigned int Class_3_9537C50AD930AF13_TypeDefinitionIndex = 52580;

class Class_3_9537C50AD930AF13 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_Hipplen_Unlock_Trait*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Trait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Trait*))((::PBYTE)hIl2Cpp + CLASS_3_9537C50AD930AF13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9537C50AD930AF13_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9537C50AD930AF13_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9537C50AD930AF13_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9537C50AD930AF13_DISPOSE_OFFSET))(this);
	}
};
