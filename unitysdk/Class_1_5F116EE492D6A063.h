#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/System/ValueTuple_5.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_253;
class Class_1_09021BDF5ED5EA94;
class Class_1_290E70A78CB4315C;
class Class_1_56FF45D7B2C55655;
class Class_1_7A22A3DBEEDD1F80;
class Class_1_8A6989C352B0F0F0;
class Class_1_DE4C6B309308A230;
class Class_1_E136401E1657CFD7;
class Class_1_ED67E1BB7AEB90D8;
class Class_2_DD25755736E2A226;
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
namespace RPG::GameCore { class StageConfig; }
namespace RPG::GameCore { class StagePVSData; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Action_6; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class TextAsset; }

#define CLASS_1_5F116EE492D6A063_GET_DATADIRTY_OFFSET UNITYSDK_OFFSET(0x8C44F20)
#define CLASS_1_5F116EE492D6A063_GET_USEBINARYDATA_OFFSET UNITYSDK_OFFSET(0x8C3C6E0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_08BC2327C01BB33B_OFFSET UNITYSDK_OFFSET(0x8C3FBF0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_0C4E0634D4E07EA3_OFFSET UNITYSDK_OFFSET(0x8C411A0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_0FBF44BBA82CE88D_OFFSET UNITYSDK_OFFSET(0x8C44DE0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_1799CA7A4943FF63_OFFSET UNITYSDK_OFFSET(0x8C3EC50)
#define CLASS_1_5F116EE492D6A063_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x8C44F10)
#define CLASS_1_5F116EE492D6A063_METHOD_1_2BE4F2EDBC8FFCCB_OFFSET UNITYSDK_OFFSET(0x8C41000)
#define CLASS_1_5F116EE492D6A063_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x8C44780)
#define CLASS_1_5F116EE492D6A063_METHOD_1_36199BBD14A68CEC_OFFSET UNITYSDK_OFFSET(0x8C402E0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_369BB5E7FA6A1768_1_OFFSET UNITYSDK_OFFSET(0x8C45410)
#define CLASS_1_5F116EE492D6A063_METHOD_1_369BB5E7FA6A1768_OFFSET UNITYSDK_OFFSET(0x8C45110)
#define CLASS_1_5F116EE492D6A063_METHOD_1_4B49CB2CD4D222F8_OFFSET UNITYSDK_OFFSET(0x8C44270)
#define CLASS_1_5F116EE492D6A063_METHOD_1_4BD9E95D1AEEBF9B_OFFSET UNITYSDK_OFFSET(0x8C40580)
#define CLASS_1_5F116EE492D6A063_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x8C44EF0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_5ADFEC2E44029993_OFFSET UNITYSDK_OFFSET(0x8C3F980)
#define CLASS_1_5F116EE492D6A063_METHOD_1_5BCD80B898B3AF8B_OFFSET UNITYSDK_OFFSET(0x8C44EE0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0x8C44F00)
#define CLASS_1_5F116EE492D6A063_METHOD_1_67C10584F4320583_1_OFFSET UNITYSDK_OFFSET(0x8C45260)
#define CLASS_1_5F116EE492D6A063_METHOD_1_67C10584F4320583_OFFSET UNITYSDK_OFFSET(0x8C44F40)
#define CLASS_1_5F116EE492D6A063_METHOD_1_68BC2C58B9220C6F_OFFSET UNITYSDK_OFFSET(0x8C407D0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_6BB008E9B4218A45_OFFSET UNITYSDK_OFFSET(0x8C3F8B0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_6D82003517666E07_OFFSET UNITYSDK_OFFSET(0x8C40040)
#define CLASS_1_5F116EE492D6A063_METHOD_1_6F7362B3E9B51403_OFFSET UNITYSDK_OFFSET(0x8C41B00)
#define CLASS_1_5F116EE492D6A063_METHOD_1_7471DAE5B0A2754D_OFFSET UNITYSDK_OFFSET(0x8C41830)
#define CLASS_1_5F116EE492D6A063_METHOD_1_78A9A0823C944513_OFFSET UNITYSDK_OFFSET(0x8C3EC30)
#define CLASS_1_5F116EE492D6A063_METHOD_1_7F4EBEC55EBE2D81_1_OFFSET UNITYSDK_OFFSET(0x8C3FBA0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_7F4EBEC55EBE2D81_OFFSET UNITYSDK_OFFSET(0x8C3FB50)
#define CLASS_1_5F116EE492D6A063_METHOD_1_887D987A91D77E00_OFFSET UNITYSDK_OFFSET(0x8C44820)
#define CLASS_1_5F116EE492D6A063_METHOD_1_8B451D7CE79AF87F_OFFSET UNITYSDK_OFFSET(0x8C418D0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x8C3EC70)
#define CLASS_1_5F116EE492D6A063_METHOD_1_90F250E7FF5CB0FD_OFFSET UNITYSDK_OFFSET(0x8C3FD30)
#define CLASS_1_5F116EE492D6A063_METHOD_1_9473958EACF8F196_OFFSET UNITYSDK_OFFSET(0x8C3F510)
#define CLASS_1_5F116EE492D6A063_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x8C3F920)
#define CLASS_1_5F116EE492D6A063_METHOD_1_A67EA69BF5A5FAC6_OFFSET UNITYSDK_OFFSET(0x8C433C0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_B11572376B688A06_OFFSET UNITYSDK_OFFSET(0x8C40C20)
#define CLASS_1_5F116EE492D6A063_METHOD_1_BFFE0D476A0214C1_OFFSET UNITYSDK_OFFSET(0x8C40400)
#define CLASS_1_5F116EE492D6A063_METHOD_1_C0688C2E36BAE128_OFFSET UNITYSDK_OFFSET(0x8C40370)
#define CLASS_1_5F116EE492D6A063_METHOD_1_C4236B1B3A9C2B12_OFFSET UNITYSDK_OFFSET(0x8C3F3E0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x8C3F130)
#define CLASS_1_5F116EE492D6A063_METHOD_1_D66F211912D83957_OFFSET UNITYSDK_OFFSET(0x8C3F0E0)
#define CLASS_1_5F116EE492D6A063_METHOD_1_DAED5CDBD3055E38_OFFSET UNITYSDK_OFFSET(0x8C43740)
#define CLASS_1_5F116EE492D6A063_METHOD_1_F848FA6A62C78D33_OFFSET UNITYSDK_OFFSET(0x8C40510)
#define CLASS_1_5F116EE492D6A063_METHOD_1_FA36319A46D72876_OFFSET UNITYSDK_OFFSET(0x8C40730)
#define CLASS_1_5F116EE492D6A063_METHOD_1_FE0FD5BD2AAA3348_OFFSET UNITYSDK_OFFSET(0x8C43A10)
#define CLASS_1_5F116EE492D6A063_SET_DATADIRTY_OFFSET UNITYSDK_OFFSET(0x8C44F30)
#define CLASS_1_5F116EE492D6A063_SET_USEBINARYDATA_OFFSET UNITYSDK_OFFSET(0x8C3C6F0)
#define CLASS_1_5F116EE492D6A063__CCTOR_OFFSET UNITYSDK_OFFSET(0x8C45560)
#define CLASS_1_5F116EE492D6A063__CTOR_OFFSET UNITYSDK_OFFSET(0x8C3C700)

