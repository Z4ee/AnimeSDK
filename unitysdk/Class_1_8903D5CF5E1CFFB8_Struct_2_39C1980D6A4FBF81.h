#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_22233FCE064B8C06;
class Class_1_F5777EDD28DD1F39;

#define CLASS_1_8903D5CF5E1CFFB8_STRUCT_2_39C1980D6A4FBF81_METHOD_2_F3E27D1F1A35506F_OFFSET UNITYSDK_OFFSET(0x1660E720)
#define CLASS_1_8903D5CF5E1CFFB8_STRUCT_2_39C1980D6A4FBF81__CTOR_OFFSET UNITYSDK_OFFSET(0x2E851A0)

inline static constexpr unsigned int Class_1_8903D5CF5E1CFFB8_Struct_2_39C1980D6A4FBF81_TypeDefinitionIndex = 48940;

struct alignas(8) Class_1_8903D5CF5E1CFFB8_Struct_2_39C1980D6A4FBF81
{
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x10
	::Class_1_F5777EDD28DD1F39* JCHFCNFHCMM; // 0x20
	::System::Boolean CHIOEJFLMKD; // 0x28
	::Class_1_22233FCE064B8C06* OLNAOJPNNGJ; // 0x30

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::Class_1_F5777EDD28DD1F39* a2, ::System::Boolean a3, ::Class_1_22233FCE064B8C06* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Class_1_F5777EDD28DD1F39*, ::System::Boolean, ::Class_1_22233FCE064B8C06*))((::PBYTE)hIl2Cpp + CLASS_1_8903D5CF5E1CFFB8_STRUCT_2_39C1980D6A4FBF81__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::Class_1_8903D5CF5E1CFFB8_Struct_2_39C1980D6A4FBF81 Method_2_F3E27D1F1A35506F(::UnityEngine::Vector3 a1)
	{
		return ((::Class_1_8903D5CF5E1CFFB8_Struct_2_39C1980D6A4FBF81(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8903D5CF5E1CFFB8_STRUCT_2_39C1980D6A4FBF81_METHOD_2_F3E27D1F1A35506F_OFFSET))(a1);
	}
};
