#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_B0C50D0F8BAB7BA3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A043D803AC652E6E;
namespace UnityEngine { class Transform; }

#define CLASS_5_EA16995B33A1DEFF_CLONE_OFFSET UNITYSDK_OFFSET(0x91E6E10)
#define CLASS_5_EA16995B33A1DEFF_METHOD_5_76C20C1C1323A406_OFFSET UNITYSDK_OFFSET(0x91E6BF0)
#define CLASS_5_EA16995B33A1DEFF_METHOD_5_A121432BC80DD093_OFFSET UNITYSDK_OFFSET(0x91E69A0)
#define CLASS_5_EA16995B33A1DEFF_METHOD_5_C34A0F1A8A1B4952_OFFSET UNITYSDK_OFFSET(0x91E6A50)
#define CLASS_5_EA16995B33A1DEFF_REVERSE_OFFSET UNITYSDK_OFFSET(0x91E6E80)
#define CLASS_5_EA16995B33A1DEFF_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x91E6CB0)
#define CLASS_5_EA16995B33A1DEFF__CTOR_OFFSET UNITYSDK_OFFSET(0x91E6BD0)
#define CLASS_5_EA16995B33A1DEFF___IFIXBASEPROXY_CLONE_OFFSET UNITYSDK_OFFSET(0x91E6FC0)
#define CLASS_5_EA16995B33A1DEFF___IFIXBASEPROXY_REVERSE_OFFSET UNITYSDK_OFFSET(0x91E7040)
#define CLASS_5_EA16995B33A1DEFF___IFIXBASEPROXY_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x91E6EF0)

inline static constexpr unsigned int Class_5_EA16995B33A1DEFF_TypeDefinitionIndex = 67659;

class Class_5_EA16995B33A1DEFF : public ::Class_4_B0C50D0F8BAB7BA3
{
public:
	::UnityEngine::Vector3 Field_5_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_EA16995B33A1DEFF__CTOR_OFFSET))(this);
	}

	static ::Class_5_EA16995B33A1DEFF* Method_5_A121432BC80DD093(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::Class_5_EA16995B33A1DEFF*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_EA16995B33A1DEFF_METHOD_5_A121432BC80DD093_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_5_EA16995B33A1DEFF* Method_5_C34A0F1A8A1B4952(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::Class_5_EA16995B33A1DEFF*(*)(::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_5_EA16995B33A1DEFF_METHOD_5_C34A0F1A8A1B4952_OFFSET))(a1, a2);
	}

	::System::Boolean Method_5_76C20C1C1323A406(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_5_EA16995B33A1DEFF_METHOD_5_76C20C1C1323A406_OFFSET))(this, a1, a2);
	}

	::System::Void StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_EA16995B33A1DEFF_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::Class_1_A043D803AC652E6E* Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_EA16995B33A1DEFF_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_EA16995B33A1DEFF_REVERSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_StartWithTarget(::UnityEngine::Transform* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_EA16995B33A1DEFF___IFIXBASEPROXY_STARTWITHTARGET_OFFSET))(this, P0);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_EA16995B33A1DEFF___IFIXBASEPROXY_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_EA16995B33A1DEFF___IFIXBASEPROXY_REVERSE_OFFSET))(this);
	}
};
