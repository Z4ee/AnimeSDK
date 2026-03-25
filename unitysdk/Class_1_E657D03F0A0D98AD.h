#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_E657D03F0A0D98AD_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x1037D4B0)
#define CLASS_1_E657D03F0A0D98AD_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1037D480)
#define CLASS_1_E657D03F0A0D98AD_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1037D490)
#define CLASS_1_E657D03F0A0D98AD_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1037D4A0)
#define CLASS_1_E657D03F0A0D98AD_GET_TOP_OFFSET UNITYSDK_OFFSET(0x1037D4C0)
#define CLASS_1_E657D03F0A0D98AD_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1037D470)
#define CLASS_1_E657D03F0A0D98AD__CTOR_OFFSET UNITYSDK_OFFSET(0x1037D4D0)

inline static constexpr unsigned int Class_1_E657D03F0A0D98AD_TypeDefinitionIndex = 52368;

class Class_1_E657D03F0A0D98AD : public ::System::Object
{
public:
	::System::Double _Height_k__BackingField; // 0x10
	::System::Double _Top_k__BackingField; // 0x18
	::System::Double _Right_k__BackingField; // 0x20
	::System::Double _Width_k__BackingField; // 0x28
	::System::Double _Bottom_k__BackingField; // 0x30
	::System::Double _Left_k__BackingField; // 0x38

	::System::Void _ctor(::System::Double a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_E657D03F0A0D98AD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Double get_Width()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E657D03F0A0D98AD_GET_WIDTH_OFFSET))(this);
	}

	::System::Double get_Height()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E657D03F0A0D98AD_GET_HEIGHT_OFFSET))(this);
	}

	::System::Double get_Left()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E657D03F0A0D98AD_GET_LEFT_OFFSET))(this);
	}

	::System::Double get_Right()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E657D03F0A0D98AD_GET_RIGHT_OFFSET))(this);
	}

	::System::Double get_Bottom()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E657D03F0A0D98AD_GET_BOTTOM_OFFSET))(this);
	}

	::System::Double get_Top()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E657D03F0A0D98AD_GET_TOP_OFFSET))(this);
	}
};
