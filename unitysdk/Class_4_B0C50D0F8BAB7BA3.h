#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3F1B1DE9D9F51912.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A043D803AC652E6E;
namespace UnityEngine { class Transform; }

#define CLASS_4_B0C50D0F8BAB7BA3_CLONE_OFFSET UNITYSDK_OFFSET(0x8881CB0)
#define CLASS_4_B0C50D0F8BAB7BA3_METHOD_4_479759059E440327_OFFSET UNITYSDK_OFFSET(0x8881D80)
#define CLASS_4_B0C50D0F8BAB7BA3_METHOD_4_6332539B3C7FC700_OFFSET UNITYSDK_OFFSET(0x88818E0)
#define CLASS_4_B0C50D0F8BAB7BA3_METHOD_4_76C20C1C1323A406_OFFSET UNITYSDK_OFFSET(0x8881B40)
#define CLASS_4_B0C50D0F8BAB7BA3_METHOD_4_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x8882000)
#define CLASS_4_B0C50D0F8BAB7BA3_METHOD_4_C256FFEE9A4AD041_OFFSET UNITYSDK_OFFSET(0x8881990)
#define CLASS_4_B0C50D0F8BAB7BA3_REVERSE_OFFSET UNITYSDK_OFFSET(0x8881D10)
#define CLASS_4_B0C50D0F8BAB7BA3_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x8881C00)
#define CLASS_4_B0C50D0F8BAB7BA3__CTOR_OFFSET UNITYSDK_OFFSET(0x8881B20)
#define CLASS_4_B0C50D0F8BAB7BA3___IFIXBASEPROXY_CLONE_OFFSET UNITYSDK_OFFSET(0x8881EC0)
#define CLASS_4_B0C50D0F8BAB7BA3___IFIXBASEPROXY_REVERSE_OFFSET UNITYSDK_OFFSET(0x8881F60)
#define CLASS_4_B0C50D0F8BAB7BA3___IFIXBASEPROXY_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x8881EB0)

inline static constexpr unsigned int Class_4_B0C50D0F8BAB7BA3_TypeDefinitionIndex = 60240;

class Class_4_B0C50D0F8BAB7BA3 : public ::Class_3_3F1B1DE9D9F51912
{
public:
	::UnityEngine::Vector3 Field_4_0; // 0x38
	::UnityEngine::Vector3 Field_4_1; // 0x44
	::UnityEngine::Vector3 Field_4_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B0C50D0F8BAB7BA3__CTOR_OFFSET))(this);
	}

	static ::Class_4_B0C50D0F8BAB7BA3* Method_4_6332539B3C7FC700(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::Class_4_B0C50D0F8BAB7BA3*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_B0C50D0F8BAB7BA3_METHOD_4_6332539B3C7FC700_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_4_B0C50D0F8BAB7BA3* Method_4_C256FFEE9A4AD041(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::Class_4_B0C50D0F8BAB7BA3*(*)(::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_4_B0C50D0F8BAB7BA3_METHOD_4_C256FFEE9A4AD041_OFFSET))(a1, a2);
	}

	::System::Boolean Method_4_76C20C1C1323A406(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_4_B0C50D0F8BAB7BA3_METHOD_4_76C20C1C1323A406_OFFSET))(this, a1, a2);
	}

	::System::Void StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_4_B0C50D0F8BAB7BA3_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::Class_1_A043D803AC652E6E* Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B0C50D0F8BAB7BA3_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B0C50D0F8BAB7BA3_REVERSE_OFFSET))(this);
	}

	::System::Void Method_4_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_B0C50D0F8BAB7BA3_METHOD_4_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_StartWithTarget(::UnityEngine::Transform* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_4_B0C50D0F8BAB7BA3___IFIXBASEPROXY_STARTWITHTARGET_OFFSET))(this, P0);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B0C50D0F8BAB7BA3___IFIXBASEPROXY_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B0C50D0F8BAB7BA3___IFIXBASEPROXY_REVERSE_OFFSET))(this);
	}

	::System::Void Method_4_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_B0C50D0F8BAB7BA3_METHOD_4_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
