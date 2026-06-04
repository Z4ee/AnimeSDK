#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlayOrigamiTraceTalk; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_C21C41410F543EA0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x144E0120)
#define CLASS_2_C21C41410F543EA0_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x144E0110)
#define CLASS_2_C21C41410F543EA0_METHOD_2_9840056B014AF8F8_OFFSET UNITYSDK_OFFSET(0x144E03F0)
#define CLASS_2_C21C41410F543EA0_ONSKIP_OFFSET UNITYSDK_OFFSET(0x144E0A90)
#define CLASS_2_C21C41410F543EA0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x144E0190)
#define CLASS_2_C21C41410F543EA0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x144E0930)
#define CLASS_2_C21C41410F543EA0_TICK_OFFSET UNITYSDK_OFFSET(0x144E09B0)
#define CLASS_2_C21C41410F543EA0__CTOR_OFFSET UNITYSDK_OFFSET(0x144E0100)

inline static constexpr unsigned int Class_2_C21C41410F543EA0_TypeDefinitionIndex = 49625;

class Class_2_C21C41410F543EA0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* Field_2_0; // 0x18
	::RPG::GameCore::PlayOrigamiTraceTalk* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::System::UInt32 Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayOrigamiTraceTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayOrigamiTraceTalk*))((::PBYTE)hIl2Cpp + CLASS_2_C21C41410F543EA0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C21C41410F543EA0_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C21C41410F543EA0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C21C41410F543EA0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C21C41410F543EA0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C21C41410F543EA0_TICK_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_9840056B014AF8F8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C21C41410F543EA0_METHOD_2_9840056B014AF8F8_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C21C41410F543EA0_ONSKIP_OFFSET))(this);
	}
};
