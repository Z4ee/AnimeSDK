#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/System/ValueTuple_5.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_271;
class Class_1_5A2B37F2EE2533F6;
class Class_1_7A22A3DBEEDD1F80;
class Class_1_8A6989C352B0F0F0;
class Class_1_8B1384503A353CC0;
class Class_1_CD49E6413051D9AA;
class Class_1_D70A30D666F20D90;
class Class_1_DE4C6B309308A230;
class Class_1_E136401E1657CFD7;
class Class_2_4346854BFC7E4C60;
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace RPG { class IReference; }
namespace RPG::Client { class PVSDebugMono; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerSetting; }
namespace RPG::Client::OpenWorld { class Volume; }
namespace RPG::GameCore { class JsonOfflineCullingCellData; }
namespace RPG::GameCore { class LodConfig; }
namespace RPG::GameCore { class OfflineCullingIndex; }
namespace RPG::GameCore { class OfflineCullingLod; }
namespace RPG::GameCore { class StageAutoGenConfig; }
namespace RPG::GameCore { class StageBaseConfig; }
namespace RPG::GameCore { class StagePVSData; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Action_6; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class TextAsset; }

#define CLASS_1_D497EBDFD5D2C087_GET_DATADIRTY_OFFSET UNITYSDK_OFFSET(0x13975060)
#define CLASS_1_D497EBDFD5D2C087_GET_USEBINARYDATA_OFFSET UNITYSDK_OFFSET(0x1396C210)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_08BC2327C01BB33B_OFFSET UNITYSDK_OFFSET(0x1396FA20)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_097F5DD0FBFD67CA_OFFSET UNITYSDK_OFFSET(0x139703A0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_0CE388D35E8A2648_OFFSET UNITYSDK_OFFSET(0x13970BA0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_0FBF44BBA82CE88D_OFFSET UNITYSDK_OFFSET(0x13974F30)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_1799CA7A4943FF63_OFFSET UNITYSDK_OFFSET(0x1396E8F0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_1D014FA2E5647C10_OFFSET UNITYSDK_OFFSET(0x13975020)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x13975050)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_2BE4F2EDBC8FFCCB_OFFSET UNITYSDK_OFFSET(0x13970F70)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x13974950)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_343C73108A22D1CC_OFFSET UNITYSDK_OFFSET(0x1396F2B0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_36199BBD14A68CEC_OFFSET UNITYSDK_OFFSET(0x13970170)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_369BB5E7FA6A1768_1_OFFSET UNITYSDK_OFFSET(0x13975550)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_369BB5E7FA6A1768_OFFSET UNITYSDK_OFFSET(0x13975250)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_4A28FA981541725F_OFFSET UNITYSDK_OFFSET(0x139705C0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_4A4F76220F82BEE2_OFFSET UNITYSDK_OFFSET(0x13970660)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x13975030)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0x13975040)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_67C10584F4320583_1_OFFSET UNITYSDK_OFFSET(0x139753A0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_67C10584F4320583_OFFSET UNITYSDK_OFFSET(0x13975080)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_6BB008E9B4218A45_OFFSET UNITYSDK_OFFSET(0x1396F690)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_6D82003517666E07_OFFSET UNITYSDK_OFFSET(0x1396FEA0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_6F7362B3E9B51403_OFFSET UNITYSDK_OFFSET(0x13971AF0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_72FA99B22D858863_OFFSET UNITYSDK_OFFSET(0x13974420)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_7471DAE5B0A2754D_OFFSET UNITYSDK_OFFSET(0x13971800)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_78A9A0823C944513_OFFSET UNITYSDK_OFFSET(0x1396E8D0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_8422ABC65E83BF12_OFFSET UNITYSDK_OFFSET(0x13970410)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x1396E910)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_8D6558ACA80D7296_OFFSET UNITYSDK_OFFSET(0x139718A0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_90F250E7FF5CB0FD_OFFSET UNITYSDK_OFFSET(0x1396FB60)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1396F710)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_A58A7B5F7A2437BC_OFFSET UNITYSDK_OFFSET(0x1396F770)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x1396EEB0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_BFFE0D476A0214C1_OFFSET UNITYSDK_OFFSET(0x13970290)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_C0688C2E36BAE128_OFFSET UNITYSDK_OFFSET(0x13970200)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_C43ACB30510AD375_OFFSET UNITYSDK_OFFSET(0x139734A0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_C97F1DF1BCE94A44_OFFSET UNITYSDK_OFFSET(0x13973890)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_D66F211912D83957_OFFSET UNITYSDK_OFFSET(0x1396EE60)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x1396F9D0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_D7A2FC5DC698090D_OFFSET UNITYSDK_OFFSET(0x139749F0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_D90E4D83236D96C8_OFFSET UNITYSDK_OFFSET(0x13971110)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x1396F980)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_F620B37222044A24_OFFSET UNITYSDK_OFFSET(0x1396F170)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_FE0FD5BD2AAA3348_OFFSET UNITYSDK_OFFSET(0x13973BC0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_FF63E816B4D956CD_OFFSET UNITYSDK_OFFSET(0x1396ECA0)
#define CLASS_1_D497EBDFD5D2C087_SET_DATADIRTY_OFFSET UNITYSDK_OFFSET(0x13975070)
#define CLASS_1_D497EBDFD5D2C087_SET_USEBINARYDATA_OFFSET UNITYSDK_OFFSET(0x1396C220)
#define CLASS_1_D497EBDFD5D2C087__CCTOR_OFFSET UNITYSDK_OFFSET(0x139756A0)
#define CLASS_1_D497EBDFD5D2C087__CTOR_OFFSET UNITYSDK_OFFSET(0x1396C230)

