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

class Class_3_06419CA21ECB69E6;
class Class_3_0D4C1A014C7CC9DE;
class Class_3_3B42BC0680587011;
class Class_3_707412604A129938;
class Class_3_883E597458B91E77;
class Class_3_AA6DF3A878195D3F;
class Class_3_C93CC3D2C2AC4067;
class Class_3_D2084E0C2DD39509;
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

#define CLASS_2_CDD73C57CE893967_METHOD_2_00E3D7170ACACB7C_OFFSET UNITYSDK_OFFSET(0x193AEA80)
#define CLASS_2_CDD73C57CE893967_METHOD_2_064D10072154189E_OFFSET UNITYSDK_OFFSET(0x193B3F50)
#define CLASS_2_CDD73C57CE893967_METHOD_2_081F5D789D1F0445_OFFSET UNITYSDK_OFFSET(0x193B61A0)
#define CLASS_2_CDD73C57CE893967_METHOD_2_08CDC3F97596C2A6_OFFSET UNITYSDK_OFFSET(0x193B2460)
#define CLASS_2_CDD73C57CE893967_METHOD_2_0CEB05754D11A614_OFFSET UNITYSDK_OFFSET(0x193AF310)
#define CLASS_2_CDD73C57CE893967_METHOD_2_0E6DD2C468B6D16E_OFFSET UNITYSDK_OFFSET(0x193B20A0)
#define CLASS_2_CDD73C57CE893967_METHOD_2_16E8CB0BF01F4709_1_OFFSET UNITYSDK_OFFSET(0x193B5B40)
#define CLASS_2_CDD73C57CE893967_METHOD_2_16E8CB0BF01F4709_OFFSET UNITYSDK_OFFSET(0x193B4140)
#define CLASS_2_CDD73C57CE893967_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x193AB1E0)
#define CLASS_2_CDD73C57CE893967_METHOD_2_1C4DCEC4A71E9244_OFFSET UNITYSDK_OFFSET(0x193B4730)
#define CLASS_2_CDD73C57CE893967_METHOD_2_2BF986872A6C8293_OFFSET UNITYSDK_OFFSET(0x193B1FF0)
#define CLASS_2_CDD73C57CE893967_METHOD_2_2D395C7930DAC706_OFFSET UNITYSDK_OFFSET(0x193B3A50)
#define CLASS_2_CDD73C57CE893967_METHOD_2_311C27EC07E88B49_OFFSET UNITYSDK_OFFSET(0x193B6C00)
#define CLASS_2_CDD73C57CE893967_METHOD_2_33B051CEFE80EDA5_OFFSET UNITYSDK_OFFSET(0x193B6130)
#define CLASS_2_CDD73C57CE893967_METHOD_2_36E51BE72B938C51_OFFSET UNITYSDK_OFFSET(0x193AD980)
#define CLASS_2_CDD73C57CE893967_METHOD_2_3A599F23178B2776_OFFSET UNITYSDK_OFFSET(0x193B7270)
#define CLASS_2_CDD73C57CE893967_METHOD_2_567125FFEE5CEBB7_OFFSET UNITYSDK_OFFSET(0x193B47E0)
#define CLASS_2_CDD73C57CE893967_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x193AEBC0)
#define CLASS_2_CDD73C57CE893967_METHOD_2_570C5557A774C69E_OFFSET UNITYSDK_OFFSET(0x193AF290)
#define CLASS_2_CDD73C57CE893967_METHOD_2_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0x193ADE20)
#define CLASS_2_CDD73C57CE893967_METHOD_2_627B04939C05F4A8_OFFSET UNITYSDK_OFFSET(0x193ADFD0)
#define CLASS_2_CDD73C57CE893967_METHOD_2_6A449EE7DEEFA8A1_OFFSET UNITYSDK_OFFSET(0x193B6330)
#define CLASS_2_CDD73C57CE893967_METHOD_2_841EC5FD85E0A68C_OFFSET UNITYSDK_OFFSET(0x193B6B00)
#define CLASS_2_CDD73C57CE893967_METHOD_2_92CDC81783DABA21_OFFSET UNITYSDK_OFFSET(0x193B2D00)
#define CLASS_2_CDD73C57CE893967_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x193B4680)
#define CLASS_2_CDD73C57CE893967_METHOD_2_9EBC853F538C8B58_OFFSET UNITYSDK_OFFSET(0x193AEFE0)
#define CLASS_2_CDD73C57CE893967_METHOD_2_A44A71BD06C4C18C_OFFSET UNITYSDK_OFFSET(0x193AE680)
#define CLASS_2_CDD73C57CE893967_METHOD_2_A538D7DBA7BF5017_OFFSET UNITYSDK_OFFSET(0x193ADDA0)
#define CLASS_2_CDD73C57CE893967_METHOD_2_AE54C1351B7F6E44_OFFSET UNITYSDK_OFFSET(0x193B0870)
#define CLASS_2_CDD73C57CE893967_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x193AB130)
#define CLASS_2_CDD73C57CE893967_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x193B76D0)
#define CLASS_2_CDD73C57CE893967_METHOD_2_CEDFBBF689E64233_OFFSET UNITYSDK_OFFSET(0x193B6CA0)
#define CLASS_2_CDD73C57CE893967_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x193ADB40)
#define CLASS_2_CDD73C57CE893967_METHOD_2_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x193AB250)
#define CLASS_2_CDD73C57CE893967_METHOD_2_F268ECD9F98A9FD1_OFFSET UNITYSDK_OFFSET(0x193B6090)
#define CLASS_2_CDD73C57CE893967_METHOD_2_F605990E89CC5EF5_OFFSET UNITYSDK_OFFSET(0x193B7760)
#define CLASS_2_CDD73C57CE893967__CTOR_OFFSET UNITYSDK_OFFSET(0x193B3920)

