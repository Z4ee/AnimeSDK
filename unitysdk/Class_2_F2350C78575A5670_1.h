#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7C2D4BBA2A4A8499.h"

class Class_0_16E4307DCC419505_296;

#define CLASS_2_F2350C78575A5670_1_METHOD_2_AF088DD8936FBFFF_OFFSET UNITYSDK_OFFSET(0x11BCC050)
#define CLASS_2_F2350C78575A5670_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11BCC040)

inline static constexpr unsigned int Class_2_F2350C78575A5670_1_TypeDefinitionIndex = 85427;

class Class_2_F2350C78575A5670_1 : public ::Class_1_7C2D4BBA2A4A8499
{
public:
	::Class_0_16E4307DCC419505_296* Field_2_0; // 0x10
	::Class_0_16E4307DCC419505_296* Field_2_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_296* a1, ::Class_0_16E4307DCC419505_296* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_296*, ::Class_0_16E4307DCC419505_296*))((::PBYTE)hIl2Cpp + CLASS_2_F2350C78575A5670_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_AF088DD8936FBFFF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2350C78575A5670_1_METHOD_2_AF088DD8936FBFFF_OFFSET))(this);
	}
};
