#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_TriggerEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9D0790D22503DFD5_METHOD_3_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x15583CE0)
#define CLASS_3_9D0790D22503DFD5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15583C70)
#define CLASS_3_9D0790D22503DFD5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15584160)
#define CLASS_3_9D0790D22503DFD5__CTOR_OFFSET UNITYSDK_OFFSET(0x15583C40)

inline static constexpr unsigned int Class_3_9D0790D22503DFD5_TypeDefinitionIndex = 49877;

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

	::System::Void Method_3_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D0790D22503DFD5_METHOD_3_6E6682ED9FD6F719_OFFSET))(this);
	}
};
