#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_939;
class Class_1_44D5AE5377975AEE;
class Class_1_B29D74C19351AA14;
class Class_1_BE0E97EFC15B9DBB;
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

#define CLASS_1_02F735C8B0ACF45D_GET_MARKINFODISPLAYRANGE_OFFSET UNITYSDK_OFFSET(0x88C0F70)
#define CLASS_1_02F735C8B0ACF45D_GET_VISIBLEMARKINFO_OFFSET UNITYSDK_OFFSET(0x88C0FD0)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x88C1630)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_0D61D9862E3D6EEB_OFFSET UNITYSDK_OFFSET(0x88C2E00)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_16F68DFE5F1EF396_OFFSET UNITYSDK_OFFSET(0x88C3330)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_1D4924CE012020F5_OFFSET UNITYSDK_OFFSET(0x88C1860)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_35A1A641353400E6_OFFSET UNITYSDK_OFFSET(0x88C1C40)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_3FA15BC238E89426_OFFSET UNITYSDK_OFFSET(0x88C1720)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_407E16A0D11675B6_1_OFFSET UNITYSDK_OFFSET(0x88C1380)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_407E16A0D11675B6_OFFSET UNITYSDK_OFFSET(0x88C10F0)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_461891F0FA20B457_OFFSET UNITYSDK_OFFSET(0x88C2230)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_4DB9C492783C2C77_1_OFFSET UNITYSDK_OFFSET(0x88C2A30)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_4DB9C492783C2C77_OFFSET UNITYSDK_OFFSET(0x88C1E60)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_50E8FC97109B7AFF_OFFSET UNITYSDK_OFFSET(0x88C1210)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_660474B0F8C5FECE_1_OFFSET UNITYSDK_OFFSET(0x88C2B60)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_660474B0F8C5FECE_OFFSET UNITYSDK_OFFSET(0x88C1F90)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_714E6C626930A14F_OFFSET UNITYSDK_OFFSET(0x88C27A0)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_909F3C3B09B47376_OFFSET UNITYSDK_OFFSET(0x88C17A0)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x88C1670)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_957AD698AE6A3456_1_OFFSET UNITYSDK_OFFSET(0x88C12D0)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_957AD698AE6A3456_OFFSET UNITYSDK_OFFSET(0x88C1040)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_970D5059FCBAD470_OFFSET UNITYSDK_OFFSET(0x88C1500)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_AA9849A51CC8C29E_OFFSET UNITYSDK_OFFSET(0x88C3540)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_AEB0BC53FCD5291B_OFFSET UNITYSDK_OFFSET(0x88C17F0)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_C2597CCA7ABD4285_OFFSET UNITYSDK_OFFSET(0x88C1CA0)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_CD86B95BB307C619_OFFSET UNITYSDK_OFFSET(0x88C26C0)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_D618FEF078965C0B_OFFSET UNITYSDK_OFFSET(0x88C1990)
#define CLASS_1_02F735C8B0ACF45D_METHOD_1_FA1861945A7D62AB_OFFSET UNITYSDK_OFFSET(0x88C14A0)
#define CLASS_1_02F735C8B0ACF45D_SET_MARKINFODISPLAYRANGE_OFFSET UNITYSDK_OFFSET(0x88C0FA0)
#define CLASS_1_02F735C8B0ACF45D_SET_VISIBLEMARKINFO_OFFSET UNITYSDK_OFFSET(0x88C1010)
#define CLASS_1_02F735C8B0ACF45D__CCTOR_OFFSET UNITYSDK_OFFSET(0x88C38E0)

inline static constexpr unsigned int Class_1_02F735C8B0ACF45D_TypeDefinitionIndex = 61276;

