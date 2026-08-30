#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_0781C886C58F298A.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_57FDA42592C5189D;
class Class_1_A043D803AC652E6E;
namespace UnityEngine { class Transform; }

#define CLASS_5_84113BE327E59A7D_2_CLONE_OFFSET UNITYSDK_OFFSET(0xC415EF0)
#define CLASS_5_84113BE327E59A7D_2_METHOD_5_0B045B6182B6FDCC_OFFSET UNITYSDK_OFFSET(0xC415C30)
#define CLASS_5_84113BE327E59A7D_2_METHOD_5_173F1C2BC1A15161_OFFSET UNITYSDK_OFFSET(0xC415FD0)
#define CLASS_5_84113BE327E59A7D_2_METHOD_5_76C20C1C1323A406_OFFSET UNITYSDK_OFFSET(0xC415DE0)
#define CLASS_5_84113BE327E59A7D_2_METHOD_5_90836D5CCC296F77_OFFSET UNITYSDK_OFFSET(0xC415B60)
#define CLASS_5_84113BE327E59A7D_2_REVERSE_OFFSET UNITYSDK_OFFSET(0xC415F60)
#define CLASS_5_84113BE327E59A7D_2_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xC415EA0)
#define CLASS_5_84113BE327E59A7D_2__CTOR_OFFSET UNITYSDK_OFFSET(0xC415B30)

inline static constexpr unsigned int Class_5_84113BE327E59A7D_2_TypeDefinitionIndex = 73451;

class Class_5_84113BE327E59A7D_2 : public ::Class_4_0781C886C58F298A
{
public:
	::UnityEngine::Vector3 DMOMPJOFLLL; // 0x48

	::System::Void _ctor(::Class_1_57FDA42592C5189D* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57FDA42592C5189D*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_2__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_5_84113BE327E59A7D_2* Method_5_90836D5CCC296F77(::Class_1_57FDA42592C5189D* a1, ::System::UInt32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::Class_5_84113BE327E59A7D_2*(*)(::Class_1_57FDA42592C5189D*, ::System::UInt32, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_2_METHOD_5_90836D5CCC296F77_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::Class_5_84113BE327E59A7D_2* Method_5_0B045B6182B6FDCC(::Class_1_57FDA42592C5189D* a1, ::System::UInt32 a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
	{
		return ((::Class_5_84113BE327E59A7D_2*(*)(::Class_1_57FDA42592C5189D*, ::System::UInt32, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_2_METHOD_5_0B045B6182B6FDCC_OFFSET))(a1, a2, a3, a4);
	}

	::System::Boolean Method_5_76C20C1C1323A406(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_2_METHOD_5_76C20C1C1323A406_OFFSET))(this, a1, a2);
	}

	::System::Void StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_2_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::Class_1_A043D803AC652E6E* Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_2_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_2_REVERSE_OFFSET))(this);
	}

	::System::Void Method_5_173F1C2BC1A15161(::System::Single a1, ::Il2CppArray<::UnityEngine::UIVertex>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_2_METHOD_5_173F1C2BC1A15161_OFFSET))(this, a1, a2);
	}
};
