#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E7175D70942CF05A.h"
#include "unitysdk/Class_1_E7175D70942CF05A_Struct_2_823833D588E72957.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemEnableReason.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/Struct_2_E31305FAF4D542A3.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_303D5A33D1401D59;
class Class_1_64EA8B4AB59D91C7;
class Class_1_76597B0FC8DCAD88;
class Class_1_8A6989C352B0F0F0;
class Class_1_D70A30D666F20D90;
class Class_2_7CF36DB1DCE43BAF;
class Class_2_BEEE2DF546917092;
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

#define CLASS_2_1A304D4C36D43D86_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16DCDD10)
#define CLASS_2_1A304D4C36D43D86_INACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x16DCD340)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_0594FBEB242F8BAA_OFFSET UNITYSDK_OFFSET(0x16DC9800)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_119F45C49A6D0A61_OFFSET UNITYSDK_OFFSET(0x16DD1FC0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_11B2C6F36390AF29_OFFSET UNITYSDK_OFFSET(0x16DD0FB0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_13D98C8C9D23934F_OFFSET UNITYSDK_OFFSET(0x16DD0230)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_154AD4071FEC5F1D_OFFSET UNITYSDK_OFFSET(0x16DCF310)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_156625ADC25E8C2A_OFFSET UNITYSDK_OFFSET(0x16DCE7A0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_1E06B324680942C9_OFFSET UNITYSDK_OFFSET(0x16DD2780)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_23518AEC407EDFAD_OFFSET UNITYSDK_OFFSET(0x16DD4690)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x16DD3AD0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_25455550D82928A3_OFFSET UNITYSDK_OFFSET(0x16DD2360)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_29BF84096AA26534_OFFSET UNITYSDK_OFFSET(0x16DD1BF0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x16DCBE00)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16DC9B50)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_336191B88D6215AE_OFFSET UNITYSDK_OFFSET(0x16DD1230)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_39CB98ABCDE77C2D_OFFSET UNITYSDK_OFFSET(0x16DD0DB0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_3DAE65FE08BE2E7F_OFFSET UNITYSDK_OFFSET(0x16DCFEA0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_3E07A0D16511A473_OFFSET UNITYSDK_OFFSET(0x16DCA140)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x16DCD9B0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_40C0226E18969F0F_OFFSET UNITYSDK_OFFSET(0x16DCD3D0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_45024F3EBCDBE192_OFFSET UNITYSDK_OFFSET(0x16DCF7E0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_45D8204E9B464A50_OFFSET UNITYSDK_OFFSET(0x16DCF540)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_4696C30EFE30E9E0_OFFSET UNITYSDK_OFFSET(0x16DCD640)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_483AD6797697620F_OFFSET UNITYSDK_OFFSET(0x16DCFC80)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_49E578E7E0F43168_OFFSET UNITYSDK_OFFSET(0x16DD1090)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_52609DB5540CDD8E_OFFSET UNITYSDK_OFFSET(0x16DD1D10)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_532B7A1A6F524DB6_OFFSET UNITYSDK_OFFSET(0x16DD3750)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_582F51A4651B72E4_OFFSET UNITYSDK_OFFSET(0x16DD2CA0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0x16DCD030)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_68805403250CC013_1_OFFSET UNITYSDK_OFFSET(0x16DD4B70)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_68805403250CC013_OFFSET UNITYSDK_OFFSET(0x16DD1700)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x16DCBED0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_704E401D1607FD5C_OFFSET UNITYSDK_OFFSET(0x16DD33D0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_8071259A88106D66_OFFSET UNITYSDK_OFFSET(0x16DC9730)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x16DCCD70)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_8553D6F0E217F736_OFFSET UNITYSDK_OFFSET(0x16DD25A0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_8B36DE7DBCA8D923_OFFSET UNITYSDK_OFFSET(0x16DCCFC0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_8D68E1C80950460F_OFFSET UNITYSDK_OFFSET(0x16DD29E0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_8E69D156D8B86563_OFFSET UNITYSDK_OFFSET(0x16DD3E90)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_923FE658D822C049_OFFSET UNITYSDK_OFFSET(0x16DD4630)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_953470A46D963D9F_OFFSET UNITYSDK_OFFSET(0x16DCD1C0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_9D4EC0959ED23C46_OFFSET UNITYSDK_OFFSET(0x16DCE560)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x16DD4B10)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_A8B662A2CC4B2F7D_OFFSET UNITYSDK_OFFSET(0x16DCEB20)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x16DCCB90)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_ABD146C4FADF6A8C_OFFSET UNITYSDK_OFFSET(0x16DCD8F0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x16DD1A90)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_B25D8B00CDE640ED_OFFSET UNITYSDK_OFFSET(0x16DD06E0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_B54C6DFC93C2CB2C_OFFSET UNITYSDK_OFFSET(0x16DD4280)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x16DD4940)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_BC46FCF99873D9DD_OFFSET UNITYSDK_OFFSET(0x16DCE750)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_BD3151512FEA4FC1_OFFSET UNITYSDK_OFFSET(0x16DD41D0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_C2B9A79E3814CC0C_OFFSET UNITYSDK_OFFSET(0x16DC9BE0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_C35310DB91DD6546_OFFSET UNITYSDK_OFFSET(0x16DCD580)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_C5B0C59ED5AAA4D3_OFFSET UNITYSDK_OFFSET(0x16DD3BA0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_D489F3D943173A56_OFFSET UNITYSDK_OFFSET(0x16DD1A20)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_DA0AD41C12822C47_OFFSET UNITYSDK_OFFSET(0x16DCFBC0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_DAE822828607EFDD_OFFSET UNITYSDK_OFFSET(0x16DCDA00)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_DB4D2BAE2BB4B8D3_OFFSET UNITYSDK_OFFSET(0x16DCE700)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_DC703AC5AA81BFEE_OFFSET UNITYSDK_OFFSET(0x16DD2C10)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_DF37904DEA587952_OFFSET UNITYSDK_OFFSET(0x16DD0360)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_E14457E32A550619_OFFSET UNITYSDK_OFFSET(0x16DCE940)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0x16DCEFA0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_ED333B82239BB5B0_OFFSET UNITYSDK_OFFSET(0x16DCD0A0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x16DD1A10)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x16DD3B90)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16DCEB10)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_F978A1D172468895_1_OFFSET UNITYSDK_OFFSET(0x16DD4020)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x16DCE340)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_F985B5DB65161B2E_1_OFFSET UNITYSDK_OFFSET(0x16DCD2C0)
#define CLASS_2_1A304D4C36D43D86_METHOD_2_F985B5DB65161B2E_OFFSET UNITYSDK_OFFSET(0x16DCD240)
#define CLASS_2_1A304D4C36D43D86__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DD4EE0)
#define CLASS_2_1A304D4C36D43D86__CTOR_OFFSET UNITYSDK_OFFSET(0x16DCB380)
#define CLASS_2_1A304D4C36D43D86___N__0_OFFSET UNITYSDK_OFFSET(0x16DD4FB0)

