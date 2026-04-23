#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"

class Class_0_16E4307DCC419505_869;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class GUILayoutOption; }
namespace UnityEngine { class GUIStyle; }

#define CLASS_1_F3A418F602618E12_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x11BF9AF0)
#define CLASS_1_F3A418F602618E12_METHOD_1_019A694B80821E6A_OFFSET UNITYSDK_OFFSET(0x11BF72C0)
#define CLASS_1_F3A418F602618E12_METHOD_1_0D5AAE19528AF369_OFFSET UNITYSDK_OFFSET(0x11BF8390)
#define CLASS_1_F3A418F602618E12_METHOD_1_124E7DAB85EAFECD_OFFSET UNITYSDK_OFFSET(0x11BF93B0)
#define CLASS_1_F3A418F602618E12_METHOD_1_1444114242086F1D_OFFSET UNITYSDK_OFFSET(0x11BF8C90)
#define CLASS_1_F3A418F602618E12_METHOD_1_1939029B1D62BE2F_OFFSET UNITYSDK_OFFSET(0x11BF8B10)
#define CLASS_1_F3A418F602618E12_METHOD_1_1998E60E468DC8A3_OFFSET UNITYSDK_OFFSET(0x11BF7E20)
#define CLASS_1_F3A418F602618E12_METHOD_1_20D5C1369C2EDFCC_OFFSET UNITYSDK_OFFSET(0x11BF8120)
#define CLASS_1_F3A418F602618E12_METHOD_1_26A6BE8CB8703F27_OFFSET UNITYSDK_OFFSET(0x11BF7920)
#define CLASS_1_F3A418F602618E12_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x11BF9320)
#define CLASS_1_F3A418F602618E12_METHOD_1_39ABFA75105CA1F6_OFFSET UNITYSDK_OFFSET(0x11BF9280)
#define CLASS_1_F3A418F602618E12_METHOD_1_3E4792FB49864531_OFFSET UNITYSDK_OFFSET(0x11BF89F0)
#define CLASS_1_F3A418F602618E12_METHOD_1_3FEFB04974E44F7A_OFFSET UNITYSDK_OFFSET(0x11BF8410)
#define CLASS_1_F3A418F602618E12_METHOD_1_56E2976D24032DF1_OFFSET UNITYSDK_OFFSET(0x11BF8C00)
#define CLASS_1_F3A418F602618E12_METHOD_1_57544882B5330DCB_OFFSET UNITYSDK_OFFSET(0x11BF8880)
#define CLASS_1_F3A418F602618E12_METHOD_1_5B4E2CB5D3C846D1_OFFSET UNITYSDK_OFFSET(0x11BF8A90)
#define CLASS_1_F3A418F602618E12_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x11BF9680)
#define CLASS_1_F3A418F602618E12_METHOD_1_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x11BF7570)
#define CLASS_1_F3A418F602618E12_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11BF9830)
#define CLASS_1_F3A418F602618E12_METHOD_1_96E8D5D097274D5C_OFFSET UNITYSDK_OFFSET(0x11BF8E30)
#define CLASS_1_F3A418F602618E12_METHOD_1_9809C99861C91775_OFFSET UNITYSDK_OFFSET(0x11BF97A0)
#define CLASS_1_F3A418F602618E12_METHOD_1_A36DD6986EFA06F9_OFFSET UNITYSDK_OFFSET(0x11BF7410)
#define CLASS_1_F3A418F602618E12_METHOD_1_ADEC0832819E981A_OFFSET UNITYSDK_OFFSET(0x11BF9490)
#define CLASS_1_F3A418F602618E12_METHOD_1_B1892B18A32D9900_OFFSET UNITYSDK_OFFSET(0x11BF95D0)
#define CLASS_1_F3A418F602618E12_METHOD_1_BA4965108A2F2FEB_OFFSET UNITYSDK_OFFSET(0x11BF8490)
#define CLASS_1_F3A418F602618E12_METHOD_1_BCEDF01B36A9FE4A_OFFSET UNITYSDK_OFFSET(0x11BF98B0)
#define CLASS_1_F3A418F602618E12_METHOD_1_CE19B94C6C490886_OFFSET UNITYSDK_OFFSET(0x11BF8F30)
#define CLASS_1_F3A418F602618E12_METHOD_1_D2FE31424B7B3865_OFFSET UNITYSDK_OFFSET(0x11BF7850)
#define CLASS_1_F3A418F602618E12_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x11BF9710)
#define CLASS_1_F3A418F602618E12_METHOD_1_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x11BF9540)
#define CLASS_1_F3A418F602618E12_METHOD_1_E69F3DFB7CDFE412_OFFSET UNITYSDK_OFFSET(0x11BF7810)
#define CLASS_1_F3A418F602618E12_METHOD_1_F53657089756480F_OFFSET UNITYSDK_OFFSET(0x11BF8900)
#define CLASS_1_F3A418F602618E12_METHOD_1_FAFE8B392BC7563E_OFFSET UNITYSDK_OFFSET(0x11BF8D90)
#define CLASS_1_F3A418F602618E12_METHOD_1_FF21332E104B181F_OFFSET UNITYSDK_OFFSET(0x11BF87E0)
#define CLASS_1_F3A418F602618E12_ONGUI_OFFSET UNITYSDK_OFFSET(0x11BF7270)
#define CLASS_1_F3A418F602618E12_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x11BF9B00)
#define CLASS_1_F3A418F602618E12__CTOR_OFFSET UNITYSDK_OFFSET(0x11BF9B10)

inline static constexpr unsigned int Class_1_F3A418F602618E12_TypeDefinitionIndex = 62997;

