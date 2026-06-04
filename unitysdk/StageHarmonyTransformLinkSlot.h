#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageHarmonyBaseLinkSlot.h"
#include "unitysdk/Struct_2_FBA4730A60751401_1.h"

namespace UnityEngine { class Transform; }

#define STAGEHARMONYTRANSFORMLINKSLOT_METHOD_2_25DEA5C65A602671_1_OFFSET UNITYSDK_OFFSET(0xD09A6C0)
#define STAGEHARMONYTRANSFORMLINKSLOT_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xD09A4E0)
#define STAGEHARMONYTRANSFORMLINKSLOT_METHOD_2_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0xD09A880)
#define STAGEHARMONYTRANSFORMLINKSLOT_METHOD_2_97B44ED90A2DE2AB_OFFSET UNITYSDK_OFFSET(0xD09AA50)
#define STAGEHARMONYTRANSFORMLINKSLOT_METHOD_2_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0xD09A9C0)
#define STAGEHARMONYTRANSFORMLINKSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0xD09AD40)

inline static constexpr unsigned int StageHarmonyTransformLinkSlot_TypeDefinitionIndex = 44839;

class StageHarmonyTransformLinkSlot : public ::StageHarmonyBaseLinkSlot
{
public:
	::UnityEngine::Transform* TargetTransform; // 0x28
	::System::Boolean UseLocalSpace; // 0x30
	::System::Boolean _IsInited; // 0x31
	::System::Single _cachedSignal; // 0x34
	::Struct_2_FBA4730A60751401_1 _cachedTransformData; // 0x38
	::System::Boolean _hasNewSignal; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYTRANSFORMLINKSLOT__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYTRANSFORMLINKSLOT_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_2_25DEA5C65A602671_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYTRANSFORMLINKSLOT_METHOD_2_25DEA5C65A602671_1_OFFSET))(this);
	}

	::System::Void Method_2_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYTRANSFORMLINKSLOT_METHOD_2_3CF43707BF2E9BBA_OFFSET))(this);
	}

	::System::Void Method_2_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYTRANSFORMLINKSLOT_METHOD_2_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Void Method_2_97B44ED90A2DE2AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYTRANSFORMLINKSLOT_METHOD_2_97B44ED90A2DE2AB_OFFSET))(this);
	}
};
