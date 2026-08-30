#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/OpenWorldCullingPauseReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/System/ValueTuple_5.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_298;
class Class_1_290E70A78CB4315C;
class Class_1_7A22A3DBEEDD1F80;
class Class_1_8A6989C352B0F0F0;
class Class_1_CD49E6413051D9AA;
class Class_1_D70A30D666F20D90;
class Class_1_DE4C6B309308A230;
class Class_1_E136401E1657CFD7;
class Class_1_F42E2700AE42DA72;
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

#define CLASS_1_D497EBDFD5D2C087_GET_DATADIRTY_OFFSET UNITYSDK_OFFSET(0x15964E70)
#define CLASS_1_D497EBDFD5D2C087_GET_USEBINARYDATA_OFFSET UNITYSDK_OFFSET(0x1595B0B0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_097F5DD0FBFD67CA_OFFSET UNITYSDK_OFFSET(0x1595FCF0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_0CE388D35E8A2648_OFFSET UNITYSDK_OFFSET(0x15960590)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_0F43B59E3B7133BF_OFFSET UNITYSDK_OFFSET(0x1595FB10)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_0FBF44BBA82CE88D_OFFSET UNITYSDK_OFFSET(0x15964D40)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_1799CA7A4943FF63_OFFSET UNITYSDK_OFFSET(0x1595D760)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_1D014FA2E5647C10_OFFSET UNITYSDK_OFFSET(0x15964E30)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x15964E60)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x15964750)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_343C73108A22D1CC_OFFSET UNITYSDK_OFFSET(0x1595E220)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_369BB5E7FA6A1768_1_OFFSET UNITYSDK_OFFSET(0x15965360)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_369BB5E7FA6A1768_OFFSET UNITYSDK_OFFSET(0x15965060)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1595B0D0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_41B36256138D4994_OFFSET UNITYSDK_OFFSET(0x1595F000)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_4A28FA981541725F_OFFSET UNITYSDK_OFFSET(0x1595FFB0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_4A4F76220F82BEE2_OFFSET UNITYSDK_OFFSET(0x15960050)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_4CE25807F13237A6_OFFSET UNITYSDK_OFFSET(0x1595E980)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x15964E40)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_55B8349E0B606444_OFFSET UNITYSDK_OFFSET(0x1595DC00)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_5AB373DA300F74B2_OFFSET UNITYSDK_OFFSET(0x1595F250)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0x15964E50)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_66F501070C8F9EA1_OFFSET UNITYSDK_OFFSET(0x1595F9C0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_67C10584F4320583_1_OFFSET UNITYSDK_OFFSET(0x159651B0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_67C10584F4320583_OFFSET UNITYSDK_OFFSET(0x15964E90)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_6BB008E9B4218A45_OFFSET UNITYSDK_OFFSET(0x1595E600)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_6F7362B3E9B51403_OFFSET UNITYSDK_OFFSET(0x159615D0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_72FA99B22D858863_OFFSET UNITYSDK_OFFSET(0x15964210)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_7471DAE5B0A2754D_OFFSET UNITYSDK_OFFSET(0x159612E0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_74AECDEAEFC4E639_OFFSET UNITYSDK_OFFSET(0x1595ED30)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_78A9A0823C944513_OFFSET UNITYSDK_OFFSET(0x1595D740)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_7AFF8DE463A41552_OFFSET UNITYSDK_OFFSET(0x1595E0B0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_83813F19043309B6_OFFSET UNITYSDK_OFFSET(0x15960960)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x1595D780)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_8D6558ACA80D7296_OFFSET UNITYSDK_OFFSET(0x15961380)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_8E09123A7B75854B_OFFSET UNITYSDK_OFFSET(0x1595D6A0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_8E22B572EA9F050D_OFFSET UNITYSDK_OFFSET(0x1595FD60)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1595E670)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_A58A7B5F7A2437BC_OFFSET UNITYSDK_OFFSET(0x1595E6D0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x1595DE00)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_B1BEDC7A6A2D9F08_OFFSET UNITYSDK_OFFSET(0x1595F340)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_B45407C642DE1AE2_OFFSET UNITYSDK_OFFSET(0x1595E9D0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_B77198754CA0CFAD_OFFSET UNITYSDK_OFFSET(0x1595F6B0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x1595EBB0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_BA1A163457250A51_OFFSET UNITYSDK_OFFSET(0x1595FAA0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_C43ACB30510AD375_OFFSET UNITYSDK_OFFSET(0x15963170)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_C97F1DF1BCE94A44_OFFSET UNITYSDK_OFFSET(0x15963570)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_D66F211912D83957_OFFSET UNITYSDK_OFFSET(0x1595DDB0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x1595E920)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_D7A2FC5DC698090D_OFFSET UNITYSDK_OFFSET(0x159647F0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_D90E4D83236D96C8_OFFSET UNITYSDK_OFFSET(0x15960BE0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_DA909ECE77D97A36_OFFSET UNITYSDK_OFFSET(0x159638A0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x1595EAC0)
#define CLASS_1_D497EBDFD5D2C087_METHOD_1_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x1595E8C0)
#define CLASS_1_D497EBDFD5D2C087_SET_DATADIRTY_OFFSET UNITYSDK_OFFSET(0x15964E80)
#define CLASS_1_D497EBDFD5D2C087_SET_USEBINARYDATA_OFFSET UNITYSDK_OFFSET(0x1595B0C0)
#define CLASS_1_D497EBDFD5D2C087__CCTOR_OFFSET UNITYSDK_OFFSET(0x159654B0)
#define CLASS_1_D497EBDFD5D2C087__CTOR_OFFSET UNITYSDK_OFFSET(0x1595B120)

