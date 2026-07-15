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

#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19018310)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x1901B740)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GET_ISFORBIDPLAYERINPUT_OFFSET UNITYSDK_OFFSET(0x1901AE90)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GET_ISOVERRIDEDRONEFUNCBTN_OFFSET UNITYSDK_OFFSET(0x1901B2A0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GET_NOTIFYADVENTUREFUNCBTNENABLEEFFECTSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x1901B750)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x190169C0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x19016980)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x1901AF60)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_32FE792EB1B0F498_OFFSET UNITYSDK_OFFSET(0x1901B0A0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_3FC5D2EAE16048C0_OFFSET UNITYSDK_OFFSET(0x19018EC0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x19018C70)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_4358F70A163BCEAE_OFFSET UNITYSDK_OFFSET(0x19018E40)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_7646FFE662147970_1_OFFSET UNITYSDK_OFFSET(0x190192F0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x1901B020)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x1901B6E0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0x19019340)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x1901AF00)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x1901AEA0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_A56EAB6E8DBE44E9_OFFSET UNITYSDK_OFFSET(0x1901B4B0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_A84CEAF7AFA573B3_OFFSET UNITYSDK_OFFSET(0x190173F0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_B386444429A36A77_OFFSET UNITYSDK_OFFSET(0x1901B760)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_B484DF6A9226D45B_OFFSET UNITYSDK_OFFSET(0x1901B400)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0x19016FD0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0x1901B380)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x1901B300)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x190189E0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_D296277FE17812A6_OFFSET UNITYSDK_OFFSET(0x19019B40)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_ONMOVEMENTEND_OFFSET UNITYSDK_OFFSET(0x190199F0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_RESETDRONESPOSITION_OFFSET UNITYSDK_OFFSET(0x19018A80)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0x19018A30)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_SET_NOTIFYADVENTUREFUNCBTNENABLEEFFECTSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x19019970)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_STARTCONTROL_OFFSET UNITYSDK_OFFSET(0x19017890)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x190173A0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_STOPCONTROL_OFFSET UNITYSDK_OFFSET(0x190185C0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0x190194E0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD__BUILDACHIEVEMENTAREAS_B__14_0_OFFSET UNITYSDK_OFFSET(0x1901BA70)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1901B850)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD__INITPUZZLE_B__2_0_OFFSET UNITYSDK_OFFSET(0x1901B950)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD__INITPUZZLE_B__2_1_OFFSET UNITYSDK_OFFSET(0x1901B9E0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DronesPuzzleBoard_TypeDefinitionIndex = 74608;

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

		::System::Void Method_6_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Method_6_D296277FE17812A6(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_D296277FE17812A6_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_1F130271093617A5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_1F130271093617A5_OFFSET))(this);
		}

		::System::Void Method_6_BE4EBC8FF4054312()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_BE4EBC8FF4054312_OFFSET))(this);
		}

		::System::Void Method_6_A84CEAF7AFA573B3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_A84CEAF7AFA573B3_OFFSET))(this);
		}

		::System::Void Method_6_7646FFE662147970()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_7646FFE662147970_OFFSET))(this);
		}

		::System::Void Method_6_4358F70A163BCEAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_4358F70A163BCEAE_OFFSET))(this);
		}

		::System::Void Method_6_7646FFE662147970_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_7646FFE662147970_1_OFFSET))(this);
		}

		::System::Void Method_6_A27D06F9481FAFDB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_A27D06F9481FAFDB_OFFSET))(this, a1);
		}

		::System::Void Method_6_A27D06F9481FAFDB_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_A27D06F9481FAFDB_1_OFFSET))(this, a1);
		}

		::System::Void Method_6_32FE792EB1B0F498(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_32FE792EB1B0F498_OFFSET))(this, a1);
		}

		::System::Void Method_6_C450A961450309C9(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_C450A961450309C9_OFFSET))(this, a1);
		}

		::System::Void Method_6_C450A961450309C9_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_C450A961450309C9_1_OFFSET))(this, a1);
		}

		::System::Void Method_6_B484DF6A9226D45B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_B484DF6A9226D45B_OFFSET))(this, a1);
		}

		::System::Void Method_6_A56EAB6E8DBE44E9(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_A56EAB6E8DBE44E9_OFFSET))(this, a1);
		}

		::System::Void Method_6_3FC5D2EAE16048C0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_3FC5D2EAE16048C0_OFFSET))(this, a1);
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

		::System::Void Method_6_B386444429A36A77(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_B386444429A36A77_OFFSET))(this, a1);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_METHOD_6_CA373AA1C7054598_OFFSET))(this);
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
	};
}
