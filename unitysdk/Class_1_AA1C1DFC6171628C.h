#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AA1C1DFC6171628C_Enum_3_84106203CC7B3A1F.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_6E2EEE08157EEF79.h"
#include "unitysdk/Struct_2_6E89E02C9EE38495.h"
#include "unitysdk/Struct_2_CECEDD33F79E5905.h"
#include "unitysdk/Struct_2_F641FF8CBDE96A09.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5A147CAFD15ABF71;
class Class_1_80427665F2E2AFD0;
class Class_1_8176D97742A71502;
class Class_1_AA1C1DFC6171628C_Class_1_B40F7553DE9CCE3D_1;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole { class ZipLineSubSystem; }
namespace MoleMole::Config { class ConfigZipLine_ConfigEnterCollisionCheck; }
namespace MoleMole::Config { class ConfigZipLine_ConfigPreEnterPointSelection; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define CLASS_1_AA1C1DFC6171628C_METHOD_1_0631A6544331B77E_OFFSET UNITYSDK_OFFSET(0x13A55F70)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_1532B060D37597CF_OFFSET UNITYSDK_OFFSET(0x13A590D0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_1BEA6E8E084D8523_OFFSET UNITYSDK_OFFSET(0x13A5E0B0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_22033AD9B0D4E588_OFFSET UNITYSDK_OFFSET(0x13A5DA60)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_35942D7A8A374AB0_OFFSET UNITYSDK_OFFSET(0x13A5E5C0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_370D6A71DE69927C_1_OFFSET UNITYSDK_OFFSET(0x13A5EDD0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_370D6A71DE69927C_OFFSET UNITYSDK_OFFSET(0x13A5DC20)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_3AD49CE392C32B80_OFFSET UNITYSDK_OFFSET(0x13A5BD60)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_3D864E3164CBCF1E_OFFSET UNITYSDK_OFFSET(0x13A5F1C0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_4F4018519B20BBDD_1_OFFSET UNITYSDK_OFFSET(0x13A5C450)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_4F4018519B20BBDD_OFFSET UNITYSDK_OFFSET(0x13A58AF0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_52869470764455FE_OFFSET UNITYSDK_OFFSET(0x13A59C80)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_52C6C49BA8C0CFC7_OFFSET UNITYSDK_OFFSET(0x13A58C40)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x13A5DC50)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_53C009F13AB1EEC6_OFFSET UNITYSDK_OFFSET(0x13A5B1D0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_54CB49D2B0FAB2C7_OFFSET UNITYSDK_OFFSET(0x13A57330)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_58107F5DCE804A76_OFFSET UNITYSDK_OFFSET(0x13A57D10)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_58BFCD6E3DBCA421_OFFSET UNITYSDK_OFFSET(0x13A5B980)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_61FF5C2DB4175D57_OFFSET UNITYSDK_OFFSET(0x13A56D60)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_6280C650AC794AD6_OFFSET UNITYSDK_OFFSET(0x13A5E900)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_80A97C541A473BD4_OFFSET UNITYSDK_OFFSET(0x13A5E480)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_8CB15145749869DE_OFFSET UNITYSDK_OFFSET(0x13A588E0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_9650B37DF5B623A0_OFFSET UNITYSDK_OFFSET(0x13A5C5A0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_9796A29E51C21389_OFFSET UNITYSDK_OFFSET(0x13A595D0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_9BA9217AC400DA4F_OFFSET UNITYSDK_OFFSET(0x13A5B5F0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_A12FA6E79BC2F17B_OFFSET UNITYSDK_OFFSET(0x13A5A110)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_A49BDD375C2CBD04_OFFSET UNITYSDK_OFFSET(0x13A5A020)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_AEE1EF3D097CDF58_OFFSET UNITYSDK_OFFSET(0x13A5B540)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_AFA794014345DE35_OFFSET UNITYSDK_OFFSET(0x13A5B970)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_B27806B1CCE71FC1_OFFSET UNITYSDK_OFFSET(0x13A58440)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_B3FB947652DBF25C_OFFSET UNITYSDK_OFFSET(0x13A5EDC0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_B7F8E960CB973ADC_OFFSET UNITYSDK_OFFSET(0x13A5F560)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_B919653B2A4C8B8B_OFFSET UNITYSDK_OFFSET(0x13A57960)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_BAB1C96AA392F127_OFFSET UNITYSDK_OFFSET(0x13A5EDF0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_BB3E57340C051E0F_OFFSET UNITYSDK_OFFSET(0x13A5DC40)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x13A5E5A0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x13A58430)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x13A5E5B0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x13A5B570)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_C82E5F035C486FDB_OFFSET UNITYSDK_OFFSET(0x13A58580)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13A5F170)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_D754D5F3490FC4F3_OFFSET UNITYSDK_OFFSET(0x13A5DC60)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_DF249C0E36759C3F_OFFSET UNITYSDK_OFFSET(0x13A5EC60)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x13A5EDA0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0x13A59180)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x13A5F6C0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13A5EDB0)
#define CLASS_1_AA1C1DFC6171628C_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x13A5B580)
#define CLASS_1_AA1C1DFC6171628C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A55DB0)
#define CLASS_1_AA1C1DFC6171628C__CTOR_OFFSET UNITYSDK_OFFSET(0x13A55C30)

inline static constexpr unsigned int Class_1_AA1C1DFC6171628C_TypeDefinitionIndex = 58990;

class Class_1_AA1C1DFC6171628C : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_20()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0xF530);
	}
	static ::System::Int32* StaticGet_Field_1_21()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0xF534);
	}
	static ::System::Single* StaticGet_Field_1_18()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0xF538);
	}
	static ::System::Int32* StaticGet_Field_1_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0xF53C);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_32()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0xF540);
	}
	static ::System::Int32* StaticGet_Field_1_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0xF548);
	}
	static ::System::Single* StaticGet_Field_1_19()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0xF54C);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_42()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0xF550);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_31()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0xF558);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_37()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0xF560);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_38()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0xF568);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_43()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0xF570);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_36()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0xF578);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_41()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0xF580);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_44()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0xF588);
	}
	static ::System::Int32* StaticGet_Field_1_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0xF590);
	}
	static ::System::Single* StaticGet_Field_1_22()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0xF594);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_34()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0xF598);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_33()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0xF5A0);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_39()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0xF5A8);
	}
	static ::System::Int32* StaticGet_Field_1_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0xF5B0);
	}
	static ::System::Int32* StaticGet_Field_1_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0xF5B4);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_40()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0xF5B8);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_35()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA1C1DFC6171628C_TypeDefinitionIndex)->GetStaticField(0xF5C0);
	}
	// static const ::System::Single Field_1_5; // 0x0
	::Struct_2_F641FF8CBDE96A09 Field_1_28; // 0x10
	::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>* Field_1_29; // 0x20
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_1_27; // 0x28
	::MoleMole::ZipLineSubSystem* Field_1_1; // 0x30
	::Class_1_8176D97742A71502* Field_1_3; // 0x38
	::FluffyUnderware::Curvy::CurvySpline* Field_1_11; // 0x40
	::Class_1_80427665F2E2AFD0* Field_1_2; // 0x48
	::Class_1_AA1C1DFC6171628C_Class_1_B40F7553DE9CCE3D_1* Field_1_0; // 0x50
	::System::Int32 Field_1_7; // 0x58
	::System::Single Field_1_24; // 0x5C
	::UnityEngine::Quaternion Field_1_10; // 0x60
	::System::Int32 Field_1_6; // 0x70
	::System::Int32 Field_1_23; // 0x74
	::System::Single Field_1_12; // 0x78
	::System::Int32 Field_1_8; // 0x7C
	::System::Boolean Field_1_25; // 0x80
	::System::Boolean Field_1_26; // 0x81
	::System::Boolean Field_1_30; // 0x82
	::System::Single Field_1_4; // 0x84
	::UnityEngine::Vector3 Field_1_9; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C__CCTOR_OFFSET))();
	}

	::System::Nullable_1<::Struct_2_CECEDD33F79E5905> Method_1_0631A6544331B77E(::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a1, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a2, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a3, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a4, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a5, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a6, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a7)
	{
		return ((::System::Nullable_1<::Struct_2_CECEDD33F79E5905>(*)(::PVOID, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_0631A6544331B77E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::ValueTuple_2<::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>> Method_1_54CB49D2B0FAB2C7(::System::Single a1, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79> a2, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79> a3, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79> a4, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79> a5)
	{
		return ((::System::ValueTuple_2<::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>>(*)(::PVOID, ::System::Single, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_54CB49D2B0FAB2C7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_58107F5DCE804A76(::UnityEngine::Vector3 a1, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a2, ::MoleMole::Config::ConfigZipLine_ConfigEnterCollisionCheck* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>, ::MoleMole::Config::ConfigZipLine_ConfigEnterCollisionCheck*))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_58107F5DCE804A76_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_B27806B1CCE71FC1()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_B27806B1CCE71FC1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_8CB15145749869DE()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_8CB15145749869DE_OFFSET))(this);
	}

	::System::Void Method_1_52C6C49BA8C0CFC7(::Foundation::Unreal::FGameplayTag a1, ::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection* a2, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection*, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>*))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_52C6C49BA8C0CFC7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_EAC2737A96E071C9_OFFSET))(this);
	}

	::System::Void Method_1_9796A29E51C21389(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_9796A29E51C21389_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A12FA6E79BC2F17B(::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>* a1, ::Class_1_5A147CAFD15ABF71* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>*, ::Class_1_5A147CAFD15ABF71*))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_A12FA6E79BC2F17B_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_AEE1EF3D097CDF58(::System::Single a1, ::System::Nullable_1<::System::Single> a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Nullable_1<::System::Single>, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_AEE1EF3D097CDF58_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_4F4018519B20BBDD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_4F4018519B20BBDD_OFFSET))(this);
	}

	::Struct_2_F641FF8CBDE96A09 Method_1_1532B060D37597CF(::FluffyUnderware::Curvy::CurvySpline* a1)
	{
		return ((::Struct_2_F641FF8CBDE96A09(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_1532B060D37597CF_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>* Method_1_AFA794014345DE35()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_AFA794014345DE35_OFFSET))(this);
	}

	::System::Void Method_1_58BFCD6E3DBCA421(::Class_1_5A147CAFD15ABF71* a1, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A147CAFD15ABF71*, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>*))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_58BFCD6E3DBCA421_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_52869470764455FE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_52869470764455FE_OFFSET))(this);
	}

	::System::Void Method_1_9650B37DF5B623A0(::System::Nullable_1<::System::Single> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_9650B37DF5B623A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_3AD49CE392C32B80(::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection* a1, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection*, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>*))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_3AD49CE392C32B80_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_22033AD9B0D4E588(::MoleMole::ZipLineSubSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem*))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_22033AD9B0D4E588_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_4F4018519B20BBDD_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_4F4018519B20BBDD_1_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Struct_2_6E89E02C9EE38495>* Method_1_370D6A71DE69927C()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Struct_2_6E89E02C9EE38495>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_370D6A71DE69927C_OFFSET))(this);
	}

	::MoleMole::ZipLineSubSystem* Method_1_BB3E57340C051E0F()
	{
		return ((::MoleMole::ZipLineSubSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_BB3E57340C051E0F_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_D754D5F3490FC4F3(::Class_1_5A147CAFD15ABF71* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A147CAFD15ABF71*))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_D754D5F3490FC4F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	static ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> Method_1_61FF5C2DB4175D57(::Struct_2_CECEDD33F79E5905 a1, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a2, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a3, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a4, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a5, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> a6)
	{
		return ((::System::Nullable_1<::Struct_2_CECEDD33F79E5905>(*)(::Struct_2_CECEDD33F79E5905, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_61FF5C2DB4175D57_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_35942D7A8A374AB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_35942D7A8A374AB0_OFFSET))(this);
	}

	::System::Void Method_1_1BEA6E8E084D8523(::Class_1_5A147CAFD15ABF71* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A147CAFD15ABF71*))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_1BEA6E8E084D8523_OFFSET))(this, a1);
	}

	::Struct_2_CECEDD33F79E5905 Method_1_53C009F13AB1EEC6(::Struct_2_CECEDD33F79E5905 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::Struct_2_CECEDD33F79E5905(*)(::PVOID, ::Struct_2_CECEDD33F79E5905, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_53C009F13AB1EEC6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6280C650AC794AD6(::Class_1_5A147CAFD15ABF71* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A147CAFD15ABF71*))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_6280C650AC794AD6_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_1_9BA9217AC400DA4F(::MoleMole::EntityHandle a1)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_9BA9217AC400DA4F_OFFSET))(a1);
	}

	::UnityEngine::Camera* Method_1_A49BDD375C2CBD04()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_A49BDD375C2CBD04_OFFSET))(this);
	}

	::System::Void Method_1_DF249C0E36759C3F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_DF249C0E36759C3F_OFFSET))(this, a1);
	}

	::System::Void Method_1_80A97C541A473BD4(::Class_1_5A147CAFD15ABF71* a1, ::Class_1_AA1C1DFC6171628C_Enum_3_84106203CC7B3A1F a2, ::Unity::Profiling::ProfilerMarker a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A147CAFD15ABF71*, ::Class_1_AA1C1DFC6171628C_Enum_3_84106203CC7B3A1F, ::Unity::Profiling::ProfilerMarker))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_80A97C541A473BD4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	static ::UnityEngine::Quaternion Method_1_C82E5F035C486FDB(::MoleMole::EntityHandle a1)
	{
		return ((::UnityEngine::Quaternion(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_C82E5F035C486FDB_OFFSET))(a1);
	}

	::System::Void Method_1_B3FB947652DBF25C(::MoleMole::ZipLineSubSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem*))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_B3FB947652DBF25C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Struct_2_6E89E02C9EE38495>* Method_1_370D6A71DE69927C_1()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Struct_2_6E89E02C9EE38495>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_370D6A71DE69927C_1_OFFSET))(this);
	}

	::System::Void Method_1_BAB1C96AA392F127(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_BAB1C96AA392F127_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79> Method_1_B919653B2A4C8B8B(::System::Single a1, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79> a2, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79> a3, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79> a4)
	{
		return ((::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>(*)(::System::Single, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>, ::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_B919653B2A4C8B8B_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_1_3D864E3164CBCF1E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_3D864E3164CBCF1E_OFFSET))(this, a1);
	}

	::System::Single Method_1_B7F8E960CB973ADC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_B7F8E960CB973ADC_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C1DFC6171628C_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
