#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B228A4605C15E47_Struct_2_823833D588E72957.h"
#include "unitysdk/Class_1_D4E2A0605A71F3AC_FadingDoneActionType.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemEnableReason.h"
#include "unitysdk/RPG/GameCore/StreamingLayerType.h"
#include "unitysdk/Struct_2_1A7849E5CC498A4A.h"
#include "unitysdk/Struct_2_44EF3BC6A9A1AE8B.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_968;
class Class_1_2C80CAFD2F9A4580;
class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_43BD383C98B4C0C5_177;
class Class_1_59159C17DAD8DBF2;
class Class_1_64EA8B4AB59D91C7_3;
class Class_1_8A6989C352B0F0F0;
class Class_1_D70A30D666F20D90;
class Class_1_DE4C6B309308A230;
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace RPG::Client::OpenWorld { class Volume; }
namespace RPG::Client::OpenWorld { template <typename T> class AOIBase_1; }
namespace RPG::GameCore { class BlockNodeConfig; }
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

#define CLASS_1_5B228A4605C15E47_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0x138A20F0)
#define CLASS_1_5B228A4605C15E47_CHECKSTREAMING_OFFSET UNITYSDK_OFFSET(0x138A1CD0)
#define CLASS_1_5B228A4605C15E47_DISPOSE_OFFSET UNITYSDK_OFFSET(0x138A12B0)
#define CLASS_1_5B228A4605C15E47_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0x138A6300)
#define CLASS_1_5B228A4605C15E47_GET_CANLOADSTREAMINGRESOURCE_OFFSET UNITYSDK_OFFSET(0x138A0370)
#define CLASS_1_5B228A4605C15E47_GET_ISFOCUS_OFFSET UNITYSDK_OFFSET(0x138A62E0)
#define CLASS_1_5B228A4605C15E47_GET_ISPERSISTENTLOADED_OFFSET UNITYSDK_OFFSET(0x138A23F0)
#define CLASS_1_5B228A4605C15E47_GET_JOBDATASTREAMING_OFFSET UNITYSDK_OFFSET(0x1389CF30)
#define CLASS_1_5B228A4605C15E47_GET_LAYERSOURCEEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x138A2420)
#define CLASS_1_5B228A4605C15E47_INACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x138A3030)
#define CLASS_1_5B228A4605C15E47_INSERTTOAOI_OFFSET UNITYSDK_OFFSET(0x1389EE70)
#define CLASS_1_5B228A4605C15E47_LEAVEOUTVISION_OFFSET UNITYSDK_OFFSET(0x138A1A50)
#define CLASS_1_5B228A4605C15E47_METHOD_1_02A67ACF3BCC3ADE_OFFSET UNITYSDK_OFFSET(0x138A2F10)
#define CLASS_1_5B228A4605C15E47_METHOD_1_03C56FBEC5C889AC_OFFSET UNITYSDK_OFFSET(0x138A5D20)
#define CLASS_1_5B228A4605C15E47_METHOD_1_062A9599410488BC_OFFSET UNITYSDK_OFFSET(0x1389B0D0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x138A5F60)
#define CLASS_1_5B228A4605C15E47_METHOD_1_115AC51E73D999C8_OFFSET UNITYSDK_OFFSET(0x1389F5B0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_1714B418CA91FC40_OFFSET UNITYSDK_OFFSET(0x1389CB10)
#define CLASS_1_5B228A4605C15E47_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x138A6280)
#define CLASS_1_5B228A4605C15E47_METHOD_1_197F779C2F2CC955_OFFSET UNITYSDK_OFFSET(0x1389B810)
#define CLASS_1_5B228A4605C15E47_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1389CF70)
#define CLASS_1_5B228A4605C15E47_METHOD_1_1DDD10252C795DC3_OFFSET UNITYSDK_OFFSET(0x1389FF30)
#define CLASS_1_5B228A4605C15E47_METHOD_1_1DE63FE11FA0D5B4_OFFSET UNITYSDK_OFFSET(0x138A4750)
#define CLASS_1_5B228A4605C15E47_METHOD_1_29478762F82FF9B7_OFFSET UNITYSDK_OFFSET(0x138A4D90)
#define CLASS_1_5B228A4605C15E47_METHOD_1_2AE4ABF8E722E879_OFFSET UNITYSDK_OFFSET(0x138A6DE0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_2E3D208EC479E1B5_OFFSET UNITYSDK_OFFSET(0x1389C160)
#define CLASS_1_5B228A4605C15E47_METHOD_1_35DD5E9922E078B2_OFFSET UNITYSDK_OFFSET(0x138A6510)
#define CLASS_1_5B228A4605C15E47_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x1389B790)
#define CLASS_1_5B228A4605C15E47_METHOD_1_3BD0063BA87EE097_OFFSET UNITYSDK_OFFSET(0x138A69D0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_3DF018E49E922C69_OFFSET UNITYSDK_OFFSET(0x138A0FC0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x138A6610)
#define CLASS_1_5B228A4605C15E47_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1389F1D0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_3F3693110F25FD62_1_OFFSET UNITYSDK_OFFSET(0x138A1A90)
#define CLASS_1_5B228A4605C15E47_METHOD_1_3F3693110F25FD62_OFFSET UNITYSDK_OFFSET(0x1389D990)
#define CLASS_1_5B228A4605C15E47_METHOD_1_3F8DC0E62FBF27F8_OFFSET UNITYSDK_OFFSET(0x1389F220)
#define CLASS_1_5B228A4605C15E47_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x138A1BB0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_436FDCFD41F45B28_OFFSET UNITYSDK_OFFSET(0x138A56B0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_4A958D3D056F27B7_1_OFFSET UNITYSDK_OFFSET(0x1389FB80)
#define CLASS_1_5B228A4605C15E47_METHOD_1_4A958D3D056F27B7_OFFSET UNITYSDK_OFFSET(0x1389F640)
#define CLASS_1_5B228A4605C15E47_METHOD_1_4AA735042BE800BC_OFFSET UNITYSDK_OFFSET(0x1389E900)
#define CLASS_1_5B228A4605C15E47_METHOD_1_4EFC8421DB9059A5_OFFSET UNITYSDK_OFFSET(0x138A21F0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x138A2830)
#define CLASS_1_5B228A4605C15E47_METHOD_1_536B30E7E71E5EF4_OFFSET UNITYSDK_OFFSET(0x1389F040)
#define CLASS_1_5B228A4605C15E47_METHOD_1_5588C8629ED4FC07_OFFSET UNITYSDK_OFFSET(0x138A5580)
#define CLASS_1_5B228A4605C15E47_METHOD_1_56750A0C1A6E4594_OFFSET UNITYSDK_OFFSET(0x138A24B0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_624BC2F282F686CA_OFFSET UNITYSDK_OFFSET(0x138A7560)
#define CLASS_1_5B228A4605C15E47_METHOD_1_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x1389FAF0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x138A48C0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_646976985B256B3F_OFFSET UNITYSDK_OFFSET(0x138A6D40)
#define CLASS_1_5B228A4605C15E47_METHOD_1_64F0C85A431FBD69_OFFSET UNITYSDK_OFFSET(0x138A1970)
#define CLASS_1_5B228A4605C15E47_METHOD_1_6B8FDB6259F05406_1_OFFSET UNITYSDK_OFFSET(0x138A5AD0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_6B8FDB6259F05406_OFFSET UNITYSDK_OFFSET(0x138A4B40)
#define CLASS_1_5B228A4605C15E47_METHOD_1_6BF0B1C95F527C3E_OFFSET UNITYSDK_OFFSET(0x138A37E0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_6CB5060D47BF8A1B_OFFSET UNITYSDK_OFFSET(0x1389CEA0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_70C2008241473E27_1_OFFSET UNITYSDK_OFFSET(0x138A0160)
#define CLASS_1_5B228A4605C15E47_METHOD_1_70C2008241473E27_OFFSET UNITYSDK_OFFSET(0x138A00F0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_70E4F26A47681690_OFFSET UNITYSDK_OFFSET(0x138A3CA0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_7B8DE525284B832E_OFFSET UNITYSDK_OFFSET(0x138A5890)
#define CLASS_1_5B228A4605C15E47_METHOD_1_7C180E235D7E2393_OFFSET UNITYSDK_OFFSET(0x138A0E80)
#define CLASS_1_5B228A4605C15E47_METHOD_1_7D8635EB900C4D09_OFFSET UNITYSDK_OFFSET(0x1389BBB0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_7E8FD15DE9AB685F_OFFSET UNITYSDK_OFFSET(0x138A1F20)
#define CLASS_1_5B228A4605C15E47_METHOD_1_883B9FEB5E02AA26_OFFSET UNITYSDK_OFFSET(0x1389DCE0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x138A6560)
#define CLASS_1_5B228A4605C15E47_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1389EC70)
#define CLASS_1_5B228A4605C15E47_METHOD_1_8AAB30C4D21495CE_OFFSET UNITYSDK_OFFSET(0x1389BCA0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_940918FEDA1F3064_OFFSET UNITYSDK_OFFSET(0x138A1040)
#define CLASS_1_5B228A4605C15E47_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x138A2440)
#define CLASS_1_5B228A4605C15E47_METHOD_1_9617F67032BC6735_OFFSET UNITYSDK_OFFSET(0x138A65C0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x1389C3D0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_98A5C95726AE861C_OFFSET UNITYSDK_OFFSET(0x138A6FB0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_9AA4014B2568687E_OFFSET UNITYSDK_OFFSET(0x138A6660)
#define CLASS_1_5B228A4605C15E47_METHOD_1_A56385E6706FA723_OFFSET UNITYSDK_OFFSET(0x138A39E0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_A59F33F8CA7F3A80_OFFSET UNITYSDK_OFFSET(0x138A0AD0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_A61A196E6AD5766D_OFFSET UNITYSDK_OFFSET(0x138A4220)
#define CLASS_1_5B228A4605C15E47_METHOD_1_A64475C51C411FF6_OFFSET UNITYSDK_OFFSET(0x138A01D0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_AA0BEF07BACF1D90_OFFSET UNITYSDK_OFFSET(0x1389E030)
#define CLASS_1_5B228A4605C15E47_METHOD_1_AAE1A549353A763B_OFFSET UNITYSDK_OFFSET(0x138A03E0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_ABC8B40DCA6A186F_OFFSET UNITYSDK_OFFSET(0x138A2360)
#define CLASS_1_5B228A4605C15E47_METHOD_1_AE0DBCD5BCD90B1A_OFFSET UNITYSDK_OFFSET(0x138A02B0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_B37C805F1A4DBCFB_OFFSET UNITYSDK_OFFSET(0x138A0C10)
#define CLASS_1_5B228A4605C15E47_METHOD_1_BEFDA8A30C656893_OFFSET UNITYSDK_OFFSET(0x138A5010)
#define CLASS_1_5B228A4605C15E47_METHOD_1_C53E4338A57E6194_OFFSET UNITYSDK_OFFSET(0x138A22A0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x138A0390)
#define CLASS_1_5B228A4605C15E47_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x138A4A30)
#define CLASS_1_5B228A4605C15E47_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1389DA90)
#define CLASS_1_5B228A4605C15E47_METHOD_1_D11981A7B23B56ED_OFFSET UNITYSDK_OFFSET(0x138A4450)
#define CLASS_1_5B228A4605C15E47_METHOD_1_D489F3D943173A56_OFFSET UNITYSDK_OFFSET(0x138A78A0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_D4E1804C25B5032C_OFFSET UNITYSDK_OFFSET(0x138A1C80)
#define CLASS_1_5B228A4605C15E47_METHOD_1_D55AF99D88788B5F_OFFSET UNITYSDK_OFFSET(0x138A32C0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_D89E9B7A3325AE84_OFFSET UNITYSDK_OFFSET(0x138A3560)
#define CLASS_1_5B228A4605C15E47_METHOD_1_E0C8A556B1402FB2_OFFSET UNITYSDK_OFFSET(0x1389DAE0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_E1EDFF40BA138CA6_OFFSET UNITYSDK_OFFSET(0x1389B350)
#define CLASS_1_5B228A4605C15E47_METHOD_1_E359211180D681E8_OFFSET UNITYSDK_OFFSET(0x1389E4D0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_E8E28689B89F5CAB_OFFSET UNITYSDK_OFFSET(0x1389DC30)
#define CLASS_1_5B228A4605C15E47_METHOD_1_EA56FF49F701790D_OFFSET UNITYSDK_OFFSET(0x1389C7E0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_EC010C7F2D957A68_OFFSET UNITYSDK_OFFSET(0x138A5310)
#define CLASS_1_5B228A4605C15E47_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x1389C760)
#define CLASS_1_5B228A4605C15E47_METHOD_1_EF17FAB3022DE07B_OFFSET UNITYSDK_OFFSET(0x1389AFB0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x138A2410)
#define CLASS_1_5B228A4605C15E47_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x138A24A0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1389F580)
#define CLASS_1_5B228A4605C15E47_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x138A1950)
#define CLASS_1_5B228A4605C15E47_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1389F590)
#define CLASS_1_5B228A4605C15E47_METHOD_1_FA36319A46D72876_OFFSET UNITYSDK_OFFSET(0x138A4A90)
#define CLASS_1_5B228A4605C15E47_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x138A23D0)
#define CLASS_1_5B228A4605C15E47_METHOD_1_FC0CDA8B3330EAFC_OFFSET UNITYSDK_OFFSET(0x138A6710)
#define CLASS_1_5B228A4605C15E47_METHOD_1_FEF999131EAD8C08_OFFSET UNITYSDK_OFFSET(0x138A28D0)
#define CLASS_1_5B228A4605C15E47_QUADTREEOP_OFFSET UNITYSDK_OFFSET(0x1389ED30)
#define CLASS_1_5B228A4605C15E47_REMOVEFROMAOI_OFFSET UNITYSDK_OFFSET(0x1389EF50)
#define CLASS_1_5B228A4605C15E47_SET_CANLOADSTREAMINGRESOURCE_OFFSET UNITYSDK_OFFSET(0x138A0380)
#define CLASS_1_5B228A4605C15E47_SET_ISFOCUS_OFFSET UNITYSDK_OFFSET(0x138A62F0)
#define CLASS_1_5B228A4605C15E47_SET_ISPERSISTENTLOADED_OFFSET UNITYSDK_OFFSET(0x138A2400)
#define CLASS_1_5B228A4605C15E47_SET_JOBDATASTREAMING_OFFSET UNITYSDK_OFFSET(0x1389CF50)
#define CLASS_1_5B228A4605C15E47_SET_LAYERSOURCEEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x138A2430)
#define CLASS_1_5B228A4605C15E47_TOHLOD_OFFSET UNITYSDK_OFFSET(0x138A1680)
#define CLASS_1_5B228A4605C15E47__CCTOR_OFFSET UNITYSDK_OFFSET(0x138A7910)
#define CLASS_1_5B228A4605C15E47__CTOR_OFFSET UNITYSDK_OFFSET(0x1389CFD0)
#define CLASS_1_5B228A4605C15E47__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x138A2E30)
#define CLASS_1_5B228A4605C15E47__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0x1389C8F0)
#define CLASS_1_5B228A4605C15E47__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x138A2EA0)

