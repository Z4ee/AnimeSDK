#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3F1B1DE9D9F51912.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A043D803AC652E6E;
namespace UnityEngine { class Transform; }

#define CLASS_4_876560AB438F1E60_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17E933A0)
#define CLASS_4_876560AB438F1E60_1_METHOD_4_01E9FC75CA5E0B40_OFFSET UNITYSDK_OFFSET(0x17E92C80)
#define CLASS_4_876560AB438F1E60_1_METHOD_4_0BF1620F1E4289BD_OFFSET UNITYSDK_OFFSET(0x17E93470)
#define CLASS_4_876560AB438F1E60_1_METHOD_4_6332539B3C7FC700_OFFSET UNITYSDK_OFFSET(0x17E92A50)
#define CLASS_4_876560AB438F1E60_1_METHOD_4_76C20C1C1323A406_OFFSET UNITYSDK_OFFSET(0x17E92E10)
#define CLASS_4_876560AB438F1E60_1_METHOD_4_C256FFEE9A4AD041_OFFSET UNITYSDK_OFFSET(0x17E92B00)
#define CLASS_4_876560AB438F1E60_1_METHOD_4_F182F29B5A06AE5E_OFFSET UNITYSDK_OFFSET(0x17E92ED0)
#define CLASS_4_876560AB438F1E60_1_REVERSE_OFFSET UNITYSDK_OFFSET(0x17E93400)
#define CLASS_4_876560AB438F1E60_1_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x17E92FC0)
#define CLASS_4_876560AB438F1E60_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17E92DF0)

inline static constexpr unsigned int Class_4_876560AB438F1E60_1_TypeDefinitionIndex = 70119;

class Class_4_876560AB438F1E60_1 : public ::Class_3_3F1B1DE9D9F51912
{
public:
	::UnityEngine::Vector3 Field_4_0; // 0x38
	::System::Boolean Field_4_1; // 0x44
	::UnityEngine::Vector3 Field_4_2; // 0x48
	::UnityEngine::Vector3 Field_4_3; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_876560AB438F1E60_1__CTOR_OFFSET))(this);
	}

	static ::Class_4_876560AB438F1E60_1* Method_4_6332539B3C7FC700(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::Class_4_876560AB438F1E60_1*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_876560AB438F1E60_1_METHOD_4_6332539B3C7FC700_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_4_876560AB438F1E60_1* Method_4_01E9FC75CA5E0B40(::System::Single a1, ::System::Single a2)
	{
		return ((::Class_4_876560AB438F1E60_1*(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_876560AB438F1E60_1_METHOD_4_01E9FC75CA5E0B40_OFFSET))(a1, a2);
	}

	static ::Class_4_876560AB438F1E60_1* Method_4_C256FFEE9A4AD041(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::Class_4_876560AB438F1E60_1*(*)(::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_4_876560AB438F1E60_1_METHOD_4_C256FFEE9A4AD041_OFFSET))(a1, a2);
	}

	::System::Boolean Method_4_76C20C1C1323A406(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_4_876560AB438F1E60_1_METHOD_4_76C20C1C1323A406_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_F182F29B5A06AE5E(::System::Single& a1, ::System::Single& a2, ::System::Single& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_4_876560AB438F1E60_1_METHOD_4_F182F29B5A06AE5E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_4_876560AB438F1E60_1_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::Class_1_A043D803AC652E6E* Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_876560AB438F1E60_1_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_876560AB438F1E60_1_REVERSE_OFFSET))(this);
	}

	::System::Void Method_4_0BF1620F1E4289BD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_876560AB438F1E60_1_METHOD_4_0BF1620F1E4289BD_OFFSET))(this, a1);
	}
};
