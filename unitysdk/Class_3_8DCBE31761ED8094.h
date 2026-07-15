#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_TriggerLittleGameCustomEvent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8DCBE31761ED8094_METHOD_3_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0x18B1C6C0)
#define CLASS_3_8DCBE31761ED8094_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18B1C650)
#define CLASS_3_8DCBE31761ED8094_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18B1C9A0)
#define CLASS_3_8DCBE31761ED8094__CTOR_OFFSET UNITYSDK_OFFSET(0x18B1C620)

inline static constexpr unsigned int Class_3_8DCBE31761ED8094_TypeDefinitionIndex = 49774;

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

	::System::Void Method_3_777C630B90A28EF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DCBE31761ED8094_METHOD_3_777C630B90A28EF1_OFFSET))(this);
	}
};
