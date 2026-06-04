#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SyncCharLightAndCameraDir; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_257B64B4560960FB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x136E3700)
#define CLASS_2_257B64B4560960FB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x136E3740)
#define CLASS_2_257B64B4560960FB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x136E3950)
#define CLASS_2_257B64B4560960FB_TICK_OFFSET UNITYSDK_OFFSET(0x136E39A0)
#define CLASS_2_257B64B4560960FB__CTOR_OFFSET UNITYSDK_OFFSET(0x136E36F0)

inline static constexpr unsigned int Class_2_257B64B4560960FB_TypeDefinitionIndex = 54900;

class Class_2_257B64B4560960FB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::SyncCharLightAndCameraDir* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SyncCharLightAndCameraDir* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SyncCharLightAndCameraDir*))((::PBYTE)hIl2Cpp + CLASS_2_257B64B4560960FB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_257B64B4560960FB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_257B64B4560960FB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_257B64B4560960FB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_257B64B4560960FB_TICK_OFFSET))(this, a1);
	}
};
