#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"

class Class_0_16E4307DCC419505_1009;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class GUILayoutOption; }
namespace UnityEngine { class GUIStyle; }

#define CLASS_1_F3A418F602618E12_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1953F160)
#define CLASS_1_F3A418F602618E12_METHOD_1_05951B9F588D8129_OFFSET UNITYSDK_OFFSET(0x1953D010)
#define CLASS_1_F3A418F602618E12_METHOD_1_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1953EB80)
#define CLASS_1_F3A418F602618E12_METHOD_1_0D5AAE19528AF369_OFFSET UNITYSDK_OFFSET(0x1953DAE0)
#define CLASS_1_F3A418F602618E12_METHOD_1_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x1953ECC0)
#define CLASS_1_F3A418F602618E12_METHOD_1_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x1953EDA0)
#define CLASS_1_F3A418F602618E12_METHOD_1_1939029B1D62BE2F_OFFSET UNITYSDK_OFFSET(0x1953E260)
#define CLASS_1_F3A418F602618E12_METHOD_1_1998E60E468DC8A3_OFFSET UNITYSDK_OFFSET(0x1953D5B0)
#define CLASS_1_F3A418F602618E12_METHOD_1_1AC2F488F53A3253_OFFSET UNITYSDK_OFFSET(0x1953EB10)
#define CLASS_1_F3A418F602618E12_METHOD_1_20D5C1369C2EDFCC_OFFSET UNITYSDK_OFFSET(0x1953D870)
#define CLASS_1_F3A418F602618E12_METHOD_1_270550E508A1D3CD_OFFSET UNITYSDK_OFFSET(0x1953C7B0)
#define CLASS_1_F3A418F602618E12_METHOD_1_3E4792FB49864531_OFFSET UNITYSDK_OFFSET(0x1953E140)
#define CLASS_1_F3A418F602618E12_METHOD_1_3FEFB04974E44F7A_OFFSET UNITYSDK_OFFSET(0x1953DB60)
#define CLASS_1_F3A418F602618E12_METHOD_1_4D9A31748A276D0D_OFFSET UNITYSDK_OFFSET(0x1953CBA0)
#define CLASS_1_F3A418F602618E12_METHOD_1_57544882B5330DCB_OFFSET UNITYSDK_OFFSET(0x1953DFD0)
#define CLASS_1_F3A418F602618E12_METHOD_1_5B4E2CB5D3C846D1_OFFSET UNITYSDK_OFFSET(0x1953E1E0)
#define CLASS_1_F3A418F602618E12_METHOD_1_5BCEE452B6FE89B6_OFFSET UNITYSDK_OFFSET(0x1953EBE0)
#define CLASS_1_F3A418F602618E12_METHOD_1_6033EB55501934F6_OFFSET UNITYSDK_OFFSET(0x1953E350)
#define CLASS_1_F3A418F602618E12_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1953EEC0)
#define CLASS_1_F3A418F602618E12_METHOD_1_96E8D5D097274D5C_OFFSET UNITYSDK_OFFSET(0x1953E6C0)
#define CLASS_1_F3A418F602618E12_METHOD_1_97BE07E876064FAC_OFFSET UNITYSDK_OFFSET(0x1953EE60)
#define CLASS_1_F3A418F602618E12_METHOD_1_AC84C9E26BEFCB63_OFFSET UNITYSDK_OFFSET(0x1953EC40)
#define CLASS_1_F3A418F602618E12_METHOD_1_BA4965108A2F2FEB_OFFSET UNITYSDK_OFFSET(0x1953DBE0)
#define CLASS_1_F3A418F602618E12_METHOD_1_BCEDF01B36A9FE4A_OFFSET UNITYSDK_OFFSET(0x1953EF40)
#define CLASS_1_F3A418F602618E12_METHOD_1_C6E4AB6C40FAF7DC_OFFSET UNITYSDK_OFFSET(0x1953EE00)
#define CLASS_1_F3A418F602618E12_METHOD_1_CA6F6BE86A71AD17_OFFSET UNITYSDK_OFFSET(0x1953C9D0)
#define CLASS_1_F3A418F602618E12_METHOD_1_CE19B94C6C490886_OFFSET UNITYSDK_OFFSET(0x1953E7C0)
#define CLASS_1_F3A418F602618E12_METHOD_1_D2FE31424B7B3865_OFFSET UNITYSDK_OFFSET(0x1953CF40)
#define CLASS_1_F3A418F602618E12_METHOD_1_DF1C0FC46B60C2C9_OFFSET UNITYSDK_OFFSET(0x1953ED20)
#define CLASS_1_F3A418F602618E12_METHOD_1_E69F3DFB7CDFE412_OFFSET UNITYSDK_OFFSET(0x1953CF00)
#define CLASS_1_F3A418F602618E12_METHOD_1_EEC77FD122651E32_OFFSET UNITYSDK_OFFSET(0x1953E450)
#define CLASS_1_F3A418F602618E12_METHOD_1_F53657089756480F_OFFSET UNITYSDK_OFFSET(0x1953E050)
#define CLASS_1_F3A418F602618E12_METHOD_1_FAFE8B392BC7563E_OFFSET UNITYSDK_OFFSET(0x1953E620)
#define CLASS_1_F3A418F602618E12_METHOD_1_FF21332E104B181F_OFFSET UNITYSDK_OFFSET(0x1953DF30)
#define CLASS_1_F3A418F602618E12_ONGUI_OFFSET UNITYSDK_OFFSET(0x1953C700)
#define CLASS_1_F3A418F602618E12_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x1953F170)
#define CLASS_1_F3A418F602618E12__CTOR_OFFSET UNITYSDK_OFFSET(0x1953F180)