inline static constexpr unsigned int Class_1_5B228A4605C15E47_TypeDefinitionIndex = 68915;

class Class_1_5B228A4605C15E47 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_0()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B228A4605C15E47_TypeDefinitionIndex)->GetStaticField(0x61F80);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B228A4605C15E47_TypeDefinitionIndex)->GetStaticField(0x61F88);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_2()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B228A4605C15E47_TypeDefinitionIndex)->GetStaticField(0x61F90);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B228A4605C15E47_TypeDefinitionIndex)->GetStaticField(0x132A0);
	}
	::System::Action_1<::Class_1_8A6989C352B0F0F0*>* Field_1_4; // 0x10
	::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_5; // 0x18
	::System::Collections::Concurrent::ConcurrentQueue_1<::Class_1_8A6989C352B0F0F0*>* Field_1_6; // 0x20
	::Class_1_43BD383C98B4C0C5_177* Field_1_7; // 0x28
	::Class_1_59159C17DAD8DBF2* Field_1_8; // 0x30
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_9; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* Field_1_10; // 0x40
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_11; // 0x48
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_12; // 0x50
	::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_13; // 0x58
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_14; // 0x60
	::System::Collections::Concurrent::ConcurrentDictionary_2<::Class_1_8A6989C352B0F0F0*, ::System::Int32>* Field_1_15; // 0x68
	::Class_1_2C80CAFD2F9A4580* Field_1_16; // 0x70
	::System::Collections::Generic::HashSet_1<::Class_1_8A6989C352B0F0F0*>* Field_1_17; // 0x78
	::System::Action_2<::Class_1_8A6989C352B0F0F0*, ::System::Boolean>* Field_1_18; // 0x80
	::System::Collections::Generic::List_1<::Class_1_8A6989C352B0F0F0*>* Field_1_19; // 0x88
	::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* Field_1_20; // 0x90
	::Class_1_D70A30D666F20D90* Field_1_21; // 0x98
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>*>* Field_1_22; // 0xA0
	::Class_1_303D5A33D1401D59* Field_1_23; // 0xA8
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_24; // 0xB0
	::RPG::Client::OpenWorld::StreamingLayerDetail* Field_1_25; // 0xB8
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_26; // 0xC0
	::System::Collections::Generic::List_1<::System::Action*>* Field_1_27; // 0xC8
	::System::Collections::Generic::HashSet_1<::Class_1_8A6989C352B0F0F0*>* Field_1_28; // 0xD0
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_29; // 0xD8
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_30; // 0xE0
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_31; // 0xE8
	::UnityEngine::GameObject* Field_1_32; // 0xF0
	::System::Collections::Generic::List_1<::Class_1_8A6989C352B0F0F0*>* Field_1_33; // 0xF8
	::System::Collections::Concurrent::ConcurrentQueue_1<::System::Tuple_2<::Class_1_8A6989C352B0F0F0*, ::System::Int32>*>* Field_1_34; // 0x100
	::UnityEngine::Rect Field_1_35; // 0x108
	::System::Boolean Field_1_36; // 0x118
	::System::Boolean Field_1_37; // 0x119
	::System::Boolean _CanLoadStreamingResource_k__BackingField; // 0x11A
	::System::Boolean Field_1_39; // 0x11B
	::System::Single Field_1_40; // 0x11C
	::System::Boolean _IsPersistentLoaded_k__BackingField; // 0x120
	::System::Boolean Field_1_42; // 0x121
	::System::Boolean Field_1_43; // 0x122
	::System::Boolean Field_1_44; // 0x123
	::System::Int32 _LayerSourceEffectType_k__BackingField; // 0x124
	::System::Int32 Field_1_46; // 0x128
	::System::Single Field_1_47; // 0x12C
	::UnityEngine::Vector3 Field_1_48; // 0x130
	::UnityEngine::Vector3 Field_1_49; // 0x13C
	::Struct_2_44EF3BC6A9A1AE8B _JobDataStreaming_k__BackingField; // 0x148
	::System::Single Field_1_51; // 0x15C
	::System::Boolean Field_1_52; // 0x160
	::System::Boolean Field_1_53; // 0x161
	::System::Boolean Field_1_54; // 0x162
	::System::Boolean Field_1_55; // 0x163
	::System::Boolean Field_1_56; // 0x164
	::System::Boolean Field_1_57; // 0x165
	::System::Boolean Field_1_58; // 0x166
	::System::Boolean _IsFocus_k__BackingField; // 0x167
	::System::Int32 Field_1_60; // 0x168
	::System::Single Field_1_61; // 0x16C

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_D70A30D666F20D90* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_D70A30D666F20D90*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47__CCTOR_OFFSET))();
	}

	::System::Void Method_1_EF17FAB3022DE07B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_EF17FAB3022DE07B_OFFSET))(this);
	}

	::System::Void Method_1_062A9599410488BC(::System::Collections::Generic::List_1<::Class_1_5B228A4605C15E47_Struct_2_823833D588E72957>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5B228A4605C15E47_Struct_2_823833D588E72957>*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_062A9599410488BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_E1EDFF40BA138CA6(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_E1EDFF40BA138CA6_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Boolean Method_1_197F779C2F2CC955(::Class_0_16E4307DCC419505_968* a1, ::System::Boolean a2, ::Class_1_3F28033F34305C46* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_968*, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_197F779C2F2CC955_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7D8635EB900C4D09(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_7D8635EB900C4D09_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_8AAB30C4D21495CE(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_8AAB30C4D21495CE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_2E3D208EC479E1B5(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::Class_1_8A6989C352B0F0F0* a4, ::RPG::Client::OpenWorld::StreamingItemData* a5, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*> a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::Class_1_8A6989C352B0F0F0*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_2E3D208EC479E1B5_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_1_EA56FF49F701790D(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2, ::System::Single a3, ::Class_1_3F28033F34305C46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_EA56FF49F701790D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _SolveInstanceLodCalc(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::Class_1_8A6989C352B0F0F0* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47__SOLVEINSTANCELODCALC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_1714B418CA91FC40(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2, ::System::Single a3, ::Class_1_3F28033F34305C46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_1714B418CA91FC40_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_6CB5060D47BF8A1B(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_6CB5060D47BF8A1B_OFFSET))(this, a1, a2);
	}

	::Struct_2_44EF3BC6A9A1AE8B get_JobDataStreaming()
	{
		return ((::Struct_2_44EF3BC6A9A1AE8B(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_GET_JOBDATASTREAMING_OFFSET))(this);
	}

	::System::Void set_JobDataStreaming(::Struct_2_44EF3BC6A9A1AE8B a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_44EF3BC6A9A1AE8B))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_SET_JOBDATASTREAMING_OFFSET))(this, a1);
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

	::System::Void Method_1_883B9FEB5E02AA26()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_883B9FEB5E02AA26_OFFSET))(this);
	}

	::System::Boolean Method_1_AA0BEF07BACF1D90()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_AA0BEF07BACF1D90_OFFSET))(this);
	}

	::System::Single Method_1_E359211180D681E8()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_E359211180D681E8_OFFSET))(this);
	}

	::System::Void Method_1_4AA735042BE800BC(::UnityEngine::Bounds& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_4AA735042BE800BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
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

	::System::Void Method_1_536B30E7E71E5EF4(::System::Action_2<::Class_1_8A6989C352B0F0F0*, ::System::Object*>* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_8A6989C352B0F0F0*, ::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_536B30E7E71E5EF4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_3F8DC0E62FBF27F8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_3F8DC0E62FBF27F8_OFFSET))(this, a1);
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

	::System::Void Method_1_4A958D3D056F27B7(::Struct_2_1A7849E5CC498A4A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_1A7849E5CC498A4A))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_4A958D3D056F27B7_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_1_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Void Method_1_4A958D3D056F27B7_1(::Struct_2_1A7849E5CC498A4A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_1A7849E5CC498A4A))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_4A958D3D056F27B7_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_1DDD10252C795DC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_1DDD10252C795DC3_OFFSET))(this);
	}

	::System::Void Method_1_70C2008241473E27(::UnityEngine::GameObject* a1, ::RPG::GameCore::BlockNodeConfig* a2, ::Class_1_64EA8B4AB59D91C7_3* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::BlockNodeConfig*, ::Class_1_64EA8B4AB59D91C7_3*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_70C2008241473E27_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_70C2008241473E27_1(::UnityEngine::GameObject* a1, ::RPG::GameCore::BlockNodeConfig* a2, ::Class_1_64EA8B4AB59D91C7_3* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::BlockNodeConfig*, ::Class_1_64EA8B4AB59D91C7_3*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_70C2008241473E27_1_OFFSET))(this, a1, a2, a3, a4);
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

	::System::Void set_CanLoadStreamingResource(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_SET_CANLOADSTREAMINGRESOURCE_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_AAE1A549353A763B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_AAE1A549353A763B_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C180E235D7E2393(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_7C180E235D7E2393_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_41A074549EF25F63_OFFSET))(this);
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

	::System::Void Method_1_C53E4338A57E6194(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_C53E4338A57E6194_OFFSET))(this, a1);
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

	::System::Void set_IsPersistentLoaded(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_SET_ISPERSISTENTLOADED_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Int32 get_LayerSourceEffectType()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_GET_LAYERSOURCEEFFECTTYPE_OFFSET))(this);
	}

	::System::Void set_LayerSourceEffectType(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_SET_LAYERSOURCEEFFECTTYPE_OFFSET))(this, a1);
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

	::System::Void Method_1_6BF0B1C95F527C3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_6BF0B1C95F527C3E_OFFSET))(this);
	}

	::System::Void Method_1_A56385E6706FA723()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_A56385E6706FA723_OFFSET))(this);
	}

	::System::Void Method_1_70E4F26A47681690(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_70E4F26A47681690_OFFSET))(this, a1);
	}

	::System::Void Method_1_A61A196E6AD5766D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_A61A196E6AD5766D_OFFSET))(this);
	}

	::System::Void Method_1_D11981A7B23B56ED(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2, ::System::Boolean a3, ::RPG::Client::OpenWorld::StreamingItemEnableReason a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemEnableReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_D11981A7B23B56ED_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_FA36319A46D72876(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_FA36319A46D72876_OFFSET))(this, a1);
	}

	::System::Void Method_1_29478762F82FF9B7(::RPG::Client::OpenWorld::StreamingItemData* a1, ::Class_1_8A6989C352B0F0F0* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_29478762F82FF9B7_OFFSET))(this, a1, a2, a3);
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

	::System::Void Method_1_5588C8629ED4FC07(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_5588C8629ED4FC07_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6B8FDB6259F05406(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_6B8FDB6259F05406_OFFSET))(this, a1);
	}

	::System::Void Method_1_436FDCFD41F45B28(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_436FDCFD41F45B28_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7B8DE525284B832E(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_7B8DE525284B832E_OFFSET))(this, a1);
	}

	::System::Void Method_1_03C56FBEC5C889AC(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_03C56FBEC5C889AC_OFFSET))(this, a1);
	}

	::System::Void Method_1_6B8FDB6259F05406_1(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_6B8FDB6259F05406_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean get_IsFocus()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_GET_ISFOCUS_OFFSET))(this);
	}

	::System::Void set_IsFocus(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_SET_ISFOCUS_OFFSET))(this, a1);
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

	::Collections::Pooled::PooledList_1<::RPG::Client::OpenWorld::StreamingItemData*>* Method_1_FC0CDA8B3330EAFC(::RPG::Client::OpenWorld::Volume* a1, ::System::Boolean a2)
	{
		return ((::Collections::Pooled::PooledList_1<::RPG::Client::OpenWorld::StreamingItemData*>*(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_FC0CDA8B3330EAFC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3DF018E49E922C69(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_3DF018E49E922C69_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3BD0063BA87EE097(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_3BD0063BA87EE097_OFFSET))(this, a1);
	}

	::System::Void Method_1_940918FEDA1F3064(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_940918FEDA1F3064_OFFSET))(this, a1);
	}

	::System::Void Method_1_A59F33F8CA7F3A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_A59F33F8CA7F3A80_OFFSET))(this);
	}

	::System::Void Method_1_B37C805F1A4DBCFB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_B37C805F1A4DBCFB_OFFSET))(this, a1);
	}

	::System::Void Method_1_2AE4ABF8E722E879(::Class_1_8A6989C352B0F0F0* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_2AE4ABF8E722E879_OFFSET))(this, a1, a2);
	}

	::Class_1_D4E2A0605A71F3AC_FadingDoneActionType Method_1_646976985B256B3F(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::Class_1_D4E2A0605A71F3AC_FadingDoneActionType(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_646976985B256B3F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_98A5C95726AE861C(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_98A5C95726AE861C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_624BC2F282F686CA(::System::Int32& a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_624BC2F282F686CA_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_1_D489F3D943173A56(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B228A4605C15E47_METHOD_1_D489F3D943173A56_OFFSET))(this, a1);
	}
};
