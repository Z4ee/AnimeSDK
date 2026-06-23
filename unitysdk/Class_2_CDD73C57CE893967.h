#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/Class_1_7B7970D0E94833DA.h"
#include "unitysdk/MoleMole/AIMoveTargetType.h"
#include "unitysdk/MoleMole/BaseMove_AIMoveTargetState.h"
#include "unitysdk/MoleMole/BaseMove_AroundAxis.h"
#include "unitysdk/MoleMole/BaseMove_AroundUpdateMode.h"
#include "unitysdk/MoleMole/BaseMove_EAroundMoveMode.h"
#include "unitysdk/MoleMole/BaseMove_MoveDirectionMode.h"
#include "unitysdk/MoleMole/BaseMove_TypeOfAngleCheck.h"
#include "unitysdk/MoleMole/Config/BaseMoveType.h"
#include "unitysdk/MoleMole/Config/Boolean.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_0D4C1A014C7CC9DE;
class Class_3_3B42BC0680587011;
class Class_3_883E597458B91E77;
class Class_3_AA6DF3A878195D3F;
class Class_3_B8F2A25A5ADF5CEE;
class Class_3_CF6254B260CF5CF4;
class Class_3_D2084E0C2DD39509;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_E2819F45333A39BF;
class Class_3_F33F9DC5F4112336;
namespace BehaviorDesigner::Runtime { class Behavior; }
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }
namespace MoleMole { class AnimatorBlendData; }
namespace MoleMole { class AnimatorBlendGroup; }
namespace MoleMole { class AnimatorClipBlendData; }
namespace MoleMole { class SkillCharacterScriptConfig; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_CDD73C57CE893967_METHOD_2_00E3D7170ACACB7C_OFFSET UNITYSDK_OFFSET(0x1314AC90)
#define CLASS_2_CDD73C57CE893967_METHOD_2_064D10072154189E_OFFSET UNITYSDK_OFFSET(0x1314FCF0)
#define CLASS_2_CDD73C57CE893967_METHOD_2_0CEB05754D11A614_OFFSET UNITYSDK_OFFSET(0x1314B3A0)
#define CLASS_2_CDD73C57CE893967_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x13147A00)
#define CLASS_2_CDD73C57CE893967_METHOD_2_1C4DCEC4A71E9244_OFFSET UNITYSDK_OFFSET(0x13152850)
#define CLASS_2_CDD73C57CE893967_METHOD_2_294F490B2CEBCC1C_OFFSET UNITYSDK_OFFSET(0x1314DA80)
#define CLASS_2_CDD73C57CE893967_METHOD_2_2D395C7930DAC706_OFFSET UNITYSDK_OFFSET(0x13150EB0)
#define CLASS_2_CDD73C57CE893967_METHOD_2_311C27EC07E88B49_OFFSET UNITYSDK_OFFSET(0x1314F1E0)
#define CLASS_2_CDD73C57CE893967_METHOD_2_33B051CEFE80EDA5_OFFSET UNITYSDK_OFFSET(0x1314FEE0)
#define CLASS_2_CDD73C57CE893967_METHOD_2_36E51BE72B938C51_OFFSET UNITYSDK_OFFSET(0x13149980)
#define CLASS_2_CDD73C57CE893967_METHOD_2_40AD8CBEA26F6013_OFFSET UNITYSDK_OFFSET(0x1314A890)
#define CLASS_2_CDD73C57CE893967_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x1314ADD0)
#define CLASS_2_CDD73C57CE893967_METHOD_2_567125FFEE5CEBB7_OFFSET UNITYSDK_OFFSET(0x131513B0)
#define CLASS_2_CDD73C57CE893967_METHOD_2_570C5557A774C69E_OFFSET UNITYSDK_OFFSET(0x1314B320)
#define CLASS_2_CDD73C57CE893967_METHOD_2_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0x13149E10)
#define CLASS_2_CDD73C57CE893967_METHOD_2_63DD54D020E55AF8_OFFSET UNITYSDK_OFFSET(0x1314F290)
#define CLASS_2_CDD73C57CE893967_METHOD_2_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x13150A70)
#define CLASS_2_CDD73C57CE893967_METHOD_2_68F506C518414411_OFFSET UNITYSDK_OFFSET(0x1314DE00)
#define CLASS_2_CDD73C57CE893967_METHOD_2_6A449EE7DEEFA8A1_OFFSET UNITYSDK_OFFSET(0x1314FFF0)
#define CLASS_2_CDD73C57CE893967_METHOD_2_80EDB333FC4313FD_OFFSET UNITYSDK_OFFSET(0x13149FC0)
#define CLASS_2_CDD73C57CE893967_METHOD_2_875D1126E981E1FC_OFFSET UNITYSDK_OFFSET(0x131508D0)
#define CLASS_2_CDD73C57CE893967_METHOD_2_88D8701574474117_OFFSET UNITYSDK_OFFSET(0x131507D0)
#define CLASS_2_CDD73C57CE893967_METHOD_2_92CDC81783DABA21_OFFSET UNITYSDK_OFFSET(0x1314E4A0)
#define CLASS_2_CDD73C57CE893967_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x13150E00)
#define CLASS_2_CDD73C57CE893967_METHOD_2_9F5C6C01EA6E48C4_OFFSET UNITYSDK_OFFSET(0x1314B140)
#define CLASS_2_CDD73C57CE893967_METHOD_2_A538D7DBA7BF5017_OFFSET UNITYSDK_OFFSET(0x13149D90)
#define CLASS_2_CDD73C57CE893967_METHOD_2_AE395AF1641E8C51_OFFSET UNITYSDK_OFFSET(0x1314C830)
#define CLASS_2_CDD73C57CE893967_METHOD_2_AFC4F0A8F621F288_1_OFFSET UNITYSDK_OFFSET(0x1314F5B0)
#define CLASS_2_CDD73C57CE893967_METHOD_2_AFC4F0A8F621F288_OFFSET UNITYSDK_OFFSET(0x1314F910)
#define CLASS_2_CDD73C57CE893967_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x13147950)
#define CLASS_2_CDD73C57CE893967_METHOD_2_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x13147A70)
#define CLASS_2_CDD73C57CE893967_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13152900)
#define CLASS_2_CDD73C57CE893967_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x13149B40)
#define CLASS_2_CDD73C57CE893967_METHOD_2_EB30CC757ECBA731_OFFSET UNITYSDK_OFFSET(0x1314DB30)
#define CLASS_2_CDD73C57CE893967_METHOD_2_F268ECD9F98A9FD1_OFFSET UNITYSDK_OFFSET(0x1314FF50)
#define CLASS_2_CDD73C57CE893967_METHOD_2_F605990E89CC5EF5_OFFSET UNITYSDK_OFFSET(0x131521F0)
#define CLASS_2_CDD73C57CE893967__CTOR_OFFSET UNITYSDK_OFFSET(0x1314F0A0)

inline static constexpr unsigned int Class_2_CDD73C57CE893967_TypeDefinitionIndex = 64631;

class Class_2_CDD73C57CE893967 : public ::Class_1_7B7970D0E94833DA
{
public:
	::BehaviorDesigner::Runtime::SharedString* Field_2_30; // 0x28
	::System::String* Field_2_14; // 0x30
	::Class_3_B8F2A25A5ADF5CEE* Field_2_0; // 0x38
	::System::String* Field_2_18; // 0x40
	::MoleMole::SkillCharacterScriptConfig* Field_2_65; // 0x48
	::System::String* Field_2_31; // 0x50
	::Class_3_D2084E0C2DD39509* Field_2_8; // 0x58
	::Class_3_AA6DF3A878195D3F* Field_2_6; // 0x60
	::System::String* Field_2_12; // 0x68
	::Class_3_E2819F45333A39BF* Field_2_1; // 0x70
	::BehaviorDesigner::Runtime::SharedVariable* Field_2_94; // 0x78
	::Class_3_3B42BC0680587011* Field_2_5; // 0x80
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_91; // 0x88
	::BehaviorDesigner::Runtime::SharedVariable* Field_2_96; // 0x90
	::BehaviorDesigner::Runtime::SharedBool* Field_2_34; // 0x98
	::Class_3_CF6254B260CF5CF4* Field_2_7; // 0xA0
	::BehaviorDesigner::Runtime::SharedVariable* Field_2_95; // 0xA8
	::System::String* Field_2_15; // 0xB0
	::Class_3_0D4C1A014C7CC9DE* Field_2_9; // 0xB8
	::System::String* Field_2_13; // 0xC0
	::Class_3_883E597458B91E77* Field_2_3; // 0xC8
	::MoleMole::AnimatorBlendData* Field_2_69; // 0xD0
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_92; // 0xD8
	::System::String* Field_2_20; // 0xE0
	::System::String* Field_2_21; // 0xE8
	::Class_3_DFD5D1FDB9D2A4AC* Field_2_4; // 0xF0
	::UnityEngine::Transform* Field_2_10; // 0xF8
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_87; // 0x100
	::Class_3_F33F9DC5F4112336* Field_2_2; // 0x108
	::System::Single Field_2_24; // 0x110
	::UnityEngine::Vector3 Field_2_16; // 0x114
	::UnityEngine::Vector3 Field_2_68; // 0x120
	::System::Single Field_2_43; // 0x12C
	::BehaviorDesigner::Runtime::Tasks::TaskStatus Field_2_37; // 0x130
	::System::Single Field_2_48; // 0x134
	::System::Single Field_2_55; // 0x138
	::MoleMole::BaseMove_AroundAxis Field_2_22; // 0x13C
	::MoleMole::BaseMove_EAroundMoveMode Field_2_29; // 0x140
	::System::Single Field_2_85; // 0x144
	::System::Single Field_2_80; // 0x148
	::System::Boolean Field_2_39; // 0x14C
	::System::Boolean Field_2_19; // 0x14D
	::System::Boolean Field_2_75; // 0x14E
	::System::Boolean Field_2_64; // 0x14F
	::UnityEngine::Vector3 Field_2_84; // 0x150
	::System::Single Field_2_59; // 0x15C
	::MoleMole::BaseMove_TypeOfAngleCheck Field_2_47; // 0x160
	::System::Single Field_2_71; // 0x164
	::System::Single Field_2_27; // 0x168
	::System::Single Field_2_26; // 0x16C
	::System::Single Field_2_33; // 0x170
	::System::Single Field_2_63; // 0x174
	::System::Single Field_2_81; // 0x178
	::System::Single Field_2_25; // 0x17C
	::System::Single Field_2_32; // 0x180
	::System::Single Field_2_28; // 0x184
	::System::Single Field_2_36; // 0x188
	::UnityEngine::RaycastHit Field_2_90; // 0x18C
	::System::Single Field_2_40; // 0x1C0
	::System::Single Field_2_49; // 0x1C4
	::System::Single Field_2_86; // 0x1C8
	::BehaviorDesigner::Runtime::Tasks::TaskStatus Field_2_51; // 0x1CC
	::System::Boolean Field_2_42; // 0x1D0
	::System::Boolean Field_2_50; // 0x1D1
	::System::Boolean Field_2_93; // 0x1D2
	::System::Boolean Field_2_46; // 0x1D3
	::System::Boolean Field_2_62; // 0x1D4
	::System::Boolean Field_2_67; // 0x1D5
	::System::Boolean Field_2_60; // 0x1D6
	::System::Boolean Field_2_57; // 0x1D7
	::System::Single Field_2_35; // 0x1D8
	::UnityEngine::Vector3 Field_2_83; // 0x1DC
	::System::Single Field_2_78; // 0x1E8
	::System::Single Field_2_66; // 0x1EC
	::BehaviorDesigner::Runtime::Tasks::TaskStatus Field_2_45; // 0x1F0
	::System::Single Field_2_73; // 0x1F4
	::MoleMole::BaseMove_MoveDirectionMode Field_2_52; // 0x1F8
	::MoleMole::Config::BaseMoveType Field_2_17; // 0x1FC
	::System::Single Field_2_54; // 0x200
	::MoleMole::BaseMove_AroundUpdateMode Field_2_23; // 0x204
	::System::Single Field_2_56; // 0x208
	::System::Int32 Field_2_77; // 0x20C
	::System::Single Field_2_53; // 0x210
	::MoleMole::Config::Boolean Field_2_44; // 0x214
	::System::Single Field_2_61; // 0x218
	::MoleMole::BaseMove_AIMoveTargetState Field_2_72; // 0x21C
	::BehaviorDesigner::Runtime::Tasks::TaskStatus Field_2_38; // 0x220
	::System::Single Field_2_70; // 0x224
	::System::Single Field_2_82; // 0x228
	::MoleMole::AIMoveTargetType Field_2_11; // 0x22C
	::System::Single Field_2_41; // 0x230
	::System::Single Field_2_58; // 0x234
	::System::Single Field_2_74; // 0x238
	::UnityEngine::LayerMask Field_2_89; // 0x23C
	::UnityEngine::Vector3 Field_2_76; // 0x240
	::System::Single Field_2_79; // 0x24C
	::System::Single Field_2_88; // 0x250

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Boolean Method_2_AE395AF1641E8C51(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_AE395AF1641E8C51_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0CEB05754D11A614(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_0CEB05754D11A614_OFFSET))(this, a1);
	}

