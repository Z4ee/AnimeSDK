#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_0781C886C58F298A.h"
#include "unitysdk/UnityEngine/UIVertex.h"

class Class_1_A043D803AC652E6E;
class Class_1_B4D062A3AA74182F;
namespace UnityEngine { class Transform; }

#define CLASS_5_50926179003E2376_CLONE_OFFSET UNITYSDK_OFFSET(0x116487A0)
#define CLASS_5_50926179003E2376_METHOD_5_6AA0A5D7371B5A80_OFFSET UNITYSDK_OFFSET(0x116486A0)
#define CLASS_5_50926179003E2376_METHOD_5_C7BDF5F7DC4B679E_OFFSET UNITYSDK_OFFSET(0x11648550)
#define CLASS_5_50926179003E2376_METHOD_5_E970B418D363857B_OFFSET UNITYSDK_OFFSET(0x11648AD0)
#define CLASS_5_50926179003E2376_METHOD_5_FC2CF36C4B5E30B2_OFFSET UNITYSDK_OFFSET(0x11648850)
#define CLASS_5_50926179003E2376_REVERSE_OFFSET UNITYSDK_OFFSET(0x116487F0)
#define CLASS_5_50926179003E2376_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x11648750)
#define CLASS_5_50926179003E2376__CTOR_OFFSET UNITYSDK_OFFSET(0x11648520)
#define CLASS_5_50926179003E2376___IFIXBASEPROXY_CLONE_OFFSET UNITYSDK_OFFSET(0x11648990)
#define CLASS_5_50926179003E2376___IFIXBASEPROXY_REVERSE_OFFSET UNITYSDK_OFFSET(0x11648A30)
#define CLASS_5_50926179003E2376___IFIXBASEPROXY_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x11648980)

inline static constexpr unsigned int Class_5_50926179003E2376_TypeDefinitionIndex = 60269;

class Class_5_50926179003E2376 : public ::Class_4_0781C886C58F298A
{
public:
	::System::Int32 Field_5_0; // 0x48

	::System::Void _ctor(::Class_1_B4D062A3AA74182F* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4D062A3AA74182F*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_5_50926179003E2376__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_5_50926179003E2376* Method_5_C7BDF5F7DC4B679E(::Class_1_B4D062A3AA74182F* a1, ::System::UInt32 a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::Class_5_50926179003E2376*(*)(::Class_1_B4D062A3AA74182F*, ::System::UInt32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_50926179003E2376_METHOD_5_C7BDF5F7DC4B679E_OFFSET))(a1, a2, a3, a4);
	}

	::System::Boolean Method_5_6AA0A5D7371B5A80(::System::Single a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_50926179003E2376_METHOD_5_6AA0A5D7371B5A80_OFFSET))(this, a1, a2);
	}

	::System::Void StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_50926179003E2376_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::Class_1_A043D803AC652E6E* Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_50926179003E2376_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_50926179003E2376_REVERSE_OFFSET))(this);
	}

	::System::Void Method_5_FC2CF36C4B5E30B2(::System::Single a1, ::Il2CppArray<::UnityEngine::UIVertex>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_50926179003E2376_METHOD_5_FC2CF36C4B5E30B2_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_StartWithTarget(::UnityEngine::Transform* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_50926179003E2376___IFIXBASEPROXY_STARTWITHTARGET_OFFSET))(this, P0);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_50926179003E2376___IFIXBASEPROXY_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_50926179003E2376___IFIXBASEPROXY_REVERSE_OFFSET))(this);
	}

	::System::Void Method_5_E970B418D363857B(::System::Single P0, ::Il2CppArray<::UnityEngine::UIVertex>*& P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_50926179003E2376_METHOD_5_E970B418D363857B_OFFSET))(this, P0, P1);
	}
};
