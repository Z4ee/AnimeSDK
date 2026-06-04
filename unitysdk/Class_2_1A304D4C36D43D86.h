#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B228A4605C15E47.h"
#include "unitysdk/Class_1_5B228A4605C15E47_Struct_2_823833D588E72957.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemEnableReason.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/Struct_2_1A7849E5CC498A4A.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_303D5A33D1401D59;
class Class_1_64EA8B4AB59D91C7_3;
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

#define CLASS_2_1A304D4C36D43D86_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9BB820)
#define CLASS_2_1A304D4C36D43D86_INACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0xA9BADD0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_0F13125601E93F26_OFFSET UNITYSDK_OFFSET(0xA9C0340)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_119F45C49A6D0A61_OFFSET UNITYSDK_OFFSET(0xA9BF920)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_11B2C6F36390AF29_OFFSET UNITYSDK_OFFSET(0xA9BE900)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_13D98C8C9D23934F_OFFSET UNITYSDK_OFFSET(0xA9BDC50)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_154AD4071FEC5F1D_OFFSET UNITYSDK_OFFSET(0xA9BCD30)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_156625ADC25E8C2A_OFFSET UNITYSDK_OFFSET(0xA9BC200)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_1E06B324680942C9_OFFSET UNITYSDK_OFFSET(0xA9C00E0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_23518AEC407EDFAD_OFFSET UNITYSDK_OFFSET(0xA9C1F60)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xA9C13B0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_25455550D82928A3_OFFSET UNITYSDK_OFFSET(0xA9BFCC0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_26414D4AC911A4B9_OFFSET UNITYSDK_OFFSET(0xA9C2A00)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_29BF84096AA26534_OFFSET UNITYSDK_OFFSET(0xA9BF550)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0xA9B9950)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xA9B7960)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_336191B88D6215AE_OFFSET UNITYSDK_OFFSET(0xA9BEB80)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_39CB98ABCDE77C2D_OFFSET UNITYSDK_OFFSET(0xA9BE770)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_3D71DA8FE42B334A_OFFSET UNITYSDK_OFFSET(0xA9B7650)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_3DAE65FE08BE2E7F_OFFSET UNITYSDK_OFFSET(0xA9BD8C0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_3E07A0D16511A473_OFFSET UNITYSDK_OFFSET(0xA9B7C40)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xA9BB4C0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_3E8C166F58B80B39_OFFSET UNITYSDK_OFFSET(0xA9C29F0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_40C0226E18969F0F_OFFSET UNITYSDK_OFFSET(0xA9BAE60)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_45024F3EBCDBE192_OFFSET UNITYSDK_OFFSET(0xA9BD200)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_45D8204E9B464A50_OFFSET UNITYSDK_OFFSET(0xA9BCF60)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_4696C30EFE30E9E0_OFFSET UNITYSDK_OFFSET(0xA9BB0D0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_483AD6797697620F_OFFSET UNITYSDK_OFFSET(0xA9BD6A0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_49E578E7E0F43168_OFFSET UNITYSDK_OFFSET(0xA9BE9E0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xA9BBE10)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_52609DB5540CDD8E_OFFSET UNITYSDK_OFFSET(0xA9BF670)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_532B7A1A6F524DB6_OFFSET UNITYSDK_OFFSET(0xA9C1030)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_582F51A4651B72E4_OFFSET UNITYSDK_OFFSET(0xA9C0560)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0xA9BAAD0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0xA9C2930)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_68805403250CC013_1_OFFSET UNITYSDK_OFFSET(0xA9C2430)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_68805403250CC013_OFFSET UNITYSDK_OFFSET(0xA9BF060)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_6A10CEADDDE8DF24_OFFSET UNITYSDK_OFFSET(0xA9BDD90)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0xA9B9A20)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_704E401D1607FD5C_OFFSET UNITYSDK_OFFSET(0xA9C0CB0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_7574971BF8EF482D_OFFSET UNITYSDK_OFFSET(0xA9C29E0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_8071259A88106D66_OFFSET UNITYSDK_OFFSET(0xA9B7580)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0xA9BA810)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_8553D6F0E217F736_OFFSET UNITYSDK_OFFSET(0xA9BFF00)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_8E69D156D8B86563_OFFSET UNITYSDK_OFFSET(0xA9C1760)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_923FE658D822C049_OFFSET UNITYSDK_OFFSET(0xA9C1F00)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_953470A46D963D9F_OFFSET UNITYSDK_OFFSET(0xA9BAC50)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_991A758C40F99E2F_OFFSET UNITYSDK_OFFSET(0xA9C29D0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_9D4EC0959ED23C46_OFFSET UNITYSDK_OFFSET(0xA9BBFC0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0xA9C23D0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_A14A1EB3F7EFF137_OFFSET UNITYSDK_OFFSET(0xA9C2920)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_A37252E9DED8F54D_OFFSET UNITYSDK_OFFSET(0xA9C2BA0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_A8B662A2CC4B2F7D_OFFSET UNITYSDK_OFFSET(0xA9BC580)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0xA9BA630)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_AEB58E1F409F5141_OFFSET UNITYSDK_OFFSET(0xA9BAA60)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_AF521F0C094E25A3_OFFSET UNITYSDK_OFFSET(0xA9C2C20)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_B25D8B00CDE640ED_OFFSET UNITYSDK_OFFSET(0xA9BE0A0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_B54C6DFC93C2CB2C_OFFSET UNITYSDK_OFFSET(0xA9C1B50)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_B877A0E03A234239_OFFSET UNITYSDK_OFFSET(0xA9C2B80)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0xA9C2210)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_BC46FCF99873D9DD_OFFSET UNITYSDK_OFFSET(0xA9BC1B0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_BD3151512FEA4FC1_OFFSET UNITYSDK_OFFSET(0xA9C1AA0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_C35310DB91DD6546_OFFSET UNITYSDK_OFFSET(0xA9BB010)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_C5B0C59ED5AAA4D3_OFFSET UNITYSDK_OFFSET(0xA9C1480)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_C6E4770C1C679E23_1_OFFSET UNITYSDK_OFFSET(0xA9C2A90)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_C6E4770C1C679E23_OFFSET UNITYSDK_OFFSET(0xA9C2A20)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0xA9BCA00)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0xA9C2B20)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_CC47C44430A81C43_OFFSET UNITYSDK_OFFSET(0xA9BB380)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_CE7DD1A4F75322E2_OFFSET UNITYSDK_OFFSET(0xA9C2910)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_D489F3D943173A56_OFFSET UNITYSDK_OFFSET(0xA9BF380)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0xA9BF3F0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_DA0AD41C12822C47_OFFSET UNITYSDK_OFFSET(0xA9BD5E0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_DAE822828607EFDD_OFFSET UNITYSDK_OFFSET(0xA9BB510)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_DB4D2BAE2BB4B8D3_OFFSET UNITYSDK_OFFSET(0xA9BC160)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_DC703AC5AA81BFEE_OFFSET UNITYSDK_OFFSET(0xA9C04D0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_E14457E32A550619_OFFSET UNITYSDK_OFFSET(0xA9BC3A0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_E68009D77E995993_OFFSET UNITYSDK_OFFSET(0xA9B79F0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_EA7A88454F3B9CC8_OFFSET UNITYSDK_OFFSET(0xA9C2B90)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_EAAF18B27B7574F1_OFFSET UNITYSDK_OFFSET(0xA9C2B00)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_ED333B82239BB5B0_OFFSET UNITYSDK_OFFSET(0xA9BAB30)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_EE0E1065A480464A_OFFSET UNITYSDK_OFFSET(0xA9C2C30)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xA9BF370)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0xA9C1470)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA9BC570)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0xA9C18F0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_F985B5DB65161B2E_1_OFFSET UNITYSDK_OFFSET(0xA9BAD50)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_F985B5DB65161B2E_OFFSET UNITYSDK_OFFSET(0xA9BACD0)
#define CLASS_2_1A304D4C36D43D86__CCTOR_OFFSET UNITYSDK_OFFSET(0xA9C27A0)
#define CLASS_2_1A304D4C36D43D86__CTOR_OFFSET UNITYSDK_OFFSET(0xA9B8ED0)
#define CLASS_2_1A304D4C36D43D86___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9C2B10)
#define CLASS_2_1A304D4C36D43D86___IFIXBASEPROXY_INACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0xA9C2A10)
#define CLASS_2_1A304D4C36D43D86___N__0_OFFSET UNITYSDK_OFFSET(0xA9C2870)

