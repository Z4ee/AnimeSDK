#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TimeRewindCheckSetStateResult.h"
#include "unitysdk/RPG/Client/TimeRewindExtraMode.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/Struct_2_F8D9CEC872B937AF.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_698;
class Class_1_22DFC3839E157DF2;
class Class_1_937F95F9E8467C2D;
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

#define CLASS_1_F65DC6656DEF8159_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE2C9C0)
#define CLASS_1_F65DC6656DEF8159_GET_ENABLELOOPREWIND_OFFSET UNITYSDK_OFFSET(0xBE2CFD0)
#define CLASS_1_F65DC6656DEF8159_GET_ISINCONTROL_OFFSET UNITYSDK_OFFSET(0xBE2CF00)
#define CLASS_1_F65DC6656DEF8159_GET_ISINMOTION_OFFSET UNITYSDK_OFFSET(0xBE2CEE0)
#define CLASS_1_F65DC6656DEF8159_GET_LOOPREWINDSNAPTARGETRATIO_OFFSET UNITYSDK_OFFSET(0xBE2CFF0)
#define CLASS_1_F65DC6656DEF8159_GET_REWINDEXTRAMODE_OFFSET UNITYSDK_OFFSET(0xBE28F50)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_005F7C755E2B622B_OFFSET UNITYSDK_OFFSET(0xBE24FE0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_08B7287B59325288_OFFSET UNITYSDK_OFFSET(0xBE28E90)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_0C62C261E281523C_OFFSET UNITYSDK_OFFSET(0xBE2A930)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xBE2C1E0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_14CD2B144EDDC970_OFFSET UNITYSDK_OFFSET(0xBE2B640)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_1542714063CCED8E_OFFSET UNITYSDK_OFFSET(0xBE271E0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_18A3BFC9738829A7_OFFSET UNITYSDK_OFFSET(0xBE292C0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_18FD01C2949D722C_OFFSET UNITYSDK_OFFSET(0xBE2C530)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_1A71A61335B91742_OFFSET UNITYSDK_OFFSET(0xBE27090)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xBE24BA0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_1C23CF9DA4652C35_OFFSET UNITYSDK_OFFSET(0xBE25F50)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_1EDDD623459E1A71_OFFSET UNITYSDK_OFFSET(0xBE28F70)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_3129BDB20712C068_OFFSET UNITYSDK_OFFSET(0xBE267F0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_3902B1D2174FE8E4_OFFSET UNITYSDK_OFFSET(0xBE2A840)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_39A7DCE3B426791A_OFFSET UNITYSDK_OFFSET(0xBE269D0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_3B81DE967BCF7FA1_OFFSET UNITYSDK_OFFSET(0xBE2A030)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0xBE2CE90)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xBE2CE40)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xBE2C2D0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xBE25E10)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0xBE2C8F0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_45714050EDEF8291_OFFSET UNITYSDK_OFFSET(0xBE2A6E0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_4CDEC495CCC40BCB_1_OFFSET UNITYSDK_OFFSET(0xBE28DB0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_4CDEC495CCC40BCB_OFFSET UNITYSDK_OFFSET(0xBE26A30)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xBE24D40)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0xBE268E0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_5B95A06FA4FED4B9_OFFSET UNITYSDK_OFFSET(0xBE27E10)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_5FA611662972BAD0_OFFSET UNITYSDK_OFFSET(0xBE29510)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_60A7C5B7A3EBEE47_OFFSET UNITYSDK_OFFSET(0xBE26B10)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0xBE2AD90)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_629F78554DB9065E_OFFSET UNITYSDK_OFFSET(0xBE24EF0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_696E70B96088889D_OFFSET UNITYSDK_OFFSET(0xBE266C0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_6F11B8044691E483_OFFSET UNITYSDK_OFFSET(0xBE2B8C0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_74F49F23504A427D_OFFSET UNITYSDK_OFFSET(0xBE27010)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_7718E5D285F56824_OFFSET UNITYSDK_OFFSET(0xBE24AF0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_787EBD65618C7F2B_OFFSET UNITYSDK_OFFSET(0xBE29010)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_83BE0299944D0F77_OFFSET UNITYSDK_OFFSET(0xBE2CB00)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0xBE2CF40)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0xBE2BDD0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_8EF9BCB5EBE233CC_OFFSET UNITYSDK_OFFSET(0xBE2B7B0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_93BC2AF9C1DFDF7C_OFFSET UNITYSDK_OFFSET(0xBE252E0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xBE29D00)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_958D6D15D1E0FE75_OFFSET UNITYSDK_OFFSET(0xBE2B310)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0xBE25EB0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_971C829E808AA9E5_OFFSET UNITYSDK_OFFSET(0xBE27420)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_9C1267C40C1D7B42_OFFSET UNITYSDK_OFFSET(0xBE2BBB0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_9F86FD0988591376_OFFSET UNITYSDK_OFFSET(0xBE25430)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_9FE4AB7E2BDAE9CB_OFFSET UNITYSDK_OFFSET(0xBE29FB0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_A22F3F51A60138FB_OFFSET UNITYSDK_OFFSET(0xBE2A630)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_A269D39DAB68DB42_OFFSET UNITYSDK_OFFSET(0xBE2BA50)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0xBE25DC0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xBE2A120)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_A3E94568D5184024_OFFSET UNITYSDK_OFFSET(0xBE27D60)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_A9BED4B32F3F3606_OFFSET UNITYSDK_OFFSET(0xBE249F0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_B153DBF66F2B9EE2_OFFSET UNITYSDK_OFFSET(0xBE25790)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_B3A8877A146D62E8_OFFSET UNITYSDK_OFFSET(0xBE2C3F0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_B72F01C0160BDF8B_OFFSET UNITYSDK_OFFSET(0xBE26D10)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_B73CDCBF771B2B3A_OFFSET UNITYSDK_OFFSET(0xBE2AAF0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_B799DB9989A18F1D_OFFSET UNITYSDK_OFFSET(0xBE2C960)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_C1089C84EE86B1C0_OFFSET UNITYSDK_OFFSET(0xBE26320)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_C61A9BE35F5FB1BE_OFFSET UNITYSDK_OFFSET(0xBE26540)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_C7DBA0F30CF6A9B9_OFFSET UNITYSDK_OFFSET(0xBE28D20)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBE2A170)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xBE28C70)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_CC4DDEEB549C9978_OFFSET UNITYSDK_OFFSET(0xBE28BB0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_CD159901C782F021_OFFSET UNITYSDK_OFFSET(0xBE2CB60)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xBE25260)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_D69C54D7DF8A225B_OFFSET UNITYSDK_OFFSET(0xBE29D50)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_D9BD0A308C2082B8_OFFSET UNITYSDK_OFFSET(0xBE244C0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_DB217CABC0C2013D_OFFSET UNITYSDK_OFFSET(0xBE25550)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_E33A426D149D816E_OFFSET UNITYSDK_OFFSET(0xBE26C60)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_E44C4B1878F85417_OFFSET UNITYSDK_OFFSET(0xBE24F50)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xBE24740)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xBE2CF30)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xBE2CF20)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_F049E6F2515AF5E7_OFFSET UNITYSDK_OFFSET(0xBE2CA70)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_F10865B2F967F86A_OFFSET UNITYSDK_OFFSET(0xBE2CFC0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_F215D4C8CA4278B0_OFFSET UNITYSDK_OFFSET(0xBE2B150)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_F363181FB3540A85_OFFSET UNITYSDK_OFFSET(0xBE24790)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_F5A18B0F3A3AF049_OFFSET UNITYSDK_OFFSET(0xBE2A1C0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_F6DDBB5EC464B28C_OFFSET UNITYSDK_OFFSET(0xBE28F00)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_F7AB163354E6802C_OFFSET UNITYSDK_OFFSET(0xBE27DC0)
#define CLASS_1_F65DC6656DEF8159_METHOD_1_FF3C6D7263F5B9E0_OFFSET UNITYSDK_OFFSET(0xBE24BF0)
#define CLASS_1_F65DC6656DEF8159_SET_ENABLELOOPREWIND_OFFSET UNITYSDK_OFFSET(0xBE2CFE0)
#define CLASS_1_F65DC6656DEF8159_SET_ISINCONTROL_OFFSET UNITYSDK_OFFSET(0xBE2CF10)
#define CLASS_1_F65DC6656DEF8159_SET_ISINMOTION_OFFSET UNITYSDK_OFFSET(0xBE2CEF0)
#define CLASS_1_F65DC6656DEF8159_SET_LOOPREWINDSNAPTARGETRATIO_OFFSET UNITYSDK_OFFSET(0xBE2D000)
#define CLASS_1_F65DC6656DEF8159_SET_REWINDEXTRAMODE_OFFSET UNITYSDK_OFFSET(0xBE28F60)
#define CLASS_1_F65DC6656DEF8159__CTOR_OFFSET UNITYSDK_OFFSET(0xBE2D010)