inline static constexpr unsigned int Class_1_F3A418F602618E12_TypeDefinitionIndex = 68295;

class Class_1_F3A418F602618E12 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1009* _Parent_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1009*>* MFMKOMKMENP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12__CTOR_OFFSET))(this);
	}

	::System::Void OnGUI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_ONGUI_OFFSET))(this);
	}

	::System::Void Method_1_270550E508A1D3CD(::Class_0_16E4307DCC419505_1009* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1009*))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_270550E508A1D3CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6F6BE86A71AD17(::Class_0_16E4307DCC419505_1009* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1009*))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_CA6F6BE86A71AD17_OFFSET))(this, a1);
	}

	::System::Void Method_1_4D9A31748A276D0D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_4D9A31748A276D0D_OFFSET))(this);
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

	static ::System::Void Method_1_05951B9F588D8129(::System::Object* a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::GUIContent*& a4, ::UnityEngine::GUIStyle*& a5)
	{
		return ((::System::Void(*)(::System::Object*, ::System::Single, ::System::Single, ::UnityEngine::GUIContent*&, ::UnityEngine::GUIStyle*&))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_05951B9F588D8129_OFFSET))(a1, a2, a3, a4, a5);
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

	static ::System::Boolean Method_1_6033EB55501934F6(::System::String* a1, ::RPG::GameCore::FixPoint& a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::System::String*, ::RPG::GameCore::FixPoint&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_6033EB55501934F6_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::GameCore::FixPoint Method_1_EEC77FD122651E32(::System::String* a1, ::RPG::GameCore::FixPoint a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::String*, ::RPG::GameCore::FixPoint, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_EEC77FD122651E32_OFFSET))(a1, a2, a3, a4);
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

	::System::Void Method_1_1AC2F488F53A3253(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_1AC2F488F53A3253_OFFSET))(this, a1);
	}

	::System::Void Method_1_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Single Method_1_5BCEE452B6FE89B6()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_5BCEE452B6FE89B6_OFFSET))(this);
	}

	::System::Void Method_1_AC84C9E26BEFCB63(::System::Boolean a1, ::UnityEngine::Rect a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_AC84C9E26BEFCB63_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_1_DF1C0FC46B60C2C9(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_DF1C0FC46B60C2C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void Method_1_C6E4AB6C40FAF7DC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_C6E4AB6C40FAF7DC_OFFSET))(this);
	}

	::System::Boolean Method_1_97BE07E876064FAC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_METHOD_1_97BE07E876064FAC_OFFSET))(this);
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

	::Class_0_16E4307DCC419505_1009* get_Parent()
	{
		return ((::Class_0_16E4307DCC419505_1009*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_GET_PARENT_OFFSET))(this);
	}

	::System::Void set_Parent(::Class_0_16E4307DCC419505_1009* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1009*))((::PBYTE)hIl2Cpp + CLASS_1_F3A418F602618E12_SET_PARENT_OFFSET))(this, a1);
	}
};