inline static constexpr unsigned int Class_2_1A304D4C36D43D86_TypeDefinitionIndex = 68956;

class Class_2_1A304D4C36D43D86 : public ::Class_1_5B228A4605C15E47
{
public:
	static ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A304D4C36D43D86_TypeDefinitionIndex)->GetStaticField(0x48740);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_2_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A304D4C36D43D86_TypeDefinitionIndex)->GetStaticField(0x48748);
	}
	static ::System::String** StaticGet_Field_2_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A304D4C36D43D86_TypeDefinitionIndex)->GetStaticField(0x48750);
	}
	::System::Action_3<::UnityEngine::Object*, ::RPG::IReference*, ::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_3; // 0x170
	::System::Collections::Generic::HashSet_1<::UnityEngine::Animator*>* Field_2_4; // 0x178
	::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_5; // 0x180
	::System::Collections::Generic::HashSet_1<::Class_2_7CF36DB1DCE43BAF*>* Field_2_6; // 0x188
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*>* Field_2_7; // 0x190
	::System::Collections::Generic::List_1<::System::Action*>* Field_2_8; // 0x198
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_1<::RPG::Client::OpenWorld::StreamingItemData*>*>* Field_2_9; // 0x1A0
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* Field_2_10; // 0x1A8
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_3<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*>*>* Field_2_11; // 0x1B0
	::RPG::Client::OpenWorld::StreamingItemData* Field_2_12; // 0x1B8
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*>* Field_2_13; // 0x1C0
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_14; // 0x1C8
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* Field_2_15; // 0x1D0
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* Field_2_16; // 0x1D8
	::System::Collections::Generic::List_1<::UnityEngine::Animator*>* Field_2_17; // 0x1E0
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::UInt32>* Field_2_18; // 0x1E8
	::UnityEngine::GameObject* Field_2_19; // 0x1F0
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Object*>* Field_2_20; // 0x1F8
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_21; // 0x200
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* Field_2_22; // 0x208
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::ValueTuple_2<::System::String*, ::System::Int32>>* Field_2_23; // 0x210
	::System::Action* Field_2_24; // 0x218
	::System::Action_4<::RPG::IReference*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean>* Field_2_25; // 0x220
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::String*>* Field_2_26; // 0x228
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action*>* Field_2_27; // 0x230
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>*>* Field_2_28; // 0x238
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*>* Field_2_29; // 0x240
	::System::String* Field_2_30; // 0x248
	::System::Collections::Generic::List_1<::Class_2_7CF36DB1DCE43BAF*>* Field_2_31; // 0x250
	::UnityEngine::GameObject* Field_2_32; // 0x258
	::System::Collections::Generic::Dictionary_2<::Class_2_F2A6DFE115174D94*, ::Class_1_76597B0FC8DCAD88*>* Field_2_33; // 0x260
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_34; // 0x268
	::System::Int32 Field_2_35; // 0x270
	::System::Boolean Field_2_36; // 0x274
	::System::Boolean Field_2_37; // 0x275

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

	::System::Void Method_2_E68009D77E995993(::UnityEngine::Object* a1, ::RPG::IReference* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::RPG::IReference*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_E68009D77E995993_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Void Method_2_AEB58E1F409F5141(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_AEB58E1F409F5141_OFFSET))(this, a1);
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

	::System::Void Method_2_4696C30EFE30E9E0(::UnityEngine::GameObject* a1, ::RPG::GameCore::BlockNodeConfig* a2, ::Class_1_64EA8B4AB59D91C7_3* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::BlockNodeConfig*, ::Class_1_64EA8B4AB59D91C7_3*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_4696C30EFE30E9E0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CC47C44430A81C43(::UnityEngine::GameObject* a1, ::RPG::GameCore::BlockNodeConfig* a2, ::Class_1_64EA8B4AB59D91C7_3* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::BlockNodeConfig*, ::Class_1_64EA8B4AB59D91C7_3*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_CC47C44430A81C43_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_DAE822828607EFDD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_DAE822828607EFDD_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_9D4EC0959ED23C46(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_9D4EC0959ED23C46_OFFSET))(this, a1);
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

	::System::Void Method_2_E14457E32A550619(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_E14457E32A550619_OFFSET))(this, a1);
	}

	::System::Void Method_2_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_2_A8B662A2CC4B2F7D(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_A8B662A2CC4B2F7D_OFFSET))(this, a1);
	}

	::System::Void Method_2_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_C7BF9C1E6A78DCAB_OFFSET))(this);
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

	::System::Void Method_2_3D71DA8FE42B334A(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_3D71DA8FE42B334A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3DAE65FE08BE2E7F(::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_3DAE65FE08BE2E7F_OFFSET))(this, a1);
	}

	::System::Void Method_2_13D98C8C9D23934F(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_13D98C8C9D23934F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B25D8B00CDE640ED(::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_B25D8B00CDE640ED_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_39CB98ABCDE77C2D(::System::Action_1<::UnityEngine::Object*>* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Action_1<::UnityEngine::Object*>*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_39CB98ABCDE77C2D_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Object* Method_2_6A10CEADDDE8DF24(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_6A10CEADDDE8DF24_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_2_11B2C6F36390AF29(::System::Int32 a1, ::Struct_2_1A7849E5CC498A4A a2)
	{
		return ((::System::String*(*)(::System::Int32, ::Struct_2_1A7849E5CC498A4A))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_11B2C6F36390AF29_OFFSET))(a1, a2);
	}

	::System::Void Method_2_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_2_49E578E7E0F43168(::System::Collections::Generic::List_1<::Class_1_5B228A4605C15E47_Struct_2_823833D588E72957>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5B228A4605C15E47_Struct_2_823833D588E72957>*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_49E578E7E0F43168_OFFSET))(this, a1);
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

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
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

	::System::Void Method_2_0F13125601E93F26(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_0F13125601E93F26_OFFSET))(this, a1);
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

	::System::Boolean Method_2_B54C6DFC93C2CB2C(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action_1<::RPG::Client::OpenWorld::StreamingItemData*>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_1<::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_B54C6DFC93C2CB2C_OFFSET))(this, a1, a2, a3);
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

	::System::Void Method_2_23518AEC407EDFAD(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*&))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_23518AEC407EDFAD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_2_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_F978A1D172468895_OFFSET))(this);
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

	::System::Void Method_2_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Collections::IEnumerator* __n__0()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86___N__0_OFFSET))(this);
	}

	::System::Void Method_2_CE7DD1A4F75322E2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_CE7DD1A4F75322E2_OFFSET))(this);
	}

	::System::Void Method_2_A14A1EB3F7EFF137(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_A14A1EB3F7EFF137_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_2_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_627C7524E98F4AC5_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_991A758C40F99E2F(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_991A758C40F99E2F_OFFSET))(this, a1);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_7574971BF8EF482D(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_7574971BF8EF482D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_3E8C166F58B80B39(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_3E8C166F58B80B39_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_26414D4AC911A4B9(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_26414D4AC911A4B9_OFFSET))(this, a1, a2);
	}

	::System::Boolean __iFixBaseProxy_InActiveInstance(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86___IFIXBASEPROXY_INACTIVEINSTANCE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C6E4770C1C679E23(::UnityEngine::GameObject* a1, ::RPG::GameCore::BlockNodeConfig* a2, ::Class_1_64EA8B4AB59D91C7_3* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::BlockNodeConfig*, ::Class_1_64EA8B4AB59D91C7_3*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_C6E4770C1C679E23_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_C6E4770C1C679E23_1(::UnityEngine::GameObject* a1, ::RPG::GameCore::BlockNodeConfig* a2, ::Class_1_64EA8B4AB59D91C7_3* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::BlockNodeConfig*, ::Class_1_64EA8B4AB59D91C7_3*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_C6E4770C1C679E23_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_EAAF18B27B7574F1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_EAAF18B27B7574F1_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_C91E5170F9E36EED_OFFSET))(this, a1);
	}

	::System::Void Method_2_B877A0E03A234239(::System::Collections::Generic::List_1<::Class_1_5B228A4605C15E47_Struct_2_823833D588E72957>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5B228A4605C15E47_Struct_2_823833D588E72957>*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_B877A0E03A234239_OFFSET))(this, a1);
	}

	::System::Void Method_2_EA7A88454F3B9CC8(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2, ::System::Boolean a3, ::RPG::Client::OpenWorld::StreamingItemEnableReason a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemEnableReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_EA7A88454F3B9CC8_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_2_A37252E9DED8F54D(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_A37252E9DED8F54D_OFFSET))(this, a1);
	}

	::System::Void Method_2_AF521F0C094E25A3(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_AF521F0C094E25A3_OFFSET))(this, a1);
	}

	::System::Void Method_2_EE0E1065A480464A(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_EE0E1065A480464A_OFFSET))(this, a1);
	}
};
