#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_TriggerEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9D0790D22503DFD5_METHOD_3_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0xB51E4D0)
#define CLASS_3_9D0790D22503DFD5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB51E460)
#define CLASS_3_9D0790D22503DFD5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB51E810)
#define CLASS_3_9D0790D22503DFD5__CTOR_OFFSET UNITYSDK_OFFSET(0xB51E430)

inline static constexpr unsigned int Class_3_9D0790D22503DFD5_TypeDefinitionIndex = 48864;

class Class_3_9D0790D22503DFD5 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_TriggerEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_TriggerEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_TriggerEffect*))((::PBYTE)hIl2Cpp + CLASS_3_9D0790D22503DFD5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D0790D22503DFD5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D0790D22503DFD5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D0790D22503DFD5_METHOD_3_460F8AE6EF9687FD_OFFSET))(this);
	}
};
