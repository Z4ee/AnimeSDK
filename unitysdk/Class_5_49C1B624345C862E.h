#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_0781C886C58F298A.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/UIVertex.h"

class Class_1_A043D803AC652E6E;
class Class_1_B4D062A3AA74182F;
namespace UnityEngine { class Transform; }

#define CLASS_5_49C1B624345C862E_CLONE_OFFSET UNITYSDK_OFFSET(0xD19C250)
#define CLASS_5_49C1B624345C862E_METHOD_5_426A10D06B00255F_OFFSET UNITYSDK_OFFSET(0xD19C390)
#define CLASS_5_49C1B624345C862E_METHOD_5_B87A268AEC4F53B5_OFFSET UNITYSDK_OFFSET(0xD19BEC0)
#define CLASS_5_49C1B624345C862E_METHOD_5_E970B418D363857B_OFFSET UNITYSDK_OFFSET(0xD19C680)
#define CLASS_5_49C1B624345C862E_METHOD_5_EE4E72EE9971E0AD_OFFSET UNITYSDK_OFFSET(0xD19BCA0)
#define CLASS_5_49C1B624345C862E_REVERSE_OFFSET UNITYSDK_OFFSET(0xD19C320)
#define CLASS_5_49C1B624345C862E_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xD19C200)
#define CLASS_5_49C1B624345C862E__CTOR_OFFSET UNITYSDK_OFFSET(0xD19BC40)
#define CLASS_5_49C1B624345C862E___IFIXBASEPROXY_CLONE_OFFSET UNITYSDK_OFFSET(0xD19C540)
#define CLASS_5_49C1B624345C862E___IFIXBASEPROXY_REVERSE_OFFSET UNITYSDK_OFFSET(0xD19C5E0)
#define CLASS_5_49C1B624345C862E___IFIXBASEPROXY_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xD19C530)

inline static constexpr unsigned int Class_5_49C1B624345C862E_TypeDefinitionIndex = 60279;

class Class_5_49C1B624345C862E : public ::Class_4_0781C886C58F298A
{
public:
	::Il2CppArray<::UnityEngine::Color32>* Field_5_0; // 0x48

	::System::Void _ctor(::Class_1_B4D062A3AA74182F* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4D062A3AA74182F*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_5_49C1B624345C862E__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_5_49C1B624345C862E* Method_5_EE4E72EE9971E0AD(::Class_1_B4D062A3AA74182F* a1, ::System::UInt32 a2, ::System::Single a3, ::UnityEngine::Color32 a4, ::UnityEngine::Color32 a5, ::UnityEngine::Color32 a6, ::UnityEngine::Color32 a7)
	{
		return ((::Class_5_49C1B624345C862E*(*)(::Class_1_B4D062A3AA74182F*, ::System::UInt32, ::System::Single, ::UnityEngine::Color32, ::UnityEngine::Color32, ::UnityEngine::Color32, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + CLASS_5_49C1B624345C862E_METHOD_5_EE4E72EE9971E0AD_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_5_49C1B624345C862E* Method_5_B87A268AEC4F53B5(::Class_1_B4D062A3AA74182F* a1, ::System::UInt32 a2, ::System::Single a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Int32 a12, ::System::Int32 a13, ::System::Int32 a14, ::System::Int32 a15)
	{
		return ((::Class_5_49C1B624345C862E*(*)(::Class_1_B4D062A3AA74182F*, ::System::UInt32, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_49C1B624345C862E_METHOD_5_B87A268AEC4F53B5_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
	}

	::System::Void StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_49C1B624345C862E_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::Class_1_A043D803AC652E6E* Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_49C1B624345C862E_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_49C1B624345C862E_REVERSE_OFFSET))(this);
	}

	::System::Void Method_5_426A10D06B00255F(::System::Single a1, ::Il2CppArray<::UnityEngine::UIVertex>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_49C1B624345C862E_METHOD_5_426A10D06B00255F_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_StartWithTarget(::UnityEngine::Transform* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_49C1B624345C862E___IFIXBASEPROXY_STARTWITHTARGET_OFFSET))(this, P0);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_49C1B624345C862E___IFIXBASEPROXY_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_49C1B624345C862E___IFIXBASEPROXY_REVERSE_OFFSET))(this);
	}

	::System::Void Method_5_E970B418D363857B(::System::Single P0, ::Il2CppArray<::UnityEngine::UIVertex>*& P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_49C1B624345C862E_METHOD_5_E970B418D363857B_OFFSET))(this, P0, P1);
	}
};