inline static constexpr unsigned int Class_1_D497EBDFD5D2C087_TypeDefinitionIndex = 73669;

class Class_1_D497EBDFD5D2C087 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_NDJICBEOKAI()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x25E50);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_MLGAHMJHMLP()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x25E58);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_CIBEDCLKBNE()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x25E60);
	}
	static ::Class_1_7A22A3DBEEDD1F80** StaticGet_DHAELINDBHK()
	{
		return (::Class_1_7A22A3DBEEDD1F80**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x25E68);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_PKAJOPBCPIK()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x25E70);
	}
	static ::System::Object** StaticGet_FMPJFBMGADP()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x25E78);
	}
	static ::System::Collections::Generic::Stack_1<::Class_1_E136401E1657CFD7*>** StaticGet_MPDMJDFHLPN()
	{
		return (::System::Collections::Generic::Stack_1<::Class_1_E136401E1657CFD7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x25E80);
	}
	static ::System::Collections::Generic::List_1<::System::Int64>** StaticGet_NMIKNGNEMHF()
	{
		return (::System::Collections::Generic::List_1<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x25E88);
	}
	static ::System::Collections::Generic::Stack_1<::Class_1_F42E2700AE42DA72*>** StaticGet_MMPMFOFFJHB()
	{
		return (::System::Collections::Generic::Stack_1<::Class_1_F42E2700AE42DA72*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x25E90);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_KJPLMHJINGE()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x25E98);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_NDDGLIBPIEM()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x25EA0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_JPGBNDEGOMD()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x25EA8);
	}
	static ::System::Object** StaticGet_GONDGPELLDG()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0x25EB0);
	}
	static ::System::Single* StaticGet_IGKDOGBBDGH()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D497EBDFD5D2C087_TypeDefinitionIndex)->GetStaticField(0xB4D0);
	}
	// static const ::System::Single KONDIJAGDAC; // 0x0
	// static const ::System::Single CGJMEJFFHMJ; // 0x0
	::RPG::GameCore::StageAutoGenConfig* CGPPFOLFAKI; // 0x10
	::System::Action_2<::System::Int64, ::System::Boolean>* PDHMBMJIADP; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::OfflineCullingIndex*>* NPBFOFEGKJG; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Boolean>* JBHOAMOBHCG; // 0x28
	::Class_1_D70A30D666F20D90* BJPKBELGNCM; // 0x30
	::System::Collections::Generic::List_1<::System::Single>* PAKDMMJLJFI; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* EONODDHDKGG; // 0x40
	::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* PILDFLBIFJN; // 0x48
	::RPG::Client::PVSDebugMono* EMDIEIENDCN; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* GOLFLIHEPEL; // 0x58
	::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::RPG::GameCore::OfflineCullingIndex*>*>*>* PMOBOBNKKAO; // 0x60
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* OALJEANHPAO; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* OOEGCINAFFI; // 0x70
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>* JDHOBEHPEJF; // 0x78
	::Class_1_290E70A78CB4315C* PNIAJCNKHOP; // 0x80
	::Class_0_16E4307DCC419505_298* IDHKPDHIAKE; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::ValueTuple_4<::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32>>* DBKOBGPIHEE; // 0x90
	::System::Collections::Generic::List_1<::System::ValueTuple_5<::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::RPG::GameCore::JsonOfflineCullingCellData*, ::System::Int32>>* OGHDCJLJECC; // 0x98
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>* DLMAKOKDAPL; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::JsonOfflineCullingCellData*>* BOBJONMPNFM; // 0xA8
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*>* JPKACEHEFOH; // 0xB0
	::System::Action_6<::UnityEngine::TextAsset*, ::RPG::IReference*, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32>* JJMFOBIIICA; // 0xB8
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>* KDHCAJKADBL; // 0xC0
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::Volume*>* PKOJHLMKMPD; // 0xC8
	::RPG::GameCore::StagePVSData* CDHODPNNMGO; // 0xD0
	::System::Collections::Generic::List_1<::System::ValueTuple_4<::RPG::GameCore::OfflineCullingIndex*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32>>* NMNLECOANLF; // 0xD8
	::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* MGMEJJHGAOM; // 0xE0
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::RPG::GameCore::OfflineCullingIndex*>*>* FJJNAJMOGHG; // 0xE8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::OfflineCullingIndex*>*>* GLIHMBDEKFP; // 0xF0
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Int32>* AFGNJKMIELE; // 0xF8
	::System::Collections::Generic::HashSet_1<::Class_1_CD49E6413051D9AA*>* DHIBMDEMIBN; // 0x100
	::RPG::GameCore::StageBaseConfig* KIKKCNDGFOL; // 0x108
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* NIMEBGFNBGA; // 0x110
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ECKIMJFMONA; // 0x118
	::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* KJCFIDNOOPD; // 0x120
	::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::OpenWorldCullingPauseReason> CKHLABOMJBM; // 0x128
	::System::Boolean LJJPFLOEHGA; // 0x130
	::System::Boolean CKCFINEHCBL; // 0x131
	::System::Boolean CLAFGFLPIPA; // 0x132
	::System::Boolean _DataDirty_k__BackingField; // 0x133
	::System::Int32 KPCDAMGMMJB; // 0x134
	::UnityEngine::Vector3 BCEBNLHANAO; // 0x138
	::System::Boolean DLBAMHMDMDP; // 0x144
	::System::Boolean _UseBinaryData_k__BackingField; // 0x145
	::System::Int32 PKDPHHHLAMA; // 0x148
	::System::Single JDHLINNDIJD; // 0x14C
	::System::Int32 EJIMIIGJFHH; // 0x150
	::System::Int64 EJLJJDFHDGK; // 0x158

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

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Void Method_1_55B8349E0B606444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_55B8349E0B606444_OFFSET))(this);
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

	::System::Boolean Method_1_7AFF8DE463A41552(::System::Int64 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_7AFF8DE463A41552_OFFSET))(this, a1);
	}

	::System::Void Method_1_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void Method_1_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Void Method_1_4CE25807F13237A6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_4CE25807F13237A6_OFFSET))(this, a1);
	}

	::System::Void Method_1_8E09123A7B75854B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_8E09123A7B75854B_OFFSET))(this, a1);
	}

	::System::Void Method_1_B45407C642DE1AE2(::System::Boolean a1, ::RPG::Client::OpenWorld::OpenWorldCullingPauseReason a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::OpenWorld::OpenWorldCullingPauseReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_B45407C642DE1AE2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_1_74AECDEAEFC4E639(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_74AECDEAEFC4E639_OFFSET))(this, a1);
	}

	::System::Void Method_1_41B36256138D4994(::Class_1_CD49E6413051D9AA* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CD49E6413051D9AA*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_41B36256138D4994_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5AB373DA300F74B2(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_5AB373DA300F74B2_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_B1BEDC7A6A2D9F08(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_B1BEDC7A6A2D9F08_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_B77198754CA0CFAD(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_B77198754CA0CFAD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_66F501070C8F9EA1(::Class_1_CD49E6413051D9AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CD49E6413051D9AA*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_66F501070C8F9EA1_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA1A163457250A51(::Class_1_CD49E6413051D9AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CD49E6413051D9AA*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_BA1A163457250A51_OFFSET))(this, a1);
	}

	::System::Void Method_1_0F43B59E3B7133BF(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_0F43B59E3B7133BF_OFFSET))(this, a1);
	}

	::System::Void Method_1_097F5DD0FBFD67CA(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_097F5DD0FBFD67CA_OFFSET))(this, a1);
	}

	::System::Void Method_1_8E22B572EA9F050D(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_8E22B572EA9F050D_OFFSET))(this, a1);
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

	::RPG::GameCore::JsonOfflineCullingCellData* Method_1_83813F19043309B6(::UnityEngine::TextAsset* a1)
	{
		return ((::RPG::GameCore::JsonOfflineCullingCellData*(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_83813F19043309B6_OFFSET))(this, a1);
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

	::System::Void Method_1_DA909ECE77D97A36(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_DA909ECE77D97A36_OFFSET))(this, a1, a2);
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

	::Class_0_16E4307DCC419505_298* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_298*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::Class_1_290E70A78CB4315C* Method_1_24748FC20F375725()
	{
		return ((::Class_1_290E70A78CB4315C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_24748FC20F375725_OFFSET))(this);
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

	static ::Class_1_F42E2700AE42DA72* Method_1_67C10584F4320583_1()
	{
		return ((::Class_1_F42E2700AE42DA72*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_67C10584F4320583_1_OFFSET))();
	}

	static ::System::Void Method_1_369BB5E7FA6A1768_1(::Class_1_F42E2700AE42DA72* a1)
	{
		return ((::System::Void(*)(::Class_1_F42E2700AE42DA72*))((::PBYTE)hIl2Cpp + CLASS_1_D497EBDFD5D2C087_METHOD_1_369BB5E7FA6A1768_1_OFFSET))(a1);
	}
};
