#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_33.h"

class Class_2_A2C95BEE51D13F24;
namespace MoleMole { class UISummerMissionTipsWidgetController; }
namespace System { class String; }

#define CLASS_2_5F5BDCC1D6A74AD7_METHOD_2_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x1337B590)
#define CLASS_2_5F5BDCC1D6A74AD7_METHOD_2_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x1337B3E0)
#define CLASS_2_5F5BDCC1D6A74AD7_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x1337B4E0)
#define CLASS_2_5F5BDCC1D6A74AD7__CTOR_OFFSET UNITYSDK_OFFSET(0x1337B330)

inline static constexpr unsigned int Class_2_5F5BDCC1D6A74AD7_TypeDefinitionIndex = 83597;

class Class_2_5F5BDCC1D6A74AD7 : public ::Class_1_43BD383C98B4C0C5_33
{
public:
	// static const ::System::String* Field_2_3; // 0x0
	::MoleMole::UISummerMissionTipsWidgetController* Field_2_0; // 0x10
	::Class_2_A2C95BEE51D13F24* Field_2_1; // 0x18
	::System::Single Field_2_2; // 0x20

	::System::Void _ctor(::MoleMole::UISummerMissionTipsWidgetController* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UISummerMissionTipsWidgetController*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5F5BDCC1D6A74AD7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F5BDCC1D6A74AD7_METHOD_2_DF3C54A5ADEABAF1_OFFSET))(this);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F5BDCC1D6A74AD7_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5F5BDCC1D6A74AD7_METHOD_2_AD23FDCC7576BB32_OFFSET))(this, a1);
	}
};
