#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_0781C886C58F298A.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/UIVertex.h"

class Class_1_A043D803AC652E6E;
class Class_1_B4D062A3AA74182F;
namespace UnityEngine { class Transform; }

#define CLASS_5_B325BF975C84A0DD_CLONE_OFFSET UNITYSDK_OFFSET(0xAB72430)
#define CLASS_5_B325BF975C84A0DD_METHOD_5_0F40AA2B6B209CD5_OFFSET UNITYSDK_OFFSET(0xAB72100)
#define CLASS_5_B325BF975C84A0DD_METHOD_5_4D3B75704BF58A94_OFFSET UNITYSDK_OFFSET(0xAB72570)
#define CLASS_5_B325BF975C84A0DD_METHOD_5_6AA0A5D7371B5A80_OFFSET UNITYSDK_OFFSET(0xAB72330)
#define CLASS_5_B325BF975C84A0DD_METHOD_5_AE41BEE50A44D918_OFFSET UNITYSDK_OFFSET(0xAB72620)
#define CLASS_5_B325BF975C84A0DD_METHOD_5_F2D4683BBD0A0404_OFFSET UNITYSDK_OFFSET(0xAB72810)
#define CLASS_5_B325BF975C84A0DD_REVERSE_OFFSET UNITYSDK_OFFSET(0xAB724D0)
#define CLASS_5_B325BF975C84A0DD_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xAB723E0)
#define CLASS_5_B325BF975C84A0DD__CTOR_OFFSET UNITYSDK_OFFSET(0xAB720D0)
#define CLASS_5_B325BF975C84A0DD___IFIXBASEPROXY_CLONE_OFFSET UNITYSDK_OFFSET(0xAB726F0)
#define CLASS_5_B325BF975C84A0DD___IFIXBASEPROXY_REVERSE_OFFSET UNITYSDK_OFFSET(0xAB72780)
#define CLASS_5_B325BF975C84A0DD___IFIXBASEPROXY_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xAB726E0)

inline static constexpr unsigned int Class_5_B325BF975C84A0DD_TypeDefinitionIndex = 68654;

class Class_5_B325BF975C84A0DD : public ::Class_4_0781C886C58F298A
{
public:
	::System::Single Field_5_0; // 0x48
	::System::Single Field_5_1; // 0x4C
	::System::Single Field_5_2; // 0x50
	::System::Int32 Field_5_3; // 0x54
	::UnityEngine::Color Field_5_4; // 0x58
	::UnityEngine::Color Field_5_5; // 0x68

	::System::Void _ctor(::Class_1_B4D062A3AA74182F* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4D062A3AA74182F*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_5_B325BF975C84A0DD__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_5_B325BF975C84A0DD* Method_5_0F40AA2B6B209CD5(::Class_1_B4D062A3AA74182F* a1, ::System::UInt32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::Color a7, ::UnityEngine::Color a8, ::System::Int32 a9)
	{
		return ((::Class_5_B325BF975C84A0DD*(*)(::Class_1_B4D062A3AA74182F*, ::System::UInt32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_B325BF975C84A0DD_METHOD_5_0F40AA2B6B209CD5_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Boolean Method_5_6AA0A5D7371B5A80(::System::Single a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_B325BF975C84A0DD_METHOD_5_6AA0A5D7371B5A80_OFFSET))(this, a1, a2);
	}

	::System::Void StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_B325BF975C84A0DD_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::Class_1_A043D803AC652E6E* Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_B325BF975C84A0DD_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_B325BF975C84A0DD_REVERSE_OFFSET))(this);
	}

	::System::Void Method_5_4D3B75704BF58A94(::System::Single a1, ::Il2CppArray<::UnityEngine::UIVertex>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_B325BF975C84A0DD_METHOD_5_4D3B75704BF58A94_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Color32 Method_5_AE41BEE50A44D918(::System::Single a1)
	{
		return ((::UnityEngine::Color32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_B325BF975C84A0DD_METHOD_5_AE41BEE50A44D918_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_B325BF975C84A0DD___IFIXBASEPROXY_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_B325BF975C84A0DD___IFIXBASEPROXY_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_B325BF975C84A0DD___IFIXBASEPROXY_REVERSE_OFFSET))(this);
	}

	::System::Void Method_5_F2D4683BBD0A0404(::System::Single a1, ::Il2CppArray<::UnityEngine::UIVertex>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_B325BF975C84A0DD_METHOD_5_F2D4683BBD0A0404_OFFSET))(this, a1, a2);
	}
};
