#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7C2D4BBA2A4A8499.h"

class Class_0_16E4307DCC419505_296;

#define CLASS_2_F2350C78575A5670_METHOD_2_D8FD81FB74270BB0_OFFSET UNITYSDK_OFFSET(0x13C511E0)
#define CLASS_2_F2350C78575A5670__CTOR_OFFSET UNITYSDK_OFFSET(0x13C511D0)

inline static constexpr unsigned int Class_2_F2350C78575A5670_TypeDefinitionIndex = 71115;

class Class_2_F2350C78575A5670 : public ::Class_1_7C2D4BBA2A4A8499
{
public:
	::Class_0_16E4307DCC419505_296* Field_2_1; // 0x10
	::Class_0_16E4307DCC419505_296* Field_2_0; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_296* a1, ::Class_0_16E4307DCC419505_296* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_296*, ::Class_0_16E4307DCC419505_296*))((::PBYTE)hIl2Cpp + CLASS_2_F2350C78575A5670__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_D8FD81FB74270BB0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2350C78575A5670_METHOD_2_D8FD81FB74270BB0_OFFSET))(this);
	}
};
