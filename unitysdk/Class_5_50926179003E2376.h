#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_0781C886C58F298A.h"
#include "unitysdk/UnityEngine/UIVertex.h"

class Class_1_A043D803AC652E6E;
class Class_1_B4D062A3AA74182F;
namespace UnityEngine { class Transform; }

#define CLASS_5_50926179003E2376_CLONE_OFFSET UNITYSDK_OFFSET(0xA931240)
#define CLASS_5_50926179003E2376_METHOD_5_6AA0A5D7371B5A80_OFFSET UNITYSDK_OFFSET(0xA931140)
#define CLASS_5_50926179003E2376_METHOD_5_C7BDF5F7DC4B679E_OFFSET UNITYSDK_OFFSET(0xA930FF0)
#define CLASS_5_50926179003E2376_METHOD_5_F2D4683BBD0A0404_OFFSET UNITYSDK_OFFSET(0xA931540)
#define CLASS_5_50926179003E2376_METHOD_5_FC2CF36C4B5E30B2_OFFSET UNITYSDK_OFFSET(0xA9312F0)
#define CLASS_5_50926179003E2376_REVERSE_OFFSET UNITYSDK_OFFSET(0xA931290)
#define CLASS_5_50926179003E2376_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xA9311F0)
#define CLASS_5_50926179003E2376__CTOR_OFFSET UNITYSDK_OFFSET(0xA930FC0)
#define CLASS_5_50926179003E2376___IFIXBASEPROXY_CLONE_OFFSET UNITYSDK_OFFSET(0xA931420)
#define CLASS_5_50926179003E2376___IFIXBASEPROXY_REVERSE_OFFSET UNITYSDK_OFFSET(0xA9314B0)
#define CLASS_5_50926179003E2376___IFIXBASEPROXY_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xA931410)

inline static constexpr unsigned int Class_5_50926179003E2376_TypeDefinitionIndex = 68645;

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

	::System::Void __iFixBaseProxy_StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_50926179003E2376___IFIXBASEPROXY_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_50926179003E2376___IFIXBASEPROXY_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_50926179003E2376___IFIXBASEPROXY_REVERSE_OFFSET))(this);
	}

	::System::Void Method_5_F2D4683BBD0A0404(::System::Single a1, ::Il2CppArray<::UnityEngine::UIVertex>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_50926179003E2376_METHOD_5_F2D4683BBD0A0404_OFFSET))(this, a1, a2);
	}
};
