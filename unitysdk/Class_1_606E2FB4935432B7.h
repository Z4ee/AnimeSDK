#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1210;
class Class_1_4BC03BAAC61C4531;
class Class_1_B29D74C19351AA14;
class Class_1_F1278B810B98680F;
namespace RPG::Client::NavMap { class DebugDrawnInfo; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_606E2FB4935432B7_GET_MARKINFODISPLAYRANGE_OFFSET UNITYSDK_OFFSET(0x11B76AB0)
#define CLASS_1_606E2FB4935432B7_GET_VISIBLEMARKINFO_OFFSET UNITYSDK_OFFSET(0x11B76B10)
#define CLASS_1_606E2FB4935432B7_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x11B771A0)
#define CLASS_1_606E2FB4935432B7_METHOD_1_0D61D9862E3D6EEB_OFFSET UNITYSDK_OFFSET(0x11B78C70)
#define CLASS_1_606E2FB4935432B7_METHOD_1_0D9C6EA282B1BF70_OFFSET UNITYSDK_OFFSET(0x11B794E0)
#define CLASS_1_606E2FB4935432B7_METHOD_1_152F25F11075A1F4_OFFSET UNITYSDK_OFFSET(0x11B78550)
#define CLASS_1_606E2FB4935432B7_METHOD_1_1CFD631E155D592C_OFFSET UNITYSDK_OFFSET(0x11B773D0)
#define CLASS_1_606E2FB4935432B7_METHOD_1_3953F10B80B18AED_OFFSET UNITYSDK_OFFSET(0x11B79300)
#define CLASS_1_606E2FB4935432B7_METHOD_1_3FA15BC238E89426_OFFSET UNITYSDK_OFFSET(0x11B77290)
#define CLASS_1_606E2FB4935432B7_METHOD_1_407E16A0D11675B6_1_OFFSET UNITYSDK_OFFSET(0x11B76EB0)
#define CLASS_1_606E2FB4935432B7_METHOD_1_407E16A0D11675B6_OFFSET UNITYSDK_OFFSET(0x11B76C10)
#define CLASS_1_606E2FB4935432B7_METHOD_1_461891F0FA20B457_OFFSET UNITYSDK_OFFSET(0x11B77E60)
#define CLASS_1_606E2FB4935432B7_METHOD_1_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x11B77840)
#define CLASS_1_606E2FB4935432B7_METHOD_1_4DB9C492783C2C77_1_OFFSET UNITYSDK_OFFSET(0x11B78860)
#define CLASS_1_606E2FB4935432B7_METHOD_1_4DB9C492783C2C77_OFFSET UNITYSDK_OFFSET(0x11B77A50)
#define CLASS_1_606E2FB4935432B7_METHOD_1_50E8FC97109B7AFF_OFFSET UNITYSDK_OFFSET(0x11B76D70)
#define CLASS_1_606E2FB4935432B7_METHOD_1_61676C795523BFAD_1_OFFSET UNITYSDK_OFFSET(0x11B76E20)
#define CLASS_1_606E2FB4935432B7_METHOD_1_61676C795523BFAD_OFFSET UNITYSDK_OFFSET(0x11B76B80)
#define CLASS_1_606E2FB4935432B7_METHOD_1_63BDB6DAE13534AC_OFFSET UNITYSDK_OFFSET(0x11B778A0)
#define CLASS_1_606E2FB4935432B7_METHOD_1_909F3C3B09B47376_OFFSET UNITYSDK_OFFSET(0x11B77310)
#define CLASS_1_606E2FB4935432B7_METHOD_1_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x11B771E0)
#define CLASS_1_606E2FB4935432B7_METHOD_1_970D5059FCBAD470_OFFSET UNITYSDK_OFFSET(0x11B77070)
#define CLASS_1_606E2FB4935432B7_METHOD_1_B9A97467188E4B69_1_OFFSET UNITYSDK_OFFSET(0x11B78990)
#define CLASS_1_606E2FB4935432B7_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x11B77B80)
#define CLASS_1_606E2FB4935432B7_METHOD_1_CD86B95BB307C619_OFFSET UNITYSDK_OFFSET(0x11B78470)
#define CLASS_1_606E2FB4935432B7_METHOD_1_CF87C87F16F36E1B_OFFSET UNITYSDK_OFFSET(0x11B77500)
#define CLASS_1_606E2FB4935432B7_METHOD_1_F90DCFC3F110DD18_OFFSET UNITYSDK_OFFSET(0x11B77360)
#define CLASS_1_606E2FB4935432B7_METHOD_1_FA1861945A7D62AB_OFFSET UNITYSDK_OFFSET(0x11B77010)
#define CLASS_1_606E2FB4935432B7_SET_MARKINFODISPLAYRANGE_OFFSET UNITYSDK_OFFSET(0x11B76AE0)
#define CLASS_1_606E2FB4935432B7_SET_VISIBLEMARKINFO_OFFSET UNITYSDK_OFFSET(0x11B76B50)
#define CLASS_1_606E2FB4935432B7__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B79940)

inline static constexpr unsigned int Class_1_606E2FB4935432B7_TypeDefinitionIndex = 74419;

class Class_1_606E2FB4935432B7 : public ::System::Object
{
public:
	static ::UnityEngine::GameObject** StaticGet_ANCMCNGNKMN()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_606E2FB4935432B7_TypeDefinitionIndex)->GetStaticField(0x29A20);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_OIELIKANMGI()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_606E2FB4935432B7_TypeDefinitionIndex)->GetStaticField(0x29A28);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_HBIJCOHAPEL()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_606E2FB4935432B7_TypeDefinitionIndex)->GetStaticField(0x29A30);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_OHCGPAAMFFB()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_606E2FB4935432B7_TypeDefinitionIndex)->GetStaticField(0x29A38);
	}
	static ::UnityEngine::GameObject** StaticGet_NANGHCCCGEG()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_606E2FB4935432B7_TypeDefinitionIndex)->GetStaticField(0x29A40);
	}
	static ::System::Collections::Generic::List_1<::RPG::Client::NavMap::DebugDrawnInfo*>** StaticGet_HDJCADGEGCI()
	{
		return (::System::Collections::Generic::List_1<::RPG::Client::NavMap::DebugDrawnInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_606E2FB4935432B7_TypeDefinitionIndex)->GetStaticField(0x29A48);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::DebugDrawnInfo*>** StaticGet_HCMNHLPLNEA()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::DebugDrawnInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_606E2FB4935432B7_TypeDefinitionIndex)->GetStaticField(0x29A50);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::DebugDrawnInfo*>** StaticGet_AHFMCJCIOKD()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::DebugDrawnInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_606E2FB4935432B7_TypeDefinitionIndex)->GetStaticField(0x29A58);
	}
	static ::System::Boolean* StaticGet__VisibleMarkInfo_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_606E2FB4935432B7_TypeDefinitionIndex)->GetStaticField(0xC3F0);
	}
	static ::System::Int32* StaticGet__MarkInfoDisplayRange_k__BackingField()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_606E2FB4935432B7_TypeDefinitionIndex)->GetStaticField(0xC3F4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7__CCTOR_OFFSET))();
	}

	static ::System::Int32 get_MarkInfoDisplayRange()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_GET_MARKINFODISPLAYRANGE_OFFSET))();
	}

	static ::System::Void set_MarkInfoDisplayRange(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_SET_MARKINFODISPLAYRANGE_OFFSET))(a1);
	}

	static ::System::Boolean get_VisibleMarkInfo()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_GET_VISIBLEMARKINFO_OFFSET))();
	}

	static ::System::Void set_VisibleMarkInfo(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_SET_VISIBLEMARKINFO_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_61676C795523BFAD(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_61676C795523BFAD_OFFSET))(a1);
	}

	static ::System::Void Method_1_407E16A0D11675B6(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_407E16A0D11675B6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_50E8FC97109B7AFF(::Il2CppArray<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_50E8FC97109B7AFF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_61676C795523BFAD_1(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_61676C795523BFAD_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_407E16A0D11675B6_1(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_407E16A0D11675B6_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FA1861945A7D62AB(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_FA1861945A7D62AB_OFFSET))(a1);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	static ::System::Void Method_1_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_941C404C800CB723_OFFSET))(a1);
	}

	static ::System::Void Method_1_3FA15BC238E89426(::System::String* a1, ::System::Func_1<::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_3FA15BC238E89426_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_909F3C3B09B47376(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_909F3C3B09B47376_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F90DCFC3F110DD18(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_F90DCFC3F110DD18_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_1CFD631E155D592C(::RPG::Client::NavMap::IMapDataSource* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_1CFD631E155D592C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_970D5059FCBAD470()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_970D5059FCBAD470_OFFSET))();
	}

	static ::System::Void Method_1_CF87C87F16F36E1B(::System::String* a1, ::Class_1_4BC03BAAC61C4531* a2, ::Class_1_F1278B810B98680F* a3)
	{
		return ((::System::Void(*)(::System::String*, ::Class_1_4BC03BAAC61C4531*, ::Class_1_F1278B810B98680F*))((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_CF87C87F16F36E1B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_4D2A473556700CDC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_4D2A473556700CDC_OFFSET))();
	}

	static ::System::Void Method_1_63BDB6DAE13534AC(::System::Collections::Generic::List_1<::RPG::Client::NavMap::DebugDrawnInfo*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::NavMap::DebugDrawnInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_63BDB6DAE13534AC_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_1_4DB9C492783C2C77()
	{
		return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_4DB9C492783C2C77_OFFSET))();
	}

	static ::System::Void Method_1_B9A97467188E4B69()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_B9A97467188E4B69_OFFSET))();
	}

	static ::System::Void Method_1_461891F0FA20B457(::Class_0_16E4307DCC419505_1210* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_1210*))((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_461891F0FA20B457_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_1_CD86B95BB307C619(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_CD86B95BB307C619_OFFSET))(a1);
	}

	static ::System::Void Method_1_152F25F11075A1F4(::Class_0_16E4307DCC419505_1210* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_1210*))((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_152F25F11075A1F4_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_1_4DB9C492783C2C77_1()
	{
		return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_4DB9C492783C2C77_1_OFFSET))();
	}

	static ::System::Void Method_1_B9A97467188E4B69_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_B9A97467188E4B69_1_OFFSET))();
	}

	static ::System::Void Method_1_0D61D9862E3D6EEB(::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_1210*>* a1, ::Class_1_B29D74C19351AA14* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_1210*>*, ::Class_1_B29D74C19351AA14*))((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_0D61D9862E3D6EEB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3953F10B80B18AED(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_3953F10B80B18AED_OFFSET))(a1);
	}

	static ::System::Void Method_1_0D9C6EA282B1BF70(::Class_1_4BC03BAAC61C4531* a1, ::Class_1_F1278B810B98680F* a2)
	{
		return ((::System::Void(*)(::Class_1_4BC03BAAC61C4531*, ::Class_1_F1278B810B98680F*))((::PBYTE)hIl2Cpp + CLASS_1_606E2FB4935432B7_METHOD_1_0D9C6EA282B1BF70_OFFSET))(a1, a2);
	}
};
