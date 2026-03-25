#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageHarmonyBaseLinkSlot.h"
#include "unitysdk/StageHarmonyLightModLinkSlot_Struct_2_5D4D097EFCB9C87F_1.h"

class Class_1_96C82B73FFE758FB;
class StageHarmonyDemodulator;
class StageHarmonyTargetLightGroup;

#define STAGEHARMONYLIGHTMODLINKSLOT_METHOD_2_4316FC6BDA5848E8_OFFSET UNITYSDK_OFFSET(0xABDE240)
#define STAGEHARMONYLIGHTMODLINKSLOT_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xABDE290)
#define STAGEHARMONYLIGHTMODLINKSLOT_METHOD_2_8A260B95B64FA5E2_OFFSET UNITYSDK_OFFSET(0xABDE190)
#define STAGEHARMONYLIGHTMODLINKSLOT_METHOD_2_A5344E5AFEB20260_OFFSET UNITYSDK_OFFSET(0xABDE350)
#define STAGEHARMONYLIGHTMODLINKSLOT_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xABDE310)
#define STAGEHARMONYLIGHTMODLINKSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0xABDE3B0)

inline static constexpr unsigned int StageHarmonyLightModLinkSlot_TypeDefinitionIndex = 38400;

class StageHarmonyLightModLinkSlot : public ::StageHarmonyBaseLinkSlot
{
public:
	::StageHarmonyTargetLightGroup* TargetLightIDList; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTMODLINKSLOT__CTOR_OFFSET))(this);
	}

	static ::System::Int32 Method_2_8A260B95B64FA5E2(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTMODLINKSLOT_METHOD_2_8A260B95B64FA5E2_OFFSET))(a1, a2);
	}

	static ::StageHarmonyLightModLinkSlot_Struct_2_5D4D097EFCB9C87F_1 Method_2_4316FC6BDA5848E8(::System::Int32 a1)
	{
		return ((::StageHarmonyLightModLinkSlot_Struct_2_5D4D097EFCB9C87F_1(*)(::System::Int32))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTMODLINKSLOT_METHOD_2_4316FC6BDA5848E8_OFFSET))(a1);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTMODLINKSLOT_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTMODLINKSLOT_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_A5344E5AFEB20260(::StageHarmonyDemodulator* a1, ::System::Single a2, ::Class_1_96C82B73FFE758FB* a3)
	{
		return ((::System::Void(*)(::PVOID, ::StageHarmonyDemodulator*, ::System::Single, ::Class_1_96C82B73FFE758FB*))((::PBYTE)hIl2Cpp + STAGEHARMONYLIGHTMODLINKSLOT_METHOD_2_A5344E5AFEB20260_OFFSET))(this, a1, a2, a3);
	}
};
