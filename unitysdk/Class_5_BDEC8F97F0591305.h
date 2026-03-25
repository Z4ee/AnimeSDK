#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_0781C886C58F298A.h"
#include "unitysdk/UnityEngine/CharacterInfo.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/UIVertex.h"

class Class_1_A043D803AC652E6E;
class Class_1_B4D062A3AA74182F;

#define CLASS_5_BDEC8F97F0591305_CLONE_OFFSET UNITYSDK_OFFSET(0x890BE10)
#define CLASS_5_BDEC8F97F0591305_METHOD_5_915DC757EA16DBAE_OFFSET UNITYSDK_OFFSET(0x890BC40)
#define CLASS_5_BDEC8F97F0591305_METHOD_5_99C6C1D5827B8498_OFFSET UNITYSDK_OFFSET(0x890BF30)
#define CLASS_5_BDEC8F97F0591305_METHOD_5_C14976124A9D124B_OFFSET UNITYSDK_OFFSET(0x890BFB0)
#define CLASS_5_BDEC8F97F0591305_METHOD_5_CDB3EA7B9422D2AC_OFFSET UNITYSDK_OFFSET(0x890C2B0)
#define CLASS_5_BDEC8F97F0591305_METHOD_5_E970B418D363857B_OFFSET UNITYSDK_OFFSET(0x890C470)
#define CLASS_5_BDEC8F97F0591305_METHOD_5_F43BB79921C5D9F0_OFFSET UNITYSDK_OFFSET(0x890C0D0)
#define CLASS_5_BDEC8F97F0591305_REVERSE_OFFSET UNITYSDK_OFFSET(0x890BEA0)
#define CLASS_5_BDEC8F97F0591305__CTOR_OFFSET UNITYSDK_OFFSET(0x890BC10)
#define CLASS_5_BDEC8F97F0591305___IFIXBASEPROXY_CLONE_OFFSET UNITYSDK_OFFSET(0x890C330)
#define CLASS_5_BDEC8F97F0591305___IFIXBASEPROXY_REVERSE_OFFSET UNITYSDK_OFFSET(0x890C3D0)

inline static constexpr unsigned int Class_5_BDEC8F97F0591305_TypeDefinitionIndex = 60275;

class Class_5_BDEC8F97F0591305 : public ::Class_4_0781C886C58F298A
{
public:
	::UnityEngine::Color32 Field_5_1; // 0x48
	::UnityEngine::CharacterInfo Field_5_2; // 0x4C
	::System::Single Field_5_0; // 0x80

	::System::Void _ctor(::Class_1_B4D062A3AA74182F* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4D062A3AA74182F*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_5_BDEC8F97F0591305__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_5_BDEC8F97F0591305* Method_5_915DC757EA16DBAE(::Class_1_B4D062A3AA74182F* a1, ::System::UInt32 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Color32 a5, ::UnityEngine::CharacterInfo a6)
	{
		return ((::Class_5_BDEC8F97F0591305*(*)(::Class_1_B4D062A3AA74182F*, ::System::UInt32, ::System::Single, ::System::Single, ::UnityEngine::Color32, ::UnityEngine::CharacterInfo))((::PBYTE)hIl2Cpp + CLASS_5_BDEC8F97F0591305_METHOD_5_915DC757EA16DBAE_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::Class_1_A043D803AC652E6E* Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_BDEC8F97F0591305_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_BDEC8F97F0591305_REVERSE_OFFSET))(this);
	}

	::System::Void Method_5_99C6C1D5827B8498(::System::Single a1, ::Il2CppArray<::UnityEngine::UIVertex>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_BDEC8F97F0591305_METHOD_5_99C6C1D5827B8498_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_C14976124A9D124B(::System::Single a1, ::Il2CppArray<::UnityEngine::UIVertex>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_BDEC8F97F0591305_METHOD_5_C14976124A9D124B_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Color32 Method_5_CDB3EA7B9422D2AC(::System::Single a1)
	{
		return ((::UnityEngine::Color32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_BDEC8F97F0591305_METHOD_5_CDB3EA7B9422D2AC_OFFSET))(this, a1);
	}

	::System::Void Method_5_F43BB79921C5D9F0(::System::Single a1, ::Il2CppArray<::UnityEngine::UIVertex>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_BDEC8F97F0591305_METHOD_5_F43BB79921C5D9F0_OFFSET))(this, a1, a2);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_BDEC8F97F0591305___IFIXBASEPROXY_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_BDEC8F97F0591305___IFIXBASEPROXY_REVERSE_OFFSET))(this);
	}

	::System::Void Method_5_E970B418D363857B(::System::Single P0, ::Il2CppArray<::UnityEngine::UIVertex>*& P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_BDEC8F97F0591305_METHOD_5_E970B418D363857B_OFFSET))(this, P0, P1);
	}
};
