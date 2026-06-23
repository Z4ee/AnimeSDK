#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9166BD0F741825C9_Class_1_060344A07EDA293D_Enum_3_7F56E2E74CA21A9A.h"
#include "unitysdk/Class_2_461A525D3A269864_Enum_3_F07D91F85F866CD2.h"
#include "unitysdk/Class_2_461A525D3A269864_Enum_3_F55703D2B85FF9FE.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/FocusUISpecialIconParam.h"
#include "unitysdk/Struct_2_76CCAEE20B3AE57C.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_461A525D3A269864_Class_1_2CEF5F9A36A11D90;
class Class_3_D92ADC48CDFCC09B_2;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class NamePanelTrait; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_461A525D3A269864_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12EB3840)
#define CLASS_2_461A525D3A269864_METHOD_2_0915110004B2F0C9_OFFSET UNITYSDK_OFFSET(0x12EB7440)
#define CLASS_2_461A525D3A269864_METHOD_2_14014646206E49EF_OFFSET UNITYSDK_OFFSET(0x12EB8C40)
#define CLASS_2_461A525D3A269864_METHOD_2_1AF0EFB40F7AF822_OFFSET UNITYSDK_OFFSET(0x12EB8DE0)
#define CLASS_2_461A525D3A269864_METHOD_2_323F339F6EE28D4A_OFFSET UNITYSDK_OFFSET(0x12EB8EF0)
#define CLASS_2_461A525D3A269864_METHOD_2_3C68DE51CA637CB3_OFFSET UNITYSDK_OFFSET(0x12EB6F00)
#define CLASS_2_461A525D3A269864_METHOD_2_3EF78293AE73C881_OFFSET UNITYSDK_OFFSET(0x12EB89A0)
#define CLASS_2_461A525D3A269864_METHOD_2_6C5219D256048011_OFFSET UNITYSDK_OFFSET(0x12EB8BE0)
#define CLASS_2_461A525D3A269864_METHOD_2_6DDE9E07E2ABBFE8_OFFSET UNITYSDK_OFFSET(0x12EB6D70)
#define CLASS_2_461A525D3A269864_METHOD_2_71DBDE027B920D16_OFFSET UNITYSDK_OFFSET(0x12EB7020)
#define CLASS_2_461A525D3A269864_METHOD_2_84364CF25BA3E3E9_OFFSET UNITYSDK_OFFSET(0x12EB9490)
#define CLASS_2_461A525D3A269864_METHOD_2_A64902DA4259B16D_1_OFFSET UNITYSDK_OFFSET(0x12EB8AE0)
#define CLASS_2_461A525D3A269864_METHOD_2_A64902DA4259B16D_OFFSET UNITYSDK_OFFSET(0x12EB6C70)
#define CLASS_2_461A525D3A269864_METHOD_2_DAD8EFA75612E71B_OFFSET UNITYSDK_OFFSET(0x12EB5430)
#define CLASS_2_461A525D3A269864_METHOD_2_DDDB067552F16446_OFFSET UNITYSDK_OFFSET(0x12EB93A0)
#define CLASS_2_461A525D3A269864_ONCREATE_OFFSET UNITYSDK_OFFSET(0x12EB43B0)
#define CLASS_2_461A525D3A269864__CCTOR_OFFSET UNITYSDK_OFFSET(0x12EB5110)
#define CLASS_2_461A525D3A269864__CTOR_OFFSET UNITYSDK_OFFSET(0x12EB4F20)

inline static constexpr unsigned int Class_2_461A525D3A269864_TypeDefinitionIndex = 63760;

