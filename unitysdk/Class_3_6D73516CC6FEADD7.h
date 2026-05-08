#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_298E954BC26AE9BA_Struct_2_4F51CF67323EB580.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_6D73516CC6FEADD7_Enum_3_348EBFA8E377BA6C.h"
#include "unitysdk/Class_3_6D73516CC6FEADD7_Struct_2_932CD6F049D35738.h"
#include "unitysdk/Enum_3_4A4C0A974BEEA403.h"
#include "unitysdk/MoleMole/AIBattleState.h"
#include "unitysdk/MoleMole/AttackType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_3.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_01F5FBA9D3CACA7D;
class Class_1_04D2D5A24B84A434;
class Class_1_7B7970D0E94833DA;
namespace BehaviorDesigner::Runtime { class Behavior; }
namespace BehaviorDesigner::Runtime { class BehaviorTree; }
namespace BehaviorDesigner::Runtime { class Behavior_BehaviorHandler; }
namespace BehaviorDesigner::Runtime { class ExternalBehavior; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }
namespace BehaviorDesigner::Runtime { template <typename T> class SharedVariable_1; }
namespace BehaviorDesigner::Runtime::Tasks { class GameObjectGetter; }
namespace MoleMole::Battle { class CharacterAIWatcher; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define CLASS_3_6D73516CC6FEADD7_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1009C7E0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x108D04F0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_11FD5E7B5A13A46A_OFFSET UNITYSDK_OFFSET(0x108D01A0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_136978F885E44C40_OFFSET UNITYSDK_OFFSET(0x108D0BE0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x108D0350)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x108D06D0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_1D73757FFA017011_OFFSET UNITYSDK_OFFSET(0x1009F270)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x1009CDB0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x1009CEA0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_29916FED627CAAE0_OFFSET UNITYSDK_OFFSET(0x108D0740)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1009CCE0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_34F45508C5399CD3_OFFSET UNITYSDK_OFFSET(0x1009E890)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x1009D9E0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x108D0CC0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_3BA954CB9C33801A_OFFSET UNITYSDK_OFFSET(0x1009CF70)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_52FB29FB5E593F19_OFFSET UNITYSDK_OFFSET(0x108D0D60)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x108D0440)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_5898D3DF8EE923EA_OFFSET UNITYSDK_OFFSET(0x1009DA50)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0x1009E360)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_5D4B98864458BB8A_OFFSET UNITYSDK_OFFSET(0x1009CD90)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_7257F0F5AA2A2054_OFFSET UNITYSDK_OFFSET(0x1009E520)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_798ED358743E6419_OFFSET UNITYSDK_OFFSET(0x10092620)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0x1009C5B0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_8062CA343C4496F6_OFFSET UNITYSDK_OFFSET(0x108D0490)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_8072FA00A6D45F0C_OFFSET UNITYSDK_OFFSET(0x1009E190)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_81ECA572D1FBB77F_OFFSET UNITYSDK_OFFSET(0x108D0AD0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x1009E750)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_87643565312AC036_OFFSET UNITYSDK_OFFSET(0x108D03F0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_877C29BF8B4318B3_OFFSET UNITYSDK_OFFSET(0x1009C9E0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_911CFE5F675ED7A9_OFFSET UNITYSDK_OFFSET(0x108D04D0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_99C0D707268417A8_OFFSET UNITYSDK_OFFSET(0x1009E180)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x1009E700)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1009D940)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_A2B9547CC0AA88F9_OFFSET UNITYSDK_OFFSET(0x1009DA60)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_A8518C4D4078676C_OFFSET UNITYSDK_OFFSET(0x1009D900)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_AA18443F042C7418_OFFSET UNITYSDK_OFFSET(0x1009E880)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_AC90FF53F652AF1A_OFFSET UNITYSDK_OFFSET(0x1009D030)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_B21F7A04DB0BB264_OFFSET UNITYSDK_OFFSET(0x108D0B60)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x108D0460)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1009C9C0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_C51CB09A28EC4C2A_OFFSET UNITYSDK_OFFSET(0x1009F080)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x108D0190)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_C74CF020AA42ED85_2_OFFSET UNITYSDK_OFFSET(0x108D04A0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_C74CF020AA42ED85_3_OFFSET UNITYSDK_OFFSET(0x108D0B50)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1009F260)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1009DCE0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x108D0450)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0x108D0470)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_C74E50CBD41F0264_4_OFFSET UNITYSDK_OFFSET(0x108D04E0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_C74E50CBD41F0264_5_OFFSET UNITYSDK_OFFSET(0x108D0AC0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1009D9D0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x108D0D10)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x1009F290)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1009DCF0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_E152555CD53A64B7_OFFSET UNITYSDK_OFFSET(0x1009C9F0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x108D04C0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_EE41576811545EB0_OFFSET UNITYSDK_OFFSET(0x108D02E0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1009CDA0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1009E6F0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x1009F280)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x108D0480)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0x108D04B0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_F0088C88851A7DFB_6_OFFSET UNITYSDK_OFFSET(0x108D0CB0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1009C9D0)
#define CLASS_3_6D73516CC6FEADD7_METHOD_3_FECE9637CA0C28E8_OFFSET UNITYSDK_OFFSET(0x1009DD70)
#define CLASS_3_6D73516CC6FEADD7_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1009C2E0)
#define CLASS_3_6D73516CC6FEADD7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1009C830)
#define CLASS_3_6D73516CC6FEADD7__CTOR_OFFSET UNITYSDK_OFFSET(0x1009C8C0)

