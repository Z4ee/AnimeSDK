#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlayOrigamiTraceTalk; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_C21C41410F543EA0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB531840)
#define CLASS_2_C21C41410F543EA0_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB531830)
#define CLASS_2_C21C41410F543EA0_METHOD_2_C5B2A6F6738972A1_OFFSET UNITYSDK_OFFSET(0xB531BF0)
#define CLASS_2_C21C41410F543EA0_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB532390)
#define CLASS_2_C21C41410F543EA0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB531920)
#define CLASS_2_C21C41410F543EA0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB532170)
#define CLASS_2_C21C41410F543EA0_TICK_OFFSET UNITYSDK_OFFSET(0xB532250)
#define CLASS_2_C21C41410F543EA0__CTOR_OFFSET UNITYSDK_OFFSET(0xB531820)

inline static constexpr unsigned int Class_2_C21C41410F543EA0_TypeDefinitionIndex = 53361;

class Class_2_C21C41410F543EA0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PlayOrigamiTraceTalk* OFKGLJOAMLD; // 0x18
	::Class_1_5F51D4049EA87B7B* OBHCKPLBLGK; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::System::UInt32 KGGMOFBNALD; // 0x30

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

	::System::UInt32 Method_2_C5B2A6F6738972A1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C21C41410F543EA0_METHOD_2_C5B2A6F6738972A1_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C21C41410F543EA0_ONSKIP_OFFSET))(this);
	}
};
