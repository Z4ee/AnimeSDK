#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E7175D70942CF05A.h"
#include "unitysdk/Class_1_E7175D70942CF05A_Struct_2_823833D588E72957.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemEnableReason.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/Struct_2_A77148D52D516E55.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_303D5A33D1401D59;
class Class_1_64EA8B4AB59D91C7;
class Class_1_76597B0FC8DCAD88;
class Class_1_8A6989C352B0F0F0;
class Class_1_D70A30D666F20D90;
class Class_2_7CF36DB1DCE43BAF;
class Class_2_F2A6DFE115174D94;
namespace RPG { class IReference; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_2_1A304D4C36D43D86_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBDB4100)
#define CLASS_2_1A304D4C36D43D86_INACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0xBDB3730)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_0594FBEB242F8BAA_OFFSET UNITYSDK_OFFSET(0xBDAFA00)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_0667835A4ECD6011_OFFSET UNITYSDK_OFFSET(0xBDAFE30)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_0C8ED25B021DF762_OFFSET UNITYSDK_OFFSET(0xBDB6340)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_119F45C49A6D0A61_OFFSET UNITYSDK_OFFSET(0xBDB94C0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_11B2C6F36390AF29_OFFSET UNITYSDK_OFFSET(0xBDB84B0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_1293DC46F9BC7822_OFFSET UNITYSDK_OFFSET(0xBDBB810)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_154AD4071FEC5F1D_OFFSET UNITYSDK_OFFSET(0xBDB6700)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_156625ADC25E8C2A_OFFSET UNITYSDK_OFFSET(0xBDB4DE0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_1E06B324680942C9_OFFSET UNITYSDK_OFFSET(0xBDB9C80)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xBDBB060)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_25455550D82928A3_OFFSET UNITYSDK_OFFSET(0xBDB9860)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_29BF84096AA26534_OFFSET UNITYSDK_OFFSET(0xBDB90F0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0xBDB1F40)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xBDAFDA0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_336191B88D6215AE_OFFSET UNITYSDK_OFFSET(0xBDB8730)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_34F96D4B6BA7226B_OFFSET UNITYSDK_OFFSET(0xBDB6410)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_39CB98ABCDE77C2D_OFFSET UNITYSDK_OFFSET(0xBDB82B0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_3DAE65FE08BE2E7F_OFFSET UNITYSDK_OFFSET(0xBDB6EB0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_3E07A0D16511A473_OFFSET UNITYSDK_OFFSET(0xBDB0110)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_40C0226E18969F0F_OFFSET UNITYSDK_OFFSET(0xBDB37C0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_45024F3EBCDBE192_OFFSET UNITYSDK_OFFSET(0xBDB5BB0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_45D8204E9B464A50_OFFSET UNITYSDK_OFFSET(0xBDB6930)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_45F50F1CAE2B6012_OFFSET UNITYSDK_OFFSET(0xBDBBD90)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_4696C30EFE30E9E0_OFFSET UNITYSDK_OFFSET(0xBDB3A30)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_483AD6797697620F_OFFSET UNITYSDK_OFFSET(0xBDB6C90)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_49473597FC37B6BC_OFFSET UNITYSDK_OFFSET(0xBDBB9B0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_49E578E7E0F43168_OFFSET UNITYSDK_OFFSET(0xBDB8590)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_50A98D37C55819A5_OFFSET UNITYSDK_OFFSET(0xBDB5960)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_52609DB5540CDD8E_OFFSET UNITYSDK_OFFSET(0xBDB9210)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_532B7A1A6F524DB6_OFFSET UNITYSDK_OFFSET(0xBDBACE0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_582F51A4651B72E4_OFFSET UNITYSDK_OFFSET(0xBDBA1A0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0xBDB3130)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0xBDB3420)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_68805403250CC013_1_OFFSET UNITYSDK_OFFSET(0xBDBC270)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_68805403250CC013_OFFSET UNITYSDK_OFFSET(0xBDB8C00)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_68F2E2373B30A5BB_OFFSET UNITYSDK_OFFSET(0xBDB6550)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0xBDB2010)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_704E401D1607FD5C_OFFSET UNITYSDK_OFFSET(0xBDBA960)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_8071259A88106D66_OFFSET UNITYSDK_OFFSET(0xBDAF930)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_8553D6F0E217F736_OFFSET UNITYSDK_OFFSET(0xBDB9AA0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_8B36DE7DBCA8D923_OFFSET UNITYSDK_OFFSET(0xBDB33B0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_8D68E1C80950460F_OFFSET UNITYSDK_OFFSET(0xBDB9EE0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_8E39B23FC47DA1C6_OFFSET UNITYSDK_OFFSET(0xBDB61D0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_8E69D156D8B86563_OFFSET UNITYSDK_OFFSET(0xBDBB420)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_923FE658D822C049_OFFSET UNITYSDK_OFFSET(0xBDBBD30)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_953470A46D963D9F_OFFSET UNITYSDK_OFFSET(0xBDB35B0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_98D6C08A69E15808_OFFSET UNITYSDK_OFFSET(0xBDB5FD0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0xBDBC210)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_A73B8662804238D6_OFFSET UNITYSDK_OFFSET(0xBDB49D0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_A8B662A2CC4B2F7D_OFFSET UNITYSDK_OFFSET(0xBDB5190)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0xBDB2F50)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_ABD146C4FADF6A8C_OFFSET UNITYSDK_OFFSET(0xBDB3CE0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0xBDB8F90)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_B25D8B00CDE640ED_OFFSET UNITYSDK_OFFSET(0xBDB79C0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0xBDBC040)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_BC46FCF99873D9DD_OFFSET UNITYSDK_OFFSET(0xBDB4D90)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_BD3151512FEA4FC1_OFFSET UNITYSDK_OFFSET(0xBDBB760)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_C35310DB91DD6546_OFFSET UNITYSDK_OFFSET(0xBDB3970)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_C5B0C59ED5AAA4D3_OFFSET UNITYSDK_OFFSET(0xBDBB130)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_D489F3D943173A56_OFFSET UNITYSDK_OFFSET(0xBDB8F20)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_DA0AD41C12822C47_OFFSET UNITYSDK_OFFSET(0xBDB6BD0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_DAE822828607EFDD_OFFSET UNITYSDK_OFFSET(0xBDB3DF0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_DB4D2BAE2BB4B8D3_OFFSET UNITYSDK_OFFSET(0xBDB4D40)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_DC703AC5AA81BFEE_OFFSET UNITYSDK_OFFSET(0xBDBA110)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_DF37904DEA587952_OFFSET UNITYSDK_OFFSET(0xBDB7650)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_E67B8EE7D04609D0_OFFSET UNITYSDK_OFFSET(0xBDB4F80)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_E78900D740B55F9B_OFFSET UNITYSDK_OFFSET(0xBDB7430)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0xBDB5610)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_ED333B82239BB5B0_OFFSET UNITYSDK_OFFSET(0xBDB3490)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_EF980A2E3A7BC9E2_OFFSET UNITYSDK_OFFSET(0xBDB4BD0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xBDB8F10)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0xBDBB120)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xBDB5180)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_F978A1D172468895_1_OFFSET UNITYSDK_OFFSET(0xBDBB5B0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0xBDB47B0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_F985B5DB65161B2E_1_OFFSET UNITYSDK_OFFSET(0xBDB36B0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_F985B5DB65161B2E_OFFSET UNITYSDK_OFFSET(0xBDB3630)
#define CLASS_2_1A304D4C36D43D86_SOLVEFOCUSSTATUS_OFFSET UNITYSDK_OFFSET(0xBDB3DA0)
#define CLASS_2_1A304D4C36D43D86__CCTOR_OFFSET UNITYSDK_OFFSET(0xBDBC5E0)
#define CLASS_2_1A304D4C36D43D86__CTOR_OFFSET UNITYSDK_OFFSET(0xBDB13E0)
#define CLASS_2_1A304D4C36D43D86___N__0_OFFSET UNITYSDK_OFFSET(0xBDBC6B0)