inline static constexpr unsigned int Class_1_F65DC6656DEF8159_TypeDefinitionIndex = 60889;

class Class_1_F65DC6656DEF8159 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_F65DC6656DEF8159_Class_1_598861075ECB5399*>* OICCHEPDECO; // 0x10
	::Class_1_22DFC3839E157DF2* GPLKDKGHCMC; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* GOPNFNABILE; // 0x20
	::RPG::GameCore::GameEntity* JCCHOIPFHHD; // 0x28
	::Class_1_E7DA329C99460319* HECJOHAAFAF; // 0x30
	::Struct_2_F8D9CEC872B937AF CDKIDBFHNPL; // 0x38
	::System::Collections::Generic::List_1<::System::Single>* OJLAMFONPIL; // 0xC8
	::Class_1_937F95F9E8467C2D* HLNHNOFHCKK; // 0xD0
	::Il2CppArray<::Class_0_16E4307DCC419505_698*>* BLBMFJNNBCN; // 0xD8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::EntityTimelineControlNode*>* DPBJHGEBCEA; // 0xE0
	::System::Collections::Generic::List_1<::Class_1_F65DC6656DEF8159_Class_1_598861075ECB5399*>* EPICJFNGBIN; // 0xE8
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_698*>* MJHIMCFFIHD; // 0xF0
	::RPG::Client::EntityTimelineControlTrackInfo* EABKOHGCHFP; // 0xF8
	::System::Int32 IAABCLCMLAK; // 0x100
	::System::Single ONCKBJAAFNN; // 0x104
	::System::Int32 NNEHDADNGHP; // 0x108
	::System::Single HNNAGFAJOKL; // 0x10C
	::RPG::Client::TimeRewindExtraMode _RewindExtraMode_k__BackingField; // 0x110
	::System::Boolean _IsInControl_k__BackingField; // 0x114
	::System::Boolean MIGBNOFIOMI; // 0x115
	::System::Boolean _LoopRewindSnapTargetRatio_k__BackingField; // 0x116
	::System::Boolean _IsInMotion_k__BackingField; // 0x117
	::System::Single APEJIEHKAAL; // 0x118
	::RPG::GameCore::TimeRewindState MPGEHKEOCAK; // 0x11C
	::System::Int32 MMDKGDJDJJF; // 0x120
	::System::Int32 OJHFDBPGDGL; // 0x124
	::System::Single NPINECOCALC; // 0x128
	::System::Single HBDJCFFDGDD; // 0x12C
	::System::Single EAMNEAPOAJE; // 0x130
	::System::Boolean LCJHCMCMNGG; // 0x134
	::System::Boolean HLIEGBLGCFL; // 0x135
	::System::Boolean MCAPIAKDMAA; // 0x136
	::System::Boolean JNGODFEFAGJ; // 0x137
	::System::Single OJAKIFLJJGI; // 0x138
	::System::Single FAMJLDHBBBM; // 0x13C
	::System::Boolean OCBIJPLKEEO; // 0x140
	::System::Boolean _EnableLoopRewind_k__BackingField; // 0x141
	::System::Single HBDAAFBFNBB; // 0x144
	::System::Single LDBGKLNCGNP; // 0x148
	::System::Int32 OCFFDIENHPF; // 0x14C

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

	::System::Void Method_1_F363181FB3540A85(::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::EntityTimelineControlNode*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::EntityTimelineControlNode*>*))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_F363181FB3540A85_OFFSET))(this, a1);
	}

	::RPG::Client::EntityTimelineControlNode* Method_1_A9BED4B32F3F3606(::System::Int32 a1)
	{
		return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_A9BED4B32F3F3606_OFFSET))(this, a1);
	}

	::RPG::Client::EntityTimelineControlNode* Method_1_7718E5D285F56824(::System::Int32 a1)
	{
		return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_7718E5D285F56824_OFFSET))(this, a1);
	}

	::System::Void Method_1_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_1_005F7C755E2B622B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_005F7C755E2B622B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_93BC2AF9C1DFDF7C(::System::Single a1, ::Struct_2_F8D9CEC872B937AF a2, ::RPG::GameCore::TimeRewindState& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::Struct_2_F8D9CEC872B937AF, ::RPG::GameCore::TimeRewindState&))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_93BC2AF9C1DFDF7C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DB217CABC0C2013D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_DB217CABC0C2013D_OFFSET))(this, a1);
	}

	::System::Void Method_1_B153DBF66F2B9EE2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_B153DBF66F2B9EE2_OFFSET))(this, a1);
	}

	::System::Void Method_1_C61A9BE35F5FB1BE(::RPG::GameCore::TimeRewindState a1, ::System::Single a2, ::System::Func_1<::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState, ::System::Single, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_C61A9BE35F5FB1BE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_696E70B96088889D(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_696E70B96088889D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3129BDB20712C068(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_3129BDB20712C068_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_507A5122CD01412B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_507A5122CD01412B_OFFSET))(this);
	}

	::RPG::Client::EntityTimelineControlNode* Method_1_4CDEC495CCC40BCB()
	{
		return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_4CDEC495CCC40BCB_OFFSET))(this);
	}

	::System::Boolean Method_1_60A7C5B7A3EBEE47(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_60A7C5B7A3EBEE47_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B72F01C0160BDF8B(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_B72F01C0160BDF8B_OFFSET))(this, a1, a2);
	}

	::RPG::Client::TimeRewindCheckSetStateResult Method_1_1542714063CCED8E(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::RPG::Client::TimeRewindCheckSetStateResult(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_1542714063CCED8E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_971C829E808AA9E5(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_971C829E808AA9E5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CC4DDEEB549C9978(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_CC4DDEEB549C9978_OFFSET))(this, a1);
	}

	::RPG::Client::EntityTimelineControlNode* Method_1_C7DBA0F30CF6A9B9()
	{
		return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_C7DBA0F30CF6A9B9_OFFSET))(this);
	}

	::RPG::Client::EntityTimelineControlNode* Method_1_4CDEC495CCC40BCB_1()
	{
		return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_4CDEC495CCC40BCB_1_OFFSET))(this);
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

	::System::Void set_RewindExtraMode(::RPG::Client::TimeRewindExtraMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeRewindExtraMode))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_SET_REWINDEXTRAMODE_OFFSET))(this, a1);
	}

	::System::Void Method_1_C1089C84EE86B1C0(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_C1089C84EE86B1C0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_18A3BFC9738829A7(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_18A3BFC9738829A7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_787EBD65618C7F2B(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_787EBD65618C7F2B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5FA611662972BAD0(::System::Boolean& a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_5FA611662972BAD0_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Single Method_1_D69C54D7DF8A225B(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_D69C54D7DF8A225B_OFFSET))(this, a1);
	}

	::System::Single Method_1_9FE4AB7E2BDAE9CB(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_9FE4AB7E2BDAE9CB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3B81DE967BCF7FA1(::System::Int32& a1, ::System::Int32& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_3B81DE967BCF7FA1_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_F7AB163354E6802C()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_F7AB163354E6802C_OFFSET))(this);
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

	::System::Single Method_1_F5A18B0F3A3AF049()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_F5A18B0F3A3AF049_OFFSET))(this);
	}

	::RPG::Client::EntityTimelineControlNode* Method_1_629F78554DB9065E(::System::Int32 a1)
	{
		return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_629F78554DB9065E_OFFSET))(this, a1);
	}

	::RPG::Client::EntityTimelineControlNode* Method_1_A22F3F51A60138FB(::System::Int32 a1)
	{
		return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_A22F3F51A60138FB_OFFSET))(this, a1);
	}

	::RPG::Client::EntityTimelineControlNode* Method_1_1A71A61335B91742(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_1A71A61335B91742_OFFSET))(this, a1, a2);
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

	::System::Int32 Method_1_5B95A06FA4FED4B9(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_5B95A06FA4FED4B9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0C62C261E281523C(::RPG::Client::EntityTimelineControlNode* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EntityTimelineControlNode*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_0C62C261E281523C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B73CDCBF771B2B3A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_B73CDCBF771B2B3A_OFFSET))(this);
	}

	::System::Void Method_1_F215D4C8CA4278B0(::RPG::Client::EntityTimelineControlNode* a1, ::System::Single a2, ::System::Collections::Generic::List_1<::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EntityTimelineControlNode*, ::System::Single, ::System::Collections::Generic::List_1<::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_F215D4C8CA4278B0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A269D39DAB68DB42(::System::Single a1, ::Il2CppArray<::RPG::GameCore::TimeRewindEntityEventConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::RPG::GameCore::TimeRewindEntityEventConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_A269D39DAB68DB42_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8EF9BCB5EBE233CC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_8EF9BCB5EBE233CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_958D6D15D1E0FE75(::System::Single a1, ::Il2CppArray<::RPG::GameCore::TimeRewindEffConfig*>* a2, ::System::Single a3, ::System::Single a4, ::RPG::Client::EntityTimelineControlNode* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::RPG::GameCore::TimeRewindEffConfig*>*, ::System::Single, ::System::Single, ::RPG::Client::EntityTimelineControlNode*))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_958D6D15D1E0FE75_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_9C1267C40C1D7B42(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_9C1267C40C1D7B42_OFFSET))(this, a1);
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

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_B3A8877A146D62E8(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_B3A8877A146D62E8_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3E94568D5184024(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_A3E94568D5184024_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_96A53A17AC5D0E93_OFFSET))(this);
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

	::System::Void Method_1_3902B1D2174FE8E4(::Class_0_16E4307DCC419505_698* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_698*))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_3902B1D2174FE8E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_F049E6F2515AF5E7(::System::Single a1, ::Il2CppArray<::Class_0_16E4307DCC419505_698*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::Class_0_16E4307DCC419505_698*>*))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_F049E6F2515AF5E7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_83BE0299944D0F77()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_83BE0299944D0F77_OFFSET))(this);
	}

	::System::Void Method_1_62593EE2FE331D20()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_62593EE2FE331D20_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_A36150C5DCC8409E_1_OFFSET))(this);
	}

	::System::Void Method_1_1C23CF9DA4652C35(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_1C23CF9DA4652C35_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_1_CD159901C782F021(::RPG::GameCore::TimeRewindState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_CD159901C782F021_OFFSET))(this, a1);
	}

	::System::Void Method_1_45714050EDEF8291()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_45714050EDEF8291_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_3E7178C5ECF017DB_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_18FD01C2949D722C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_18FD01C2949D722C_OFFSET))(this, a1);
	}

	::System::Boolean get_IsInMotion()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_GET_ISINMOTION_OFFSET))(this);
	}

	::System::Void set_IsInMotion(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_SET_ISINMOTION_OFFSET))(this, a1);
	}

	::System::Boolean get_IsInControl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_GET_ISINCONTROL_OFFSET))(this);
	}

	::System::Void set_IsInControl(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_SET_ISINCONTROL_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_861970C5F2C21AB2_OFFSET))(this);
	}

	::RPG::GameCore::TimeRewindState Method_1_F10865B2F967F86A()
	{
		return ((::RPG::GameCore::TimeRewindState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_F10865B2F967F86A_OFFSET))(this);
	}

	::System::Single Method_1_9F86FD0988591376()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_METHOD_1_9F86FD0988591376_OFFSET))(this);
	}

	::System::Boolean get_EnableLoopRewind()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_GET_ENABLELOOPREWIND_OFFSET))(this);
	}

	::System::Void set_EnableLoopRewind(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_SET_ENABLELOOPREWIND_OFFSET))(this, a1);
	}

	::System::Boolean get_LoopRewindSnapTargetRatio()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_GET_LOOPREWINDSNAPTARGETRATIO_OFFSET))(this);
	}

	::System::Void set_LoopRewindSnapTargetRatio(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_SET_LOOPREWINDSNAPTARGETRATIO_OFFSET))(this, a1);
	}
};
