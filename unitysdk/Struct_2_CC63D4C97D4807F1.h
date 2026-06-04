#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_CC63D4C97D4807F1_GET_BORDERLINKTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x2D29E40)
#define STRUCT_2_CC63D4C97D4807F1_GET_BORDERSAFEOFFSET_OFFSET UNITYSDK_OFFSET(0xD530)
#define STRUCT_2_CC63D4C97D4807F1_GET_COLLIDERSKINWIDTH_OFFSET UNITYSDK_OFFSET(0x802E0)
#define STRUCT_2_CC63D4C97D4807F1_GET_GROUNDSKINWIDTH_OFFSET UNITYSDK_OFFSET(0x2D2B640)
#define STRUCT_2_CC63D4C97D4807F1_GET_HALFUNITLENGTH_OFFSET UNITYSDK_OFFSET(0xD4F0)
#define STRUCT_2_CC63D4C97D4807F1_GET_OVERRIDERESETPOINTSTICKGROUNDDISTANCE_OFFSET UNITYSDK_OFFSET(0x3846CB0)
#define STRUCT_2_CC63D4C97D4807F1_GET_QUERYGROUNDEXTRADISTANCE_OFFSET UNITYSDK_OFFSET(0x3846C70)
#define STRUCT_2_CC63D4C97D4807F1_GET_QUERYROOFEXTRADISTANCE_OFFSET UNITYSDK_OFFSET(0x2D32440)
#define STRUCT_2_CC63D4C97D4807F1_GET_QUERYWALLEXTRADISTANCE_OFFSET UNITYSDK_OFFSET(0x3846C80)
#define STRUCT_2_CC63D4C97D4807F1_GET_REACHBORDERTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xD510)
#define STRUCT_2_CC63D4C97D4807F1_GET_STUCKTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x3846CA0)
#define STRUCT_2_CC63D4C97D4807F1_GET_SWEEPSHRINKHEIGHT_OFFSET UNITYSDK_OFFSET(0x3846C90)
#define STRUCT_2_CC63D4C97D4807F1_GET_UNITLENGTH_OFFSET UNITYSDK_OFFSET(0xD4D0)
#define STRUCT_2_CC63D4C97D4807F1_GET_WALLSKINWIDTH_OFFSET UNITYSDK_OFFSET(0x2CDB370)
#define STRUCT_2_CC63D4C97D4807F1_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x3846C20)
#define STRUCT_2_CC63D4C97D4807F1__CTOR_OFFSET UNITYSDK_OFFSET(0x3846BA0)

inline static constexpr unsigned int Struct_2_CC63D4C97D4807F1_TypeDefinitionIndex = 40163;

struct alignas(4) Struct_2_CC63D4C97D4807F1
{
	::System::Single _UnitLength_k__BackingField; // 0x10
	::System::Single _HalfUnitLength_k__BackingField; // 0x14
	::System::Single _ReachBorderThreshold_k__BackingField; // 0x18
	::System::Single _BorderSafeOffset_k__BackingField; // 0x1C
	::System::Single _ColliderSkinWidth_k__BackingField; // 0x20
	::System::Single _WallSkinWidth_k__BackingField; // 0x24
	::System::Single _GroundSkinWidth_k__BackingField; // 0x28
	::System::Single _QueryGroundExtraDistance_k__BackingField; // 0x2C
	::System::Single _QueryWallExtraDistance_k__BackingField; // 0x30
	::System::Single _BorderLinkThreshold_k__BackingField; // 0x34
	::System::Single _SweepShrinkHeight_k__BackingField; // 0x38
	::System::Single _StuckThreshold_k__BackingField; // 0x3C
	::System::Single _QueryRoofExtraDistance_k__BackingField; // 0x40
	::System::Single _OverrideResetPointStickGroundDistance_k__BackingField; // 0x44

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1__CTOR_OFFSET))(this, a1);
	}

	::System::Single get_UnitLength()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_GET_UNITLENGTH_OFFSET))(this);
	}

	::System::Single get_HalfUnitLength()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_GET_HALFUNITLENGTH_OFFSET))(this);
	}

	::System::Single get_ReachBorderThreshold()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_GET_REACHBORDERTHRESHOLD_OFFSET))(this);
	}

	::System::Single get_BorderSafeOffset()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_GET_BORDERSAFEOFFSET_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single get_ColliderSkinWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_GET_COLLIDERSKINWIDTH_OFFSET))(this);
	}

	::System::Single get_WallSkinWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_GET_WALLSKINWIDTH_OFFSET))(this);
	}

	::System::Single get_GroundSkinWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_GET_GROUNDSKINWIDTH_OFFSET))(this);
	}

	::System::Single get_QueryGroundExtraDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_GET_QUERYGROUNDEXTRADISTANCE_OFFSET))(this);
	}

	::System::Single get_QueryWallExtraDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_GET_QUERYWALLEXTRADISTANCE_OFFSET))(this);
	}

	::System::Single get_BorderLinkThreshold()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_GET_BORDERLINKTHRESHOLD_OFFSET))(this);
	}

	::System::Single get_SweepShrinkHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_GET_SWEEPSHRINKHEIGHT_OFFSET))(this);
	}

	::System::Single get_StuckThreshold()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_GET_STUCKTHRESHOLD_OFFSET))(this);
	}

	::System::Single get_QueryRoofExtraDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_GET_QUERYROOFEXTRADISTANCE_OFFSET))(this);
	}

	::System::Single get_OverrideResetPointStickGroundDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_GET_OVERRIDERESETPOINTSTICKGROUNDDISTANCE_OFFSET))(this);
	}
};
