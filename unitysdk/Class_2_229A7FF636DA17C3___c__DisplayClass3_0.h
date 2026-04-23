#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_747;
class Class_2_229A7FF636DA17C3;

#define CLASS_2_229A7FF636DA17C3___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1119A270)
#define CLASS_2_229A7FF636DA17C3___C__DISPLAYCLASS3_0__SENDDELETERELICPRESETPLAN_B__0_OFFSET UNITYSDK_OFFSET(0x1119AC90)

inline static constexpr unsigned int Class_2_229A7FF636DA17C3___c__DisplayClass3_0_TypeDefinitionIndex = 61577;

class Class_2_229A7FF636DA17C3___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Class_2_229A7FF636DA17C3* __4__this; // 0x10
	::System::UInt32 avatarID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_747* _SendDeleteRelicPresetPlan_b__0(::Class_1_D17272E82AE804C2_747* rsp)
	{
		return ((::Class_1_D17272E82AE804C2_747*(*)(::PVOID, ::Class_1_D17272E82AE804C2_747*))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3___C__DISPLAYCLASS3_0__SENDDELETERELICPRESETPLAN_B__0_OFFSET))(this, rsp);
	}
};
