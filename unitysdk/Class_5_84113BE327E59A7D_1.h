#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_0781C886C58F298A.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A043D803AC652E6E;
class Class_1_B4D062A3AA74182F;
namespace UnityEngine { class Transform; }

#define CLASS_5_84113BE327E59A7D_1_CLONE_OFFSET UNITYSDK_OFFSET(0x10C70870)
#define CLASS_5_84113BE327E59A7D_1_METHOD_5_0B045B6182B6FDCC_OFFSET UNITYSDK_OFFSET(0x10C705B0)
#define CLASS_5_84113BE327E59A7D_1_METHOD_5_5DA66068C6678C32_OFFSET UNITYSDK_OFFSET(0x10C70960)
#define CLASS_5_84113BE327E59A7D_1_METHOD_5_76C20C1C1323A406_OFFSET UNITYSDK_OFFSET(0x10C70760)
#define CLASS_5_84113BE327E59A7D_1_METHOD_5_90836D5CCC296F77_OFFSET UNITYSDK_OFFSET(0x10C704E0)
#define CLASS_5_84113BE327E59A7D_1_METHOD_5_F2D4683BBD0A0404_OFFSET UNITYSDK_OFFSET(0x10C70DE0)
#define CLASS_5_84113BE327E59A7D_1_REVERSE_OFFSET UNITYSDK_OFFSET(0x10C708E0)
#define CLASS_5_84113BE327E59A7D_1_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x10C70820)
#define CLASS_5_84113BE327E59A7D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10C704B0)
#define CLASS_5_84113BE327E59A7D_1___IFIXBASEPROXY_CLONE_OFFSET UNITYSDK_OFFSET(0x10C70CC0)
#define CLASS_5_84113BE327E59A7D_1___IFIXBASEPROXY_REVERSE_OFFSET UNITYSDK_OFFSET(0x10C70D50)
#define CLASS_5_84113BE327E59A7D_1___IFIXBASEPROXY_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x10C70CB0)

inline static constexpr unsigned int Class_5_84113BE327E59A7D_1_TypeDefinitionIndex = 68652;

class Class_5_84113BE327E59A7D_1 : public ::Class_4_0781C886C58F298A
{
public:
	::UnityEngine::Vector3 Field_5_0; // 0x48

	::System::Void _ctor(::Class_1_B4D062A3AA74182F* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4D062A3AA74182F*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_1__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_5_84113BE327E59A7D_1* Method_5_90836D5CCC296F77(::Class_1_B4D062A3AA74182F* a1, ::System::UInt32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::Class_5_84113BE327E59A7D_1*(*)(::Class_1_B4D062A3AA74182F*, ::System::UInt32, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_1_METHOD_5_90836D5CCC296F77_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::Class_5_84113BE327E59A7D_1* Method_5_0B045B6182B6FDCC(::Class_1_B4D062A3AA74182F* a1, ::System::UInt32 a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
	{
		return ((::Class_5_84113BE327E59A7D_1*(*)(::Class_1_B4D062A3AA74182F*, ::System::UInt32, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_1_METHOD_5_0B045B6182B6FDCC_OFFSET))(a1, a2, a3, a4);
	}

	::System::Boolean Method_5_76C20C1C1323A406(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_1_METHOD_5_76C20C1C1323A406_OFFSET))(this, a1, a2);
	}

	::System::Void StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_1_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::Class_1_A043D803AC652E6E* Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_1_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_1_REVERSE_OFFSET))(this);
	}

	::System::Void Method_5_5DA66068C6678C32(::System::Single a1, ::Il2CppArray<::UnityEngine::UIVertex>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_1_METHOD_5_5DA66068C6678C32_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_1___IFIXBASEPROXY_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_1___IFIXBASEPROXY_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_1___IFIXBASEPROXY_REVERSE_OFFSET))(this);
	}

	::System::Void Method_5_F2D4683BBD0A0404(::System::Single a1, ::Il2CppArray<::UnityEngine::UIVertex>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_1_METHOD_5_F2D4683BBD0A0404_OFFSET))(this, a1, a2);
	}
};
