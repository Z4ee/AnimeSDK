#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageHarmonyBaseLinkSlot.h"
#include "unitysdk/Struct_2_FBA4730A60751401_1.h"

namespace UnityEngine { class Transform; }

#define STAGEHARMONYTRANSFORMLINKSLOT_METHOD_2_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0xE941530)
#define STAGEHARMONYTRANSFORMLINKSLOT_METHOD_2_25DEA5C65A602671_1_OFFSET UNITYSDK_OFFSET(0xE941140)
#define STAGEHARMONYTRANSFORMLINKSLOT_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xE940F60)
#define STAGEHARMONYTRANSFORMLINKSLOT_METHOD_2_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0xE941300)
#define STAGEHARMONYTRANSFORMLINKSLOT_METHOD_2_4D70E3D849E4E16D_OFFSET UNITYSDK_OFFSET(0xE941440)
#define STAGEHARMONYTRANSFORMLINKSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0xE941920)

inline static constexpr unsigned int StageHarmonyTransformLinkSlot_TypeDefinitionIndex = 48008;

class StageHarmonyTransformLinkSlot : public ::StageHarmonyBaseLinkSlot
{
public:
	::UnityEngine::Transform* TargetTransform; // 0x40
	::System::Boolean UseLocalSpace; // 0x48
	::System::Boolean _IsInited; // 0x49
	::System::Single _cachedSignal; // 0x4C
	::Struct_2_FBA4730A60751401_1 _cachedTransformData; // 0x50
	::System::Boolean _hasNewSignal; // 0x78

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

	::System::Void Method_2_4D70E3D849E4E16D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYTRANSFORMLINKSLOT_METHOD_2_4D70E3D849E4E16D_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYTRANSFORMLINKSLOT_METHOD_2_0B7E3489D2C0938B_OFFSET))(this);
	}
};
