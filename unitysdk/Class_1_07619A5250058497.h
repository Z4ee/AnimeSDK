#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_1_3F5064ADB89DA8D3_2;
class Class_1_7BCD0D3615CD642E;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_07619A5250058497_GET_REPLAYFILEPATH_OFFSET UNITYSDK_OFFSET(0x19265040)
#define CLASS_1_07619A5250058497_GET_SCREENDEBUGLOGOWNERID_OFFSET UNITYSDK_OFFSET(0x19265100)
#define CLASS_1_07619A5250058497_METHOD_1_407E16A0D11675B6_OFFSET UNITYSDK_OFFSET(0x19265270)
#define CLASS_1_07619A5250058497_METHOD_1_74D9C5B754FBFE09_OFFSET UNITYSDK_OFFSET(0x192653D0)
#define CLASS_1_07619A5250058497_METHOD_1_7C4EC501A54093A0_OFFSET UNITYSDK_OFFSET(0x19264D30)
#define CLASS_1_07619A5250058497_METHOD_1_82ABFE24D5168B0C_OFFSET UNITYSDK_OFFSET(0x19264F10)
#define CLASS_1_07619A5250058497_METHOD_1_89FD8D54DD0955AF_OFFSET UNITYSDK_OFFSET(0x192656D0)
#define CLASS_1_07619A5250058497_METHOD_1_957AD698AE6A3456_OFFSET UNITYSDK_OFFSET(0x192651C0)
#define CLASS_1_07619A5250058497_METHOD_1_A05E7972E48397E0_OFFSET UNITYSDK_OFFSET(0x19264E30)
#define CLASS_1_07619A5250058497_METHOD_1_B0060FA4ED74875E_OFFSET UNITYSDK_OFFSET(0x19264FC0)
#define CLASS_1_07619A5250058497_METHOD_1_B161A956457A0954_OFFSET UNITYSDK_OFFSET(0x19265540)
#define CLASS_1_07619A5250058497_SET_REPLAYFILEPATH_OFFSET UNITYSDK_OFFSET(0x192650A0)
#define CLASS_1_07619A5250058497_SET_SCREENDEBUGLOGOWNERID_OFFSET UNITYSDK_OFFSET(0x19265160)
#define CLASS_1_07619A5250058497__CCTOR_OFFSET UNITYSDK_OFFSET(0x192657B0)

inline static constexpr unsigned int Class_1_07619A5250058497_TypeDefinitionIndex = 75953;

class Class_1_07619A5250058497 : public ::System::Object
{
public:
	static ::System::String** StaticGet__ReplayFilePath_k__BackingField()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_07619A5250058497_TypeDefinitionIndex)->GetStaticField(0x17E30);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_FFNIDFJHMPG()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_07619A5250058497_TypeDefinitionIndex)->GetStaticField(0x17E38);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_LPJPDBDJEAP()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_07619A5250058497_TypeDefinitionIndex)->GetStaticField(0x17E40);
	}
	static ::System::Int32* StaticGet__ScreenDebugLogOwnerID_k__BackingField()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_07619A5250058497_TypeDefinitionIndex)->GetStaticField(0x8C90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497__CCTOR_OFFSET))();
	}

	static ::Class_1_7BCD0D3615CD642E* Method_1_7C4EC501A54093A0(::UnityEngine::Vector3 a1, ::System::UInt64 a2)
	{
		return ((::Class_1_7BCD0D3615CD642E*(*)(::UnityEngine::Vector3, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_METHOD_1_7C4EC501A54093A0_OFFSET))(a1, a2);
	}

	static ::Class_1_7BCD0D3615CD642E* Method_1_A05E7972E48397E0(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3Int a3, ::System::UInt64 a4)
	{
		return ((::Class_1_7BCD0D3615CD642E*(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3Int, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_METHOD_1_A05E7972E48397E0_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_3F5064ADB89DA8D3_2* Method_1_82ABFE24D5168B0C()
	{
		return ((::Class_1_3F5064ADB89DA8D3_2*(*)())((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_METHOD_1_82ABFE24D5168B0C_OFFSET))();
	}

	static ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::String*>* Method_1_B0060FA4ED74875E()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::String*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_METHOD_1_B0060FA4ED74875E_OFFSET))();
	}

	static ::System::String* get_ReplayFilePath()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_GET_REPLAYFILEPATH_OFFSET))();
	}

	static ::System::Void set_ReplayFilePath(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_SET_REPLAYFILEPATH_OFFSET))(a1);
	}

	static ::System::Int32 get_ScreenDebugLogOwnerID()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_GET_SCREENDEBUGLOGOWNERID_OFFSET))();
	}

	static ::System::Void set_ScreenDebugLogOwnerID(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_SET_SCREENDEBUGLOGOWNERID_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_957AD698AE6A3456(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_METHOD_1_957AD698AE6A3456_OFFSET))(a1);
	}

	static ::System::Void Method_1_407E16A0D11675B6(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_METHOD_1_407E16A0D11675B6_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_74D9C5B754FBFE09(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_METHOD_1_74D9C5B754FBFE09_OFFSET))(a1);
	}

	static ::System::Void Method_1_B161A956457A0954(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_METHOD_1_B161A956457A0954_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_89FD8D54DD0955AF(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_METHOD_1_89FD8D54DD0955AF_OFFSET))(a1, a2);
	}
};
