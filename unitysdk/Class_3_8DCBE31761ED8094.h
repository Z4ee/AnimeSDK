#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_TriggerLittleGameCustomEvent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8DCBE31761ED8094_METHOD_3_9F8F6511E8EF1235_OFFSET UNITYSDK_OFFSET(0x141A4E10)
#define CLASS_3_8DCBE31761ED8094_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x141A4DA0)
#define CLASS_3_8DCBE31761ED8094_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x141A4FB0)
#define CLASS_3_8DCBE31761ED8094__CTOR_OFFSET UNITYSDK_OFFSET(0x141A4D70)

inline static constexpr unsigned int Class_3_8DCBE31761ED8094_TypeDefinitionIndex = 48761;

class Class_3_8DCBE31761ED8094 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_TriggerLittleGameCustomEvent*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_TriggerLittleGameCustomEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_TriggerLittleGameCustomEvent*))((::PBYTE)hIl2Cpp + CLASS_3_8DCBE31761ED8094__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DCBE31761ED8094_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DCBE31761ED8094_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_9F8F6511E8EF1235()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DCBE31761ED8094_METHOD_3_9F8F6511E8EF1235_OFFSET))(this);
	}
};