inline static constexpr unsigned int Class_1_5F116EE492D6A063_TypeDefinitionIndex = 60478;

class Class_1_5F116EE492D6A063 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_14()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x489A0);
	}
	static ::System::Collections::Generic::Stack_1<::Class_1_ED67E1BB7AEB90D8*>** StaticGet_Field_1_61()
	{
		return (::System::Collections::Generic::Stack_1<::Class_1_ED67E1BB7AEB90D8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x489A8);
	}
	static ::System::Object** StaticGet_Field_1_62()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x489B0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_12()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x489B8);
	}
	static ::System::Collections::Generic::List_1<::System::Int64>** StaticGet_Field_1_53()
	{
		return (::System::Collections::Generic::List_1<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x489C0);
	}
	static ::System::Object** StaticGet_Field_1_60()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x489C8);
	}
	static ::Class_1_7A22A3DBEEDD1F80** StaticGet_Field_1_6()
	{
		return (::Class_1_7A22A3DBEEDD1F80**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x489D0);
	}
	static ::System::Collections::Generic::Stack_1<::Class_1_E136401E1657CFD7*>** StaticGet_Field_1_59()
	{
		return (::System::Collections::Generic::Stack_1<::Class_1_E136401E1657CFD7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x489D8);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_11()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x489E0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_13()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x489E8);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_17()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x489F0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_16()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x489F8);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_15()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x48A00);
	}
	static ::System::Single* StaticGet_Field_1_57()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F116EE492D6A063_TypeDefinitionIndex)->GetStaticField(0x12EC0);
	}
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Single Field_1_56; // 0x0
	::System::Collections::Generic::List_1<::System::Single>* Field_1_30; // 0x10
	::Class_1_290E70A78CB4315C* Field_1_27; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_21; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>* Field_1_47; // 0x28
	::System::Action_6<::UnityEngine::TextAsset*, ::RPG::IReference*, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32>* Field_1_9; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* Field_1_43; // 0x38
	::Class_1_56FF45D7B2C55655* Field_1_22; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Int32>* Field_1_51; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::ValueTuple_4<::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32>>* Field_1_7; // 0x50
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>* Field_1_4; // 0x58
	::System::Action_2<::System::Int64, ::System::Boolean>* Field_1_54; // 0x60
	::System::Collections::Generic::List_1<::RPG::GameCore::OfflineCullingIndex*>* Field_1_34; // 0x68
	::System::Collections::Generic::List_1<::System::ValueTuple_5<::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::RPG::GameCore::JsonOfflineCullingCellData*, ::System::Int32>>* Field_1_8; // 0x70
	::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_44; // 0x78
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_32; // 0x80
	::RPG::GameCore::StagePVSData* Field_1_25; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_1_48; // 0x90
	::RPG::GameCore::StageConfig* Field_1_23; // 0x98
	::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::RPG::GameCore::OfflineCullingIndex*>*>*>* Field_1_29; // 0xA0
	::System::Collections::Generic::List_1<::System::ValueTuple_4<::RPG::GameCore::OfflineCullingIndex*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32>>* Field_1_18; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Boolean>* Field_1_52; // 0xB0
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::Volume*>* Field_1_36; // 0xB8
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*>* Field_1_39; // 0xC0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_49; // 0xC8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::OfflineCullingIndex*>*>* Field_1_20; // 0xD0
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_46; // 0xD8
	::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* Field_1_41; // 0xE0
	::RPG::GameCore::StageAutoGenConfig* Field_1_24; // 0xE8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::JsonOfflineCullingCellData*>* Field_1_19; // 0xF0
	::Class_0_16E4307DCC419505_253* Field_1_55; // 0xF8
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::RPG::GameCore::OfflineCullingIndex*>*>* Field_1_28; // 0x100
	::System::Collections::Generic::HashSet_1<::Class_1_09021BDF5ED5EA94*>* Field_1_42; // 0x108
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>* Field_1_5; // 0x110
	::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_45; // 0x118
	::RPG::Client::PVSDebugMono* Field_1_3; // 0x120
	::UnityEngine::Vector3 Field_1_33; // 0x128
	::System::Boolean Field_1_10; // 0x134
	::System::Boolean Field_1_26; // 0x135
	::System::Boolean Field_1_35; // 0x136
	::System::Boolean _UseBinaryData_k__BackingField; // 0x137
	::System::Int64 Field_1_50; // 0x138
	::System::Int32 Field_1_37; // 0x140
	::System::Boolean Field_1_0; // 0x144
	::System::Boolean _DataDirty_k__BackingField; // 0x145
	::System::Int32 Field_1_40; // 0x148
	::System::Int32 Field_1_38; // 0x14C
	::System::Single Field_1_31; // 0x150

	::System::Void _ctor(::Class_1_56FF45D7B2C55655* a1, ::RPG::GameCore::StageConfig* a2, ::RPG::GameCore::StageAutoGenConfig* a3, ::RPG::GameCore::LodConfig* a4, ::RPG::Client::OpenWorld::StreamingLayerSetting* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56FF45D7B2C55655*, ::RPG::GameCore::StageConfig*, ::RPG::GameCore::StageAutoGenConfig*, ::RPG::GameCore::LodConfig*, ::RPG::Client::OpenWorld::StreamingLayerSetting*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063__CCTOR_OFFSET))();
	}

	::System::Boolean get_UseBinaryData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_GET_USEBINARYDATA_OFFSET))(this);
	}

	::System::Void set_UseBinaryData(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_SET_USEBINARYDATA_OFFSET))(this, value);
	}

	::System::Void Method_1_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Int64 Method_1_D66F211912D83957()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_D66F211912D83957_OFFSET))(this);
	}

	::System::Void Method_1_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_C8E2469222842786_OFFSET))(this);
	}

	::System::Void Method_1_9473958EACF8F196(::System::Action_2<::System::Int64, ::System::Boolean>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int64, ::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_9473958EACF8F196_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6BB008E9B4218A45(::System::Action_2<::System::Int64, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int64, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_6BB008E9B4218A45_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_5ADFEC2E44029993(::System::Collections::Generic::List_1<::System::Int64>* a1, ::System::Collections::Generic::List_1<::System::Int64>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int64>*, ::System::Collections::Generic::List_1<::System::Int64>*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_5ADFEC2E44029993_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C4236B1B3A9C2B12(::System::Int64 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_C4236B1B3A9C2B12_OFFSET))(this, a1);
	}

	::System::Void Method_1_7F4EBEC55EBE2D81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_7F4EBEC55EBE2D81_OFFSET))(this);
	}

	::System::Void Method_1_7F4EBEC55EBE2D81_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_7F4EBEC55EBE2D81_1_OFFSET))(this);
	}

	::System::Void Method_1_08BC2327C01BB33B(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_08BC2327C01BB33B_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_90F250E7FF5CB0FD(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_90F250E7FF5CB0FD_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_6D82003517666E07(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_6D82003517666E07_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_36199BBD14A68CEC(::Class_1_09021BDF5ED5EA94* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_09021BDF5ED5EA94*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_36199BBD14A68CEC_OFFSET))(this, a1);
	}

	::System::Void Method_1_C0688C2E36BAE128(::Class_1_09021BDF5ED5EA94* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_09021BDF5ED5EA94*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_C0688C2E36BAE128_OFFSET))(this, a1);
	}

	::System::Void Method_1_BFFE0D476A0214C1(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_BFFE0D476A0214C1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F848FA6A62C78D33(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_F848FA6A62C78D33_OFFSET))(this, a1);
	}

	::System::Void Method_1_4BD9E95D1AEEBF9B(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_4BD9E95D1AEEBF9B_OFFSET))(this, a1);
	}

	::System::Void Method_1_FA36319A46D72876(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_FA36319A46D72876_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* Method_1_68BC2C58B9220C6F(::System::Int32 a1, ::System::Int64 a2)
	{
		return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*(*)(::PVOID, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_68BC2C58B9220C6F_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::OfflineCullingIndex* Method_1_B11572376B688A06(::System::Int32 a1, ::System::Int64 a2, ::System::Single a3)
	{
		return ((::RPG::GameCore::OfflineCullingIndex*(*)(::PVOID, ::System::Int32, ::System::Int64, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_B11572376B688A06_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::JsonOfflineCullingCellData* Method_1_2BE4F2EDBC8FFCCB(::UnityEngine::TextAsset* a1)
	{
		return ((::RPG::GameCore::JsonOfflineCullingCellData*(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_2BE4F2EDBC8FFCCB_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C4E0634D4E07EA3(::Class_2_DD25755736E2A226* a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DD25755736E2A226*, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_0C4E0634D4E07EA3_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_8B451D7CE79AF87F(::UnityEngine::TextAsset* a1, ::RPG::IReference* a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::RPG::GameCore::OfflineCullingIndex* a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAsset*, ::RPG::IReference*, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_8B451D7CE79AF87F_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::String* Method_1_7471DAE5B0A2754D(::RPG::GameCore::OfflineCullingIndex* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::OfflineCullingIndex*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_7471DAE5B0A2754D_OFFSET))(this, a1);
	}

	::System::Void Method_1_6F7362B3E9B51403(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_6F7362B3E9B51403_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FE0FD5BD2AAA3348(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_FE0FD5BD2AAA3348_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_4B49CB2CD4D222F8(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_4B49CB2CD4D222F8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_887D987A91D77E00(::Class_1_09021BDF5ED5EA94* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_09021BDF5ED5EA94*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_887D987A91D77E00_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0FBF44BBA82CE88D(::RPG::GameCore::OfflineCullingIndex* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OfflineCullingIndex*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_0FBF44BBA82CE88D_OFFSET))(this, a1);
	}

	::System::Void Method_1_A67EA69BF5A5FAC6(::Class_2_DD25755736E2A226* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DD25755736E2A226*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_A67EA69BF5A5FAC6_OFFSET))(this, a1);
	}

	::System::Void Method_1_DAED5CDBD3055E38(::Class_2_DD25755736E2A226* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DD25755736E2A226*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_DAED5CDBD3055E38_OFFSET))(this, a1);
	}

	::RPG::GameCore::StageConfig* Method_1_5BCD80B898B3AF8B()
	{
		return ((::RPG::GameCore::StageConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_5BCD80B898B3AF8B_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::OfflineCullingIndex*>* Method_1_78A9A0823C944513()
	{
		return ((::Il2CppArray<::RPG::GameCore::OfflineCullingIndex*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_78A9A0823C944513_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::OfflineCullingLod*>* Method_1_1799CA7A4943FF63()
	{
		return ((::Il2CppArray<::RPG::GameCore::OfflineCullingLod*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_1799CA7A4943FF63_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_253* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_253*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::Class_1_290E70A78CB4315C* Method_1_24748FC20F375725()
	{
		return ((::Class_1_290E70A78CB4315C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Boolean get_DataDirty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_GET_DATADIRTY_OFFSET))(this);
	}

	::System::Void set_DataDirty(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_SET_DATADIRTY_OFFSET))(this, value);
	}

	static ::Class_1_E136401E1657CFD7* Method_1_67C10584F4320583()
	{
		return ((::Class_1_E136401E1657CFD7*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_67C10584F4320583_OFFSET))();
	}

	static ::System::Void Method_1_369BB5E7FA6A1768(::Class_1_E136401E1657CFD7* a1)
	{
		return ((::System::Void(*)(::Class_1_E136401E1657CFD7*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_369BB5E7FA6A1768_OFFSET))(a1);
	}

	static ::Class_1_ED67E1BB7AEB90D8* Method_1_67C10584F4320583_1()
	{
		return ((::Class_1_ED67E1BB7AEB90D8*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_67C10584F4320583_1_OFFSET))();
	}

	static ::System::Void Method_1_369BB5E7FA6A1768_1(::Class_1_ED67E1BB7AEB90D8* a1)
	{
		return ((::System::Void(*)(::Class_1_ED67E1BB7AEB90D8*))((::PBYTE)hIl2Cpp + CLASS_1_5F116EE492D6A063_METHOD_1_369BB5E7FA6A1768_1_OFFSET))(a1);
	}
};
