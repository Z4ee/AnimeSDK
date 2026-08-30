#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AB4ED2B21F301DB7;
class Class_1_D17272E82AE804C2_610;

#define CLASS_1_AB4ED2B21F301DB7___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x178498D0)
#define CLASS_1_AB4ED2B21F301DB7___C__DISPLAYCLASS16_0__ONOPTIONSELECTED_B__0_OFFSET UNITYSDK_OFFSET(0x1784C050)

inline static constexpr unsigned int Class_1_AB4ED2B21F301DB7___c__DisplayClass16_0_TypeDefinitionIndex = 78991;

class Class_1_AB4ED2B21F301DB7___c__DisplayClass16_0 : public ::System::Object
{
public:
	::Class_1_AB4ED2B21F301DB7* __4__this; // 0x10
	::System::UInt32 employeeID; // 0x18
	::System::UInt32 optionID; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnOptionSelected_b__0(::Class_1_D17272E82AE804C2_610* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_610*))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7___C__DISPLAYCLASS16_0__ONOPTIONSELECTED_B__0_OFFSET))(this, a1);
	}
};
