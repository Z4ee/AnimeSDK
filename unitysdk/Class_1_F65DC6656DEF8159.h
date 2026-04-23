#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TimeRewindCheckSetStateResult.h"
#include "unitysdk/RPG/Client/TimeRewindExtraMode.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/Struct_2_9BF8902D61AE1796.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_601;
class Class_1_22DFC3839E157DF2;
class Class_1_5C7F0A9A533D7AE6;
class Class_1_E7DA329C99460319;
class Class_1_F65DC6656DEF8159_Class_1_598861075ECB5399;
namespace RPG::Client { class EntityTimelineControlNode; }
namespace RPG::Client { class EntityTimelineControlTrackInfo; }
namespace RPG::Client { class TimeRewindNodeIndexInfo; }
namespace RPG::Client { class TimeRewindPathRuntime; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SingleTimeRewindEntityAnimEventBaseConfig; }
namespace RPG::GameCore { class TimeRewindAudioConfig; }
namespace RPG::GameCore { class TimeRewindCameraShakeConfig; }
namespace RPG::GameCore { class TimeRewindEffConfig; }
namespace RPG::GameCore { class TimeRewindEntityEventConfig; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F65DC6656DEF8159_DISPOSE_OFFSET UNITYSDK_OFFSET(0x971F280)
#define CLASS_1_F65DC6656DEF8159_GET_ENABLELOOPREWIND_OFFSET UNITYSDK_OFFSET(0x971F800)
#define CLASS_1_F65DC6656DEF8159_GET_ISINCONTROL_OFFSET UNITYSDK_OFFSET(0x971F740)
#define CLASS_1_F65DC6656DEF8159_GET_ISINMOTION_OFFSET UNITYSDK_OFFSET(0x971F720)
#define CLASS_1_F65DC6656DEF8159_GET_LOOPREWINDSNAPTARGETRATIO_OFFSET UNITYSDK_OFFSET(0x971F820)
#define CLASS_1_F65DC6656DEF8159_GET_REWINDEXTRAMODE_OFFSET UNITYSDK_OFFSET(0x971BF00)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_08B7287B59325288_OFFSET UNITYSDK_OFFSET(0x971BE40)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_0EE813714C44B34B_OFFSET UNITYSDK_OFFSET(0x971F440)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_12AE54057FEFD85C_OFFSET UNITYSDK_OFFSET(0x97190B0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_13E8B1F3F0042AA5_OFFSET UNITYSDK_OFFSET(0x971EDF0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_14CD2B144EDDC970_OFFSET UNITYSDK_OFFSET(0x971E150)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x971ECF0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_16509CE57E5A3C1C_OFFSET UNITYSDK_OFFSET(0x971A080)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_171A4D4799D0DC21_OFFSET UNITYSDK_OFFSET(0x97194F0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x9717B40)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_1EDDD623459E1A71_OFFSET UNITYSDK_OFFSET(0x971BF20)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_2278194B30E0C8AD_OFFSET UNITYSDK_OFFSET(0x9717A60)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_27280EE1A6F260EF_OFFSET UNITYSDK_OFFSET(0x9717910)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_2D2B3B575890F131_1_OFFSET UNITYSDK_OFFSET(0x971BD80)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_2D2B3B575890F131_OFFSET UNITYSDK_OFFSET(0x9719710)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x971EC20)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_35CC232176269AD8_OFFSET UNITYSDK_OFFSET(0x971E6F0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_39A7DCE3B426791A_OFFSET UNITYSDK_OFFSET(0x97196B0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x971D990)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_3B81DE967BCF7FA1_OFFSET UNITYSDK_OFFSET(0x971CD30)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_3DCD09744D20E8D4_OFFSET UNITYSDK_OFFSET(0x9719A30)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x971F6D0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x971F680)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9718C80)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_4385D631F08B20DB_OFFSET UNITYSDK_OFFSET(0x971CB30)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0x971F1B0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_43A8DE046F4EECDF_OFFSET UNITYSDK_OFFSET(0x971C1E0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_49F4C30915C2F6F3_OFFSET UNITYSDK_OFFSET(0x971BCF0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0x971D310)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_4D84AE5BC2BB0D66_OFFSET UNITYSDK_OFFSET(0x971C3C0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_5197441EABF2542B_OFFSET UNITYSDK_OFFSET(0x971D4D0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x9717CE0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_68A2CA32DC720C44_OFFSET UNITYSDK_OFFSET(0x9718370)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_696E70B96088889D_OFFSET UNITYSDK_OFFSET(0x97193E0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_6B27D35D24FCCC80_OFFSET UNITYSDK_OFFSET(0x97197D0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_6B47CDE3B34D5A39_OFFSET UNITYSDK_OFFSET(0x971CCC0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_6D71CC7A9DF62322_OFFSET UNITYSDK_OFFSET(0x971D710)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_6F11B8044691E483_OFFSET UNITYSDK_OFFSET(0x971E3E0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_70F996834AEFED46_OFFSET UNITYSDK_OFFSET(0x9718470)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_74F49F23504A427D_OFFSET UNITYSDK_OFFSET(0x9719C90)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_7A335F8CB9EE272D_OFFSET UNITYSDK_OFFSET(0x971D270)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_7A51B439873F47D6_OFFSET UNITYSDK_OFFSET(0x971E2D0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_7E243539CF85D7E9_OFFSET UNITYSDK_OFFSET(0x971CEC0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0x971E890)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_9148D4ED1DC5F8C0_OFFSET UNITYSDK_OFFSET(0x9717E60)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_924C62BE8591D2FD_OFFSET UNITYSDK_OFFSET(0x971F3E0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_93BC2AF9C1DFDF7C_OFFSET UNITYSDK_OFFSET(0x9718220)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x971CAE0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_958D6D15D1E0FE75_OFFSET UNITYSDK_OFFSET(0x971DE10)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_9E3751A8C9767297_OFFSET UNITYSDK_OFFSET(0x971BFC0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_9EFA03D82DC53333_OFFSET UNITYSDK_OFFSET(0x97192E0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_A269D39DAB68DB42_OFFSET UNITYSDK_OFFSET(0x971E580)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x9718C30)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x971CE20)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_A3E94568D5184024_OFFSET UNITYSDK_OFFSET(0x971A970)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_A52E56ED6C11A4BD_OFFSET UNITYSDK_OFFSET(0x971AA20)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x97195D0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_A922645F4C31E238_OFFSET UNITYSDK_OFFSET(0x971F350)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x9718D20)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_B153DBF66F2B9EE2_OFFSET UNITYSDK_OFFSET(0x9718620)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_B1FE11E62AD3F6A4_OFFSET UNITYSDK_OFFSET(0x9719D10)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_B799DB9989A18F1D_OFFSET UNITYSDK_OFFSET(0x971F220)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_BD5F1AF5661A4E98_OFFSET UNITYSDK_OFFSET(0x9717F50)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_BE26F718F66F1517_OFFSET UNITYSDK_OFFSET(0x9719E20)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x971CE70)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x971BC50)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_CC4DDEEB549C9978_OFFSET UNITYSDK_OFFSET(0x971BB90)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_CF4B368BE9AEFB42_OFFSET UNITYSDK_OFFSET(0x971DC50)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_D0F44F67777F606F_OFFSET UNITYSDK_OFFSET(0x9718DC0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_D3EA5C9E7ED3E40D_OFFSET UNITYSDK_OFFSET(0x971A9D0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0x971F780)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x97181A0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_D9BD0A308C2082B8_OFFSET UNITYSDK_OFFSET(0x9717360)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_E33A426D149D816E_OFFSET UNITYSDK_OFFSET(0x9719970)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_E44C4B1878F85417_OFFSET UNITYSDK_OFFSET(0x9717EC0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x97175F0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_EBD210A60727976A_OFFSET UNITYSDK_OFFSET(0x9717640)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_EDDD1B285B468C3C_OFFSET UNITYSDK_OFFSET(0x971EF00)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x971F770)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x971F760)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_F10865B2F967F86A_OFFSET UNITYSDK_OFFSET(0x971F7F0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_F6DDBB5EC464B28C_OFFSET UNITYSDK_OFFSET(0x971BEB0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_FAF26456A956DC6C_OFFSET UNITYSDK_OFFSET(0x971D440)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_FF3C6D7263F5B9E0_OFFSET UNITYSDK_OFFSET(0x9717B90)
#define CLASS_1_F65DC6656DEF8159_SET_ENABLELOOPREWIND_OFFSET UNITYSDK_OFFSET(0x971F810)
#define CLASS_1_F65DC6656DEF8159_SET_ISINCONTROL_OFFSET UNITYSDK_OFFSET(0x971F750)
#define CLASS_1_F65DC6656DEF8159_SET_ISINMOTION_OFFSET UNITYSDK_OFFSET(0x971F730)
#define CLASS_1_F65DC6656DEF8159_SET_LOOPREWINDSNAPTARGETRATIO_OFFSET UNITYSDK_OFFSET(0x971F830)
#define CLASS_1_F65DC6656DEF8159_SET_REWINDEXTRAMODE_OFFSET UNITYSDK_OFFSET(0x971BF10)
#define CLASS_1_F65DC6656DEF8159__CTOR_OFFSET UNITYSDK_OFFSET(0x971F840)

inline static constexpr unsigned int Class_1_F65DC6656DEF8159_TypeDefinitionIndex = 56053;

class Class_1_F65DC6656DEF8159 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Single>* Field_1_28; // 0x10
	::Class_1_22DFC3839E157DF2* Field_1_16; // 0x18
	::Class_1_E7DA329C99460319* Field_1_15; // 0x20
	::Il2CppArray<::Class_0_16E4307DCC419505_601*>* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::Class_1_F65DC6656DEF8159_Class_1_598861075ECB5399*>* Field_1_0; // 0x30
	::RPG::Client::EntityTimelineControlTrackInfo* Field_1_23; // 0x38
	::System::Collections::Generic::List_1<::Class_1_F65DC6656DEF8159_Class_1_598861075ECB5399*>* Field_1_1; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_27; // 0x48
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_601*>* Field_1_11; // 0x50
	::RPG::GameCore::GameEntity* Field_1_29; // 0x58
	::Struct_2_9BF8902D61AE1796 Field_1_38; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::EntityTimelineControlNode*>* Field_1_30; // 0xF0
	::Class_1_5C7F0A9A533D7AE6* Field_1_14; // 0xF8
	::System::Single Field_1_18; // 0x100
	::System::Single Field_1_13; // 0x104
	::System::Int32 Field_1_22; // 0x108
	::System::Boolean _IsInControl_k__BackingField; // 0x10C
	::System::Boolean _LoopRewindSnapTargetRatio_k__BackingField; // 0x10D
	::System::Boolean Field_1_37; // 0x10E
	::System::Boolean Field_1_32; // 0x10F
	::System::Int32 Field_1_19; // 0x110
	::System::Single Field_1_35; // 0x114
	::System::Boolean Field_1_34; // 0x118
	::System::Boolean _IsInMotion_k__BackingField; // 0x119
	::RPG::GameCore::TimeRewindState Field_1_9; // 0x11C
	::System::Single Field_1_20; // 0x120
	::System::Single Field_1_12; // 0x124
	::System::Boolean _EnableLoopRewind_k__BackingField; // 0x128
	::System::Boolean Field_1_7; // 0x129
	::System::Boolean Field_1_8; // 0x12A
	::System::Boolean Field_1_10; // 0x12B
	::System::Int32 Field_1_26; // 0x12C
	::System::Single Field_1_24; // 0x130
	::System::Single Field_1_17; // 0x134
	::System::Single Field_1_39; // 0x138
	::System::Int32 Field_1_25; // 0x13C
	::System::Single Field_1_31; // 0x140
	::System::Int32 Field_1_21; // 0x144
	::RPG::Client::TimeRewindExtraMode _RewindExtraMode_k__BackingField; // 0x148
	::System::Single Field_1_3; // 0x14C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D9BD0A308C2082B8(::RPG::GameCore::GameEntity* a1, ::RPG::Client::EntityTimelineControlTrackInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::EntityTimelineControlTrackInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_D9BD0A308C2082B8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_22DFC3839E157DF2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_22DFC3839E157DF2*))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBD210A60727976A(::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::EntityTimelineControlNode*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::EntityTimelineControlNode*>*))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_EBD210A60727976A_OFFSET))(this, a1);
	}

	::RPG::Client::EntityTimelineControlNode* Method_1_27280EE1A6F260EF(::System::Int32 a1)
	{
		return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_27280EE1A6F260EF_OFFSET))(this, a1);
	}

	::RPG::Client::EntityTimelineControlNode* Method_1_2278194B30E0C8AD(::System::Int32 a1)
	{
		return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_2278194B30E0C8AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_BD5F1AF5661A4E98(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_BD5F1AF5661A4E98_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_93BC2AF9C1DFDF7C(::System::Single a1, ::Struct_2_9BF8902D61AE1796 a2, ::RPG::GameCore::TimeRewindState& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::Struct_2_9BF8902D61AE1796, ::RPG::GameCore::TimeRewindState&))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_93BC2AF9C1DFDF7C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_70F996834AEFED46(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_70F996834AEFED46_OFFSET))(this, a1);
	}

	::System::Void Method_1_B153DBF66F2B9EE2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_B153DBF66F2B9EE2_OFFSET))(this, a1);
	}

	::System::Void Method_1_9EFA03D82DC53333(::RPG::GameCore::TimeRewindState a1, ::System::Single a2, ::System::Func_1<::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState, ::System::Single, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_9EFA03D82DC53333_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_696E70B96088889D(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_696E70B96088889D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_171A4D4799D0DC21(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_171A4D4799D0DC21_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_A8F6F688241E6DBC_OFFSET))(this);
	}

	::RPG::Client::EntityTimelineControlNode* Method_1_2D2B3B575890F131()
	{
		return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_2D2B3B575890F131_OFFSET))(this);
	}

	::System::Boolean Method_1_6B27D35D24FCCC80(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_6B27D35D24FCCC80_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3DCD09744D20E8D4(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_3DCD09744D20E8D4_OFFSET))(this, a1, a2);
	}

	::RPG::Client::TimeRewindCheckSetStateResult Method_1_BE26F718F66F1517(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::RPG::Client::TimeRewindCheckSetStateResult(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_BE26F718F66F1517_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_16509CE57E5A3C1C(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_16509CE57E5A3C1C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CC4DDEEB549C9978(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_CC4DDEEB549C9978_OFFSET))(this, a1);
	}

	::RPG::Client::EntityTimelineControlNode* Method_1_49F4C30915C2F6F3()
	{
		return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_49F4C30915C2F6F3_OFFSET))(this);
	}

	::RPG::Client::EntityTimelineControlNode* Method_1_2D2B3B575890F131_1()
	{
		return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_2D2B3B575890F131_1_OFFSET))(this);
	}

	::System::Void Method_1_08B7287B59325288(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_08B7287B59325288_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F6DDBB5EC464B28C(::RPG::Client::TimeRewindExtraMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeRewindExtraMode))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_F6DDBB5EC464B28C_OFFSET))(this, a1);
	}

	::RPG::Client::TimeRewindExtraMode get_RewindExtraMode()
	{
		return ((::RPG::Client::TimeRewindExtraMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_GET_REWINDEXTRAMODE_OFFSET))(this);
	}

	::System::Void set_RewindExtraMode(::RPG::Client::TimeRewindExtraMode value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeRewindExtraMode))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_SET_REWINDEXTRAMODE_OFFSET))(this, value);
	}

	::System::Void Method_1_12AE54057FEFD85C(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_12AE54057FEFD85C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_43A8DE046F4EECDF(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_43A8DE046F4EECDF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9E3751A8C9767297(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_9E3751A8C9767297_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4D84AE5BC2BB0D66(::System::Boolean& a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_4D84AE5BC2BB0D66_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Single Method_1_4385D631F08B20DB(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_4385D631F08B20DB_OFFSET))(this, a1);
	}

	::System::Single Method_1_6B47CDE3B34D5A39(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_6B47CDE3B34D5A39_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3B81DE967BCF7FA1(::System::Int32& a1, ::System::Int32& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_3B81DE967BCF7FA1_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_D3EA5C9E7ED3E40D()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_D3EA5C9E7ED3E40D_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single Method_1_1EDDD623459E1A71()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_1EDDD623459E1A71_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Single Method_1_7E243539CF85D7E9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_7E243539CF85D7E9_OFFSET))(this);
	}

	::RPG::Client::EntityTimelineControlNode* Method_1_9148D4ED1DC5F8C0(::System::Int32 a1)
	{
		return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_9148D4ED1DC5F8C0_OFFSET))(this, a1);
	}

	::RPG::Client::EntityTimelineControlNode* Method_1_7A335F8CB9EE272D(::System::Int32 a1)
	{
		return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_7A335F8CB9EE272D_OFFSET))(this, a1);
	}

	::RPG::Client::EntityTimelineControlNode* Method_1_B1FE11E62AD3F6A4(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_B1FE11E62AD3F6A4_OFFSET))(this, a1, a2);
	}

	::RPG::Client::TimeRewindNodeIndexInfo* Method_1_39A7DCE3B426791A(::System::Int32 a1)
	{
		return ((::RPG::Client::TimeRewindNodeIndexInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_39A7DCE3B426791A_OFFSET))(this, a1);
	}

	::RPG::Client::TimeRewindNodeIndexInfo* Method_1_E33A426D149D816E(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::RPG::Client::TimeRewindNodeIndexInfo*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_E33A426D149D816E_OFFSET))(this, a1, a2);
	}

	::RPG::Client::TimeRewindPathRuntime* Method_1_74F49F23504A427D(::System::Int32 a1)
	{
		return ((::RPG::Client::TimeRewindPathRuntime*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_74F49F23504A427D_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A52E56ED6C11A4BD(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_A52E56ED6C11A4BD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5197441EABF2542B(::RPG::Client::EntityTimelineControlNode* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EntityTimelineControlNode*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_5197441EABF2542B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6D71CC7A9DF62322()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_6D71CC7A9DF62322_OFFSET))(this);
	}

	::System::Void Method_1_CF4B368BE9AEFB42(::RPG::Client::EntityTimelineControlNode* a1, ::System::Single a2, ::System::Collections::Generic::List_1<::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EntityTimelineControlNode*, ::System::Single, ::System::Collections::Generic::List_1<::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_CF4B368BE9AEFB42_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A269D39DAB68DB42(::System::Single a1, ::Il2CppArray<::RPG::GameCore::TimeRewindEntityEventConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::RPG::GameCore::TimeRewindEntityEventConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_A269D39DAB68DB42_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7A51B439873F47D6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_7A51B439873F47D6_OFFSET))(this, a1);
	}

	::System::Void Method_1_958D6D15D1E0FE75(::System::Single a1, ::Il2CppArray<::RPG::GameCore::TimeRewindEffConfig*>* a2, ::System::Single a3, ::System::Single a4, ::RPG::Client::EntityTimelineControlNode* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::RPG::GameCore::TimeRewindEffConfig*>*, ::System::Single, ::System::Single, ::RPG::Client::EntityTimelineControlNode*))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_958D6D15D1E0FE75_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_35CC232176269AD8(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_35CC232176269AD8_OFFSET))(this, a1);
	}

	::System::Void Method_1_14CD2B144EDDC970(::System::Single a1, ::Il2CppArray<::RPG::GameCore::TimeRewindAudioConfig*>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::RPG::GameCore::TimeRewindAudioConfig*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_14CD2B144EDDC970_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6F11B8044691E483(::System::Single a1, ::Il2CppArray<::RPG::GameCore::TimeRewindCameraShakeConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::RPG::GameCore::TimeRewindCameraShakeConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_6F11B8044691E483_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_870AF3CD1D0A67B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_870AF3CD1D0A67B1_OFFSET))(this);
	}

	::System::Void Method_1_FF3C6D7263F5B9E0(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_FF3C6D7263F5B9E0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E44C4B1878F85417(::System::Int32 a1, ::System::Single a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_E44C4B1878F85417_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_13E8B1F3F0042AA5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_13E8B1F3F0042AA5_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3E94568D5184024(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_A3E94568D5184024_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_1_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_43A478BA01FE29B7_OFFSET))(this);
	}

	::System::Void Method_1_B799DB9989A18F1D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_B799DB9989A18F1D_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_FAF26456A956DC6C(::Class_0_16E4307DCC419505_601* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_601*))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_FAF26456A956DC6C_OFFSET))(this, a1);
	}

	::System::Void Method_1_A922645F4C31E238(::System::Single a1, ::Il2CppArray<::Class_0_16E4307DCC419505_601*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::Class_0_16E4307DCC419505_601*>*))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_A922645F4C31E238_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_924C62BE8591D2FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_924C62BE8591D2FD_OFFSET))(this);
	}

	::System::Void Method_1_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_3B7145E79424FB75_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_A36150C5DCC8409E_1_OFFSET))(this);
	}

	::System::Void Method_1_D0F44F67777F606F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_D0F44F67777F606F_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_1_0EE813714C44B34B(::RPG::GameCore::TimeRewindState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_0EE813714C44B34B_OFFSET))(this, a1);
	}

	::System::Void Method_1_4A41C63BFE58D26F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_4A41C63BFE58D26F_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_3E7178C5ECF017DB_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDDD1B285B468C3C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_EDDD1B285B468C3C_OFFSET))(this, a1);
	}

	::System::Boolean get_IsInMotion()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_GET_ISINMOTION_OFFSET))(this);
	}

	::System::Void set_IsInMotion(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_SET_ISINMOTION_OFFSET))(this, value);
	}

	::System::Boolean get_IsInControl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_GET_ISINCONTROL_OFFSET))(this);
	}

	::System::Void set_IsInControl(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_SET_ISINCONTROL_OFFSET))(this, value);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_D64FD9A228A1C4E0_1_OFFSET))(this);
	}

	::RPG::GameCore::TimeRewindState Method_1_F10865B2F967F86A()
	{
		return ((::RPG::GameCore::TimeRewindState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_F10865B2F967F86A_OFFSET))(this);
	}

	::System::Single Method_1_68A2CA32DC720C44()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_68A2CA32DC720C44_OFFSET))(this);
	}

	::System::Boolean get_EnableLoopRewind()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_GET_ENABLELOOPREWIND_OFFSET))(this);
	}

	::System::Void set_EnableLoopRewind(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_SET_ENABLELOOPREWIND_OFFSET))(this, value);
	}

	::System::Boolean get_LoopRewindSnapTargetRatio()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_GET_LOOPREWINDSNAPTARGETRATIO_OFFSET))(this);
	}

	::System::Void set_LoopRewindSnapTargetRatio(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_SET_LOOPREWINDSNAPTARGETRATIO_OFFSET))(this, value);
	}
};