	::System::Void Method_2_92CDC81783DABA21()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_92CDC81783DABA21_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_AFC4F0A8F621F288()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_AFC4F0A8F621F288_OFFSET))(this);
	}

	::System::Boolean Method_2_40AD8CBEA26F6013(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_40AD8CBEA26F6013_OFFSET))(this, a1);
	}

	::System::Void Method_2_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Boolean Method_2_2D395C7930DAC706(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_2D395C7930DAC706_OFFSET))(this, a1, a2);
	}

	::MoleMole::AnimatorBlendGroup* Method_2_6A449EE7DEEFA8A1(::MoleMole::AnimatorBlendData* a1, ::System::Single& a2, ::MoleMole::AnimatorClipBlendData*& a3, ::MoleMole::AnimatorClipBlendData*& a4)
	{
		return ((::MoleMole::AnimatorBlendGroup*(*)(::PVOID, ::MoleMole::AnimatorBlendData*, ::System::Single&, ::MoleMole::AnimatorClipBlendData*&, ::MoleMole::AnimatorClipBlendData*&))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_6A449EE7DEEFA8A1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_EB30CC757ECBA731(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_EB30CC757ECBA731_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_875D1126E981E1FC(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_875D1126E981E1FC_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_595E641DF1B4387D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_595E641DF1B4387D_OFFSET))(this);
	}

	::System::Boolean Method_2_36E51BE72B938C51()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_36E51BE72B938C51_OFFSET))(this);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_2_F605990E89CC5EF5(::BehaviorDesigner::Runtime::Behavior* a1, ::Class_3_B8F2A25A5ADF5CEE* a2, ::Class_3_E2819F45333A39BF* a3, ::Class_3_F33F9DC5F4112336* a4, ::Class_3_883E597458B91E77* a5, ::Class_3_DFD5D1FDB9D2A4AC* a6, ::Class_3_3B42BC0680587011* a7)
	{
		return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*, ::Class_3_B8F2A25A5ADF5CEE*, ::Class_3_E2819F45333A39BF*, ::Class_3_F33F9DC5F4112336*, ::Class_3_883E597458B91E77*, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_3B42BC0680587011*))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_F605990E89CC5EF5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_68F506C518414411(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_68F506C518414411_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> Method_2_567125FFEE5CEBB7()
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_567125FFEE5CEBB7_OFFSET))(this);
	}

	::System::Boolean Method_2_00E3D7170ACACB7C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_00E3D7170ACACB7C_OFFSET))(this, a1);
	}

	::MoleMole::AnimatorBlendGroup* Method_2_33B051CEFE80EDA5(::System::Single& a1, ::MoleMole::AnimatorClipBlendData*& a2, ::MoleMole::AnimatorClipBlendData*& a3)
	{
		return ((::MoleMole::AnimatorBlendGroup*(*)(::PVOID, ::System::Single&, ::MoleMole::AnimatorClipBlendData*&, ::MoleMole::AnimatorClipBlendData*&))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_33B051CEFE80EDA5_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_1C4DCEC4A71E9244(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_1C4DCEC4A71E9244_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_AFC4F0A8F621F288_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_AFC4F0A8F621F288_1_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_2_311C27EC07E88B49()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_311C27EC07E88B49_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Single Method_2_064D10072154189E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_064D10072154189E_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_63DD54D020E55AF8(::UnityEngine::Vector3 a1, ::System::Boolean& a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_63DD54D020E55AF8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_88D8701574474117(::UnityEngine::Vector3 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_88D8701574474117_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9F5C6C01EA6E48C4(::UnityEngine::Vector3 a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_9F5C6C01EA6E48C4_OFFSET))(this, a1, a2);
	}

	::Struct_2_FA5F50563E60AFBA Method_2_A538D7DBA7BF5017()
	{
		return ((::Struct_2_FA5F50563E60AFBA(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_A538D7DBA7BF5017_OFFSET))(this);
	}

	::System::Single Method_2_570C5557A774C69E(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_570C5557A774C69E_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_2_80EDB333FC4313FD(::UnityEngine::Vector3& a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_80EDB333FC4313FD_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector2 Method_2_F268ECD9F98A9FD1(::System::Single a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_F268ECD9F98A9FD1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_294F490B2CEBCC1C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_294F490B2CEBCC1C_OFFSET))(this);
	}
};
