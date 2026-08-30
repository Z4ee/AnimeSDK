#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_CC63D4C97D4807F1_1_GET_ARROWQUERYHITEXTRADISTANCE_OFFSET UNITYSDK_OFFSET(0x3B7C5E0)
#define STRUCT_2_CC63D4C97D4807F1_1_GET_BORDERLINKTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x3B7C5F0)
#define STRUCT_2_CC63D4C97D4807F1_1_GET_BORDERSAFEOFFSET_OFFSET UNITYSDK_OFFSET(0x3B7C600)
#define STRUCT_2_CC63D4C97D4807F1_1_GET_CLEANERBOTCOLLIDERSKINWIDTH_OFFSET UNITYSDK_OFFSET(0x821F0)
#define STRUCT_2_CC63D4C97D4807F1_1_GET_CLEANERBOTQUERYGROUNDEXTRADISTANCE_OFFSET UNITYSDK_OFFSET(0x2F7DCC0)
#define STRUCT_2_CC63D4C97D4807F1_1_GET_COLLIDERSKINWIDTH_OFFSET UNITYSDK_OFFSET(0x2E226F0)
#define STRUCT_2_CC63D4C97D4807F1_1_GET_HALFUNITLENGTH_OFFSET UNITYSDK_OFFSET(0xD4D0)
#define STRUCT_2_CC63D4C97D4807F1_1_GET_QUERYSURFACEDISTANCE_OFFSET UNITYSDK_OFFSET(0xD510)
#define STRUCT_2_CC63D4C97D4807F1_1_GET_QUERYSURFACESTARTOFFSET_OFFSET UNITYSDK_OFFSET(0xD4F0)
#define STRUCT_2_CC63D4C97D4807F1_1_GET_UNITLENGTH_OFFSET UNITYSDK_OFFSET(0xD4B0)
#define STRUCT_2_CC63D4C97D4807F1_1__CTOR_OFFSET UNITYSDK_OFFSET(0x3B7C710)

inline static constexpr unsigned int Struct_2_CC63D4C97D4807F1_1_TypeDefinitionIndex = 41937;

struct alignas(4) Struct_2_CC63D4C97D4807F1_1
{
	::System::Single _UnitLength_k__BackingField; // 0x10
	::System::Single _HalfUnitLength_k__BackingField; // 0x14
	::System::Single _QuerySurfaceStartOffset_k__BackingField; // 0x18
	::System::Single _QuerySurfaceDistance_k__BackingField; // 0x1C
	::System::Single _CleanerBotColliderSkinWidth_k__BackingField; // 0x20
	::System::Single _CleanerBotQueryGroundExtraDistance_k__BackingField; // 0x24
	::System::Single _ArrowQueryHitExtraDistance_k__BackingField; // 0x28
	::System::Single _BorderLinkThreshold_k__BackingField; // 0x2C
	::System::Single _BorderSafeOffset_k__BackingField; // 0x30
	::System::Single _ColliderSkinWidth_k__BackingField; // 0x34

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_1__CTOR_OFFSET))(this, a1);
	}

	::System::Single get_UnitLength()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_1_GET_UNITLENGTH_OFFSET))(this);
	}

	::System::Single get_HalfUnitLength()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_1_GET_HALFUNITLENGTH_OFFSET))(this);
	}

	::System::Single get_QuerySurfaceStartOffset()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_1_GET_QUERYSURFACESTARTOFFSET_OFFSET))(this);
	}

	::System::Single get_QuerySurfaceDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_1_GET_QUERYSURFACEDISTANCE_OFFSET))(this);
	}

	::System::Single get_CleanerBotColliderSkinWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_1_GET_CLEANERBOTCOLLIDERSKINWIDTH_OFFSET))(this);
	}

	::System::Single get_CleanerBotQueryGroundExtraDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_1_GET_CLEANERBOTQUERYGROUNDEXTRADISTANCE_OFFSET))(this);
	}

	::System::Single get_ArrowQueryHitExtraDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_1_GET_ARROWQUERYHITEXTRADISTANCE_OFFSET))(this);
	}

	::System::Single get_BorderLinkThreshold()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_1_GET_BORDERLINKTHRESHOLD_OFFSET))(this);
	}

	::System::Single get_BorderSafeOffset()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_1_GET_BORDERSAFEOFFSET_OFFSET))(this);
	}

	::System::Single get_ColliderSkinWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC63D4C97D4807F1_1_GET_COLLIDERSKINWIDTH_OFFSET))(this);
	}
};
