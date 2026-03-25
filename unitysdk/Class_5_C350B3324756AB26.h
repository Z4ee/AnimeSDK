#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_0781C886C58F298A.h"
#include "unitysdk/UnityEngine/UIVertex.h"

class Class_1_A043D803AC652E6E;
class Class_1_B4D062A3AA74182F;
namespace UnityEngine { class Transform; }

#define CLASS_5_C350B3324756AB26_CLONE_OFFSET UNITYSDK_OFFSET(0x8A949B0)
#define CLASS_5_C350B3324756AB26_METHOD_5_0BAF0FB65673CABB_OFFSET UNITYSDK_OFFSET(0x8A94A50)
#define CLASS_5_C350B3324756AB26_METHOD_5_7AC9590184E4680B_OFFSET UNITYSDK_OFFSET(0x8A94870)
#define CLASS_5_C350B3324756AB26_METHOD_5_E970B418D363857B_OFFSET UNITYSDK_OFFSET(0x8A94C50)
#define CLASS_5_C350B3324756AB26_REVERSE_OFFSET UNITYSDK_OFFSET(0x8A94A00)
#define CLASS_5_C350B3324756AB26_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x8A94960)
#define CLASS_5_C350B3324756AB26__CTOR_OFFSET UNITYSDK_OFFSET(0x8A94840)
#define CLASS_5_C350B3324756AB26___IFIXBASEPROXY_CLONE_OFFSET UNITYSDK_OFFSET(0x8A94B10)
#define CLASS_5_C350B3324756AB26___IFIXBASEPROXY_REVERSE_OFFSET UNITYSDK_OFFSET(0x8A94BB0)
#define CLASS_5_C350B3324756AB26___IFIXBASEPROXY_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x8A94B00)

inline static constexpr unsigned int Class_5_C350B3324756AB26_TypeDefinitionIndex = 60271;

class Class_5_C350B3324756AB26 : public ::Class_4_0781C886C58F298A
{
public:
	::System::Void _ctor(::Class_1_B4D062A3AA74182F* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4D062A3AA74182F*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_5_C350B3324756AB26__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_5_C350B3324756AB26* Method_5_7AC9590184E4680B(::Class_1_B4D062A3AA74182F* a1, ::System::UInt32 a2, ::System::Single a3)
	{
		return ((::Class_5_C350B3324756AB26*(*)(::Class_1_B4D062A3AA74182F*, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_C350B3324756AB26_METHOD_5_7AC9590184E4680B_OFFSET))(a1, a2, a3);
	}

	::System::Void StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_C350B3324756AB26_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::Class_1_A043D803AC652E6E* Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_C350B3324756AB26_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_C350B3324756AB26_REVERSE_OFFSET))(this);
	}

	::System::Void Method_5_0BAF0FB65673CABB(::System::Single a1, ::Il2CppArray<::UnityEngine::UIVertex>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_C350B3324756AB26_METHOD_5_0BAF0FB65673CABB_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_StartWithTarget(::UnityEngine::Transform* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_C350B3324756AB26___IFIXBASEPROXY_STARTWITHTARGET_OFFSET))(this, P0);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_C350B3324756AB26___IFIXBASEPROXY_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_C350B3324756AB26___IFIXBASEPROXY_REVERSE_OFFSET))(this);
	}

	::System::Void Method_5_E970B418D363857B(::System::Single P0, ::Il2CppArray<::UnityEngine::UIVertex>*& P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_C350B3324756AB26_METHOD_5_E970B418D363857B_OFFSET))(this, P0, P1);
	}
};
