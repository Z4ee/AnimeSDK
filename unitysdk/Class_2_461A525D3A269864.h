#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9166BD0F741825C9_Class_1_060344A07EDA293D_Enum_3_7F56E2E74CA21A9A.h"
#include "unitysdk/Class_2_461A525D3A269864_Enum_3_F07D91F85F866CD2.h"
#include "unitysdk/Class_2_461A525D3A269864_Enum_3_F55703D2B85FF9FE.h"
#include "unitysdk/Class_2_461A525D3A269864_Struct_2_EE378F408834D807_1.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/FocusUISpecialIconParam.h"
#include "unitysdk/Struct_2_76CCAEE20B3AE57C.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_461A525D3A269864_Class_1_65EEE2D0D33D4E8D;
class Class_3_D92ADC48CDFCC09B_2;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class NamePanelTrait; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_461A525D3A269864_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1390FF50)
#define CLASS_2_461A525D3A269864_METHOD_2_0915110004B2F0C9_OFFSET UNITYSDK_OFFSET(0x139125C0)
#define CLASS_2_461A525D3A269864_METHOD_2_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x13910AD0)
#define CLASS_2_461A525D3A269864_METHOD_2_14014646206E49EF_OFFSET UNITYSDK_OFFSET(0x13916380)
#define CLASS_2_461A525D3A269864_METHOD_2_1AF0EFB40F7AF822_OFFSET UNITYSDK_OFFSET(0x13915FC0)
#define CLASS_2_461A525D3A269864_METHOD_2_323F339F6EE28D4A_OFFSET UNITYSDK_OFFSET(0x13916930)
#define CLASS_2_461A525D3A269864_METHOD_2_33876ADF3DF3A24C_OFFSET UNITYSDK_OFFSET(0x13915930)
#define CLASS_2_461A525D3A269864_METHOD_2_3C68DE51CA637CB3_OFFSET UNITYSDK_OFFSET(0x13915EA0)
#define CLASS_2_461A525D3A269864_METHOD_2_3EF78293AE73C881_OFFSET UNITYSDK_OFFSET(0x13916740)
#define CLASS_2_461A525D3A269864_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13916300)
#define CLASS_2_461A525D3A269864_METHOD_2_564EB06B0601BB3C_OFFSET UNITYSDK_OFFSET(0x139156B0)
#define CLASS_2_461A525D3A269864_METHOD_2_6C5219D256048011_OFFSET UNITYSDK_OFFSET(0x13915040)
#define CLASS_2_461A525D3A269864_METHOD_2_6C7C2B7F8240C0D8_OFFSET UNITYSDK_OFFSET(0x139160D0)
#define CLASS_2_461A525D3A269864_METHOD_2_6DDE9E07E2ABBFE8_OFFSET UNITYSDK_OFFSET(0x13917220)
#define CLASS_2_461A525D3A269864_METHOD_2_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x13916E00)
#define CLASS_2_461A525D3A269864_METHOD_2_808A56A256840289_OFFSET UNITYSDK_OFFSET(0x13911E10)
#define CLASS_2_461A525D3A269864_METHOD_2_84364CF25BA3E3E9_OFFSET UNITYSDK_OFFSET(0x139151A0)
#define CLASS_2_461A525D3A269864_METHOD_2_85F2FFB361D233DC_OFFSET UNITYSDK_OFFSET(0x13916620)
#define CLASS_2_461A525D3A269864_METHOD_2_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x13912260)
#define CLASS_2_461A525D3A269864_METHOD_2_96423E189D7E47C7_OFFSET UNITYSDK_OFFSET(0x13916FB0)
#define CLASS_2_461A525D3A269864_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x139162A0)
#define CLASS_2_461A525D3A269864_METHOD_2_A64902DA4259B16D_1_OFFSET UNITYSDK_OFFSET(0x139150A0)
#define CLASS_2_461A525D3A269864_METHOD_2_A64902DA4259B16D_OFFSET UNITYSDK_OFFSET(0x13916520)
#define CLASS_2_461A525D3A269864_METHOD_2_DAD8EFA75612E71B_OFFSET UNITYSDK_OFFSET(0x13913930)
#define CLASS_2_461A525D3A269864_METHOD_2_DDDB067552F16446_OFFSET UNITYSDK_OFFSET(0x13911D20)
#define CLASS_2_461A525D3A269864_METHOD_2_E96529914D8B8D75_OFFSET UNITYSDK_OFFSET(0x139168A0)
#define CLASS_2_461A525D3A269864_ONCREATE_OFFSET UNITYSDK_OFFSET(0x13910C10)
#define CLASS_2_461A525D3A269864__CCTOR_OFFSET UNITYSDK_OFFSET(0x139119F0)
#define CLASS_2_461A525D3A269864__CTOR_OFFSET UNITYSDK_OFFSET(0x13911780)