inline static constexpr unsigned int Class_2_1A304D4C36D43D86_TypeDefinitionIndex = 73876;

class Class_2_1A304D4C36D43D86 : public ::Class_1_E7175D70942CF05A
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_GMLKHGKIHND()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A304D4C36D43D86_TypeDefinitionIndex)->GetStaticField(0x2E9F0);
	}
	static ::System::String** StaticGet_FKODHMAJOAB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A304D4C36D43D86_TypeDefinitionIndex)->GetStaticField(0x2E9F8);
	}
	static ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>** StaticGet_PJKACNCGFHN()
	{
		return (::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A304D4C36D43D86_TypeDefinitionIndex)->GetStaticField(0x2EA00);
	}
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Object*>* CFJHBCPDEKB; // 0x170
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::String*>* DFJPLPKPENC; // 0x178
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action*>* PEOEOEMOIBA; // 0x180
	::RPG::Client::OpenWorld::StreamingItemData* ILPEPNHECJG; // 0x188
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*>* BLIALOMGCAG; // 0x190
	::System::Action_3<::UnityEngine::Object*, ::RPG::IReference*, ::RPG::Client::OpenWorld::StreamingItemData*>* GOHDFBGBNOG; // 0x198
	::System::Collections::Generic::HashSet_1<::UnityEngine::Animator*>* AFMMOAIHNNN; // 0x1A0
	::System::Collections::Generic::List_1<::System::Action*>* NGGPINFCDFM; // 0x1A8
	::System::Collections::Generic::List_1<::Class_2_7CF36DB1DCE43BAF*>* BABHOKBOIIM; // 0x1B0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OpenWorld::StreamingItemData*>* PBLPABIEKAE; // 0x1B8
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_1<::RPG::Client::OpenWorld::StreamingItemData*>*>* DIAEPIJPBMN; // 0x1C0
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* PEJCFIJGHOG; // 0x1C8
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* IEILHOMKHND; // 0x1D0
	::System::Action_4<::RPG::IReference*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean>* KFGPOPEIHEC; // 0x1D8
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*>* MNOFODNNJBK; // 0x1E0
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* OPGLLHKDIPA; // 0x1E8
	::UnityEngine::GameObject* DHIBMDEMIBN; // 0x1F0
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_3<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*>*>* DBPAFIALIDA; // 0x1F8
	::System::String* BDIFNPNKGAB; // 0x200
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::List_1<::System::Action_2<::Class_1_8A6989C352B0F0F0*, ::RPG::Client::OpenWorld::StreamingItemData*>*>*>* GJCHMCLJJIC; // 0x208
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* EAKDMANOIKG; // 0x210
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::UInt32>* HPIAFGBPBJB; // 0x218
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>*>* ONBKLFIPFAE; // 0x220
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*>* ANJNJBEADFP; // 0x228
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* LGIOCJOIKCL; // 0x230
	::System::Action* LEKJGLHBHNK; // 0x238
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::ValueTuple_2<::System::String*, ::System::Int32>>* HBJPLNOJHNH; // 0x240
	::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* EOEDOEHHFGD; // 0x248
	::System::Collections::Generic::List_1<::UnityEngine::Animator*>* OKAMPAIJNIG; // 0x250
	::UnityEngine::GameObject* OHOHNFLOJLD; // 0x258
	::System::Collections::Generic::HashSet_1<::Class_2_7CF36DB1DCE43BAF*>* NCFAJNNNLLO; // 0x260
	::System::Collections::Generic::Dictionary_2<::Class_2_F2A6DFE115174D94*, ::Class_1_76597B0FC8DCAD88*>* GMGPNENHNDD; // 0x268
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*>* AOGDLGCPLDM; // 0x270
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* BFKLKBLFDJM; // 0x278
	::System::Boolean PIPPPDPCLPP; // 0x280
	::System::Boolean OLOLCIBBIKP; // 0x281
	::System::Int32 OKFIILBDBOP; // 0x284

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_D70A30D666F20D90* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4, ::UnityEngine::GameObject* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_D70A30D666F20D90*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86__CCTOR_OFFSET))();
	}

	::System::Void Method_2_8071259A88106D66(::RPG::IReference* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::IReference*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_8071259A88106D66_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_0667835A4ECD6011(::UnityEngine::Object* a1, ::RPG::IReference* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::RPG::IReference*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_0667835A4ECD6011_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Void Method_2_8B36DE7DBCA8D923(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_8B36DE7DBCA8D923_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_2_5AFFA079DA8B20AA()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_5AFFA079DA8B20AA_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_ED333B82239BB5B0(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_ED333B82239BB5B0_OFFSET))(this, a1);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_953470A46D963D9F(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_953470A46D963D9F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F985B5DB65161B2E(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_F985B5DB65161B2E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F985B5DB65161B2E_1(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_F985B5DB65161B2E_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean InActiveInstance(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_INACTIVEINSTANCE_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::GameObject* Method_2_40C0226E18969F0F(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_40C0226E18969F0F_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_C35310DB91DD6546(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_C35310DB91DD6546_OFFSET))(this, a1);
	}

	::System::Void Method_2_4696C30EFE30E9E0(::UnityEngine::GameObject* a1, ::RPG::GameCore::BlockNodeConfig* a2, ::Class_1_64EA8B4AB59D91C7* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::BlockNodeConfig*, ::Class_1_64EA8B4AB59D91C7*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_4696C30EFE30E9E0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_ABD146C4FADF6A8C(::UnityEngine::GameObject* a1, ::RPG::GameCore::BlockNodeConfig* a2, ::Class_1_64EA8B4AB59D91C7* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::BlockNodeConfig*, ::Class_1_64EA8B4AB59D91C7*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_ABD146C4FADF6A8C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void SolveFocusStatus(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_SOLVEFOCUSSTATUS_OFFSET))(this, a1);
	}

	::System::Void Method_2_DAE822828607EFDD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_DAE822828607EFDD_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_A73B8662804238D6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_A73B8662804238D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_DB4D2BAE2BB4B8D3(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_DB4D2BAE2BB4B8D3_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_BC46FCF99873D9DD()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_BC46FCF99873D9DD_OFFSET))(this);
	}

	::System::Void Method_2_156625ADC25E8C2A(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_156625ADC25E8C2A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E67B8EE7D04609D0(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_E67B8EE7D04609D0_OFFSET))(this, a1);
	}

	::System::Void Method_2_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_2_A8B662A2CC4B2F7D(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_A8B662A2CC4B2F7D_OFFSET))(this, a1);
	}

	::System::Void Method_2_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_EAC2737A96E071C9_OFFSET))(this);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_50A98D37C55819A5(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_50A98D37C55819A5_OFFSET))(this, a1);
	}

	::System::Void Method_2_98D6C08A69E15808(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action_2<::Class_1_8A6989C352B0F0F0*, ::RPG::Client::OpenWorld::StreamingItemData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::Class_1_8A6989C352B0F0F0*, ::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_98D6C08A69E15808_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8E39B23FC47DA1C6(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action_2<::Class_1_8A6989C352B0F0F0*, ::RPG::Client::OpenWorld::StreamingItemData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::Class_1_8A6989C352B0F0F0*, ::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_8E39B23FC47DA1C6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_0C8ED25B021DF762(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_0C8ED25B021DF762_OFFSET))(this, a1);
	}

	::System::Void Method_2_34F96D4B6BA7226B(::RPG::Client::OpenWorld::StreamingItemData* a1, ::Class_1_8A6989C352B0F0F0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_34F96D4B6BA7226B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_68F2E2373B30A5BB(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_68F2E2373B30A5BB_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_EF980A2E3A7BC9E2(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::RPG::Client::OpenWorld::StreamingItemData*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_EF980A2E3A7BC9E2_OFFSET))(a1, a2);
	}

	::System::Void Method_2_154AD4071FEC5F1D(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_154AD4071FEC5F1D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_45D8204E9B464A50(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_45D8204E9B464A50_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_3E07A0D16511A473(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Object* a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Object*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_3E07A0D16511A473_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_0594FBEB242F8BAA(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_0594FBEB242F8BAA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3DAE65FE08BE2E7F(::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_3DAE65FE08BE2E7F_OFFSET))(this, a1);
	}

	::System::Void Method_2_E78900D740B55F9B(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_E78900D740B55F9B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B25D8B00CDE640ED(::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_B25D8B00CDE640ED_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_39CB98ABCDE77C2D(::System::Action_1<::UnityEngine::Object*>* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Action_1<::UnityEngine::Object*>*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_39CB98ABCDE77C2D_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Object* Method_2_DF37904DEA587952(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_DF37904DEA587952_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_2_11B2C6F36390AF29(::System::Int32 a1, ::Struct_2_A77148D52D516E55 a2)
	{
		return ((::System::String*(*)(::System::Int32, ::Struct_2_A77148D52D516E55))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_11B2C6F36390AF29_OFFSET))(a1, a2);
	}

	::System::Void Method_2_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_2_49E578E7E0F43168(::System::Collections::Generic::List_1<::Class_1_E7175D70942CF05A_Struct_2_823833D588E72957>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_E7175D70942CF05A_Struct_2_823833D588E72957>*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_49E578E7E0F43168_OFFSET))(this, a1);
	}

	::System::Void Method_2_336191B88D6215AE(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2, ::System::Boolean a3, ::RPG::Client::OpenWorld::StreamingItemEnableReason a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemEnableReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_336191B88D6215AE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_68805403250CC013()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_68805403250CC013_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_2_D489F3D943173A56(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_D489F3D943173A56_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_2_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_2_29BF84096AA26534(::Class_2_7CF36DB1DCE43BAF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7CF36DB1DCE43BAF*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_29BF84096AA26534_OFFSET))(this, a1);
	}

	::System::Void Method_2_52609DB5540CDD8E(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_52609DB5540CDD8E_OFFSET))(this, a1);
	}

	::System::Void Method_2_25455550D82928A3(::RPG::Client::OpenWorld::StreamingItemData* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_25455550D82928A3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8553D6F0E217F736(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_8553D6F0E217F736_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E06B324680942C9(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_1E06B324680942C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8D68E1C80950460F(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_8D68E1C80950460F_OFFSET))(this, a1);
	}

	::System::Void Method_2_DC703AC5AA81BFEE(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_DC703AC5AA81BFEE_OFFSET))(this, a1);
	}

	::System::Void Method_2_582F51A4651B72E4(::Class_2_7CF36DB1DCE43BAF* a1, ::UnityEngine::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7CF36DB1DCE43BAF*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_582F51A4651B72E4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_2_C5B0C59ED5AAA4D3(::Class_2_7CF36DB1DCE43BAF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7CF36DB1DCE43BAF*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_C5B0C59ED5AAA4D3_OFFSET))(this, a1);
	}

	::System::Void Method_2_8E69D156D8B86563()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_8E69D156D8B86563_OFFSET))(this);
	}

	::System::Void Method_2_119F45C49A6D0A61(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_119F45C49A6D0A61_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BD3151512FEA4FC1(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_BD3151512FEA4FC1_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_45024F3EBCDBE192(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a3, ::System::Boolean a4)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_45024F3EBCDBE192_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_1293DC46F9BC7822(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_1293DC46F9BC7822_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_49473597FC37B6BC(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action_1<::RPG::Client::OpenWorld::StreamingItemData*>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_1<::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_49473597FC37B6BC_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_923FE658D822C049(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_923FE658D822C049_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_704E401D1607FD5C(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action_3<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_3<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_704E401D1607FD5C_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_532B7A1A6F524DB6(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_532B7A1A6F524DB6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_483AD6797697620F(::RPG::Client::OpenWorld::StreamingItemData* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3, ::System::Boolean a4, ::UnityEngine::GameObject* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_483AD6797697620F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::Client::OpenWorld::StreamingItemData* Method_2_DA0AD41C12822C47(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_DA0AD41C12822C47_OFFSET))(this, a1);
	}

	::System::Void Method_2_45F50F1CAE2B6012(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*&))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_45F50F1CAE2B6012_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_2_F978A1D172468895_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_F978A1D172468895_1_OFFSET))(this);
	}

	::System::Void Method_2_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Method_2_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_2_68805403250CC013_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_68805403250CC013_1_OFFSET))(this);
	}

	::System::Void Method_2_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Collections::IEnumerator* __n__0()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86___N__0_OFFSET))(this);
	}
};
