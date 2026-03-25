#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B228A4605C15E47_Struct_2_823833D588E72957.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemEnableReason.h"
#include "unitysdk/RPG/GameCore/StreamingLayerType.h"
#include "unitysdk/Struct_2_8BE3C66A8F21F652.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_811;
class Class_1_303D5A33D1401D59;
class Class_1_339067D9E32FBBB4;
class Class_1_3F28033F34305C46;
class Class_1_43BD383C98B4C0C5_164;
class Class_1_56FF45D7B2C55655;
class Class_1_8A6989C352B0F0F0;
class Class_1_DE4C6B309308A230;
class Class_1_F35AF634CCD4DC45;
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace RPG::Client::OpenWorld { class Volume; }
namespace RPG::Client::OpenWorld { template <typename T> class AOIBase_1; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class EnvironmentDataInfo; }
namespace RPG::GameCore { class StagePrefabInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_5B228A4605C15E47_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0x110D1F30)
#define CLASS_1_5B228A4605C15E47_CHECKSTREAMING_OFFSET UNITYSDK_OFFSET(0x110D1B20)
#define CLASS_1_5B228A4605C15E47_DISPOSE_OFFSET UNITYSDK_OFFSET(0x110D1150)
#define CLASS_1_5B228A4605C15E47_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0x110D5A50)
#define CLASS_1_5B228A4605C15E47_GET_CANLOADSTREAMINGRESOURCE_OFFSET UNITYSDK_OFFSET(0x110D0570)
#define CLASS_1_5B228A4605C15E47_GET_ISFOCUS_OFFSET UNITYSDK_OFFSET(0x110D5A30)
#define CLASS_1_5B228A4605C15E47_GET_ISPERSISTENTLOADED_OFFSET UNITYSDK_OFFSET(0x110D2200)
#define CLASS_1_5B228A4605C15E47_GET_JOBDATASTREAMING_OFFSET UNITYSDK_OFFSET(0x110CDB30)
#define CLASS_1_5B228A4605C15E47_GET_LAYERSOURCEEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x110D2230)
#define CLASS_1_5B228A4605C15E47_INACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x110D2D40)
#define CLASS_1_5B228A4605C15E47_INSERTTOAOI_OFFSET UNITYSDK_OFFSET(0x110CF6C0)
#define CLASS_1_5B228A4605C15E47_LEAVEOUTVISION_OFFSET UNITYSDK_OFFSET(0x110D18D0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_02A67ACF3BCC3ADE_OFFSET UNITYSDK_OFFSET(0x110D2C20)
#define CLASS_1_5B228A4605C15E47_METHOD_1_03C56FBEC5C889AC_OFFSET UNITYSDK_OFFSET(0x110D5580)
#define CLASS_1_5B228A4605C15E47_METHOD_1_05968E5CCAD303A5_OFFSET UNITYSDK_OFFSET(0x110CC3A0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0x110D3F50)
#define CLASS_1_5B228A4605C15E47_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x110D57B0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_115AC51E73D999C8_OFFSET UNITYSDK_OFFSET(0x110CFD00)
#define CLASS_1_5B228A4605C15E47_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x110D1A20)
#define CLASS_1_5B228A4605C15E47_METHOD_1_1A4414413DE08994_OFFSET UNITYSDK_OFFSET(0x110D4820)
#define CLASS_1_5B228A4605C15E47_METHOD_1_1A90B7D81C1D0EB0_OFFSET UNITYSDK_OFFSET(0x110CCB00)
#define CLASS_1_5B228A4605C15E47_METHOD_1_1C9A89A72D430905_OFFSET UNITYSDK_OFFSET(0x110CF140)
#define CLASS_1_5B228A4605C15E47_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x110CDB70)
#define CLASS_1_5B228A4605C15E47_METHOD_1_1DE63FE11FA0D5B4_OFFSET UNITYSDK_OFFSET(0x110D43F0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_1FE4DD8CBB24E4D9_OFFSET UNITYSDK_OFFSET(0x110D3990)
#define CLASS_1_5B228A4605C15E47_METHOD_1_255811211D98CDCE_OFFSET UNITYSDK_OFFSET(0x110D05E0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0x110D36E0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_2E3D208EC479E1B5_OFFSET UNITYSDK_OFFSET(0x110CCF60)
#define CLASS_1_5B228A4605C15E47_METHOD_1_336BBA1F27BAEEE0_OFFSET UNITYSDK_OFFSET(0x110D67D0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x110CF4C0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_35DD5E9922E078B2_OFFSET UNITYSDK_OFFSET(0x110D5C50)
#define CLASS_1_5B228A4605C15E47_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x110CC6C0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_387EA1BE4F9FC1D2_OFFSET UNITYSDK_OFFSET(0x110CEA10)
#define CLASS_1_5B228A4605C15E47_METHOD_1_3DF018E49E922C69_OFFSET UNITYSDK_OFFSET(0x110D1020)
#define CLASS_1_5B228A4605C15E47_METHOD_1_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x110D5D50)
#define CLASS_1_5B228A4605C15E47_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x110CF9A0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_3F3693110F25FD62_1_OFFSET UNITYSDK_OFFSET(0x110D1910)
#define CLASS_1_5B228A4605C15E47_METHOD_1_3F3693110F25FD62_OFFSET UNITYSDK_OFFSET(0x110CE360)
#define CLASS_1_5B228A4605C15E47_METHOD_1_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x110D59B0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_4C409DF5E54C7553_OFFSET UNITYSDK_OFFSET(0x110CE6B0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_4C5371C54FF722B4_OFFSET UNITYSDK_OFFSET(0x110CF890)
#define CLASS_1_5B228A4605C15E47_METHOD_1_4EFC8421DB9059A5_OFFSET UNITYSDK_OFFSET(0x110D2030)
#define CLASS_1_5B228A4605C15E47_METHOD_1_4F5257BBEC1FBFED_1_OFFSET UNITYSDK_OFFSET(0x110D5480)
#define CLASS_1_5B228A4605C15E47_METHOD_1_4F5257BBEC1FBFED_OFFSET UNITYSDK_OFFSET(0x110D4720)
#define CLASS_1_5B228A4605C15E47_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x110D2520)
#define CLASS_1_5B228A4605C15E47_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x110D0C10)
#define CLASS_1_5B228A4605C15E47_METHOD_1_56750A0C1A6E4594_OFFSET UNITYSDK_OFFSET(0x110D22B0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_59E2538CF2D1A0AC_OFFSET UNITYSDK_OFFSET(0x110CF9F0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_5A6EDA618381B719_OFFSET UNITYSDK_OFFSET(0x110D6270)
#define CLASS_1_5B228A4605C15E47_METHOD_1_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x110CFF60)
#define CLASS_1_5B228A4605C15E47_METHOD_1_62AA24C6BF34AC04_OFFSET UNITYSDK_OFFSET(0x110D5230)
#define CLASS_1_5B228A4605C15E47_METHOD_1_64F0C85A431FBD69_OFFSET UNITYSDK_OFFSET(0x110D17F0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_695579C6786804DA_OFFSET UNITYSDK_OFFSET(0x110D0180)
#define CLASS_1_5B228A4605C15E47_METHOD_1_6CB5060D47BF8A1B_OFFSET UNITYSDK_OFFSET(0x110CDAA0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_6EB41FA6FC12E24C_1_OFFSET UNITYSDK_OFFSET(0x110D0350)
#define CLASS_1_5B228A4605C15E47_METHOD_1_6EB41FA6FC12E24C_OFFSET UNITYSDK_OFFSET(0x110D02E0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_7CCF26DCE6CE0D45_OFFSET UNITYSDK_OFFSET(0x110D5E50)
#define CLASS_1_5B228A4605C15E47_METHOD_1_7D8635EB900C4D09_OFFSET UNITYSDK_OFFSET(0x110CCA10)
#define CLASS_1_5B228A4605C15E47_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x110D4550)
#define CLASS_1_5B228A4605C15E47_METHOD_1_7E8FD15DE9AB685F_OFFSET UNITYSDK_OFFSET(0x110D1D60)
#define CLASS_1_5B228A4605C15E47_METHOD_1_822031E522673D19_OFFSET UNITYSDK_OFFSET(0x110D60C0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_86DA6A9C666CF918_OFFSET UNITYSDK_OFFSET(0x110D5000)
#define CLASS_1_5B228A4605C15E47_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x110D5CA0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_8DCD1FEC09DA5176_OFFSET UNITYSDK_OFFSET(0x110D3500)
#define CLASS_1_5B228A4605C15E47_METHOD_1_90EBA8A351308A02_OFFSET UNITYSDK_OFFSET(0x110D20E0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x110CD1D0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x110D2250)
#define CLASS_1_5B228A4605C15E47_METHOD_1_9617F67032BC6735_OFFSET UNITYSDK_OFFSET(0x110D5D00)
#define CLASS_1_5B228A4605C15E47_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x110CD3F0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_9AA4014B2568687E_OFFSET UNITYSDK_OFFSET(0x110D5DA0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_A64475C51C411FF6_OFFSET UNITYSDK_OFFSET(0x110D03C0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_A65A67AD4D06DB66_OFFSET UNITYSDK_OFFSET(0x110D50C0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_ABC8B40DCA6A186F_OFFSET UNITYSDK_OFFSET(0x110D2170)
#define CLASS_1_5B228A4605C15E47_METHOD_1_AE0DBCD5BCD90B1A_OFFSET UNITYSDK_OFFSET(0x110D04B0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_B33A9ADC200A387A_OFFSET UNITYSDK_OFFSET(0x110CFFF0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_B39416EBE5B2947C_OFFSET UNITYSDK_OFFSET(0x110D10A0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_BEFDA8A30C656893_OFFSET UNITYSDK_OFFSET(0x110D4AD0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_C9D9053F8B86A848_OFFSET UNITYSDK_OFFSET(0x110CC1D0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x110D0590)
#define CLASS_1_5B228A4605C15E47_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x110D4610)
#define CLASS_1_5B228A4605C15E47_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x110CE460)
#define CLASS_1_5B228A4605C15E47_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x110CC0E0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_D11981A7B23B56ED_OFFSET UNITYSDK_OFFSET(0x110D4150)
#define CLASS_1_5B228A4605C15E47_METHOD_1_D489F3D943173A56_OFFSET UNITYSDK_OFFSET(0x110D6AF0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_D4E1804C25B5032C_OFFSET UNITYSDK_OFFSET(0x110D1AD0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_D55AF99D88788B5F_OFFSET UNITYSDK_OFFSET(0x110D2FF0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_D89E9B7A3325AE84_OFFSET UNITYSDK_OFFSET(0x110D3280)
#define CLASS_1_5B228A4605C15E47_METHOD_1_DCDCD984F3A05F38_OFFSET UNITYSDK_OFFSET(0x110D0D00)
#define CLASS_1_5B228A4605C15E47_METHOD_1_DF73DC25C3D9547E_OFFSET UNITYSDK_OFFSET(0x110D0EF0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_E0C326C84781CF4C_OFFSET UNITYSDK_OFFSET(0x110CD780)
#define CLASS_1_5B228A4605C15E47_METHOD_1_E0C8A556B1402FB2_OFFSET UNITYSDK_OFFSET(0x110CE4B0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_E38EEC5A37671AAD_OFFSET UNITYSDK_OFFSET(0x110CC740)
#define CLASS_1_5B228A4605C15E47_METHOD_1_E72614EA19F75F2F_OFFSET UNITYSDK_OFFSET(0x110CFD90)
#define CLASS_1_5B228A4605C15E47_METHOD_1_E8E28689B89F5CAB_OFFSET UNITYSDK_OFFSET(0x110CE600)
#define CLASS_1_5B228A4605C15E47_METHOD_1_E8EDA2B6D6F6D326_OFFSET UNITYSDK_OFFSET(0x110CEEB0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_EA56FF49F701790D_OFFSET UNITYSDK_OFFSET(0x110CD460)
#define CLASS_1_5B228A4605C15E47_METHOD_1_EC010C7F2D957A68_OFFSET UNITYSDK_OFFSET(0x110D4D70)
#define CLASS_1_5B228A4605C15E47_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x110D2220)
#define CLASS_1_5B228A4605C15E47_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x110D22A0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x110CFCD0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x110D17D0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x110CFCE0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_FA36319A46D72876_OFFSET UNITYSDK_OFFSET(0x110D4670)
#define CLASS_1_5B228A4605C15E47_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x110D21E0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_FEF999131EAD8C08_OFFSET UNITYSDK_OFFSET(0x110D25C0)
#define CLASS_1_5B228A4605C15E47_QUADTREEOP_OFFSET UNITYSDK_OFFSET(0x110CF5B0)
#define CLASS_1_5B228A4605C15E47_REMOVEFROMAOI_OFFSET UNITYSDK_OFFSET(0x110CF7A0)
#define CLASS_1_5B228A4605C15E47_SET_CANLOADSTREAMINGRESOURCE_OFFSET UNITYSDK_OFFSET(0x110D0580)
#define CLASS_1_5B228A4605C15E47_SET_ISFOCUS_OFFSET UNITYSDK_OFFSET(0x110D5A40)
#define CLASS_1_5B228A4605C15E47_SET_ISPERSISTENTLOADED_OFFSET UNITYSDK_OFFSET(0x110D2210)
#define CLASS_1_5B228A4605C15E47_SET_JOBDATASTREAMING_OFFSET UNITYSDK_OFFSET(0x110CDB50)
#define CLASS_1_5B228A4605C15E47_SET_LAYERSOURCEEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x110D2240)
#define CLASS_1_5B228A4605C15E47_TOHLOD_OFFSET UNITYSDK_OFFSET(0x110D1520)
#define CLASS_1_5B228A4605C15E47__CCTOR_OFFSET UNITYSDK_OFFSET(0x110D6B60)
#define CLASS_1_5B228A4605C15E47__CTOR_OFFSET UNITYSDK_OFFSET(0x110CDBD0)
#define CLASS_1_5B228A4605C15E47__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x110D2B40)
#define CLASS_1_5B228A4605C15E47__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0x110CD560)
#define CLASS_1_5B228A4605C15E47__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x110D2BB0)