inline static constexpr unsigned int Class_3_6D73516CC6FEADD7_TypeDefinitionIndex = 40308;

class Class_3_6D73516CC6FEADD7 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Boolean* StaticGet_Field_3_42()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_6D73516CC6FEADD7_TypeDefinitionIndex)->GetStaticField(0xA1C0);
	}
	// static const ::System::Int32 Field_3_47 = 0xF; // 0x0
	::Struct_2_FA5F50563E60AFBA Field_3_8; // 0x48
	::Class_1_01F5FBA9D3CACA7D* Field_3_2; // 0x60
	::MoleMole::Battle::CharacterAIWatcher* Field_3_7; // 0x68
	::BehaviorDesigner::Runtime::Behavior_BehaviorHandler* Field_3_29; // 0x70
	::BehaviorDesigner::Runtime::BehaviorTree* Field_3_12; // 0x78
	::Class_1_298E954BC26AE9BA_Struct_2_4F51CF67323EB580 Field_3_5; // 0x80
	::Class_1_04D2D5A24B84A434* Field_3_39; // 0xC0
	::System::Action_3<::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32>* Field_3_27; // 0xC8
	::System::Action* Field_3_28; // 0xD0
	::System::Collections::Generic::List_1<::Class_3_6D73516CC6FEADD7_Struct_2_932CD6F049D35738>* Field_3_46; // 0xD8
	::BehaviorDesigner::Runtime::ExternalBehavior* Field_3_9; // 0xE0
	::BehaviorDesigner::Runtime::Tasks::GameObjectGetter* Field_3_36; // 0xE8
	::System::Collections::Generic::List_1<::Class_1_7B7970D0E94833DA*>* Field_3_34; // 0xF0
	::Class_3_6D73516CC6FEADD7_Enum_3_348EBFA8E377BA6C Field_3_1; // 0xF8
	::System::Int32 Field_3_44; // 0xFC
	::MoleMole::AttackType Field_3_21; // 0x100
	::System::Int32 Field_3_3; // 0x104
	::System::Single Field_3_33; // 0x108
	::System::Int32 Field_3_43; // 0x10C
	::MoleMole::AttackType Field_3_20; // 0x110
	::System::Boolean Field_3_17; // 0x114
	::System::Boolean Field_3_22; // 0x115
	::System::Boolean Field_3_15; // 0x116
	::System::Boolean Field_3_40; // 0x117
	::System::Int32 Field_3_13; // 0x118
	::System::Int32 Field_3_4; // 0x11C
	::System::Single Field_3_25; // 0x120
	::System::Boolean Field_3_6; // 0x124
	::System::Boolean Field_3_16; // 0x125
	::System::Boolean Field_3_30; // 0x126
	::Struct_2_B6A3FA7992F9F37E_3 Field_3_41; // 0x127
	::System::Single Field_3_23; // 0x12C
	::MoleMole::AttackType Field_3_26; // 0x130
	::MoleMole::AttackType Field_3_24; // 0x134
	::System::Single Field_3_11; // 0x138
	::System::Int64 Field_3_19; // 0x140
	::MoleMole::AIBattleState Field_3_14; // 0x148
	::System::UInt32 Field_3_45; // 0x14C
	::System::Int32 Field_3_37; // 0x150
	::System::Single Field_3_31; // 0x154
	::System::Boolean Field_3_18; // 0x158
	::System::Boolean Field_3_35; // 0x159
	::System::Boolean Field_3_38; // 0x15A
	::System::Int32 Field_3_10; // 0x15C
	::System::Single Field_3_32; // 0x160
	::System::UInt32 Field_3_0; // 0x164

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::BehaviorDesigner::Runtime::Tasks::GameObjectGetter* Method_3_877C29BF8B4318B3()
	{
		return ((::BehaviorDesigner::Runtime::Tasks::GameObjectGetter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_877C29BF8B4318B3_OFFSET))(this);
	}

	static ::System::Void Method_3_E152555CD53A64B7(::MoleMole::EntityHandle a1, ::System::Action_2<::System::UInt32, ::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_E152555CD53A64B7_OFFSET))(a1, a2);
	}

	::System::Void Method_3_5D4B98864458BB8A(::MoleMole::Battle::CharacterAIWatcher* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::CharacterAIWatcher*))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_5D4B98864458BB8A_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_3_798ED358743E6419(::System::UInt32 a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_798ED358743E6419_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_3_3BA954CB9C33801A(::Class_3_6D73516CC6FEADD7_Struct_2_932CD6F049D35738 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_6D73516CC6FEADD7_Struct_2_932CD6F049D35738))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_3BA954CB9C33801A_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_AC90FF53F652AF1A(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_AC90FF53F652AF1A_OFFSET))(a1);
	}

	static ::System::Void Method_3_A8518C4D4078676C(::Class_3_6D73516CC6FEADD7* a1)
	{
		return ((::System::Void(*)(::Class_3_6D73516CC6FEADD7*))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_A8518C4D4078676C_OFFSET))(a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::String* Method_3_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::BehaviorDesigner::Runtime::BehaviorTree* Method_3_5898D3DF8EE923EA()
	{
		return ((::BehaviorDesigner::Runtime::BehaviorTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_5898D3DF8EE923EA_OFFSET))(this);
	}

	::System::Void Method_3_A2B9547CC0AA88F9(::BehaviorDesigner::Runtime::BehaviorTree* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorTree*))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_A2B9547CC0AA88F9_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_7A73F165001BC325()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_7A73F165001BC325_OFFSET))(this);
	}

	static ::Class_3_6D73516CC6FEADD7* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_6D73516CC6FEADD7*(*)())((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	static ::System::Void Method_3_FECE9637CA0C28E8(::MoleMole::EntityHandle a1, ::BehaviorDesigner::Runtime::ExternalBehavior* a2, ::System::Action_2<::System::UInt32, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::BehaviorDesigner::Runtime::ExternalBehavior*, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_FECE9637CA0C28E8_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_99C0D707268417A8(::BehaviorDesigner::Runtime::Tasks::GameObjectGetter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::GameObjectGetter*))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_99C0D707268417A8_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_8072FA00A6D45F0C(::BehaviorDesigner::Runtime::Behavior* a1, ::MoleMole::EntityHandle a2)
	{
		return ((::System::Void(*)(::BehaviorDesigner::Runtime::Behavior*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_8072FA00A6D45F0C_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_595E641DF1B4387D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_595E641DF1B4387D_OFFSET))(this);
	}

	::System::Void Method_3_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::BehaviorDesigner::Runtime::SharedVariable* Method_3_7257F0F5AA2A2054(::System::String* a1)
	{
		return ((::BehaviorDesigner::Runtime::SharedVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_7257F0F5AA2A2054_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_A1D8CD775DEC3C21_1_OFFSET))(this);
	}

	::System::Void Method_3_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_289F28027FF47717_OFFSET))(this);
	}

	::System::Boolean Method_3_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Void Method_3_AA18443F042C7418(::Class_3_6D73516CC6FEADD7_Enum_3_348EBFA8E377BA6C a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6D73516CC6FEADD7_Enum_3_348EBFA8E377BA6C))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_AA18443F042C7418_OFFSET))(this, a1);
	}

	::System::Void Method_3_34F45508C5399CD3(::System::Boolean a1, ::System::Action_2<::System::UInt32, ::System::Boolean>* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action_2<::System::UInt32, ::System::Boolean>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_34F45508C5399CD3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_C51CB09A28EC4C2A(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_C51CB09A28EC4C2A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_3_1D73757FFA017011(::MoleMole::AIBattleState a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::AIBattleState))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_1D73757FFA017011_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_3_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_3_11FD5E7B5A13A46A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_11FD5E7B5A13A46A_OFFSET))(this, a1);
	}

	::System::Void Method_3_EE41576811545EB0(::Class_3_6D73516CC6FEADD7_Enum_3_348EBFA8E377BA6C a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6D73516CC6FEADD7_Enum_3_348EBFA8E377BA6C))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_EE41576811545EB0_OFFSET))(this, a1);
	}

	::System::Void Method_3_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_3_87643565312AC036(::System::Text::StringBuilder* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_87643565312AC036_OFFSET))(this, a1);
	}

	::System::Single Method_3_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Void Method_3_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_F0088C88851A7DFB_4_OFFSET))(this);
	}

	::MoleMole::AIBattleState Method_3_8062CA343C4496F6()
	{
		return ((::MoleMole::AIBattleState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_8062CA343C4496F6_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_C74CF020AA42ED85_2_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_F0088C88851A7DFB_5_OFFSET))(this);
	}

	::System::Void Method_3_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::MoleMole::Battle::CharacterAIWatcher* Method_3_911CFE5F675ED7A9()
	{
		return ((::MoleMole::Battle::CharacterAIWatcher*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_911CFE5F675ED7A9_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264_4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_C74E50CBD41F0264_4_OFFSET))(this, a1);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_0865E94460F11643_OFFSET))(this);
	}

	static ::System::Void Method_3_29916FED627CAAE0(::MoleMole::EntityHandle a1, ::BehaviorDesigner::Runtime::ExternalBehavior* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::BehaviorDesigner::Runtime::ExternalBehavior*))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_29916FED627CAAE0_OFFSET))(a1, a2);
	}

	::System::Void Method_3_C74E50CBD41F0264_5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_C74E50CBD41F0264_5_OFFSET))(this, a1);
	}

	::System::Void Method_3_81ECA572D1FBB77F(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_81ECA572D1FBB77F_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_C74CF020AA42ED85_3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_C74CF020AA42ED85_3_OFFSET))(this);
	}

	::System::Boolean Method_3_B21F7A04DB0BB264(::System::Boolean a1, ::Enum_3_4A4C0A974BEEA403 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::Enum_3_4A4C0A974BEEA403))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_B21F7A04DB0BB264_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_136978F885E44C40(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_136978F885E44C40_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_F0088C88851A7DFB_6_OFFSET))(this);
	}

	::System::Boolean Method_3_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::Class_3_6D73516CC6FEADD7_Enum_3_348EBFA8E377BA6C Method_3_52FB29FB5E593F19()
	{
		return ((::Class_3_6D73516CC6FEADD7_Enum_3_348EBFA8E377BA6C(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_METHOD_3_52FB29FB5E593F19_OFFSET))(this);
	}
};