inline static constexpr unsigned int Class_1_D497EBDFD5D2C087_TypeDefinitionIndex = 68866;

class Class_1_D497EBDFD5D2C087 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_0()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x33AA0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_1()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x33AA8);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_2()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x33AB0);
	}
	static ::System::Collections::Generic::Stack_1<::Class_1_8B1384503A353CC0*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::Stack_1<::Class_1_8B1384503A353CC0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x33AB8);
	}
	static ::System::Object** StaticGet_Field_1_4()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x33AC0);
	}
	static ::System::Collections::Generic::List_1<::System::Int64>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::List_1<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x33AC8);
	}
	static ::Class_1_7A22A3DBEEDD1F80** StaticGet_Field_1_6()
	{
		return (::Class_1_7A22A3DBEEDD1F80**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x33AD0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_7()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x33AD8);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_8()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x33AE0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_9()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x33AE8);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_10()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x33AF0);
	}
	static ::System::Collections::Generic::Stack_1<::Class_1_E136401E1657CFD7*>** StaticGet_Field_1_11()
	{
		return (::System::Collections::Generic::Stack_1<::Class_1_E136401E1657CFD7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x33AF8);
	}
	static ::System::Object** StaticGet_Field_1_12()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x33B00);
	}
	static ::System::Single* StaticGet_Field_1_13()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0xA340);
	}
	// static const ::System::Single Field_1_14; // 0x0
	// static const ::System::Single Field_1_15; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::ValueTuple_4<::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32>>* Field_1_16; // 0x10
	::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* Field_1_17; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_18; // 0x20
	::Class_1_5A2B37F2EE2533F6* Field_1_19; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>* Field_1_20; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* Field_1_21; // 0x38
	::System::Collections::Generic::List_1<::RPG::GameCore::OfflineCullingIndex*>* Field_1_22; // 0x40
	::System::Collections::Generic::List_1<::System::Single>* Field_1_23; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Int32>* Field_1_24; // 0x50
	::Class_0_16E4307DCC419505_271* Field_1_25; // 0x58
	::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_26; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_27; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::OfflineCullingIndex*>*>* Field_1_28; // 0x70
	::RPG::GameCore::StagePVSData* Field_1_29; // 0x78
	::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::RPG::GameCore::OfflineCullingIndex*>*>*>* Field_1_30; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::JsonOfflineCullingCellData*>* Field_1_31; // 0x88
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::Volume*>* Field_1_32; // 0x90
	::System::Action_6<::UnityEngine::TextAsset*, ::RPG::IReference*, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32>* Field_1_33; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_34; // 0xA0
	::RPG::GameCore::StageAutoGenConfig* Field_1_35; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::RPG::GameCore::OfflineCullingIndex*>*>* Field_1_36; // 0xB0
	::System::Collections::Generic::List_1<::System::ValueTuple_5<::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::RPG::GameCore::JsonOfflineCullingCellData*, ::System::Int32>>* Field_1_37; // 0xB8
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Boolean>* Field_1_38; // 0xC0
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>* Field_1_39; // 0xC8
	::RPG::GameCore::StageBaseConfig* Field_1_40; // 0xD0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_1_41; // 0xD8
	::Class_1_D70A30D666F20D90* Field_1_42; // 0xE0
	::System::Collections::Generic::List_1<::System::ValueTuple_4<::RPG::GameCore::OfflineCullingIndex*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32>>* Field_1_43; // 0xE8
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* Field_1_44; // 0xF0
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*>* Field_1_45; // 0xF8
	::System::Action_2<::System::Int64, ::System::Boolean>* Field_1_46; // 0x100
	::System::Collections::Generic::HashSet_1<::Class_1_CD49E6413051D9AA*>* Field_1_47; // 0x108
	::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_48; // 0x110
	::RPG::Client::PVSDebugMono* Field_1_49; // 0x118
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>* Field_1_50; // 0x120
	::System::Int32 Field_1_51; // 0x128
	::System::Boolean Field_1_52; // 0x12C
	::System::Boolean Field_1_53; // 0x12D
	::System::Boolean Field_1_54; // 0x12E
	::System::Boolean _UseBinaryData_k__BackingField; // 0x12F
	::System::Single Field_1_56; // 0x130
	::System::Boolean _DataDirty_k__BackingField; // 0x134
	::System::Boolean Field_1_58; // 0x135
	::UnityEngine::Vector3 Field_1_59; // 0x138
	::System::Int64 Field_1_60; // 0x148
	::System::Int32 Field_1_61; // 0x150
	::System::Int32 Field_1_62; // 0x154

	::System::Void _ctor(::Class_1_D70A30D666F20D90* a1, ::RPG::GameCore::StageBaseConfig* a2, ::RPG::GameCore::StageAutoGenConfig* a3, ::RPG::GameCore::LodConfig* a4, ::RPG::Client::OpenWorld::StreamingLayerSetting* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*, ::RPG::GameCore::StageBaseConfig*, ::RPG::GameCore::StageAutoGenConfig*, ::RPG::GameCore::LodConfig*, ::RPG::Client::OpenWorld::StreamingLayerSetting*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087__CCTOR_OFFSET))();
	}

	::System::Boolean get_UseBinaryData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_GET_USEBINARYDATA_OFFSET))(this);
	}

	::System::Void set_UseBinaryData(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_SET_USEBINARYDATA_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Void Method_1_FF63E816B4D956CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_FF63E816B4D956CD_OFFSET))(this);
	}

	::System::Int64 Method_1_D66F211912D83957()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_D66F211912D83957_OFFSET))(this);
	}

	::System::Void Method_1_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_B06F516E4459C742_OFFSET))(this);
	}

	::System::Void Method_1_343C73108A22D1CC(::System::Action_2<::System::Int64, ::System::Boolean>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int64, ::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_343C73108A22D1CC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6BB008E9B4218A45(::System::Action_2<::System::Int64, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int64, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_6BB008E9B4218A45_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_A58A7B5F7A2437BC(::System::Collections::Generic::List_1<::System::Int64>* a1, ::System::Collections::Generic::List_1<::System::Int64>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int64>*, ::System::Collections::Generic::List_1<::System::Int64>*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_A58A7B5F7A2437BC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F620B37222044A24(::System::Int64 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_F620B37222044A24_OFFSET))(this, a1);
	}

	::System::Void Method_1_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void Method_1_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Void Method_1_08BC2327C01BB33B(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_08BC2327C01BB33B_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_90F250E7FF5CB0FD(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_90F250E7FF5CB0FD_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_6D82003517666E07(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_6D82003517666E07_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_36199BBD14A68CEC(::Class_1_CD49E6413051D9AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CD49E6413051D9AA*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_36199BBD14A68CEC_OFFSET))(this, a1);
	}

	::System::Void Method_1_C0688C2E36BAE128(::Class_1_CD49E6413051D9AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CD49E6413051D9AA*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_C0688C2E36BAE128_OFFSET))(this, a1);
	}

	::System::Void Method_1_BFFE0D476A0214C1(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_BFFE0D476A0214C1_OFFSET))(this, a1);
	}

	::System::Void Method_1_097F5DD0FBFD67CA(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_097F5DD0FBFD67CA_OFFSET))(this, a1);
	}

	::System::Void Method_1_8422ABC65E83BF12(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_8422ABC65E83BF12_OFFSET))(this, a1);
	}

	::System::Void Method_1_4A28FA981541725F(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_4A28FA981541725F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* Method_1_4A4F76220F82BEE2(::System::Int32 a1, ::System::Int64 a2)
	{
		return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*(*)(::PVOID, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_4A4F76220F82BEE2_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::OfflineCullingIndex* Method_1_0CE388D35E8A2648(::System::Int32 a1, ::System::Int64 a2, ::System::Single a3)
	{
		return ((::RPG::GameCore::OfflineCullingIndex*(*)(::PVOID, ::System::Int32, ::System::Int64, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_0CE388D35E8A2648_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::JsonOfflineCullingCellData* Method_1_2BE4F2EDBC8FFCCB(::UnityEngine::TextAsset* a1)
	{
		return ((::RPG::GameCore::JsonOfflineCullingCellData*(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_2BE4F2EDBC8FFCCB_OFFSET))(this, a1);
	}

	::System::Void Method_1_D90E4D83236D96C8(::Class_2_4346854BFC7E4C60* a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4346854BFC7E4C60*, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_D90E4D83236D96C8_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_8D6558ACA80D7296(::UnityEngine::TextAsset* a1, ::RPG::IReference* a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::RPG::GameCore::OfflineCullingIndex* a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAsset*, ::RPG::IReference*, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_8D6558ACA80D7296_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::String* Method_1_7471DAE5B0A2754D(::RPG::GameCore::OfflineCullingIndex* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::OfflineCullingIndex*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_7471DAE5B0A2754D_OFFSET))(this, a1);
	}

	::System::Void Method_1_6F7362B3E9B51403(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_6F7362B3E9B51403_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FE0FD5BD2AAA3348(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_FE0FD5BD2AAA3348_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_72FA99B22D858863(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_72FA99B22D858863_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D7A2FC5DC698090D(::Class_1_CD49E6413051D9AA* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CD49E6413051D9AA*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_D7A2FC5DC698090D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0FBF44BBA82CE88D(::RPG::GameCore::OfflineCullingIndex* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OfflineCullingIndex*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_0FBF44BBA82CE88D_OFFSET))(this, a1);
	}

	::System::Void Method_1_C43ACB30510AD375(::Class_2_4346854BFC7E4C60* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4346854BFC7E4C60*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_C43ACB30510AD375_OFFSET))(this, a1);
	}

	::System::Void Method_1_C97F1DF1BCE94A44(::Class_2_4346854BFC7E4C60* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4346854BFC7E4C60*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_C97F1DF1BCE94A44_OFFSET))(this, a1);
	}

	::RPG::GameCore::StageBaseConfig* Method_1_1D014FA2E5647C10()
	{
		return ((::RPG::GameCore::StageBaseConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_1D014FA2E5647C10_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::OfflineCullingIndex*>* Method_1_78A9A0823C944513()
	{
		return ((::Il2CppArray<::RPG::GameCore::OfflineCullingIndex*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_78A9A0823C944513_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::OfflineCullingLod*>* Method_1_1799CA7A4943FF63()
	{
		return ((::Il2CppArray<::RPG::GameCore::OfflineCullingLod*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_1799CA7A4943FF63_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_271* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_271*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::Class_1_5A2B37F2EE2533F6* Method_1_24748FC20F375725()
	{
		return ((::Class_1_5A2B37F2EE2533F6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Boolean get_DataDirty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_GET_DATADIRTY_OFFSET))(this);
	}

	::System::Void set_DataDirty(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_SET_DATADIRTY_OFFSET))(this, a1);
	}

	static ::Class_1_E136401E1657CFD7* Method_1_67C10584F4320583()
	{
		return ((::Class_1_E136401E1657CFD7*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_67C10584F4320583_OFFSET))();
	}

	static ::System::Void Method_1_369BB5E7FA6A1768(::Class_1_E136401E1657CFD7* a1)
	{
		return ((::System::Void(*)(::Class_1_E136401E1657CFD7*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_369BB5E7FA6A1768_OFFSET))(a1);
	}

	static ::Class_1_8B1384503A353CC0* Method_1_67C10584F4320583_1()
	{
		return ((::Class_1_8B1384503A353CC0*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_67C10584F4320583_1_OFFSET))();
	}

	static ::System::Void Method_1_369BB5E7FA6A1768_1(::Class_1_8B1384503A353CC0* a1)
	{
		return ((::System::Void(*)(::Class_1_8B1384503A353CC0*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_369BB5E7FA6A1768_1_OFFSET))(a1);
	}
};