class Class_1_02F735C8B0ACF45D : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_02F735C8B0ACF45D_TypeDefinitionIndex)->GetStaticField(0x453C0);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_02F735C8B0ACF45D_TypeDefinitionIndex)->GetStaticField(0x453C8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::DebugDrawnInfo*>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::DebugDrawnInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_02F735C8B0ACF45D_TypeDefinitionIndex)->GetStaticField(0x453D0);
	}
	static ::UnityEngine::GameObject** StaticGet_Field_1_8()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_02F735C8B0ACF45D_TypeDefinitionIndex)->GetStaticField(0x453D8);
	}
	static ::System::Collections::Generic::List_1<::RPG::Client::NavMap::DebugDrawnInfo*>** StaticGet_Field_1_9()
	{
		return (::System::Collections::Generic::List_1<::RPG::Client::NavMap::DebugDrawnInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_02F735C8B0ACF45D_TypeDefinitionIndex)->GetStaticField(0x453E0);
	}
	static ::UnityEngine::GameObject** StaticGet_Field_1_6()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_02F735C8B0ACF45D_TypeDefinitionIndex)->GetStaticField(0x453E8);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_02F735C8B0ACF45D_TypeDefinitionIndex)->GetStaticField(0x453F0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::DebugDrawnInfo*>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::DebugDrawnInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_02F735C8B0ACF45D_TypeDefinitionIndex)->GetStaticField(0x453F8);
	}
	static ::System::Int32* StaticGet__MarkInfoDisplayRange_k__BackingField()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_02F735C8B0ACF45D_TypeDefinitionIndex)->GetStaticField(0x11E00);
	}
	static ::System::Boolean* StaticGet__VisibleMarkInfo_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_02F735C8B0ACF45D_TypeDefinitionIndex)->GetStaticField(0x11E04);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D__CCTOR_OFFSET))();
	}

	static ::System::Int32 get_MarkInfoDisplayRange()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_GET_MARKINFODISPLAYRANGE_OFFSET))();
	}

	static ::System::Void set_MarkInfoDisplayRange(::System::Int32 value)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_SET_MARKINFODISPLAYRANGE_OFFSET))(value);
	}

	static ::System::Boolean get_VisibleMarkInfo()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_GET_VISIBLEMARKINFO_OFFSET))();
	}

	static ::System::Void set_VisibleMarkInfo(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_SET_VISIBLEMARKINFO_OFFSET))(value);
	}

	static ::System::Boolean Method_1_957AD698AE6A3456(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_957AD698AE6A3456_OFFSET))(a1);
	}

	static ::System::Void Method_1_407E16A0D11675B6(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_407E16A0D11675B6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_50E8FC97109B7AFF(::Il2CppArray<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_50E8FC97109B7AFF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_957AD698AE6A3456_1(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_957AD698AE6A3456_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_407E16A0D11675B6_1(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_407E16A0D11675B6_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FA1861945A7D62AB(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_FA1861945A7D62AB_OFFSET))(a1);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	static ::System::Void Method_1_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_941C404C800CB723_OFFSET))(a1);
	}

	static ::System::Void Method_1_3FA15BC238E89426(::System::String* a1, ::System::Func_1<::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_3FA15BC238E89426_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_909F3C3B09B47376(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_909F3C3B09B47376_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AEB0BC53FCD5291B(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_AEB0BC53FCD5291B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_1D4924CE012020F5(::RPG::Client::NavMap::IMapDataSource* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_1D4924CE012020F5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_970D5059FCBAD470()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_970D5059FCBAD470_OFFSET))();
	}

	static ::System::Void Method_1_D618FEF078965C0B(::System::String* a1, ::Class_1_BE0E97EFC15B9DBB* a2, ::Class_1_44D5AE5377975AEE* a3)
	{
		return ((::System::Void(*)(::System::String*, ::Class_1_BE0E97EFC15B9DBB*, ::Class_1_44D5AE5377975AEE*))((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_D618FEF078965C0B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_35A1A641353400E6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_35A1A641353400E6_OFFSET))();
	}

	static ::System::Void Method_1_C2597CCA7ABD4285(::System::Collections::Generic::List_1<::RPG::Client::NavMap::DebugDrawnInfo*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::NavMap::DebugDrawnInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_C2597CCA7ABD4285_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_1_4DB9C492783C2C77()
	{
		return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_4DB9C492783C2C77_OFFSET))();
	}

	static ::System::Void Method_1_660474B0F8C5FECE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_660474B0F8C5FECE_OFFSET))();
	}

	static ::System::Void Method_1_461891F0FA20B457(::Class_0_16E4307DCC419505_939* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_939*))((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_461891F0FA20B457_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_1_CD86B95BB307C619(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_CD86B95BB307C619_OFFSET))(a1);
	}

	static ::System::Void Method_1_714E6C626930A14F(::Class_0_16E4307DCC419505_939* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_939*))((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_714E6C626930A14F_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_1_4DB9C492783C2C77_1()
	{
		return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_4DB9C492783C2C77_1_OFFSET))();
	}

	static ::System::Void Method_1_660474B0F8C5FECE_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_660474B0F8C5FECE_1_OFFSET))();
	}

	static ::System::Void Method_1_0D61D9862E3D6EEB(::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_939*>* a1, ::Class_1_B29D74C19351AA14* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_939*>*, ::Class_1_B29D74C19351AA14*))((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_0D61D9862E3D6EEB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_16F68DFE5F1EF396(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_16F68DFE5F1EF396_OFFSET))(a1);
	}

	static ::System::Void Method_1_AA9849A51CC8C29E(::Class_1_BE0E97EFC15B9DBB* a1, ::Class_1_44D5AE5377975AEE* a2)
	{
		return ((::System::Void(*)(::Class_1_BE0E97EFC15B9DBB*, ::Class_1_44D5AE5377975AEE*))((::PBYTE)hIl2Cpp + CLASS_1_02F735C8B0ACF45D_METHOD_1_AA9849A51CC8C29E_OFFSET))(a1, a2);
	}
};
