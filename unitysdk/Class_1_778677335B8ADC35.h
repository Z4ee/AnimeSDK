#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_778677335B8ADC35_Enum_3_B64E3E24F3BDCBBC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_402;
class Class_0_16E4307DCC419505_403;
class Class_0_16E4307DCC419505_627;
class Class_1_3B91E8B5FF29338A;
class Class_1_7B8672D4F89E3D96;
class Class_2_208CC9941471731A_628;
class Class_3_621E396E538604DB;
namespace MoleMole { class InteractionPoint; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine::AI { class NavMeshPath; }

#define CLASS_1_778677335B8ADC35_METHOD_1_051149D95513C13E_OFFSET UNITYSDK_OFFSET(0x13402170)
#define CLASS_1_778677335B8ADC35_METHOD_1_1F8698FEAB6990A0_OFFSET UNITYSDK_OFFSET(0x134019B0)
#define CLASS_1_778677335B8ADC35_METHOD_1_43FBBE72B26F698C_OFFSET UNITYSDK_OFFSET(0x13402BD0)
#define CLASS_1_778677335B8ADC35_METHOD_1_5F77F8482A7DFE76_OFFSET UNITYSDK_OFFSET(0x133F9960)
#define CLASS_1_778677335B8ADC35_METHOD_1_6775C879DC8394C9_OFFSET UNITYSDK_OFFSET(0x133F84F0)
#define CLASS_1_778677335B8ADC35_METHOD_1_6E5E3940FB0450C3_OFFSET UNITYSDK_OFFSET(0x133F9700)
#define CLASS_1_778677335B8ADC35_METHOD_1_951F1C7F391940F1_OFFSET UNITYSDK_OFFSET(0x133FF590)
#define CLASS_1_778677335B8ADC35_METHOD_1_99042179565F3D54_OFFSET UNITYSDK_OFFSET(0x133F9BA0)
#define CLASS_1_778677335B8ADC35_METHOD_1_AFC4242440B0B88F_OFFSET UNITYSDK_OFFSET(0x133F98D0)
#define CLASS_1_778677335B8ADC35_METHOD_1_B0A84DA72843AAE7_OFFSET UNITYSDK_OFFSET(0x133F91B0)
#define CLASS_1_778677335B8ADC35_METHOD_1_BC3F1ABD04047BF3_OFFSET UNITYSDK_OFFSET(0x13400350)
#define CLASS_1_778677335B8ADC35_METHOD_1_C245A0B5EA99C8A3_OFFSET UNITYSDK_OFFSET(0x133FF1A0)
#define CLASS_1_778677335B8ADC35_METHOD_1_E92FE4DCEAF46A48_OFFSET UNITYSDK_OFFSET(0x133FE0C0)
#define CLASS_1_778677335B8ADC35_METHOD_1_F2EADE85DDBEA95B_OFFSET UNITYSDK_OFFSET(0x133F88E0)
#define CLASS_1_778677335B8ADC35_METHOD_1_F527D85D41C4A535_OFFSET UNITYSDK_OFFSET(0x133FEB60)
#define CLASS_1_778677335B8ADC35__CCTOR_OFFSET UNITYSDK_OFFSET(0x133F84A0)

inline static constexpr unsigned int Class_1_778677335B8ADC35_TypeDefinitionIndex = 63153;

class Class_1_778677335B8ADC35 : public ::System::Object
{
public:
	static ::UnityEngine::AI::NavMeshPath** StaticGet_Field_1_0()
	{
		return (::UnityEngine::AI::NavMeshPath**)Il2CppClass::FromTypeDefinitionIndex(Class_1_778677335B8ADC35_TypeDefinitionIndex)->GetStaticField(0x3DA00);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_7()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_778677335B8ADC35_TypeDefinitionIndex)->GetStaticField(0x3DA08);
	}
	// static const ::System::Single Field_1_6; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_778677335B8ADC35__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_6775C879DC8394C9(::Class_0_16E4307DCC419505_402* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_402*))((::PBYTE)hIl2Cpp + CLASS_1_778677335B8ADC35_METHOD_1_6775C879DC8394C9_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2EADE85DDBEA95B(::Class_2_208CC9941471731A_628* a1, ::System::UInt64 a2, ::System::Int32 a3, ::Class_0_16E4307DCC419505_627* a4)
	{
		return ((::System::Void(*)(::Class_2_208CC9941471731A_628*, ::System::UInt64, ::System::Int32, ::Class_0_16E4307DCC419505_627*))((::PBYTE)hIl2Cpp + CLASS_1_778677335B8ADC35_METHOD_1_F2EADE85DDBEA95B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_6E5E3940FB0450C3(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_778677335B8ADC35_METHOD_1_6E5E3940FB0450C3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5F77F8482A7DFE76(::MoleMole::Battle::Entity* a1, ::Class_0_16E4307DCC419505_627* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_0_16E4307DCC419505_627*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_778677335B8ADC35_METHOD_1_5F77F8482A7DFE76_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_E92FE4DCEAF46A48(::Class_1_778677335B8ADC35_Enum_3_B64E3E24F3BDCBBC a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a5)
	{
		return ((::System::Boolean(*)(::Class_1_778677335B8ADC35_Enum_3_B64E3E24F3BDCBBC, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + CLASS_1_778677335B8ADC35_METHOD_1_E92FE4DCEAF46A48_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_F527D85D41C4A535(::Class_0_16E4307DCC419505_627* a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_627*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_778677335B8ADC35_METHOD_1_F527D85D41C4A535_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_951F1C7F391940F1(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::Class_0_16E4307DCC419505_627* a3, ::MoleMole::InteractionPoint* a4, ::Class_2_208CC9941471731A_628* a5, ::System::Action* a6, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a7)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32, ::Class_0_16E4307DCC419505_627*, ::MoleMole::InteractionPoint*, ::Class_2_208CC9941471731A_628*, ::System::Action*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_778677335B8ADC35_METHOD_1_951F1C7F391940F1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Single Method_1_AFC4242440B0B88F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_778677335B8ADC35_METHOD_1_AFC4242440B0B88F_OFFSET))(a1, a2);
	}

	static ::MoleMole::Battle::Entity* Method_1_BC3F1ABD04047BF3(::System::Int32 a1, ::MoleMole::Battle::Entity* a2, ::Class_3_621E396E538604DB* a3, ::Class_1_7B8672D4F89E3D96* a4, ::Class_1_3B91E8B5FF29338A* a5, ::System::Action_1<::UnityEngine::Collider*>* a6, ::System::Action_1<::UnityEngine::Collider*>* a7, ::System::Action_2<::UnityEngine::Collider*, ::System::Object*>* a8, ::System::Action_2<::UnityEngine::Collider*, ::System::Object*>* a9)
	{
		return ((::MoleMole::Battle::Entity*(*)(::System::Int32, ::MoleMole::Battle::Entity*, ::Class_3_621E396E538604DB*, ::Class_1_7B8672D4F89E3D96*, ::Class_1_3B91E8B5FF29338A*, ::System::Action_1<::UnityEngine::Collider*>*, ::System::Action_1<::UnityEngine::Collider*>*, ::System::Action_2<::UnityEngine::Collider*, ::System::Object*>*, ::System::Action_2<::UnityEngine::Collider*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_778677335B8ADC35_METHOD_1_BC3F1ABD04047BF3_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Void Method_1_B0A84DA72843AAE7(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::Class_0_16E4307DCC419505_627* a3, ::System::Collections::Generic::List_1<::System::String*>* a4, ::Class_2_208CC9941471731A_628* a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32, ::Class_0_16E4307DCC419505_627*, ::System::Collections::Generic::List_1<::System::String*>*, ::Class_2_208CC9941471731A_628*))((::PBYTE)hIl2Cpp + CLASS_1_778677335B8ADC35_METHOD_1_B0A84DA72843AAE7_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_1F8698FEAB6990A0(::Class_0_16E4307DCC419505_627* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_627*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_778677335B8ADC35_METHOD_1_1F8698FEAB6990A0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C245A0B5EA99C8A3(::Class_0_16E4307DCC419505_627* a1, ::System::Int32 a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_627*, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_778677335B8ADC35_METHOD_1_C245A0B5EA99C8A3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_051149D95513C13E(::Class_0_16E4307DCC419505_627* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_627*))((::PBYTE)hIl2Cpp + CLASS_1_778677335B8ADC35_METHOD_1_051149D95513C13E_OFFSET))(a1);
	}

	static ::System::Void Method_1_99042179565F3D54(::MoleMole::Battle::Entity* a1, ::Class_0_16E4307DCC419505_402* a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_0_16E4307DCC419505_402*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_778677335B8ADC35_METHOD_1_99042179565F3D54_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_43FBBE72B26F698C(::Class_0_16E4307DCC419505_403* a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_403*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_778677335B8ADC35_METHOD_1_43FBBE72B26F698C_OFFSET))(a1, a2, a3);
	}
};