inline static constexpr unsigned int Class_2_461A525D3A269864_TypeDefinitionIndex = 72607;

class Class_2_461A525D3A269864 : public ::Foundation::SingletonDisposable_1<::Class_2_461A525D3A269864*>
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Class_2_461A525D3A269864_Enum_3_F07D91F85F866CD2, ::System::Int32>** StaticGet_Field_2_4()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_2_461A525D3A269864_Enum_3_F07D91F85F866CD2, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_461A525D3A269864_TypeDefinitionIndex)->GetStaticField(0x34E40);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_2_12()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_2_461A525D3A269864_TypeDefinitionIndex)->GetStaticField(0xC440);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_2_10()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_2_461A525D3A269864_TypeDefinitionIndex)->GetStaticField(0xC448);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_2_13()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_2_461A525D3A269864_TypeDefinitionIndex)->GetStaticField(0xC450);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_2_9()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_2_461A525D3A269864_TypeDefinitionIndex)->GetStaticField(0xC458);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_2_18()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_2_461A525D3A269864_TypeDefinitionIndex)->GetStaticField(0xC460);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_2_17()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_2_461A525D3A269864_TypeDefinitionIndex)->GetStaticField(0xC468);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_2_19()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_2_461A525D3A269864_TypeDefinitionIndex)->GetStaticField(0xC470);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_2_16()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_2_461A525D3A269864_TypeDefinitionIndex)->GetStaticField(0xC478);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_2_15()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_2_461A525D3A269864_TypeDefinitionIndex)->GetStaticField(0xC480);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_2_11()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_2_461A525D3A269864_TypeDefinitionIndex)->GetStaticField(0xC488);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_2_8()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_2_461A525D3A269864_TypeDefinitionIndex)->GetStaticField(0xC490);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_2_14()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_2_461A525D3A269864_TypeDefinitionIndex)->GetStaticField(0xC498);
	}
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_461A525D3A269864_Class_1_65EEE2D0D33D4E8D*>* Field_2_23; // 0x18
	::System::Collections::Generic::Dictionary_2<::Struct_2_76CCAEE20B3AE57C, ::System::Int32>* Field_2_6; // 0x20
	::System::Collections::Generic::HashSet_1<::Struct_2_76CCAEE20B3AE57C>* Field_2_5; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_0; // 0x30
	::System::Collections::Generic::List_1<::Struct_2_76CCAEE20B3AE57C>* Field_2_2; // 0x38
	::Foundation::AssetPath Field_2_7; // 0x40
	::System::Collections::Generic::List_1<::Class_2_461A525D3A269864_Class_1_65EEE2D0D33D4E8D*>* Field_2_20; // 0x50
	::System::Int32 Field_2_27; // 0x58
	::System::Boolean Field_2_22; // 0x5C
	::System::Boolean Field_2_25; // 0x5D
	::System::Boolean Field_2_24; // 0x5E
	::Unity::Collections::NativeList_1<::System::Byte> Field_2_21; // 0x60
	::Unity::Jobs::JobHandle Field_2_26; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_ONCREATE_OFFSET))(this);
	}

	::System::Boolean Method_2_DDDB067552F16446(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_DDDB067552F16446_OFFSET))(this, a1);
	}

	::System::Void Method_2_808A56A256840289(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_808A56A256840289_OFFSET))(this, a1);
	}

	::System::Void Method_2_6C5219D256048011(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_6C5219D256048011_OFFSET))(this, a1);
	}

	::System::Void Method_2_84364CF25BA3E3E9(::System::UInt32 a1, ::Class_2_461A525D3A269864_Enum_3_F07D91F85F866CD2 a2, ::System::String* a3, ::Foundation::AssetPath a4, ::Foundation::AssetPath a5, ::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam a6, ::System::Int32 a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_461A525D3A269864_Enum_3_F07D91F85F866CD2, ::System::String*, ::Foundation::AssetPath, ::Foundation::AssetPath, ::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_84364CF25BA3E3E9_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::Class_2_461A525D3A269864_Struct_2_EE378F408834D807_1 Method_2_33876ADF3DF3A24C()
	{
		return ((::Class_2_461A525D3A269864_Struct_2_EE378F408834D807_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_33876ADF3DF3A24C_OFFSET))(this);
	}

	::System::Boolean Method_2_3C68DE51CA637CB3(::System::UInt32 a1, ::Class_2_461A525D3A269864_Enum_3_F55703D2B85FF9FE a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_2_461A525D3A269864_Enum_3_F55703D2B85FF9FE))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_3C68DE51CA637CB3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1AF0EFB40F7AF822(::System::UInt32 a1, ::Class_2_461A525D3A269864_Enum_3_F55703D2B85FF9FE a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_461A525D3A269864_Enum_3_F55703D2B85FF9FE))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_1AF0EFB40F7AF822_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6C7C2B7F8240C0D8(::Class_2_461A525D3A269864_Class_1_65EEE2D0D33D4E8D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_461A525D3A269864_Class_1_65EEE2D0D33D4E8D*))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_6C7C2B7F8240C0D8_OFFSET))(this, a1);
	}

	::System::Void Method_2_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_2_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_2_14014646206E49EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_14014646206E49EF_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_0915110004B2F0C9(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_0915110004B2F0C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_DAD8EFA75612E71B(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_DAD8EFA75612E71B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A64902DA4259B16D(::System::UInt32 a1, ::Class_2_461A525D3A269864_Enum_3_F07D91F85F866CD2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_461A525D3A269864_Enum_3_F07D91F85F866CD2))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_A64902DA4259B16D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A64902DA4259B16D_1(::System::UInt32 a1, ::Class_2_461A525D3A269864_Enum_3_F55703D2B85FF9FE a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_461A525D3A269864_Enum_3_F55703D2B85FF9FE))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_A64902DA4259B16D_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::String* Method_2_85F2FFB361D233DC(::System::UInt32 a1, ::Class_2_461A525D3A269864_Enum_3_F55703D2B85FF9FE a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32, ::Class_2_461A525D3A269864_Enum_3_F55703D2B85FF9FE))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_85F2FFB361D233DC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3EF78293AE73C881(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_3EF78293AE73C881_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_564EB06B0601BB3C(::Class_2_461A525D3A269864_Class_1_65EEE2D0D33D4E8D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_461A525D3A269864_Class_1_65EEE2D0D33D4E8D*))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_564EB06B0601BB3C_OFFSET))(this, a1);
	}

	::Class_2_461A525D3A269864_Class_1_65EEE2D0D33D4E8D* Method_2_E96529914D8B8D75(::System::Int32 a1)
	{
		return ((::Class_2_461A525D3A269864_Class_1_65EEE2D0D33D4E8D*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_E96529914D8B8D75_OFFSET))(this, a1);
	}

	::System::Void Method_2_323F339F6EE28D4A(::System::UInt32 a1, ::Class_2_461A525D3A269864_Enum_3_F55703D2B85FF9FE a2, ::System::String* a3, ::System::Boolean a4, ::System::Boolean a5, ::Class_1_9166BD0F741825C9_Class_1_060344A07EDA293D_Enum_3_7F56E2E74CA21A9A a6, ::Class_3_D92ADC48CDFCC09B_2* a7, ::System::Boolean a8, ::MoleMole::Config::NamePanelTrait* a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_461A525D3A269864_Enum_3_F55703D2B85FF9FE, ::System::String*, ::System::Boolean, ::System::Boolean, ::Class_1_9166BD0F741825C9_Class_1_060344A07EDA293D_Enum_3_7F56E2E74CA21A9A, ::Class_3_D92ADC48CDFCC09B_2*, ::System::Boolean, ::MoleMole::Config::NamePanelTrait*))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_323F339F6EE28D4A_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_76CD9B9D1269FA90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_76CD9B9D1269FA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_6DDE9E07E2ABBFE8(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_6DDE9E07E2ABBFE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_96423E189D7E47C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_96423E189D7E47C7_OFFSET))(this);
	}
};
