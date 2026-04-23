#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3F1B1DE9D9F51912.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A043D803AC652E6E;
namespace UnityEngine { class Transform; }

#define CLASS_4_B0C50D0F8BAB7BA3_2_CLONE_OFFSET UNITYSDK_OFFSET(0x118F9200)
#define CLASS_4_B0C50D0F8BAB7BA3_2_METHOD_4_479759059E440327_OFFSET UNITYSDK_OFFSET(0x118F92D0)
#define CLASS_4_B0C50D0F8BAB7BA3_2_METHOD_4_6332539B3C7FC700_OFFSET UNITYSDK_OFFSET(0x118F8E40)
#define CLASS_4_B0C50D0F8BAB7BA3_2_METHOD_4_76C20C1C1323A406_OFFSET UNITYSDK_OFFSET(0x118F9090)
#define CLASS_4_B0C50D0F8BAB7BA3_2_METHOD_4_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x118F9550)
#define CLASS_4_B0C50D0F8BAB7BA3_2_METHOD_4_C256FFEE9A4AD041_OFFSET UNITYSDK_OFFSET(0x118F8EF0)
#define CLASS_4_B0C50D0F8BAB7BA3_2_REVERSE_OFFSET UNITYSDK_OFFSET(0x118F9260)
#define CLASS_4_B0C50D0F8BAB7BA3_2_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x118F9150)
#define CLASS_4_B0C50D0F8BAB7BA3_2__CTOR_OFFSET UNITYSDK_OFFSET(0x118F9070)
#define CLASS_4_B0C50D0F8BAB7BA3_2___IFIXBASEPROXY_CLONE_OFFSET UNITYSDK_OFFSET(0x118F9410)
#define CLASS_4_B0C50D0F8BAB7BA3_2___IFIXBASEPROXY_REVERSE_OFFSET UNITYSDK_OFFSET(0x118F94B0)
#define CLASS_4_B0C50D0F8BAB7BA3_2___IFIXBASEPROXY_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x118F9400)

inline static constexpr unsigned int Class_4_B0C50D0F8BAB7BA3_2_TypeDefinitionIndex = 67664;

class Class_4_B0C50D0F8BAB7BA3_2 : public ::Class_3_3F1B1DE9D9F51912
{
public:
	::UnityEngine::Vector3 Field_4_1; // 0x38
	::UnityEngine::Vector3 Field_4_0; // 0x44
	::UnityEngine::Vector3 Field_4_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B0C50D0F8BAB7BA3_2__CTOR_OFFSET))(this);
	}

	static ::Class_4_B0C50D0F8BAB7BA3_2* Method_4_6332539B3C7FC700(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::Class_4_B0C50D0F8BAB7BA3_2*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_B0C50D0F8BAB7BA3_2_METHOD_4_6332539B3C7FC700_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_4_B0C50D0F8BAB7BA3_2* Method_4_C256FFEE9A4AD041(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::Class_4_B0C50D0F8BAB7BA3_2*(*)(::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_4_B0C50D0F8BAB7BA3_2_METHOD_4_C256FFEE9A4AD041_OFFSET))(a1, a2);
	}

	::System::Boolean Method_4_76C20C1C1323A406(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_4_B0C50D0F8BAB7BA3_2_METHOD_4_76C20C1C1323A406_OFFSET))(this, a1, a2);
	}

	::System::Void StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_4_B0C50D0F8BAB7BA3_2_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::Class_1_A043D803AC652E6E* Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B0C50D0F8BAB7BA3_2_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B0C50D0F8BAB7BA3_2_REVERSE_OFFSET))(this);
	}

	::System::Void Method_4_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_B0C50D0F8BAB7BA3_2_METHOD_4_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_StartWithTarget(::UnityEngine::Transform* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_4_B0C50D0F8BAB7BA3_2___IFIXBASEPROXY_STARTWITHTARGET_OFFSET))(this, P0);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B0C50D0F8BAB7BA3_2___IFIXBASEPROXY_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B0C50D0F8BAB7BA3_2___IFIXBASEPROXY_REVERSE_OFFSET))(this);
	}

	::System::Void Method_4_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_B0C50D0F8BAB7BA3_2_METHOD_4_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