inline static constexpr unsigned int Class_1_5B228A4605C15E47_TypeDefinitionIndex = 60521;

class Class_1_5B228A4605C15E47 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_58()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B228A4605C15E47_TypeDefinitionIndex)->GetStaticField(0x451B0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_40()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B228A4605C15E47_TypeDefinitionIndex)->GetStaticField(0x451B8);
	}
	static ::System::String** StaticGet_Field_1_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B228A4605C15E47_TypeDefinitionIndex)->GetStaticField(0x451C0);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B228A4605C15E47_TypeDefinitionIndex)->GetStaticField(0x11DB0);
	}
	::Class_1_303D5A33D1401D59* Field_1_15; // 0x10
	::System::Collections::Generic::List_1<::System::Action*>* Field_1_39; // 0x18
	::System::Collections::Concurrent::ConcurrentQueue_1<::Class_1_8A6989C352B0F0F0*>* Field_1_42; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_28; // 0x28
	::System::Action_1<::Class_1_8A6989C352B0F0F0*>* Field_1_30; // 0x30
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_25; // 0x38
	::System::Collections::Concurrent::ConcurrentQueue_1<::System::Tuple_2<::Class_1_8A6989C352B0F0F0*, ::System::Int32>*>* Field_1_44; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* Field_1_32; // 0x48
	::System::Action_2<::Class_1_8A6989C352B0F0F0*, ::System::Boolean>* Field_1_31; // 0x50
	::Class_1_339067D9E32FBBB4* Field_1_2; // 0x58
	::System::Collections::Generic::HashSet_1<::Class_1_8A6989C352B0F0F0*>* Field_1_59; // 0x60
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_54; // 0x68
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_57; // 0x70
	::Class_1_56FF45D7B2C55655* Field_1_14; // 0x78
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_43; // 0x80
	::Class_1_43BD383C98B4C0C5_164* Field_1_3; // 0x88
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_51; // 0x90
	::System::Collections::Generic::List_1<::Class_1_8A6989C352B0F0F0*>* Field_1_5; // 0x98
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>*>* Field_1_45; // 0xA0
	::Class_1_F35AF634CCD4DC45* Field_1_16; // 0xA8
	::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_26; // 0xB0
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_52; // 0xB8
	::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_29; // 0xC0
	::System::Collections::Generic::List_1<::Class_1_8A6989C352B0F0F0*>* Field_1_60; // 0xC8
	::System::Collections::Concurrent::ConcurrentDictionary_2<::Class_1_8A6989C352B0F0F0*, ::System::Int32>* Field_1_41; // 0xD0
	::RPG::Client::OpenWorld::StreamingLayerDetail* Field_1_11; // 0xD8
	::UnityEngine::GameObject* Field_1_19; // 0xE0
	::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* Field_1_24; // 0xE8
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_4; // 0xF0
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0xF8
	::System::Int32 _LayerSourceEffectType_k__BackingField; // 0x100
	::System::Boolean Field_1_18; // 0x104
	::System::Boolean Field_1_36; // 0x105
	::System::Boolean Field_1_34; // 0x106
	::System::Boolean _IsPersistentLoaded_k__BackingField; // 0x107
	::UnityEngine::Rect Field_1_33; // 0x108
	::System::Boolean Field_1_35; // 0x118
	::System::Boolean Field_1_38; // 0x119
	::System::Boolean Field_1_48; // 0x11A
	::System::Boolean Field_1_17; // 0x11B
	::System::Int32 Field_1_55; // 0x11C
	::UnityEngine::Vector3 Field_1_21; // 0x120
	::System::Single Field_1_22; // 0x12C
	::System::Single Field_1_23; // 0x130
	::System::Single Field_1_13; // 0x134
	::System::Boolean _CanLoadStreamingResource_k__BackingField; // 0x138
	::System::Boolean Field_1_50; // 0x139
	::System::Boolean Field_1_37; // 0x13A
	::System::Boolean _IsFocus_k__BackingField; // 0x13B
	::UnityEngine::Vector3 Field_1_20; // 0x13C
	::System::Single Field_1_12; // 0x148
	::System::Boolean Field_1_46; // 0x14C
	::System::Boolean Field_1_56; // 0x14D
	::System::Boolean Field_1_47; // 0x14E
	::System::Boolean Field_1_49; // 0x14F
	::System::Int32 Field_1_27; // 0x150
	::Struct_2_8BE3C66A8F21F652 _JobDataStreaming_k__BackingField; // 0x154

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_56FF45D7B2C55655* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_56FF45D7B2C55655*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47__CCTOR_OFFSET))();
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_C9D9053F8B86A848(::System::Collections::Generic::List_1<::Class_1_5B228A4605C15E47_Struct_2_823833D588E72957>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5B228A4605C15E47_Struct_2_823833D588E72957>*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_C9D9053F8B86A848_OFFSET))(this, a1);
	}

	::System::Void Method_1_05968E5CCAD303A5(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_05968E5CCAD303A5_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Boolean Method_1_E38EEC5A37671AAD(::Class_0_16E4307DCC419505_811* a1, ::System::Boolean a2, ::Class_1_3F28033F34305C46* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_811*, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_E38EEC5A37671AAD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7D8635EB900C4D09(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_7D8635EB900C4D09_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_1A90B7D81C1D0EB0(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_1A90B7D81C1D0EB0_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_2E3D208EC479E1B5(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::Class_1_8A6989C352B0F0F0* a4, ::RPG::Client::OpenWorld::StreamingItemData* a5, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*> a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::Class_1_8A6989C352B0F0F0*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_2E3D208EC479E1B5_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_EA56FF49F701790D(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2, ::System::Single a3, ::Class_1_3F28033F34305C46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_EA56FF49F701790D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _SolveInstanceLodCalc(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::Class_1_8A6989C352B0F0F0* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47__SOLVEINSTANCELODCALC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_E0C326C84781CF4C(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2, ::System::Single a3, ::Class_1_3F28033F34305C46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_E0C326C84781CF4C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_6CB5060D47BF8A1B(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_6CB5060D47BF8A1B_OFFSET))(this, a1, a2);
	}

	::Struct_2_8BE3C66A8F21F652 get_JobDataStreaming()
	{
		return ((::Struct_2_8BE3C66A8F21F652(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_GET_JOBDATASTREAMING_OFFSET))(this);
	}

	::System::Void set_JobDataStreaming(::Struct_2_8BE3C66A8F21F652 value)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_8BE3C66A8F21F652))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_SET_JOBDATASTREAMING_OFFSET))(this, value);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_3F3693110F25FD62(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_3F3693110F25FD62_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_E0C8A556B1402FB2(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_E0C8A556B1402FB2_OFFSET))(this, a1);
	}

	::System::Void Method_1_E8E28689B89F5CAB(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_E8E28689B89F5CAB_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C409DF5E54C7553()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_4C409DF5E54C7553_OFFSET))(this);
	}

	::System::Boolean Method_1_387EA1BE4F9FC1D2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_387EA1BE4F9FC1D2_OFFSET))(this);
	}

	::System::Single Method_1_E8EDA2B6D6F6D326()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_E8EDA2B6D6F6D326_OFFSET))(this);
	}

	::System::Void Method_1_1C9A89A72D430905(::UnityEngine::Bounds& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_1C9A89A72D430905_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void QuadTreeOp(::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_QUADTREEOP_OFFSET))(this, a1);
	}

	::System::Void InsertToAOI(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_INSERTTOAOI_OFFSET))(this, a1);
	}

	::System::Void RemoveFromAOI(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_REMOVEFROMAOI_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C5371C54FF722B4(::System::Action_2<::Class_1_8A6989C352B0F0F0*, ::System::Object*>* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_8A6989C352B0F0F0*, ::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_4C5371C54FF722B4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_59E2538CF2D1A0AC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_59E2538CF2D1A0AC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Boolean Method_1_115AC51E73D999C8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_115AC51E73D999C8_OFFSET))(this);
	}

	::System::Void Method_1_E72614EA19F75F2F(::RPG::GameCore::StagePrefabInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StagePrefabInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_E72614EA19F75F2F_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_1_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Void Method_1_B33A9ADC200A387A(::RPG::GameCore::StagePrefabInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StagePrefabInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_B33A9ADC200A387A_OFFSET))(this, a1);
	}

	::System::Void Method_1_695579C6786804DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_695579C6786804DA_OFFSET))(this);
	}

	::System::Void Method_1_6EB41FA6FC12E24C(::UnityEngine::GameObject* a1, ::RPG::GameCore::BlockNodeConfig* a2, ::RPG::GameCore::EnvironmentDataInfo* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::EnvironmentDataInfo*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_6EB41FA6FC12E24C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_6EB41FA6FC12E24C_1(::UnityEngine::GameObject* a1, ::RPG::GameCore::BlockNodeConfig* a2, ::RPG::GameCore::EnvironmentDataInfo* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::EnvironmentDataInfo*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_6EB41FA6FC12E24C_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::GameObject* Method_1_A64475C51C411FF6(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_A64475C51C411FF6_OFFSET))(this, a1);
	}

	::Class_1_8A6989C352B0F0F0* Method_1_AE0DBCD5BCD90B1A(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_AE0DBCD5BCD90B1A_OFFSET))(this, a1);
	}

	::System::Boolean get_CanLoadStreamingResource()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_GET_CANLOADSTREAMINGRESOURCE_OFFSET))(this);
	}

	::System::Void set_CanLoadStreamingResource(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_SET_CANLOADSTREAMINGRESOURCE_OFFSET))(this, value);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_255811211D98CDCE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_255811211D98CDCE_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF73DC25C3D9547E(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_DF73DC25C3D9547E_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_DISPOSE_OFFSET))(this);
	}

	::System::Void ToHLOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_TOHLOD_OFFSET))(this);
	}

	::System::Void LeaveOutVision()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_LEAVEOUTVISION_OFFSET))(this);
	}

	::System::Void Method_1_3F3693110F25FD62_1(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_3F3693110F25FD62_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Int32 Method_1_D4E1804C25B5032C(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_D4E1804C25B5032C_OFFSET))(this, a1);
	}

	::System::Void CheckStreaming(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_CHECKSTREAMING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_7E8FD15DE9AB685F(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_7E8FD15DE9AB685F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void CheckStreamingLod(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_CHECKSTREAMINGLOD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_4EFC8421DB9059A5(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_4EFC8421DB9059A5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_90EBA8A351308A02(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_90EBA8A351308A02_OFFSET))(this, a1);
	}

	::System::Void Method_1_ABC8B40DCA6A186F(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_ABC8B40DCA6A186F_OFFSET))(this, a1);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_F0E307B84478A272_1_OFFSET))(this);
	}

	::System::Boolean get_IsPersistentLoaded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_GET_ISPERSISTENTLOADED_OFFSET))(this);
	}

	::System::Void set_IsPersistentLoaded(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_SET_ISPERSISTENTLOADED_OFFSET))(this, value);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Int32 get_LayerSourceEffectType()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_GET_LAYERSOURCEEFFECTTYPE_OFFSET))(this);
	}

	::System::Void set_LayerSourceEffectType(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_SET_LAYERSOURCEEFFECTTYPE_OFFSET))(this, value);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	static ::System::Boolean Method_1_64F0C85A431FBD69()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_64F0C85A431FBD69_OFFSET))();
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::Class_1_8A6989C352B0F0F0* Method_1_56750A0C1A6E4594(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_56750A0C1A6E4594_OFFSET))(this, a1);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FEF999131EAD8C08(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_FEF999131EAD8C08_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterInstanceToCullingSystem(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET))(this, a1);
	}

	::System::Void _UnRegisterInstanceFromCullingSystem(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_02A67ACF3BCC3ADE(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_02A67ACF3BCC3ADE_OFFSET))(this, a1, a2);
	}

	::System::Boolean InActiveInstance(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_INACTIVEINSTANCE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_D55AF99D88788B5F(::Class_1_8A6989C352B0F0F0* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_D55AF99D88788B5F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D89E9B7A3325AE84(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_D89E9B7A3325AE84_OFFSET))(this, a1);
	}

	::System::Void Method_1_8DCD1FEC09DA5176()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_8DCD1FEC09DA5176_OFFSET))(this);
	}

	::System::Void Method_1_25EC451C0EA68F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_25EC451C0EA68F53_OFFSET))(this);
	}

	::System::Void Method_1_1FE4DD8CBB24E4D9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_1FE4DD8CBB24E4D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_06A2B758FCB8A24E_OFFSET))(this);
	}

	::System::Void Method_1_D11981A7B23B56ED(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2, ::System::Boolean a3, ::RPG::Client::OpenWorld::StreamingItemEnableReason a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemEnableReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_D11981A7B23B56ED_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_FA36319A46D72876(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_FA36319A46D72876_OFFSET))(this, a1);
	}

	::System::Void Method_1_1A4414413DE08994(::RPG::Client::OpenWorld::StreamingItemData* a1, ::Class_1_8A6989C352B0F0F0* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_1A4414413DE08994_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BEFDA8A30C656893(::Class_1_3F28033F34305C46* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_BEFDA8A30C656893_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EC010C7F2D957A68(::RPG::Client::OpenWorld::StreamingItemData* a1, ::Class_1_8A6989C352B0F0F0* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_EC010C7F2D957A68_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_1DE63FE11FA0D5B4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_1DE63FE11FA0D5B4_OFFSET))(this);
	}

	::System::Void Method_1_86DA6A9C666CF918(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_86DA6A9C666CF918_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4F5257BBEC1FBFED(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_4F5257BBEC1FBFED_OFFSET))(this, a1);
	}

	::System::Void Method_1_A65A67AD4D06DB66(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_A65A67AD4D06DB66_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_62AA24C6BF34AC04(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_62AA24C6BF34AC04_OFFSET))(this, a1);
	}

	::System::Void Method_1_03C56FBEC5C889AC(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_03C56FBEC5C889AC_OFFSET))(this, a1);
	}

	::System::Void Method_1_4F5257BBEC1FBFED_1(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_4F5257BBEC1FBFED_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Boolean Method_1_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_42C5BADE1C9EFC80_OFFSET))(this);
	}

	::System::Boolean get_IsFocus()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_GET_ISFOCUS_OFFSET))(this);
	}

	::System::Void set_IsFocus(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_SET_ISFOCUS_OFFSET))(this, value);
	}

	::System::Int32 GetItemLodLevel(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::RPG::Client::OpenWorld::StreamingItemData* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_GETITEMLODLEVEL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::RPG::Client::OpenWorld::StreamingLayerDetail* Method_1_35DD5E9922E078B2()
	{
		return ((::RPG::Client::OpenWorld::StreamingLayerDetail*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_35DD5E9922E078B2_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::RPG::GameCore::StreamingLayerType Method_1_9617F67032BC6735()
	{
		return ((::RPG::GameCore::StreamingLayerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_9617F67032BC6735_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_3E7178C5ECF017DB_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_9AA4014B2568687E(::Class_1_DE4C6B309308A230* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_9AA4014B2568687E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Collections::Pooled::PooledList_1<::RPG::Client::OpenWorld::StreamingItemData*>* Method_1_7CCF26DCE6CE0D45(::RPG::Client::OpenWorld::Volume* a1, ::System::Boolean a2)
	{
		return ((::Collections::Pooled::PooledList_1<::RPG::Client::OpenWorld::StreamingItemData*>*(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_7CCF26DCE6CE0D45_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3DF018E49E922C69(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_3DF018E49E922C69_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_822031E522673D19(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_822031E522673D19_OFFSET))(this, a1);
	}

	::System::Void Method_1_B39416EBE5B2947C(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_B39416EBE5B2947C_OFFSET))(this, a1);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_1_DCDCD984F3A05F38(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_DCDCD984F3A05F38_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5A6EDA618381B719(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_5A6EDA618381B719_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_336BBA1F27BAEEE0(::System::Int32& a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_336BBA1F27BAEEE0_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_1_D489F3D943173A56(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_D489F3D943173A56_OFFSET))(this, a1);
	}
};