class Class_2_461A525D3A269864 : public ::Foundation::SingletonDisposable_1<::Class_2_461A525D3A269864*>
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Class_2_461A525D3A269864_Enum_3_F07D91F85F866CD2, ::System::Int32>** StaticGet_Field_2_6()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_2_461A525D3A269864_Enum_3_F07D91F85F866CD2, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_461A525D3A269864_TypeDefinitionIndex)->GetStaticField(0x3BEE0);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_2_13()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_2_461A525D3A269864_TypeDefinitionIndex)->GetStaticField(0xEB90);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_2_16()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_2_461A525D3A269864_TypeDefinitionIndex)->GetStaticField(0xEB98);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_2_12()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_2_461A525D3A269864_TypeDefinitionIndex)->GetStaticField(0xEBA0);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_2_7()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_2_461A525D3A269864_TypeDefinitionIndex)->GetStaticField(0xEBA8);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_2_9()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_2_461A525D3A269864_TypeDefinitionIndex)->GetStaticField(0xEBB0);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_2_8()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_2_461A525D3A269864_TypeDefinitionIndex)->GetStaticField(0xEBB8);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_2_11()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_2_461A525D3A269864_TypeDefinitionIndex)->GetStaticField(0xEBC0);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_2_14()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_2_461A525D3A269864_TypeDefinitionIndex)->GetStaticField(0xEBC8);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_2_10()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_2_461A525D3A269864_TypeDefinitionIndex)->GetStaticField(0xEBD0);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_2_17()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_2_461A525D3A269864_TypeDefinitionIndex)->GetStaticField(0xEBD8);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_2_15()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_2_461A525D3A269864_TypeDefinitionIndex)->GetStaticField(0xEBE0);
	}
	::System::Collections::Generic::List_1<::Struct_2_76CCAEE20B3AE57C>* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_2; // 0x20
	::System::Collections::Generic::HashSet_1<::Struct_2_76CCAEE20B3AE57C>* Field_2_5; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_461A525D3A269864_Class_1_2CEF5F9A36A11D90*>* Field_2_18; // 0x30
	::Foundation::AssetPath Field_2_3; // 0x38
	::System::Collections::Generic::Dictionary_2<::Struct_2_76CCAEE20B3AE57C, ::System::Int32>* Field_2_4; // 0x48
	::System::Boolean Field_2_19; // 0x50

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

	::System::Void Method_2_DAD8EFA75612E71B(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_DAD8EFA75612E71B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A64902DA4259B16D(::System::UInt32 a1, ::Class_2_461A525D3A269864_Enum_3_F55703D2B85FF9FE a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_461A525D3A269864_Enum_3_F55703D2B85FF9FE))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_A64902DA4259B16D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6DDE9E07E2ABBFE8(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_6DDE9E07E2ABBFE8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_3C68DE51CA637CB3(::System::UInt32 a1, ::Class_2_461A525D3A269864_Enum_3_F55703D2B85FF9FE a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_2_461A525D3A269864_Enum_3_F55703D2B85FF9FE))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_3C68DE51CA637CB3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_71DBDE027B920D16(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_71DBDE027B920D16_OFFSET))(this, a1);
	}

	::System::Void Method_2_3EF78293AE73C881(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_3EF78293AE73C881_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A64902DA4259B16D_1(::System::UInt32 a1, ::Class_2_461A525D3A269864_Enum_3_F07D91F85F866CD2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_461A525D3A269864_Enum_3_F07D91F85F866CD2))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_A64902DA4259B16D_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6C5219D256048011(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_6C5219D256048011_OFFSET))(this, a1);
	}

	::System::Void Method_2_0915110004B2F0C9(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_0915110004B2F0C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_1AF0EFB40F7AF822(::System::UInt32 a1, ::Class_2_461A525D3A269864_Enum_3_F55703D2B85FF9FE a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_461A525D3A269864_Enum_3_F55703D2B85FF9FE))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_1AF0EFB40F7AF822_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_323F339F6EE28D4A(::System::UInt32 a1, ::Class_2_461A525D3A269864_Enum_3_F55703D2B85FF9FE a2, ::System::String* a3, ::System::Boolean a4, ::System::Boolean a5, ::Class_1_9166BD0F741825C9_Class_1_060344A07EDA293D_Enum_3_7F56E2E74CA21A9A a6, ::Class_3_D92ADC48CDFCC09B_2* a7, ::System::Boolean a8, ::MoleMole::Config::NamePanelTrait* a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_461A525D3A269864_Enum_3_F55703D2B85FF9FE, ::System::String*, ::System::Boolean, ::System::Boolean, ::Class_1_9166BD0F741825C9_Class_1_060344A07EDA293D_Enum_3_7F56E2E74CA21A9A, ::Class_3_D92ADC48CDFCC09B_2*, ::System::Boolean, ::MoleMole::Config::NamePanelTrait*))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_323F339F6EE28D4A_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Boolean Method_2_DDDB067552F16446(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_DDDB067552F16446_OFFSET))(this, a1);
	}

	::System::Void Method_2_14014646206E49EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_14014646206E49EF_OFFSET))(this);
	}

	::System::Void Method_2_84364CF25BA3E3E9(::System::UInt32 a1, ::Class_2_461A525D3A269864_Enum_3_F07D91F85F866CD2 a2, ::System::String* a3, ::Foundation::AssetPath a4, ::Foundation::AssetPath a5, ::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam a6, ::System::Int32 a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_461A525D3A269864_Enum_3_F07D91F85F866CD2, ::System::String*, ::Foundation::AssetPath, ::Foundation::AssetPath, ::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_METHOD_2_84364CF25BA3E3E9_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
