#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D4E2A0605A71F3AC_FadingDoneActionType.h"
#include "unitysdk/Class_1_E7175D70942CF05A_Struct_2_823833D588E72957.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemEnableReason.h"
#include "unitysdk/RPG/GameCore/StreamingLayerType.h"
#include "unitysdk/Struct_2_A77148D52D516E55.h"
#include "unitysdk/Struct_2_C62A9157F813660C.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1064;
class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_43BD383C98B4C0C5_198;
class Class_1_59159C17DAD8DBF2;
class Class_1_64EA8B4AB59D91C7;
class Class_1_8A6989C352B0F0F0;
class Class_1_D70A30D666F20D90;
class Class_1_D8A08316921B6C64;
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

#define CLASS_1_E7175D70942CF05A_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0x156D1200)
#define CLASS_1_E7175D70942CF05A_CHECKSTREAMING_OFFSET UNITYSDK_OFFSET(0x156D0DE0)
#define CLASS_1_E7175D70942CF05A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156D0150)
#define CLASS_1_E7175D70942CF05A_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0x156D5FB0)
#define CLASS_1_E7175D70942CF05A_GET_CANLOADSTREAMINGRESOURCE_OFFSET UNITYSDK_OFFSET(0x156CF0F0)
#define CLASS_1_E7175D70942CF05A_GET_ISFOCUS_OFFSET UNITYSDK_OFFSET(0x156D5F90)
#define CLASS_1_E7175D70942CF05A_GET_ISPERSISTENTLOADED_OFFSET UNITYSDK_OFFSET(0x156D1520)
#define CLASS_1_E7175D70942CF05A_GET_JOBDATASTREAMING_OFFSET UNITYSDK_OFFSET(0x156CB520)
#define CLASS_1_E7175D70942CF05A_GET_LAYERSOURCEEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x156D1550)
#define CLASS_1_E7175D70942CF05A_INACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x156D2290)
#define CLASS_1_E7175D70942CF05A_INSERTTOAOI_OFFSET UNITYSDK_OFFSET(0x156CD7D0)
#define CLASS_1_E7175D70942CF05A_LEAVEOUTVISION_OFFSET UNITYSDK_OFFSET(0x156D0A30)
#define CLASS_1_E7175D70942CF05A_METHOD_1_01A9010841951393_1_OFFSET UNITYSDK_OFFSET(0x156CE820)
#define CLASS_1_E7175D70942CF05A_METHOD_1_01A9010841951393_OFFSET UNITYSDK_OFFSET(0x156CE110)
#define CLASS_1_E7175D70942CF05A_METHOD_1_02A67ACF3BCC3ADE_OFFSET UNITYSDK_OFFSET(0x156D2110)
#define CLASS_1_E7175D70942CF05A_METHOD_1_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x156D3FC0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_115AC51E73D999C8_OFFSET UNITYSDK_OFFSET(0x156CE080)
#define CLASS_1_E7175D70942CF05A_METHOD_1_154554A987D34A5A_OFFSET UNITYSDK_OFFSET(0x156D1490)
#define CLASS_1_E7175D70942CF05A_METHOD_1_159A68BB915CFF57_OFFSET UNITYSDK_OFFSET(0x156CF9F0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_1713F44301AA802F_OFFSET UNITYSDK_OFFSET(0x156D3810)
#define CLASS_1_E7175D70942CF05A_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x156D5F30)
#define CLASS_1_E7175D70942CF05A_METHOD_1_190BF66719D30B4D_OFFSET UNITYSDK_OFFSET(0x156CEEE0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_197F779C2F2CC955_OFFSET UNITYSDK_OFFSET(0x156C97F0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x156CB560)
#define CLASS_1_E7175D70942CF05A_METHOD_1_1DDD10252C795DC3_OFFSET UNITYSDK_OFFSET(0x156CEC40)
#define CLASS_1_E7175D70942CF05A_METHOD_1_1DE63FE11FA0D5B4_OFFSET UNITYSDK_OFFSET(0x156D3E50)
#define CLASS_1_E7175D70942CF05A_METHOD_1_24DE6FB251421280_OFFSET UNITYSDK_OFFSET(0x156C9BE0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_29478762F82FF9B7_OFFSET UNITYSDK_OFFSET(0x156D4540)
#define CLASS_1_E7175D70942CF05A_METHOD_1_2ABF656D9366130E_OFFSET UNITYSDK_OFFSET(0x156D7480)
#define CLASS_1_E7175D70942CF05A_METHOD_1_2AE4ABF8E722E879_OFFSET UNITYSDK_OFFSET(0x156D6BE0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_2D5A31184A5F053D_OFFSET UNITYSDK_OFFSET(0x156C9270)
#define CLASS_1_E7175D70942CF05A_METHOD_1_35DD5E9922E078B2_OFFSET UNITYSDK_OFFSET(0x156D6210)
#define CLASS_1_E7175D70942CF05A_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x156C9770)
#define CLASS_1_E7175D70942CF05A_METHOD_1_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0x156D5AA0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_3BD0063BA87EE097_OFFSET UNITYSDK_OFFSET(0x156D67E0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_3DC3FEB2A0787CD5_OFFSET UNITYSDK_OFFSET(0x156D47D0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_3DF018E49E922C69_OFFSET UNITYSDK_OFFSET(0x156CFE70)
#define CLASS_1_E7175D70942CF05A_METHOD_1_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x156D62F0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x156CDBE0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_3F3693110F25FD62_1_OFFSET UNITYSDK_OFFSET(0x156CC310)
#define CLASS_1_E7175D70942CF05A_METHOD_1_3F3693110F25FD62_2_OFFSET UNITYSDK_OFFSET(0x156D4160)
#define CLASS_1_E7175D70942CF05A_METHOD_1_3F3693110F25FD62_OFFSET UNITYSDK_OFFSET(0x156CBF90)
#define CLASS_1_E7175D70942CF05A_METHOD_1_41077282BAA6911D_OFFSET UNITYSDK_OFFSET(0x156D2A30)
#define CLASS_1_E7175D70942CF05A_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x156D0CC0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_4AA735042BE800BC_OFFSET UNITYSDK_OFFSET(0x156CD0E0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_4EFC8421DB9059A5_OFFSET UNITYSDK_OFFSET(0x156D1300)
#define CLASS_1_E7175D70942CF05A_METHOD_1_536B30E7E71E5EF4_OFFSET UNITYSDK_OFFSET(0x156CDA50)
#define CLASS_1_E7175D70942CF05A_METHOD_1_5588C8629ED4FC07_OFFSET UNITYSDK_OFFSET(0x156D4DC0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_5AB373DA300F74B2_OFFSET UNITYSDK_OFFSET(0x156CC0E0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_5FD4F0CCAF05C452_OFFSET UNITYSDK_OFFSET(0x156CD450)
#define CLASS_1_E7175D70942CF05A_METHOD_1_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x156CE790)
#define CLASS_1_E7175D70942CF05A_METHOD_1_646976985B256B3F_OFFSET UNITYSDK_OFFSET(0x156D6B40)
#define CLASS_1_E7175D70942CF05A_METHOD_1_64F0C85A431FBD69_OFFSET UNITYSDK_OFFSET(0x156D0950)
#define CLASS_1_E7175D70942CF05A_METHOD_1_6B8FDB6259F05406_OFFSET UNITYSDK_OFFSET(0x156D4EF0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_6CB5060D47BF8A1B_OFFSET UNITYSDK_OFFSET(0x156CB490)
#define CLASS_1_E7175D70942CF05A_METHOD_1_6D006271A1FDA1A1_OFFSET UNITYSDK_OFFSET(0x156CDC30)
#define CLASS_1_E7175D70942CF05A_METHOD_1_6DEA102289758A71_OFFSET UNITYSDK_OFFSET(0x156CA300)
#define CLASS_1_E7175D70942CF05A_METHOD_1_6DFEF4918C679AF0_OFFSET UNITYSDK_OFFSET(0x156D1730)
#define CLASS_1_E7175D70942CF05A_METHOD_1_70C2008241473E27_1_OFFSET UNITYSDK_OFFSET(0x156CEE70)
#define CLASS_1_E7175D70942CF05A_METHOD_1_70C2008241473E27_OFFSET UNITYSDK_OFFSET(0x156CEE00)
#define CLASS_1_E7175D70942CF05A_METHOD_1_75924C7391365D5A_OFFSET UNITYSDK_OFFSET(0x156D3AB0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_7B35371A6C6F374F_OFFSET UNITYSDK_OFFSET(0x156D0A70)
#define CLASS_1_E7175D70942CF05A_METHOD_1_7C180E235D7E2393_OFFSET UNITYSDK_OFFSET(0x156CFCD0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_7CCF26DCE6CE0D45_OFFSET UNITYSDK_OFFSET(0x156D63F0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_7D1EB746883A4558_OFFSET UNITYSDK_OFFSET(0x156D15D0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_7E8FD15DE9AB685F_OFFSET UNITYSDK_OFFSET(0x156D1030)
#define CLASS_1_E7175D70942CF05A_METHOD_1_83259CE775EE8F19_OFFSET UNITYSDK_OFFSET(0x156D2D10)
#define CLASS_1_E7175D70942CF05A_METHOD_1_883B9FEB5E02AA26_OFFSET UNITYSDK_OFFSET(0x156CC420)
#define CLASS_1_E7175D70942CF05A_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x156D6250)
#define CLASS_1_E7175D70942CF05A_METHOD_1_8AAB30C4D21495CE_OFFSET UNITYSDK_OFFSET(0x156C9DC0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_940918FEDA1F3064_OFFSET UNITYSDK_OFFSET(0x156CFEF0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x156D1570)
#define CLASS_1_E7175D70942CF05A_METHOD_1_9617F67032BC6735_OFFSET UNITYSDK_OFFSET(0x156D62A0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x156CA720)
#define CLASS_1_E7175D70942CF05A_METHOD_1_98A5C95726AE861C_OFFSET UNITYSDK_OFFSET(0x156D6E10)
#define CLASS_1_E7175D70942CF05A_METHOD_1_99AC52A5C48A589D_OFFSET UNITYSDK_OFFSET(0x156D13B0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_9AA4014B2568687E_OFFSET UNITYSDK_OFFSET(0x156D6340)
#define CLASS_1_E7175D70942CF05A_METHOD_1_A56385E6706FA723_OFFSET UNITYSDK_OFFSET(0x156D2F80)
#define CLASS_1_E7175D70942CF05A_METHOD_1_A59F33F8CA7F3A80_OFFSET UNITYSDK_OFFSET(0x156CF8B0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_AA0BEF07BACF1D90_OFFSET UNITYSDK_OFFSET(0x156CC770)
#define CLASS_1_E7175D70942CF05A_METHOD_1_AAE1A549353A763B_OFFSET UNITYSDK_OFFSET(0x156CF160)
#define CLASS_1_E7175D70942CF05A_METHOD_1_AC0A861D21B49239_OFFSET UNITYSDK_OFFSET(0x156D32A0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_AE0DBCD5BCD90B1A_OFFSET UNITYSDK_OFFSET(0x156CF030)
#define CLASS_1_E7175D70942CF05A_METHOD_1_AEB42754E002746B_1_OFFSET UNITYSDK_OFFSET(0x156D54B0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_AEB42754E002746B_OFFSET UNITYSDK_OFFSET(0x156D4270)
#define CLASS_1_E7175D70942CF05A_METHOD_1_B3243044C749E29E_OFFSET UNITYSDK_OFFSET(0x156CB090)
#define CLASS_1_E7175D70942CF05A_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x156CF110)
#define CLASS_1_E7175D70942CF05A_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x156D4100)
#define CLASS_1_E7175D70942CF05A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x156CC090)
#define CLASS_1_E7175D70942CF05A_METHOD_1_D489F3D943173A56_OFFSET UNITYSDK_OFFSET(0x156D7890)
#define CLASS_1_E7175D70942CF05A_METHOD_1_D4E1804C25B5032C_OFFSET UNITYSDK_OFFSET(0x156D0D90)
#define CLASS_1_E7175D70942CF05A_METHOD_1_D55AF99D88788B5F_OFFSET UNITYSDK_OFFSET(0x156D2670)
#define CLASS_1_E7175D70942CF05A_METHOD_1_D6830667B890C242_OFFSET UNITYSDK_OFFSET(0x156CAB20)
#define CLASS_1_E7175D70942CF05A_METHOD_1_E359211180D681E8_OFFSET UNITYSDK_OFFSET(0x156CCC10)
#define CLASS_1_E7175D70942CF05A_METHOD_1_EC010C7F2D957A68_OFFSET UNITYSDK_OFFSET(0x156D4B50)
#define CLASS_1_E7175D70942CF05A_METHOD_1_ECA33935490AF2E4_OFFSET UNITYSDK_OFFSET(0x156C8DF0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x156CAAB0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x156D1540)
#define CLASS_1_E7175D70942CF05A_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x156D15C0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x156CE050)
#define CLASS_1_E7175D70942CF05A_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x156D0930)
#define CLASS_1_E7175D70942CF05A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x156CE060)
#define CLASS_1_E7175D70942CF05A_METHOD_1_F6A4EC6227A99794_OFFSET UNITYSDK_OFFSET(0x156D51A0)
#define CLASS_1_E7175D70942CF05A_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x156D1500)
#define CLASS_1_E7175D70942CF05A_METHOD_1_FC9B88792464A2F3_OFFSET UNITYSDK_OFFSET(0x156C8F90)
#define CLASS_1_E7175D70942CF05A_METHOD_1_FD6F4F3CA9ED518D_OFFSET UNITYSDK_OFFSET(0x156D5790)
#define CLASS_1_E7175D70942CF05A_METHOD_1_FEF999131EAD8C08_OFFSET UNITYSDK_OFFSET(0x156D1830)
#define CLASS_1_E7175D70942CF05A_QUADTREEOP_OFFSET UNITYSDK_OFFSET(0x156CD590)
#define CLASS_1_E7175D70942CF05A_REMOVEFROMAOI_OFFSET UNITYSDK_OFFSET(0x156CD910)
#define CLASS_1_E7175D70942CF05A_SET_CANLOADSTREAMINGRESOURCE_OFFSET UNITYSDK_OFFSET(0x156CF100)
#define CLASS_1_E7175D70942CF05A_SET_ISFOCUS_OFFSET UNITYSDK_OFFSET(0x156D5FA0)
#define CLASS_1_E7175D70942CF05A_SET_ISPERSISTENTLOADED_OFFSET UNITYSDK_OFFSET(0x156D1530)
#define CLASS_1_E7175D70942CF05A_SET_JOBDATASTREAMING_OFFSET UNITYSDK_OFFSET(0x156CB540)
#define CLASS_1_E7175D70942CF05A_SET_LAYERSOURCEEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x156D1560)
#define CLASS_1_E7175D70942CF05A_TOHLOD_OFFSET UNITYSDK_OFFSET(0x156D0580)
#define CLASS_1_E7175D70942CF05A__CCTOR_OFFSET UNITYSDK_OFFSET(0x156D7900)
#define CLASS_1_E7175D70942CF05A__CTOR_OFFSET UNITYSDK_OFFSET(0x156CB5C0)
#define CLASS_1_E7175D70942CF05A__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x156D2030)
#define CLASS_1_E7175D70942CF05A__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0x156CAD00)
#define CLASS_1_E7175D70942CF05A__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x156D20A0)

