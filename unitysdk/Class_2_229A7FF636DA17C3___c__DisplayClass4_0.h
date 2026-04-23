#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F3622139E5E134C0;
class Class_2_229A7FF636DA17C3;

#define CLASS_2_229A7FF636DA17C3___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1119A540)
#define CLASS_2_229A7FF636DA17C3___C__DISPLAYCLASS4_0__SENDUPDATERELICPRESETPLANRELICS_B__0_OFFSET UNITYSDK_OFFSET(0x1119ADE0)

inline static constexpr unsigned int Class_2_229A7FF636DA17C3___c__DisplayClass4_0_TypeDefinitionIndex = 61578;

class Class_2_229A7FF636DA17C3___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_2_229A7FF636DA17C3* __4__this; // 0x10
	::System::UInt32 avatarID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::Class_1_F3622139E5E134C0* _SendUpdateRelicPresetPlanRelics_b__0(::Class_1_F3622139E5E134C0* rsp)
	{
		return ((::Class_1_F3622139E5E134C0*(*)(::PVOID, ::Class_1_F3622139E5E134C0*))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3___C__DISPLAYCLASS4_0__SENDUPDATERELICPRESETPLANRELICS_B__0_OFFSET))(this, rsp);
	}
};