inline static constexpr unsigned int Class_2_CDD73C57CE893967_TypeDefinitionIndex = 65765;

class Class_2_CDD73C57CE893967 : public ::Class_1_7B7970D0E94833DA
{
public:
	::Class_3_C93CC3D2C2AC4067* Field_2_6; // 0x28
	::Class_3_883E597458B91E77* Field_2_7; // 0x30
	::Class_3_D2084E0C2DD39509* Field_2_10; // 0x38
	::System::String* Field_2_16; // 0x40
	::Class_3_E2819F45333A39BF* Field_2_1; // 0x48
	::Class_3_06419CA21ECB69E6* Field_2_11; // 0x50
	::BehaviorDesigner::Runtime::SharedVariable* Field_2_92; // 0x58
	::BehaviorDesigner::Runtime::SharedVariable* Field_2_98; // 0x60
	::Class_3_707412604A129938* Field_2_2; // 0x68
	::BehaviorDesigner::Runtime::SharedString* Field_2_28; // 0x70
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_91; // 0x78
	::Class_3_3B42BC0680587011* Field_2_5; // 0x80
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_95; // 0x88
	::System::String* Field_2_14; // 0x90
	::System::String* Field_2_22; // 0x98
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_94; // 0xA0
	::UnityEngine::Transform* Field_2_8; // 0xA8
	::System::String* Field_2_21; // 0xB0
	::System::String* Field_2_19; // 0xB8
	::Class_3_F33F9DC5F4112336* Field_2_0; // 0xC0
	::System::String* Field_2_12; // 0xC8
	::BehaviorDesigner::Runtime::SharedVariable* Field_2_99; // 0xD0
	::System::String* Field_2_13; // 0xD8
	::MoleMole::SkillCharacterScriptConfig* Field_2_65; // 0xE0
	::System::String* Field_2_35; // 0xE8
	::Class_3_0D4C1A014C7CC9DE* Field_2_9; // 0xF0
	::MoleMole::AnimatorBlendData* Field_2_69; // 0xF8
	::Class_3_AA6DF3A878195D3F* Field_2_4; // 0x100
	::BehaviorDesigner::Runtime::SharedBool* Field_2_32; // 0x108
	::UnityEngine::Vector3 Field_2_78; // 0x110
	::System::Single Field_2_82; // 0x11C
	::System::Single Field_2_85; // 0x120
	::MoleMole::BaseMove_AIMoveTargetState Field_2_74; // 0x124
	::System::Single Field_2_52; // 0x128
	::System::Single Field_2_33; // 0x12C
	::System::Single Field_2_47; // 0x130
	::System::Single Field_2_26; // 0x134
	::System::Single Field_2_24; // 0x138
	::System::Single Field_2_73; // 0x13C
	::System::Single Field_2_81; // 0x140
	::System::Single Field_2_38; // 0x144
	::System::Single Field_2_75; // 0x148
	::System::Single Field_2_41; // 0x14C
	::System::Single Field_2_50; // 0x150
	::MoleMole::Config::BaseMoveType Field_2_17; // 0x154
	::System::Single Field_2_53; // 0x158
	::MoleMole::Config::Boolean Field_2_46; // 0x15C
	::System::Single Field_2_42; // 0x160
	::System::Single Field_2_90; // 0x164
	::System::Single Field_2_63; // 0x168
	::BehaviorDesigner::Runtime::Tasks::TaskStatus Field_2_36; // 0x16C
	::BehaviorDesigner::Runtime::Tasks::TaskStatus Field_2_55; // 0x170
	::UnityEngine::Vector3 Field_2_18; // 0x174
	::MoleMole::BaseMove_EAroundMoveMode Field_2_29; // 0x180
	::System::Single Field_2_67; // 0x184
	::System::Single Field_2_84; // 0x188
	::UnityEngine::Vector3 Field_2_70; // 0x18C
	::BehaviorDesigner::Runtime::Tasks::TaskStatus Field_2_45; // 0x198
	::System::Single Field_2_61; // 0x19C
	::System::Single Field_2_58; // 0x1A0
	::MoleMole::BaseMove_MoveDirectionMode Field_2_54; // 0x1A4
	::UnityEngine::Vector3 Field_2_86; // 0x1A8
	::System::Single Field_2_72; // 0x1B4
	::System::Single Field_2_31; // 0x1B8
	::System::Boolean Field_2_93; // 0x1BC
	::System::Boolean Field_2_43; // 0x1BD
	::System::Boolean Field_2_71; // 0x1BE
	::System::Boolean Field_2_44; // 0x1BF
	::System::Single Field_2_39; // 0x1C0
	::MoleMole::BaseMove_AroundAxis Field_2_20; // 0x1C4
	::System::Single Field_2_68; // 0x1C8
	::System::Single Field_2_76; // 0x1CC
	::UnityEngine::Vector3 Field_2_87; // 0x1D0
	::MoleMole::BaseMove_TypeOfAngleCheck Field_2_51; // 0x1DC
	::System::Single Field_2_25; // 0x1E0
	::System::Single Field_2_64; // 0x1E4
	::System::Boolean Field_2_40; // 0x1E8
	::System::Boolean Field_2_79; // 0x1E9
	::System::Boolean Field_2_48; // 0x1EA
	::System::Boolean Field_2_57; // 0x1EB
	::MoleMole::AIMoveTargetType Field_2_15; // 0x1EC
	::System::Boolean Field_2_62; // 0x1F0
	::System::Boolean Field_2_23; // 0x1F1
	::System::Boolean Field_2_66; // 0x1F2
	::System::Boolean Field_2_60; // 0x1F3
	::UnityEngine::RaycastHit Field_2_88; // 0x1F4
	::System::Single Field_2_80; // 0x228
	::System::Single Field_2_49; // 0x22C
	::BehaviorDesigner::Runtime::Tasks::TaskStatus Field_2_37; // 0x230
	::System::Single Field_2_83; // 0x234
	::System::Single Field_2_56; // 0x238
	::MoleMole::BaseMove_AroundUpdateMode Field_2_27; // 0x23C
	::UnityEngine::LayerMask Field_2_89; // 0x240
	::System::Single Field_2_34; // 0x244
	::System::Single Field_2_30; // 0x248
	::System::Single Field_2_59; // 0x24C
	::System::Int32 Field_2_77; // 0x250

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::System::Boolean Method_2_00E3D7170ACACB7C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_00E3D7170ACACB7C_OFFSET))(this, a1);
	}

	::System::Single Method_2_064D10072154189E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_064D10072154189E_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_16E8CB0BF01F4709()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_16E8CB0BF01F4709_OFFSET))(this);
	}

	::System::Single Method_2_570C5557A774C69E(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_570C5557A774C69E_OFFSET))(this, a1);
	}

	::Struct_2_FA5F50563E60AFBA Method_2_A538D7DBA7BF5017()
	{
		return ((::Struct_2_FA5F50563E60AFBA(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_A538D7DBA7BF5017_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AE54C1351B7F6E44(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_AE54C1351B7F6E44_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Single Method_2_1C4DCEC4A71E9244(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_1C4DCEC4A71E9244_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> Method_2_567125FFEE5CEBB7()
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_567125FFEE5CEBB7_OFFSET))(this);
	}

	::System::Boolean Method_2_595E641DF1B4387D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_595E641DF1B4387D_OFFSET))(this);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_2_0E6DD2C468B6D16E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_0E6DD2C468B6D16E_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_16E8CB0BF01F4709_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_16E8CB0BF01F4709_1_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_2_F268ECD9F98A9FD1(::System::Single a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_F268ECD9F98A9FD1_OFFSET))(this, a1);
	}

	::System::Void Method_2_92CDC81783DABA21()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_92CDC81783DABA21_OFFSET))(this);
	}

	::System::Void Method_2_627B04939C05F4A8(::UnityEngine::Vector3& a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_627B04939C05F4A8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9EBC853F538C8B58(::UnityEngine::Vector3 a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_9EBC853F538C8B58_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_081F5D789D1F0445(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_081F5D789D1F0445_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_2BF986872A6C8293()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_2BF986872A6C8293_OFFSET))(this);
	}

	::System::Void Method_2_841EC5FD85E0A68C(::UnityEngine::Vector3 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_841EC5FD85E0A68C_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::Battle::Entity* Method_2_311C27EC07E88B49()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_311C27EC07E88B49_OFFSET))(this);
	}

	::MoleMole::AnimatorBlendGroup* Method_2_33B051CEFE80EDA5(::System::Single& a1, ::MoleMole::AnimatorClipBlendData*& a2, ::MoleMole::AnimatorClipBlendData*& a3)
	{
		return ((::MoleMole::AnimatorBlendGroup*(*)(::PVOID, ::System::Single&, ::MoleMole::AnimatorClipBlendData*&, ::MoleMole::AnimatorClipBlendData*&))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_33B051CEFE80EDA5_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_0CEB05754D11A614(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_0CEB05754D11A614_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_36E51BE72B938C51()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_36E51BE72B938C51_OFFSET))(this);
	}

	::MoleMole::AnimatorBlendGroup* Method_2_6A449EE7DEEFA8A1(::MoleMole::AnimatorBlendData* a1, ::System::Single& a2, ::MoleMole::AnimatorClipBlendData*& a3, ::MoleMole::AnimatorClipBlendData*& a4)
	{
		return ((::MoleMole::AnimatorBlendGroup*(*)(::PVOID, ::MoleMole::AnimatorBlendData*, ::System::Single&, ::MoleMole::AnimatorClipBlendData*&, ::MoleMole::AnimatorClipBlendData*&))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_6A449EE7DEEFA8A1_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_2_CEDFBBF689E64233(::UnityEngine::Vector3 a1, ::System::Boolean& a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_CEDFBBF689E64233_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_08CDC3F97596C2A6(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_08CDC3F97596C2A6_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2D395C7930DAC706(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_2D395C7930DAC706_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3A599F23178B2776()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_3A599F23178B2776_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_A44A71BD06C4C18C(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_A44A71BD06C4C18C_OFFSET))(this, a1);
	}

	::System::Void Method_2_F605990E89CC5EF5(::BehaviorDesigner::Runtime::Behavior* a1, ::Class_3_707412604A129938* a2, ::Class_3_E2819F45333A39BF* a3, ::Class_3_F33F9DC5F4112336* a4, ::Class_3_883E597458B91E77* a5, ::Class_3_C93CC3D2C2AC4067* a6, ::Class_3_3B42BC0680587011* a7)
	{
		return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*, ::Class_3_707412604A129938*, ::Class_3_E2819F45333A39BF*, ::Class_3_F33F9DC5F4112336*, ::Class_3_883E597458B91E77*, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_3B42BC0680587011*))((::PBYTE)hIl2Cpp + CLASS_2_CDD73C57CE893967_METHOD_2_F605990E89CC5EF5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
