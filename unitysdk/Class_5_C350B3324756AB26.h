#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_0781C886C58F298A.h"
#include "unitysdk/UnityEngine/UIVertex.h"

class Class_1_A043D803AC652E6E;
class Class_1_B4D062A3AA74182F;
namespace UnityEngine { class Transform; }

#define CLASS_5_C350B3324756AB26_CLONE_OFFSET UNITYSDK_OFFSET(0xB00CC80)
#define CLASS_5_C350B3324756AB26_METHOD_5_0BAF0FB65673CABB_OFFSET UNITYSDK_OFFSET(0xB00CD20)
#define CLASS_5_C350B3324756AB26_METHOD_5_7AC9590184E4680B_OFFSET UNITYSDK_OFFSET(0xB00CB40)
#define CLASS_5_C350B3324756AB26_METHOD_5_F2D4683BBD0A0404_OFFSET UNITYSDK_OFFSET(0xB00CF00)
#define CLASS_5_C350B3324756AB26_REVERSE_OFFSET UNITYSDK_OFFSET(0xB00CCD0)
#define CLASS_5_C350B3324756AB26_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xB00CC30)
#define CLASS_5_C350B3324756AB26__CTOR_OFFSET UNITYSDK_OFFSET(0xB00CB10)
#define CLASS_5_C350B3324756AB26___IFIXBASEPROXY_CLONE_OFFSET UNITYSDK_OFFSET(0xB00CDE0)
#define CLASS_5_C350B3324756AB26___IFIXBASEPROXY_REVERSE_OFFSET UNITYSDK_OFFSET(0xB00CE70)
#define CLASS_5_C350B3324756AB26___IFIXBASEPROXY_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xB00CDD0)

inline static constexpr unsigned int Class_5_C350B3324756AB26_TypeDefinitionIndex = 68647;

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

	::System::Void __iFixBaseProxy_StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_C350B3324756AB26___IFIXBASEPROXY_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_C350B3324756AB26___IFIXBASEPROXY_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_C350B3324756AB26___IFIXBASEPROXY_REVERSE_OFFSET))(this);
	}

	::System::Void Method_5_F2D4683BBD0A0404(::System::Single a1, ::Il2CppArray<::UnityEngine::UIVertex>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_C350B3324756AB26_METHOD_5_F2D4683BBD0A0404_OFFSET))(this, a1, a2);
	}
};