class Class_1_F3A418F602618E12 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_869* _Parent_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_869*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12__CTOR_OFFSET))(this);
	}

	::System::Void OnGUI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_ONGUI_OFFSET))(this);
	}

	::System::Void Method_1_019A694B80821E6A(::Class_0_16E4307DCC419505_869* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_869*))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_019A694B80821E6A_OFFSET))(this, a1);
	}

	::System::Void Method_1_A36DD6986EFA06F9(::Class_0_16E4307DCC419505_869* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_869*))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_A36DD6986EFA06F9_OFFSET))(this, a1);
	}

	::System::Void Method_1_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_913947B6596EB50A_OFFSET))(this);
	}

	static ::System::Void Method_1_E69F3DFB7CDFE412()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_E69F3DFB7CDFE412_OFFSET))();
	}

	static ::System::Boolean Method_1_D2FE31424B7B3865(::System::Object* a1, ::System::Single a2, ::System::Single a3, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a4)
	{
		return ((::System::Boolean(*)(::System::Object*, ::System::Single, ::System::Single, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_D2FE31424B7B3865_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_20D5C1369C2EDFCC(::System::Object* a1, ::UnityEngine::Color a2, ::System::Single a3, ::System::Single a4, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a5)
	{
		return ((::System::Boolean(*)(::System::Object*, ::UnityEngine::Color, ::System::Single, ::System::Single, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_20D5C1369C2EDFCC_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Int32 Method_1_0D5AAE19528AF369(::System::Int32 a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a3)
	{
		return ((::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_0D5AAE19528AF369_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_3FEFB04974E44F7A(::System::Object* a1, ::System::Boolean a2, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a3)
	{
		return ((::System::Boolean(*)(::System::Object*, ::System::Boolean, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_3FEFB04974E44F7A_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_FF21332E104B181F(::System::Object* a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a5)
	{
		return ((::System::Boolean(*)(::System::Object*, ::System::Boolean, ::System::Single, ::System::Single, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_FF21332E104B181F_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_BA4965108A2F2FEB(::System::Object* a1, ::System::Boolean a2, ::UnityEngine::Color a3, ::System::Single a4, ::System::Single a5, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a6)
	{
		return ((::System::Boolean(*)(::System::Object*, ::System::Boolean, ::UnityEngine::Color, ::System::Single, ::System::Single, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_BA4965108A2F2FEB_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_26A6BE8CB8703F27(::System::Object* a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::GUIContent*& a4, ::UnityEngine::GUIStyle*& a5)
	{
		return ((::System::Void(*)(::System::Object*, ::System::Single, ::System::Single, ::UnityEngine::GUIContent*&, ::UnityEngine::GUIStyle*&))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_26A6BE8CB8703F27_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_57544882B5330DCB(::System::String* a1, ::System::UInt32& a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::UInt32&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_57544882B5330DCB_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::UInt32 Method_1_F53657089756480F(::System::String* a1, ::System::UInt32 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::UInt32(*)(::System::String*, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_F53657089756480F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_5B4E2CB5D3C846D1(::System::String* a1, ::System::Int32& a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Int32&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_5B4E2CB5D3C846D1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_1939029B1D62BE2F(::System::String* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_1939029B1D62BE2F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_56E2976D24032DF1(::System::String* a1, ::RPG::GameCore::FixPoint& a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::System::String*, ::RPG::GameCore::FixPoint&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_56E2976D24032DF1_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::GameCore::FixPoint Method_1_1444114242086F1D(::System::String* a1, ::RPG::GameCore::FixPoint a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::String*, ::RPG::GameCore::FixPoint, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_1444114242086F1D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_FAFE8B392BC7563E(::System::String* a1, ::System::Single& a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Single&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_FAFE8B392BC7563E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_96E8D5D097274D5C(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::System::String*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_96E8D5D097274D5C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_3E4792FB49864531(::System::String* a1, ::System::Double& a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Double&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_3E4792FB49864531_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Double Method_1_CE19B94C6C490886(::System::String* a1, ::System::Double a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Double(*)(::System::String*, ::System::Double, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_CE19B94C6C490886_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_1_39ABFA75105CA1F6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_39ABFA75105CA1F6_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Single Method_1_124E7DAB85EAFECD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_124E7DAB85EAFECD_OFFSET))(this);
	}

	::System::Void Method_1_ADEC0832819E981A(::System::Boolean a1, ::UnityEngine::Rect a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_ADEC0832819E981A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_E52129E82CD2D7F8_OFFSET))(this);
	}

	::System::Void Method_1_B1892B18A32D9900(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_B1892B18A32D9900_OFFSET))(this, a1);
	}

	::System::Void Method_1_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Boolean Method_1_9809C99861C91775()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_9809C99861C91775_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	static ::Il2CppArray<::UnityEngine::GUILayoutOption*>* Method_1_1998E60E468DC8A3(::System::Single a1, ::System::Single a2, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a3)
	{
		return ((::Il2CppArray<::UnityEngine::GUILayoutOption*>*(*)(::System::Single, ::System::Single, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_1998E60E468DC8A3_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::UnityEngine::GUILayoutOption*>* Method_1_BCEDF01B36A9FE4A(::Il2CppArray<::UnityEngine::GUILayoutOption*>* a1, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a2)
	{
		return ((::Il2CppArray<::UnityEngine::GUILayoutOption*>*(*)(::Il2CppArray<::UnityEngine::GUILayoutOption*>*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_BCEDF01B36A9FE4A_OFFSET))(a1, a2);
	}

	::Class_0_16E4307DCC419505_869* get_Parent()
	{
		return ((::Class_0_16E4307DCC419505_869*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_GET_PARENT_OFFSET))(this);
	}

	::System::Void set_Parent(::Class_0_16E4307DCC419505_869* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_869*))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_SET_PARENT_OFFSET))(this, value);
	}
};
