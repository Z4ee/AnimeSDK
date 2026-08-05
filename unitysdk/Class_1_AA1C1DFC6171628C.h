#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AA1C1DFC6171628C_Enum_3_84106203CC7B3A1F.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_3A004622942516C0.h"
#include "unitysdk/Struct_2_6E2EEE08157EEF79.h"
#include "unitysdk/Struct_2_6E89E02C9EE38495.h"
#include "unitysdk/Struct_2_CECEDD33F79E5905.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4A15765789E80E46;
class Class_1_5A147CAFD15ABF71;
class Class_1_AA1C1DFC6171628C_Class_1_B40F7553DE9CCE3D_1;
class Class_1_FEDC743FF69EDB47;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole { class ZipLineSubSystem; }
namespace MoleMole::Config { class ConfigZipLine_ConfigEnterCollisionCheck; }
namespace MoleMole::Config { class ConfigZipLine_ConfigPreEnterPointSelection; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define CLASS_1_AA1C1DFC6171628C_METHOD_1_0173DC4321843C93_OFFSET UNITYSDK_OFFSET(0x135C41F0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_0631A6544331B77E_OFFSET UNITYSDK_OFFSET(0x135C0D20)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x135C7B40)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x135C86D0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_10E2C14B1C7ED8DB_OFFSET UNITYSDK_OFFSET(0x135C2590)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_1532B060D37597CF_OFFSET UNITYSDK_OFFSET(0x135C0C70)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_1A54E3DF1B02B1B9_OFFSET UNITYSDK_OFFSET(0x135C3560)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_1EA7B3D514FC747C_OFFSET UNITYSDK_OFFSET(0x135C3AE0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_22033AD9B0D4E588_OFFSET UNITYSDK_OFFSET(0x135C3390)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_2461B80C43AF7270_OFFSET UNITYSDK_OFFSET(0x135C77E0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_370D6A71DE69927C_1_OFFSET UNITYSDK_OFFSET(0x135C97B0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_370D6A71DE69927C_OFFSET UNITYSDK_OFFSET(0x135C4A10)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_3AD49CE392C32B80_OFFSET UNITYSDK_OFFSET(0x135C4350)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_4F4018519B20BBDD_1_OFFSET UNITYSDK_OFFSET(0x135C2A00)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_4F4018519B20BBDD_OFFSET UNITYSDK_OFFSET(0x135C60D0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x135C97D0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_53C009F13AB1EEC6_OFFSET UNITYSDK_OFFSET(0x135C3010)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_54CB49D2B0FAB2C7_OFFSET UNITYSDK_OFFSET(0x135C6220)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_62173270F4B341AC_OFFSET UNITYSDK_OFFSET(0x135C7CF0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_753AF14BAF8FBC4C_OFFSET UNITYSDK_OFFSET(0x135C1B30)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_80A97C541A473BD4_OFFSET UNITYSDK_OFFSET(0x135C9690)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_95093D9741D30AC1_OFFSET UNITYSDK_OFFSET(0x135C2070)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_951F3A365E1B4009_OFFSET UNITYSDK_OFFSET(0x135C85F0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_9BA9217AC400DA4F_OFFSET UNITYSDK_OFFSET(0x135C8B30)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_A208C3DCE07522C0_OFFSET UNITYSDK_OFFSET(0x135C8EB0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_A20A22175B2115F2_OFFSET UNITYSDK_OFFSET(0x135C6810)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_A49BDD375C2CBD04_OFFSET UNITYSDK_OFFSET(0x135C2910)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_AEE1EF3D097CDF58_OFFSET UNITYSDK_OFFSET(0x135C9180)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_AFA794014345DE35_OFFSET UNITYSDK_OFFSET(0x135C2B60)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_B0C9E67798485BC6_OFFSET UNITYSDK_OFFSET(0x135C38D0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_B12B4E4A39A083D2_OFFSET UNITYSDK_OFFSET(0x135C8970)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_B27806B1CCE71FC1_OFFSET UNITYSDK_OFFSET(0x135C2B70)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_B3FB947652DBF25C_OFFSET UNITYSDK_OFFSET(0x135C7780)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_BB3E57340C051E0F_OFFSET UNITYSDK_OFFSET(0x135C3550)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x135C9170)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x135C2B50)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x135C97E0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x135C4340)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_C82E5F035C486FDB_OFFSET UNITYSDK_OFFSET(0x135C2CB0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x135C7790)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_DCFC96E4EAE7F9E9_OFFSET UNITYSDK_OFFSET(0x135C4C00)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_DF249C0E36759C3F_OFFSET UNITYSDK_OFFSET(0x135C4AC0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x135C4AB0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0x135C0870)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x135C4AA0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x135C4330)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x135C4A30)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_FEF982ABDCD8385E_OFFSET UNITYSDK_OFFSET(0x135C91B0)
#define CLASS_1_AA1C1DFC6171628C__CCTOR_OFFSET UNITYSDK_OFFSET(0x135C0670)
#define CLASS_1_AA1C1DFC6171628C__CTOR_OFFSET UNITYSDK_OFFSET(0x135C0510)

inline static constexpr unsigned int Class_1_AA1C1DFC6171628C_TypeDefinitionIndex = 51348;

class Class_1_AA1C1DFC6171628C : public ::System::Object
{
public:
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_37()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0x10260);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_39()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0x10268);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_43()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0x10270);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_38()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0x10278);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_33()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0x10280);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_40()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0x10288);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_35()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0x10290);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_44()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0x10298);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_50()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0x102A0);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_34()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0x102A8);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_42()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0x102B0);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_48()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0x102B8);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_41()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0x102C0);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_46()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0x102C8);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_36()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0x102D0);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_49()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0x102D8);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_32()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0x102E0);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_47()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0x102E8);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_28()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0x102F0);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_51()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0x102F8);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_45()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0x10300);
	}
	// static const ::System::Int32 Field_1_14 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x8; // 0x0
	// static const ::System::Single Field_1_17; // 0x0
	// static const ::System::Single Field_1_16; // 0x0
	// static const ::System::Single Field_1_23; // 0x0
	// static const ::System::Int32 Field_1_22 = 0x5; // 0x0
	// static const ::System::Single Field_1_21; // 0x0
	::MoleMole::ZipLineSubSystem* Field_1_1; // 0x10
	::Class_1_4A15765789E80E46* Field_1_7; // 0x18
	::Class_1_FEDC743FF69EDB47* Field_1_0; // 0x20
	::FluffyUnderware::Curvy::CurvySpline* Field_1_8; // 0x28
	::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>* Field_1_30; // 0x30
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_1_24; // 0x38
	::Class_1_AA1C1DFC6171628C_Class_1_B40F7553DE9CCE3D_1* Field_1_2; // 0x40
	::Struct_2_3A004622942516C0 Field_1_31; // 0x48
	::System::Boolean Field_1_26; // 0x58
	::System::Boolean Field_1_29; // 0x59
	::System::Boolean Field_1_25; // 0x5A
	::System::Single Field_1_6; // 0x5C
	::System::Single Field_1_27; // 0x60
	::System::Int32 Field_1_11; // 0x64
	::System::Single Field_1_15; // 0x68
	::System::Int32 Field_1_20; // 0x6C
	::UnityEngine::Vector3 Field_1_10; // 0x70
	::System::Int32 Field_1_5; // 0x7C
	::System::Int32 Field_1_4; // 0x80
	::UnityEngine::Quaternion Field_1_9; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C__CCTOR_OFFSET))();
	}

	::System::Void Method_1_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_EAC2737A96E071C9_OFFSET))(this);
	}

	::System::Nullable_1<::Struct_2_CECEDD33F79E5905> Method_1_0631A6544331B77E(::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a1, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a2, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a3, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a4, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a5, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a6, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a7)
	{
		return ((::System::Nullable_1<::Struct_2_CECEDD33F79E5905>(*)(::PVOID, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_0631A6544331B77E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_95093D9741D30AC1(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_95093D9741D30AC1_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>* Method_1_AFA794014345DE35()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_AFA794014345DE35_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_B27806B1CCE71FC1()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_B27806B1CCE71FC1_OFFSET))(this);
	}

	::Struct_2_CECEDD33F79E5905 Method_1_53C009F13AB1EEC6(::Struct_2_CECEDD33F79E5905 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::Struct_2_CECEDD33F79E5905(*)(::PVOID, ::Struct_2_CECEDD33F79E5905, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_53C009F13AB1EEC6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_22033AD9B0D4E588(::MoleMole::ZipLineSubSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem*))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_22033AD9B0D4E588_OFFSET))(this, a1);
	}

	::MoleMole::ZipLineSubSystem* Method_1_BB3E57340C051E0F()
	{
		return ((::MoleMole::ZipLineSubSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_BB3E57340C051E0F_OFFSET))(this);
	}

	::System::Void Method_1_1A54E3DF1B02B1B9(::Class_1_5A147CAFD15ABF71* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A147CAFD15ABF71*))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_1A54E3DF1B02B1B9_OFFSET))(this, a1);
	}

	::System::Single Method_1_0173DC4321843C93(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_0173DC4321843C93_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_3AD49CE392C32B80(::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection* a1, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection*, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>*))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_3AD49CE392C32B80_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1EA7B3D514FC747C(::UnityEngine::Vector3 a1, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a2, ::MoleMole::Config::ConfigZipLine_ConfigEnterCollisionCheck* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>, ::MoleMole::Config::ConfigZipLine_ConfigEnterCollisionCheck*))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_1EA7B3D514FC747C_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Struct_2_6E89E02C9EE38495>* Method_1_370D6A71DE69927C()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Struct_2_6E89E02C9EE38495>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_370D6A71DE69927C_OFFSET))(this);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::Struct_2_3A004622942516C0 Method_1_1532B060D37597CF(::FluffyUnderware::Curvy::CurvySpline* a1)
	{
		return ((::Struct_2_3A004622942516C0(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_1532B060D37597CF_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF249C0E36759C3F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_DF249C0E36759C3F_OFFSET))(this, a1);
	}

	::System::Void Method_1_DCFC96E4EAE7F9E9(::System::Nullable_1<::System::Single> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_DCFC96E4EAE7F9E9_OFFSET))(this, a1);
	}

	::System::Void Method_1_A20A22175B2115F2(::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>* a1, ::Class_1_5A147CAFD15ABF71* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>*, ::Class_1_5A147CAFD15ABF71*))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_A20A22175B2115F2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B3FB947652DBF25C(::MoleMole::ZipLineSubSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem*))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_B3FB947652DBF25C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>> Method_1_54CB49D2B0FAB2C7(::System::Single a1, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79> a2, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79> a3, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79> a4, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79> a5)
	{
		return ((::System::ValueTuple_2<::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>>(*)(::PVOID, ::System::Single, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_54CB49D2B0FAB2C7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_1_951F3A365E1B4009(::System::Single a1, ::System::Boolean a2, ::System::Nullable_1<::System::Single> a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_951F3A365E1B4009_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> Method_1_753AF14BAF8FBC4C(::Struct_2_CECEDD33F79E5905 a1, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a2, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a3, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a4, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a5, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a6)
	{
		return ((::System::Nullable_1<::Struct_2_CECEDD33F79E5905>(*)(::Struct_2_CECEDD33F79E5905, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_753AF14BAF8FBC4C_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::UnityEngine::Vector3 Method_1_B0C9E67798485BC6()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_B0C9E67798485BC6_OFFSET))(this);
	}

	::System::Void Method_1_B12B4E4A39A083D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_B12B4E4A39A083D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_1_9BA9217AC400DA4F(::MoleMole::EntityHandle a1)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_9BA9217AC400DA4F_OFFSET))(a1);
	}

	::System::Void Method_1_A208C3DCE07522C0(::Foundation::Unreal::FGameplayTag a1, ::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection* a2, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection*, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>*))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_A208C3DCE07522C0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_AEE1EF3D097CDF58(::System::Single a1, ::System::Nullable_1<::System::Single> a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Nullable_1<::System::Single>, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_AEE1EF3D097CDF58_OFFSET))(a1, a2, a3);
	}

	::UnityEngine::Camera* Method_1_A49BDD375C2CBD04()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_A49BDD375C2CBD04_OFFSET))(this);
	}

	::System::Void Method_1_FEF982ABDCD8385E(::Class_1_5A147CAFD15ABF71* a1, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A147CAFD15ABF71*, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>*))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_FEF982ABDCD8385E_OFFSET))(this, a1, a2);
	}

	static ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79> Method_1_2461B80C43AF7270(::System::Single a1, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79> a2, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79> a3, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79> a4)
	{
		return ((::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>(*)(::System::Single, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_2461B80C43AF7270_OFFSET))(a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_4F4018519B20BBDD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_4F4018519B20BBDD_OFFSET))(this);
	}

	::System::Void Method_1_80A97C541A473BD4(::Class_1_5A147CAFD15ABF71* a1, ::Class_1_AA1C1DFC6171628C_Enum_3_84106203CC7B3A1F a2, ::Unity::Profiling::ProfilerMarker a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A147CAFD15ABF71*, ::Class_1_AA1C1DFC6171628C_Enum_3_84106203CC7B3A1F, ::Unity::Profiling::ProfilerMarker))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_80A97C541A473BD4_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_10E2C14B1C7ED8DB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_10E2C14B1C7ED8DB_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_4F4018519B20BBDD_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_4F4018519B20BBDD_1_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Struct_2_6E89E02C9EE38495>* Method_1_370D6A71DE69927C_1()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Struct_2_6E89E02C9EE38495>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_370D6A71DE69927C_1_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	static ::UnityEngine::Quaternion Method_1_C82E5F035C486FDB(::MoleMole::EntityHandle a1)
	{
		return ((::UnityEngine::Quaternion(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_C82E5F035C486FDB_OFFSET))(a1);
	}

	::System::Void Method_1_62173270F4B341AC(::Class_1_5A147CAFD15ABF71* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A147CAFD15ABF71*))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_62173270F4B341AC_OFFSET))(this, a1);
	}
};