inline static constexpr unsigned int Class_2_1A304D4C36D43D86_TypeDefinitionIndex = 70483;

class Class_2_1A304D4C36D43D86 : public ::Class_1_E7175D70942CF05A
{
public:
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A304D4C36D43D86_TypeDefinitionIndex)->GetStaticField(0x434C0);
	}
	static ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>** StaticGet_Field_2_1()
	{
		return (::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A304D4C36D43D86_TypeDefinitionIndex)->GetStaticField(0x434C8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_2_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A304D4C36D43D86_TypeDefinitionIndex)->GetStaticField(0x434D0);
	}
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* Field_2_3; // 0x170
	::UnityEngine::GameObject* Field_2_4; // 0x178
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Object*>* Field_2_5; // 0x180
	::System::Collections::Generic::HashSet_1<::Class_2_7CF36DB1DCE43BAF*>* Field_2_6; // 0x188
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_3<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*>*>* Field_2_7; // 0x190
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*>* Field_2_8; // 0x198
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* Field_2_9; // 0x1A0
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_10; // 0x1A8
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_11; // 0x1B0
	::System::Collections::Generic::List_1<::System::Action*>* Field_2_12; // 0x1B8
	::System::Action* Field_2_13; // 0x1C0
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>*>* Field_2_14; // 0x1C8
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::String*>* Field_2_15; // 0x1D0
	::System::String* Field_2_16; // 0x1D8
	::System::Action_4<::RPG::IReference*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean>* Field_2_17; // 0x1E0
	::System::Action_3<::UnityEngine::Object*, ::RPG::IReference*, ::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_18; // 0x1E8
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::ValueTuple_2<::System::String*, ::System::Int32>>* Field_2_19; // 0x1F0
	::System::Collections::Generic::List_1<::UnityEngine::Animator*>* Field_2_20; // 0x1F8
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*>* Field_2_21; // 0x200
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_1<::RPG::Client::OpenWorld::StreamingItemData*>*>* Field_2_22; // 0x208
	::System::Collections::Generic::HashSet_1<::UnityEngine::Animator*>* Field_2_23; // 0x210
	::RPG::Client::OpenWorld::StreamingItemData* Field_2_24; // 0x218
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* Field_2_25; // 0x220
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action*>* Field_2_26; // 0x228
	::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_27; // 0x230
	::System::Collections::Generic::Dictionary_2<::Class_2_BEEE2DF546917092*, ::Class_1_76597B0FC8DCAD88*>* Field_2_28; // 0x238
	::System::Collections::Generic::List_1<::Class_2_7CF36DB1DCE43BAF*>* Field_2_29; // 0x240
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_30; // 0x248
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*>* Field_2_31; // 0x250
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::UInt32>* Field_2_32; // 0x258
	::UnityEngine::GameObject* Field_2_33; // 0x260
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* Field_2_34; // 0x268
	::System::Boolean Field_2_35; // 0x270
	::System::Boolean Field_2_36; // 0x271
	::System::Int32 Field_2_37; // 0x274

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

	::System::Void Method_2_C2B9A79E3814CC0C(::UnityEngine::Object* a1, ::RPG::IReference* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::RPG::IReference*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_C2B9A79E3814CC0C_OFFSET))(this, a1, a2, a3);
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

	::System::Void Method_2_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_EAC2737A96E071C9_OFFSET))(this);
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

	::UnityEngine::Object* Method_2_DF37904DEA587952(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_DF37904DEA587952_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_2_11B2C6F36390AF29(::System::Int32 a1, ::Struct_2_E31305FAF4D542A3 a2)
	{
		return ((::System::String*(*)(::System::Int32, ::Struct_2_E31305FAF4D542A3))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86_METHOD_2_11B2C6F36390AF29_OFFSET))(a1, a2);
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