inline static constexpr unsigned int Class_1_E7175D70942CF05A_TypeDefinitionIndex = 73725;

class Class_1_E7175D70942CF05A : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_AEOPGOEAJAF()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E7175D70942CF05A_TypeDefinitionIndex)->GetStaticField(0x25AB0);
	}
	static ::System::String** StaticGet_FKODHMAJOAB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E7175D70942CF05A_TypeDefinitionIndex)->GetStaticField(0x25AB8);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_ODGGMLDNFDJ()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E7175D70942CF05A_TypeDefinitionIndex)->GetStaticField(0x25AC0);
	}
	static ::System::Boolean* StaticGet_LIODEMHCAOF()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E7175D70942CF05A_TypeDefinitionIndex)->GetStaticField(0xB3C0);
	}
	::UnityEngine::GameObject* KMNJGLJLCBM; // 0x10
	::Class_1_43BD383C98B4C0C5_198* HMKEHDIJNCK; // 0x18
	::Class_1_303D5A33D1401D59* CFMJHJILEMA; // 0x20
	::Class_1_D70A30D666F20D90* PBHJFGPNGPA; // 0x28
	::System::Action_1<::Class_1_8A6989C352B0F0F0*>* JILMNFCFMOI; // 0x30
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* NCNHHAMBINO; // 0x38
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>*>* CNMJMNNDLIF; // 0x40
	::System::Collections::Generic::HashSet_1<::Class_1_8A6989C352B0F0F0*>* OIDDKKBOEKD; // 0x48
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* KAIBMIPGFMM; // 0x50
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* HIKMPLOHEHI; // 0x58
	::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* BBFLHKMCLFM; // 0x60
	::Class_1_59159C17DAD8DBF2* EONEEIDNGEP; // 0x68
	::RPG::Client::OpenWorld::StreamingLayerDetail* CDJGDNCOFOD; // 0x70
	::System::Collections::Generic::List_1<::Class_1_8A6989C352B0F0F0*>* NHECFHIDCPG; // 0x78
	::System::Collections::Generic::List_1<::Class_1_8A6989C352B0F0F0*>* FOIIDGHBLLK; // 0x80
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* BOFCDAGFKJC; // 0x88
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* MKNLNDEOCEE; // 0x90
	::System::Collections::Generic::List_1<::System::Action*>* NFBNLDIFCGC; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* NFFPHIPJEGA; // 0xA0
	::System::Collections::Concurrent::ConcurrentQueue_1<::Class_1_8A6989C352B0F0F0*>* GMHOBOLANCK; // 0xA8
	::System::Action_2<::Class_1_8A6989C352B0F0F0*, ::System::Boolean>* PIBCMNAFAME; // 0xB0
	::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* NAEKEECDHNB; // 0xB8
	::System::Collections::Concurrent::ConcurrentDictionary_2<::Class_1_8A6989C352B0F0F0*, ::System::Int32>* BECMKFHNHKK; // 0xC0
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* LLBALBGMDGE; // 0xC8
	::System::Collections::Generic::HashSet_1<::Class_1_8A6989C352B0F0F0*>* IGMIHCMBLDD; // 0xD0
	::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* PONGCJLLEOI; // 0xD8
	::System::Collections::Generic::HashSet_1<::System::Int32>* CCIEEKNBHKI; // 0xE0
	::System::Collections::Generic::List_1<::System::Int32>* NBKIFKIHJDA; // 0xE8
	::System::Collections::Concurrent::ConcurrentQueue_1<::System::Tuple_2<::Class_1_8A6989C352B0F0F0*, ::System::Int32>*>* PCILCIFFFOI; // 0xF0
	::Class_1_D8A08316921B6C64* BKLGGOPFBCB; // 0xF8
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* BMICLMBHFGF; // 0x100
	::System::Int32 _LayerSourceEffectType_k__BackingField; // 0x108
	::UnityEngine::Vector3 BHOIIEFALGA; // 0x10C
	::System::Single KKEEOPFCLMF; // 0x118
	::System::Boolean CAFNNMAOOFL; // 0x11C
	::System::Boolean ICCMOIBEPOG; // 0x11D
	::System::Boolean DPDGOFIGCFB; // 0x11E
	::System::Boolean OPCBGCHKBAP; // 0x11F
	::Struct_2_C62A9157F813660C _JobDataStreaming_k__BackingField; // 0x120
	::UnityEngine::Vector3 IGCBHABGNNA; // 0x134
	::UnityEngine::Rect NNCPJGDOADD; // 0x140
	::System::Single CFLFAKIBIJI; // 0x150
	::System::Boolean OCEIENMCDEH; // 0x154
	::System::Boolean LLCPMGGEHDN; // 0x155
	::System::Boolean FBAFNHFONFK; // 0x156
	::System::Boolean _IsPersistentLoaded_k__BackingField; // 0x157
	::System::Boolean _IsFocus_k__BackingField; // 0x158
	::System::Boolean GBDHMMGEMGF; // 0x159
	::System::Boolean OHPJMEEPHBJ; // 0x15A
	::System::Boolean LNFGPCMPLHE; // 0x15B
	::System::Single DHNJAEIMIIE; // 0x15C
	::System::Single FBEBPBHALIO; // 0x160
	::System::Boolean LOLIAKJPMLH; // 0x164
	::System::Boolean _CanLoadStreamingResource_k__BackingField; // 0x165
	::System::Boolean HDALCKNKHIG; // 0x166
	::System::Boolean CLACOLPACFK; // 0x167
	::System::Int32 FDDBINCOHNP; // 0x168
	::System::Int32 ENPGCDGPFHG; // 0x16C

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_D70A30D666F20D90* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_D70A30D666F20D90*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A__CCTOR_OFFSET))();
	}

	::System::Void Method_1_ECA33935490AF2E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_ECA33935490AF2E4_OFFSET))(this);
	}

	::System::Void Method_1_FC9B88792464A2F3(::System::Collections::Generic::List_1<::Class_1_E7175D70942CF05A_Struct_2_823833D588E72957>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_E7175D70942CF05A_Struct_2_823833D588E72957>*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_FC9B88792464A2F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_2D5A31184A5F053D(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_2D5A31184A5F053D_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Boolean Method_1_197F779C2F2CC955(::Class_0_16E4307DCC419505_1064* a1, ::System::Boolean a2, ::Class_1_3F28033F34305C46* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_1064*, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_197F779C2F2CC955_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_24DE6FB251421280(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_24DE6FB251421280_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_8AAB30C4D21495CE(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_8AAB30C4D21495CE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_6DEA102289758A71(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::Class_1_8A6989C352B0F0F0* a4, ::RPG::Client::OpenWorld::StreamingItemData* a5, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*> a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::Class_1_8A6989C352B0F0F0*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_6DEA102289758A71_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_1_D6830667B890C242(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2, ::System::Single a3, ::Class_1_3F28033F34305C46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_D6830667B890C242_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _SolveInstanceLodCalc(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::Class_1_8A6989C352B0F0F0* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A__SOLVEINSTANCELODCALC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_B3243044C749E29E(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2, ::System::Single a3, ::Class_1_3F28033F34305C46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_B3243044C749E29E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_6CB5060D47BF8A1B(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_6CB5060D47BF8A1B_OFFSET))(this, a1, a2);
	}

	::Struct_2_C62A9157F813660C get_JobDataStreaming()
	{
		return ((::Struct_2_C62A9157F813660C(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_GET_JOBDATASTREAMING_OFFSET))(this);
	}

	::System::Void set_JobDataStreaming(::Struct_2_C62A9157F813660C a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C62A9157F813660C))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_SET_JOBDATASTREAMING_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_3F3693110F25FD62(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_3F3693110F25FD62_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_5AB373DA300F74B2(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_5AB373DA300F74B2_OFFSET))(this, a1);
	}

	::System::Void Method_1_3F3693110F25FD62_1(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_3F3693110F25FD62_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_883B9FEB5E02AA26()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_883B9FEB5E02AA26_OFFSET))(this);
	}

	::System::Boolean Method_1_AA0BEF07BACF1D90()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_AA0BEF07BACF1D90_OFFSET))(this);
	}

	::System::Single Method_1_E359211180D681E8()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_E359211180D681E8_OFFSET))(this);
	}

	::System::Void Method_1_4AA735042BE800BC(::UnityEngine::Bounds& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_4AA735042BE800BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_5FD4F0CCAF05C452()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_5FD4F0CCAF05C452_OFFSET))(this);
	}

	::System::Void QuadTreeOp(::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_QUADTREEOP_OFFSET))(this, a1);
	}

	::System::Void InsertToAOI(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_INSERTTOAOI_OFFSET))(this, a1);
	}

	::System::Void RemoveFromAOI(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_REMOVEFROMAOI_OFFSET))(this, a1);
	}

	::System::Void Method_1_536B30E7E71E5EF4(::System::Action_2<::Class_1_8A6989C352B0F0F0*, ::System::Object*>* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_8A6989C352B0F0F0*, ::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_536B30E7E71E5EF4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D006271A1FDA1A1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_6D006271A1FDA1A1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Boolean Method_1_115AC51E73D999C8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_115AC51E73D999C8_OFFSET))(this);
	}

	::System::Void Method_1_01A9010841951393(::Struct_2_A77148D52D516E55 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A77148D52D516E55))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_01A9010841951393_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_1_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Void Method_1_01A9010841951393_1(::Struct_2_A77148D52D516E55 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A77148D52D516E55))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_01A9010841951393_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_1DDD10252C795DC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_1DDD10252C795DC3_OFFSET))(this);
	}

	::System::Void Method_1_70C2008241473E27(::UnityEngine::GameObject* a1, ::RPG::GameCore::BlockNodeConfig* a2, ::Class_1_64EA8B4AB59D91C7* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::BlockNodeConfig*, ::Class_1_64EA8B4AB59D91C7*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_70C2008241473E27_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_70C2008241473E27_1(::UnityEngine::GameObject* a1, ::RPG::GameCore::BlockNodeConfig* a2, ::Class_1_64EA8B4AB59D91C7* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::BlockNodeConfig*, ::Class_1_64EA8B4AB59D91C7*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_70C2008241473E27_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::GameObject* Method_1_190BF66719D30B4D(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_190BF66719D30B4D_OFFSET))(this, a1);
	}

	::Class_1_8A6989C352B0F0F0* Method_1_AE0DBCD5BCD90B1A(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_AE0DBCD5BCD90B1A_OFFSET))(this, a1);
	}

	::System::Boolean get_CanLoadStreamingResource()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_GET_CANLOADSTREAMINGRESOURCE_OFFSET))(this);
	}

	::System::Void set_CanLoadStreamingResource(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_SET_CANLOADSTREAMINGRESOURCE_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_AAE1A549353A763B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_AAE1A549353A763B_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C180E235D7E2393(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_7C180E235D7E2393_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_DISPOSE_OFFSET))(this);
	}

	::System::Void ToHLOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_TOHLOD_OFFSET))(this);
	}

	::System::Void LeaveOutVision()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_LEAVEOUTVISION_OFFSET))(this);
	}

	::System::Void Method_1_7B35371A6C6F374F(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_7B35371A6C6F374F_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Int32 Method_1_D4E1804C25B5032C(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_D4E1804C25B5032C_OFFSET))(this, a1);
	}

	::System::Void CheckStreaming(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_CHECKSTREAMING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_7E8FD15DE9AB685F(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_7E8FD15DE9AB685F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void CheckStreamingLod(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_CHECKSTREAMINGLOD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_4EFC8421DB9059A5(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_4EFC8421DB9059A5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_99AC52A5C48A589D(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_99AC52A5C48A589D_OFFSET))(this, a1);
	}

	::System::Void Method_1_154554A987D34A5A(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_154554A987D34A5A_OFFSET))(this, a1);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_F0E307B84478A272_1_OFFSET))(this);
	}

	::System::Boolean get_IsPersistentLoaded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_GET_ISPERSISTENTLOADED_OFFSET))(this);
	}

	::System::Void set_IsPersistentLoaded(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_SET_ISPERSISTENTLOADED_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Int32 get_LayerSourceEffectType()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_GET_LAYERSOURCEEFFECTTYPE_OFFSET))(this);
	}

	::System::Void set_LayerSourceEffectType(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_SET_LAYERSOURCEEFFECTTYPE_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	static ::System::Boolean Method_1_64F0C85A431FBD69()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_64F0C85A431FBD69_OFFSET))();
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::Class_1_8A6989C352B0F0F0* Method_1_7D1EB746883A4558(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_7D1EB746883A4558_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DFEF4918C679AF0(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_6DFEF4918C679AF0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FEF999131EAD8C08(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_FEF999131EAD8C08_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterInstanceToCullingSystem(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET))(this, a1);
	}

	::System::Void _UnRegisterInstanceFromCullingSystem(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_02A67ACF3BCC3ADE(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_02A67ACF3BCC3ADE_OFFSET))(this, a1, a2);
	}

	::System::Boolean InActiveInstance(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_INACTIVEINSTANCE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_D55AF99D88788B5F(::Class_1_8A6989C352B0F0F0* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_D55AF99D88788B5F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_41077282BAA6911D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_41077282BAA6911D_OFFSET))(this, a1);
	}

	::System::Void Method_1_83259CE775EE8F19()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_83259CE775EE8F19_OFFSET))(this);
	}

	::System::Void Method_1_A56385E6706FA723()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_A56385E6706FA723_OFFSET))(this);
	}

	::System::Void Method_1_AC0A861D21B49239(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_AC0A861D21B49239_OFFSET))(this, a1);
	}

	::System::Void Method_1_1713F44301AA802F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_1713F44301AA802F_OFFSET))(this);
	}

	::System::Void Method_1_75924C7391365D5A(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2, ::System::Boolean a3, ::RPG::Client::OpenWorld::StreamingItemEnableReason a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemEnableReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_75924C7391365D5A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_0C88AB06D46E777A_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_3F3693110F25FD62_2(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_3F3693110F25FD62_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_29478762F82FF9B7(::RPG::Client::OpenWorld::StreamingItemData* a1, ::Class_1_8A6989C352B0F0F0* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_29478762F82FF9B7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3DC3FEB2A0787CD5(::Class_1_3F28033F34305C46* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_3DC3FEB2A0787CD5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EC010C7F2D957A68(::RPG::Client::OpenWorld::StreamingItemData* a1, ::Class_1_8A6989C352B0F0F0* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_EC010C7F2D957A68_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_1DE63FE11FA0D5B4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_1DE63FE11FA0D5B4_OFFSET))(this);
	}

	::System::Void Method_1_5588C8629ED4FC07(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_5588C8629ED4FC07_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AEB42754E002746B(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_AEB42754E002746B_OFFSET))(this, a1);
	}

	::System::Void Method_1_6B8FDB6259F05406(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_6B8FDB6259F05406_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F6A4EC6227A99794(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_F6A4EC6227A99794_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD6F4F3CA9ED518D(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_FD6F4F3CA9ED518D_OFFSET))(this, a1);
	}

	::System::Void Method_1_AEB42754E002746B_1(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_AEB42754E002746B_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_3BC8B8F2BB08C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_3BC8B8F2BB08C1C2_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean get_IsFocus()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_GET_ISFOCUS_OFFSET))(this);
	}

	::System::Void set_IsFocus(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_SET_ISFOCUS_OFFSET))(this, a1);
	}

	::System::Int32 GetItemLodLevel(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::RPG::Client::OpenWorld::StreamingItemData* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_GETITEMLODLEVEL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::RPG::Client::OpenWorld::StreamingLayerDetail* Method_1_35DD5E9922E078B2()
	{
		return ((::RPG::Client::OpenWorld::StreamingLayerDetail*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_35DD5E9922E078B2_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::RPG::GameCore::StreamingLayerType Method_1_9617F67032BC6735()
	{
		return ((::RPG::GameCore::StreamingLayerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_9617F67032BC6735_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_3E7178C5ECF017DB_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_9AA4014B2568687E(::Class_1_DE4C6B309308A230* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_9AA4014B2568687E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Collections::Pooled::PooledList_1<::RPG::Client::OpenWorld::StreamingItemData*>* Method_1_7CCF26DCE6CE0D45(::RPG::Client::OpenWorld::Volume* a1, ::System::Boolean a2)
	{
		return ((::Collections::Pooled::PooledList_1<::RPG::Client::OpenWorld::StreamingItemData*>*(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_7CCF26DCE6CE0D45_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3DF018E49E922C69(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_3DF018E49E922C69_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3BD0063BA87EE097(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_3BD0063BA87EE097_OFFSET))(this, a1);
	}

	::System::Void Method_1_940918FEDA1F3064(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_940918FEDA1F3064_OFFSET))(this, a1);
	}

	::System::Void Method_1_A59F33F8CA7F3A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_A59F33F8CA7F3A80_OFFSET))(this);
	}

	::System::Void Method_1_159A68BB915CFF57(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_159A68BB915CFF57_OFFSET))(this, a1);
	}

	::System::Void Method_1_2AE4ABF8E722E879(::Class_1_8A6989C352B0F0F0* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_2AE4ABF8E722E879_OFFSET))(this, a1, a2);
	}

	::Class_1_D4E2A0605A71F3AC_FadingDoneActionType Method_1_646976985B256B3F(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::Class_1_D4E2A0605A71F3AC_FadingDoneActionType(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_646976985B256B3F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_98A5C95726AE861C(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_98A5C95726AE861C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2ABF656D9366130E(::System::Int32& a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_2ABF656D9366130E_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_1_D489F3D943173A56(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E7175D70942CF05A_METHOD_1_D489F3D943173A56_OFFSET))(this, a1);
	}
};
