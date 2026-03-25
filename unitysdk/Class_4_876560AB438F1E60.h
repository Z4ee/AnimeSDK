#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3F1B1DE9D9F51912.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A043D803AC652E6E;
namespace UnityEngine { class Transform; }

#define CLASS_4_876560AB438F1E60_CLONE_OFFSET UNITYSDK_OFFSET(0x11818750)
#define CLASS_4_876560AB438F1E60_METHOD_4_01E9FC75CA5E0B40_OFFSET UNITYSDK_OFFSET(0x11818030)
#define CLASS_4_876560AB438F1E60_METHOD_4_0BF1620F1E4289BD_OFFSET UNITYSDK_OFFSET(0x11818820)
#define CLASS_4_876560AB438F1E60_METHOD_4_6332539B3C7FC700_OFFSET UNITYSDK_OFFSET(0x11817E00)
#define CLASS_4_876560AB438F1E60_METHOD_4_76C20C1C1323A406_OFFSET UNITYSDK_OFFSET(0x118181C0)
#define CLASS_4_876560AB438F1E60_METHOD_4_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x11818A50)
#define CLASS_4_876560AB438F1E60_METHOD_4_C256FFEE9A4AD041_OFFSET UNITYSDK_OFFSET(0x11817EB0)
#define CLASS_4_876560AB438F1E60_METHOD_4_F182F29B5A06AE5E_OFFSET UNITYSDK_OFFSET(0x11818280)
#define CLASS_4_876560AB438F1E60_REVERSE_OFFSET UNITYSDK_OFFSET(0x118187B0)
#define CLASS_4_876560AB438F1E60_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x11818370)
#define CLASS_4_876560AB438F1E60__CTOR_OFFSET UNITYSDK_OFFSET(0x118181A0)
#define CLASS_4_876560AB438F1E60___IFIXBASEPROXY_CLONE_OFFSET UNITYSDK_OFFSET(0x11818910)
#define CLASS_4_876560AB438F1E60___IFIXBASEPROXY_REVERSE_OFFSET UNITYSDK_OFFSET(0x118189B0)
#define CLASS_4_876560AB438F1E60___IFIXBASEPROXY_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x11818900)

inline static constexpr unsigned int Class_4_876560AB438F1E60_TypeDefinitionIndex = 60245;

class Class_4_876560AB438F1E60 : public ::Class_3_3F1B1DE9D9F51912
{
public:
	::UnityEngine::Vector3 Field_4_2; // 0x38
	::UnityEngine::Vector3 Field_4_1; // 0x44
	::UnityEngine::Vector3 Field_4_0; // 0x50
	::System::Boolean Field_4_3; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_876560AB438F1E60__CTOR_OFFSET))(this);
	}

	static ::Class_4_876560AB438F1E60* Method_4_6332539B3C7FC700(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::Class_4_876560AB438F1E60*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_876560AB438F1E60_METHOD_4_6332539B3C7FC700_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_4_876560AB438F1E60* Method_4_01E9FC75CA5E0B40(::System::Single a1, ::System::Single a2)
	{
		return ((::Class_4_876560AB438F1E60*(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_876560AB438F1E60_METHOD_4_01E9FC75CA5E0B40_OFFSET))(a1, a2);
	}

	static ::Class_4_876560AB438F1E60* Method_4_C256FFEE9A4AD041(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::Class_4_876560AB438F1E60*(*)(::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_4_876560AB438F1E60_METHOD_4_C256FFEE9A4AD041_OFFSET))(a1, a2);
	}

	::System::Boolean Method_4_76C20C1C1323A406(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_4_876560AB438F1E60_METHOD_4_76C20C1C1323A406_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_F182F29B5A06AE5E(::System::Single& a1, ::System::Single& a2, ::System::Single& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_4_876560AB438F1E60_METHOD_4_F182F29B5A06AE5E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_4_876560AB438F1E60_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::Class_1_A043D803AC652E6E* Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_876560AB438F1E60_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_876560AB438F1E60_REVERSE_OFFSET))(this);
	}

	::System::Void Method_4_0BF1620F1E4289BD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_876560AB438F1E60_METHOD_4_0BF1620F1E4289BD_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_StartWithTarget(::UnityEngine::Transform* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_4_876560AB438F1E60___IFIXBASEPROXY_STARTWITHTARGET_OFFSET))(this, P0);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_876560AB438F1E60___IFIXBASEPROXY_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_876560AB438F1E60___IFIXBASEPROXY_REVERSE_OFFSET))(this);
	}

	::System::Void Method_4_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_876560AB438F1E60_METHOD_4_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
