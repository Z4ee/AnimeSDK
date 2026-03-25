#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/DronesPuzzleAchieveAreaConfig.h"
#include "unitysdk/RPG/Client/Prop/DronesPuzzleAreaConfig.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"

class Class_1_806DE49B116AC2DA;
class Class_1_A4F2C99A2E6F922A;
class Class_1_DB97D5A23E58D83F;
namespace RPG::Client { class MonoDroneAirwallControl; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyGlobalVisionParams; }
namespace RPG::GameCore { class NotifyShowFuncBtnParam; }
namespace RPG::GameCore { class OverrideCustomDroneFuncBtn; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA082C90)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0xA086090)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GET_ISFORBIDPLAYERINPUT_OFFSET UNITYSDK_OFFSET(0xA085800)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GET_ISOVERRIDEDRONEFUNCBTN_OFFSET UNITYSDK_OFFSET(0xA085BC0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GET_NOTIFYADVENTUREFUNCBTNENABLEEFFECTSHOWSTATE_OFFSET UNITYSDK_OFFSET(0xA0860A0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA081380)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xA081340)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_049407E7CFE73C8B_OFFSET UNITYSDK_OFFSET(0xA0860B0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_0565C92E9C2B314B_OFFSET UNITYSDK_OFFSET(0xA085D40)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0xA083B40)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_2934FD95900E25B5_OFFSET UNITYSDK_OFFSET(0xA085E00)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xA083530)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA0858D0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0xA085990)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xA086030)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0xA083B90)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_895A7B65A2D8E176_OFFSET UNITYSDK_OFFSET(0xA083710)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xA085870)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xA085810)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_A84CEAF7AFA573B3_OFFSET UNITYSDK_OFFSET(0xA081C60)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0xA085CB0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xA085C20)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA0832A0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA083690)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_D00CA09B6254F1ED_OFFSET UNITYSDK_OFFSET(0xA085A10)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_D296277FE17812A6_OFFSET UNITYSDK_OFFSET(0xA084410)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_EB7282B6745B4611_OFFSET UNITYSDK_OFFSET(0xA081900)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_ONMOVEMENTEND_OFFSET UNITYSDK_OFFSET(0xA0842C0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_RESETDRONESPOSITION_OFFSET UNITYSDK_OFFSET(0xA083340)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xA0832F0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_SET_NOTIFYADVENTUREFUNCBTNENABLEEFFECTSHOWSTATE_OFFSET UNITYSDK_OFFSET(0xA084240)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_STARTCONTROL_OFFSET UNITYSDK_OFFSET(0xA082110)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xA081C10)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_STOPCONTROL_OFFSET UNITYSDK_OFFSET(0xA082ED0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xA083D30)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD__BUILDACHIEVEMENTAREAS_B__14_0_OFFSET UNITYSDK_OFFSET(0xA0863E0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xA0861C0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD__INITPUZZLE_B__2_0_OFFSET UNITYSDK_OFFSET(0xA0862C0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD__INITPUZZLE_B__2_1_OFFSET UNITYSDK_OFFSET(0xA086350)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA086570)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA086500)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xA086460)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xA086580)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xA086510)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xA0865E0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DronesPuzzleBoard_TypeDefinitionIndex = 64014;

	class DronesPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		// static const ::System::String* AUDIO_EVENT_FLYING_UP; // 0x0
		// static const ::System::String* AUDIO_EVENT_FLYING_DOWN; // 0x0
		// static const ::System::Single AUDIO_EVENT_TRIGGER_DELTA_TIME; // 0x0
		::System::Boolean UseSpeciallyRaycast; // 0x48
		::System::Boolean ShowBackBtn; // 0x49
		::System::UInt32 SpecialNPCID; // 0x4C
		::System::Boolean LeavePlayerStubInplace; // 0x50
		::UnityEngine::Transform* DronesInitAnchor; // 0x58
		::RPG::Client::Prop::DronesPuzzleAreaConfig SafeAreaConfig; // 0x60
		::RPG::Client::Prop::DronesPuzzleAreaConfig MoveAreaConfig; // 0x80
		::System::UInt32 OutMoveAreaQuestID; // 0xA0
		::Il2CppArray<::RPG::Client::Prop::DronesPuzzleAchieveAreaConfig>* AchieveAreaConfigs; // 0xA8
		::RPG::GameCore::ModifyGlobalVisionParams* GlobalVisionParams; // 0xB0
		::RPG::GameCore::ModifyGlobalVisionParams* DefaultGlobalVisionParams; // 0xB8
		::System::Single Field_6_14; // 0xC0
		::System::Single Field_6_15; // 0xC4
		::System::Single Field_6_16; // 0xC8
		::System::Single Field_6_17; // 0xCC
		::System::Single Field_6_18; // 0xD0
		::System::Single Field_6_19; // 0xD4
		::RPG::Client::MonoDroneAirwallControl* AirwallControl; // 0xD8
		::UnityEngine::GameObject* AirwallRoot; // 0xE0
		::UnityEngine::GameObject* AirwallRootPCOnly; // 0xE8
		::RPG::GameCore::GameEntity* Field_6_23; // 0xF0
		::System::Single Field_6_24; // 0xF8
		::System::Boolean Field_6_25; // 0xFC
		::System::Boolean Field_6_26; // 0xFD
		::Class_1_A4F2C99A2E6F922A* Field_6_27; // 0x100
		::Class_1_A4F2C99A2E6F922A* Field_6_28; // 0x108
		::System::Collections::Generic::List_1<::Class_1_DB97D5A23E58D83F*>* Field_6_29; // 0x110
		::System::Single Field_6_30; // 0x118
		::System::Int32 Field_6_31; // 0x11C
		::System::Int32 Field_6_32; // 0x120
		::System::Single Field_6_33; // 0x124
		::System::Boolean Field_6_34; // 0x128
		::Class_1_806DE49B116AC2DA* Field_6_35; // 0x130
		::System::Single Field_6_36; // 0x138
		::System::Single Field_6_37; // 0x13C
		::UnityEngine::LineRenderer* Field_6_38; // 0x140
		::Il2CppArray<::System::Boolean>* Field_6_39; // 0x148
		::RPG::GameCore::NotifyShowFuncBtnParam* Field_6_40; // 0x150
		::System::UInt32 Field_6_41; // 0x158
		::RPG::GameCore::OverrideCustomDroneFuncBtn* Field_6_42; // 0x160

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void StartControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_STARTCONTROL_OFFSET))(this);
		}

		::System::Void StopControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_STOPCONTROL_OFFSET))(this);
		}

		::System::Void ResetDronesPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_RESETDRONESPOSITION_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void OnMovementEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_ONMOVEMENTEND_OFFSET))(this);
		}

		::System::Void Method_6_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void Method_6_D296277FE17812A6(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_D296277FE17812A6_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_6_EB7282B6745B4611()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_EB7282B6745B4611_OFFSET))(this);
		}

		::System::Void Method_6_A84CEAF7AFA573B3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_A84CEAF7AFA573B3_OFFSET))(this);
		}

		::System::Void Method_6_51AC7912135C5E23()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_51AC7912135C5E23_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_229CEF33F0AF9039()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_229CEF33F0AF9039_OFFSET))(this);
		}

		::System::Void Method_6_A27D06F9481FAFDB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_A27D06F9481FAFDB_OFFSET))(this, a1);
		}

		::System::Void Method_6_A27D06F9481FAFDB_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_A27D06F9481FAFDB_1_OFFSET))(this, a1);
		}

		::System::Void Method_6_D00CA09B6254F1ED(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_D00CA09B6254F1ED_OFFSET))(this, a1);
		}

		::System::Void Method_6_C450A961450309C9(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_C450A961450309C9_OFFSET))(this, a1);
		}

		::System::Void Method_6_C450A961450309C9_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_C450A961450309C9_1_OFFSET))(this, a1);
		}

		::System::Void Method_6_0565C92E9C2B314B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_0565C92E9C2B314B_OFFSET))(this, a1);
		}

		::System::Void Method_6_2934FD95900E25B5(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_2934FD95900E25B5_OFFSET))(this, a1);
		}

		::System::Void Method_6_895A7B65A2D8E176(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_895A7B65A2D8E176_OFFSET))(this, a1);
		}

		::System::Void Method_6_885DF4DA0F709E3E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_885DF4DA0F709E3E_OFFSET))(this);
		}

		::System::Void Method_6_7DD84EAFF333A1E4(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_7DD84EAFF333A1E4_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GET_ENTITY_OFFSET))(this);
		}

		::System::Boolean get_IsForbidPlayerInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GET_ISFORBIDPLAYERINPUT_OFFSET))(this);
		}

		::System::Boolean get_NotifyAdventureFuncBtnEnableEffectShowState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GET_NOTIFYADVENTUREFUNCBTNENABLEEFFECTSHOWSTATE_OFFSET))(this);
		}

		::System::Void set_NotifyAdventureFuncBtnEnableEffectShowState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_SET_NOTIFYADVENTUREFUNCBTNENABLEEFFECTSHOWSTATE_OFFSET))(this, a1);
		}

		::System::Void Method_6_049407E7CFE73C8B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_049407E7CFE73C8B_OFFSET))(this, a1);
		}

		::System::Void Method_6_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Boolean get_IsOverrideDroneFuncBtn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GET_ISOVERRIDEDRONEFUNCBTN_OFFSET))(this);
		}

		::System::Void _InitPuzzle_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD__INITPUZZLE_B__2_0_OFFSET))(this);
		}

		::System::Void _InitPuzzle_b__2_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD__INITPUZZLE_B__2_1_OFFSET))(this);
		}

		::System::Void _BuildAchievementAreas_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD__BUILDACHIEVEMENTAREAS_B__14_0_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_TickPuzzle(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET))(this, P0);
		}
	};
}
