#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChessDirection.h"
#include "unitysdk/RPG/Client/Prop/PinballCameraAnchorConfig.h"
#include "unitysdk/RPG/Client/Prop/PinballPageProxy_PinballPageFloatBtnType.h"
#include "unitysdk/RPG/Client/Prop/PinballPageProxy_PinballPageHintState.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleControlMode.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleItemConfig.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A2780D0F4B46A950;
class Class_1_B51C604F8E585CA3;
class Class_1_E45C207B1AC948BE;
class Class_2_355167F59BB7AE92;
class Class_2_6445CB6AD59447E7;
class Class_2_9A317DC82C0F2C13;
class Class_2_FE80ABC7B49BF77F;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class VirtualCursor; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::Client::Prop { class PinballPageProxy; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_CANACTIVEPLATE_OFFSET UNITYSDK_OFFSET(0xC5E5F40)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xC5E1E80)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5E0FF0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ENDPINBALLCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xC5E9900)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GETPINBALLITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0xC5E31E0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GET_CURRENTSELECTPINBALLITEM_OFFSET UNITYSDK_OFFSET(0xC5DED50)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GET_OWNERTRANS_OFFSET UNITYSDK_OFFSET(0xC5EB230)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GET_PINBALLITEMS_DEBUG_OFFSET UNITYSDK_OFFSET(0xC5EB240)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GET_PLATEREMAINCOUNT_OFFSET UNITYSDK_OFFSET(0xC5EB250)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_INITOPTIONS_OFFSET UNITYSDK_OFFSET(0xC5E0B80)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_INITPINBALL_OFFSET UNITYSDK_OFFSET(0xC5E0400)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5E0370)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xC5E1EC0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_LATEUPDATEPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5E2110)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_LAUNCH_OFFSET UNITYSDK_OFFSET(0xC5E7F60)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xC5E5050)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_0120539054A2AC4D_OFFSET UNITYSDK_OFFSET(0xC5E14E0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_135E3AAF62134019_OFFSET UNITYSDK_OFFSET(0xC5E3CD0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_1659BCB6D1A9FC34_OFFSET UNITYSDK_OFFSET(0xC5E6B00)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0xC5E65B0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_2083A1568CE00304_OFFSET UNITYSDK_OFFSET(0xC5E9550)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_2AF6663D58564F35_OFFSET UNITYSDK_OFFSET(0xC5E28F0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_2E501395D1388877_OFFSET UNITYSDK_OFFSET(0xC5EA080)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_41782CE468D1B24D_OFFSET UNITYSDK_OFFSET(0xC5EA5F0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0xC5E4540)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0xC5E49B0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0xC5E4FE0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0xC5EA810)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_540DB5DAE524BF3C_1_OFFSET UNITYSDK_OFFSET(0xC5EA590)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_540DB5DAE524BF3C_2_OFFSET UNITYSDK_OFFSET(0xC5EAC20)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_540DB5DAE524BF3C_OFFSET UNITYSDK_OFFSET(0xC5EA530)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0xC5EA930)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_61FA52F6867AECBB_OFFSET UNITYSDK_OFFSET(0xC5E2630)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_6C1C98B7B5F38CA0_OFFSET UNITYSDK_OFFSET(0xC5E68C0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_7778ABE51AFDB516_OFFSET UNITYSDK_OFFSET(0xC5E6520)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_7CE4CE3EBCB70547_OFFSET UNITYSDK_OFFSET(0xC5E6380)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_7F6685FB6B418CB3_OFFSET UNITYSDK_OFFSET(0xC5E4900)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_8AEE3C4E6BD69BAB_OFFSET UNITYSDK_OFFSET(0xC5E2F10)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_9079FE2639801498_OFFSET UNITYSDK_OFFSET(0xC5E20C0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC5E6910)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_9CD607631367DD7F_OFFSET UNITYSDK_OFFSET(0xC5E8750)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xC5E1DB0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0xC5E1A10)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_A3CD8010EE7E2C0B_OFFSET UNITYSDK_OFFSET(0xC5EA280)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_A88E33775C007389_OFFSET UNITYSDK_OFFSET(0xC5DFDD0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0xC5E52F0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xC5E0EC0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_B0E03B048EC0AD35_OFFSET UNITYSDK_OFFSET(0xC5EA450)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_B398A0CD4E90F689_1_OFFSET UNITYSDK_OFFSET(0xC5E88D0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_B398A0CD4E90F689_OFFSET UNITYSDK_OFFSET(0xC5E8650)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_B43EB0B611357B65_OFFSET UNITYSDK_OFFSET(0xC5EA180)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0xC5E1B90)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_BF8C902CD407608E_OFFSET UNITYSDK_OFFSET(0xC5E45B0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xC5E6990)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC5E6AC0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_CAEE376DC5422269_OFFSET UNITYSDK_OFFSET(0xC5E7FB0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_D09831639F615812_OFFSET UNITYSDK_OFFSET(0xC5DFCA0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_D2594BF9DC46F655_OFFSET UNITYSDK_OFFSET(0xC5E6F00)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_D3855D86A1D70EA9_OFFSET UNITYSDK_OFFSET(0xC5E89D0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_D41059BB825399DF_OFFSET UNITYSDK_OFFSET(0xC5E3420)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_E092EFE670864887_OFFSET UNITYSDK_OFFSET(0xC5E7D60)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_E167CC791D3371F7_OFFSET UNITYSDK_OFFSET(0xC5E5F90)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xC5E6030)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_EE83221383696989_OFFSET UNITYSDK_OFFSET(0xC5E6FA0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0xC5E8600)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_F81C848FE9ED44F9_OFFSET UNITYSDK_OFFSET(0xC5EA2F0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0xC5E9410)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONINTERACTSTATION_OFFSET UNITYSDK_OFFSET(0xC5E3260)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONPINBALLITEMINTERACTEND_OFFSET UNITYSDK_OFFSET(0xC5E2060)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONPINBALLITEMINTERACTSTART_OFFSET UNITYSDK_OFFSET(0xC5E5DE0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONPLATEACTIVE_OFFSET UNITYSDK_OFFSET(0xC5E5E20)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONPLATEDEACTIVE_OFFSET UNITYSDK_OFFSET(0xC5E5EB0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_PINBALLCONFIGPOSTOMATRIXPOS_OFFSET UNITYSDK_OFFSET(0xC5E3180)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_PINBALLDEBUG_SELECTPINBALLITEM_OFFSET UNITYSDK_OFFSET(0xC5DF670)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_REPORTINTERACTPLATE_OFFSET UNITYSDK_OFFSET(0xC5EAC80)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5E1F00)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_STARTPINBALLCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xC5E3DF0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_STARTPLAYERCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xC5E3E90)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_SWITCHCURRENTGAMEMODE_OFFSET UNITYSDK_OFFSET(0xC5E33D0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5E2290)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xC5EB260)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD___IFIXBASEPROXY_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xC5EB7E0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5EB7D0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5EB7C0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xC5EB820)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD___IFIXBASEPROXY_LATEUPDATEPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5EB8D0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5EB890)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5EB930)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PinballPuzzleBoard_TypeDefinitionIndex = 73286;

	class PinballPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		// static const ::System::String* Field_6_0; // 0x0
		// static const ::System::String* Field_6_1; // 0x0
		// static const ::System::String* Field_6_2; // 0x0
		// static const ::System::String* Field_6_3; // 0x0
		// static const ::System::String* Field_6_4; // 0x0
		// static const ::System::String* Field_6_5; // 0x0
		// static const ::System::String* Field_6_6; // 0x0
		// static const ::System::String* Field_6_7; // 0x0
		// static const ::System::String* Field_6_8; // 0x0
		// static const ::System::String* Field_6_9; // 0x0
		// static const ::System::String* Field_6_10; // 0x0
		// static const ::System::String* Field_6_11; // 0x0
		// static const ::System::String* Field_6_12; // 0x0
		// static const ::System::String* Field_6_13; // 0x0
		// static const ::System::String* Field_6_14; // 0x0
		// static const ::System::String* Field_6_15; // 0x0
		::System::Int32 TotalCount; // 0x48
		::UnityEngine::Vector2Int MatrixSize; // 0x4C
		::System::Single Interval; // 0x54
		::Il2CppArray<::RPG::Client::Prop::PinballPuzzleItemConfig>* MatrixConfigs; // 0x58
		::System::Single LaunchSpeed; // 0x60
		::System::Single BlendInTime; // 0x64
		::UnityEngine::AnimationCurve* FovCurve; // 0x68
		::System::Single CurveMaxFov; // 0x70
		::System::String* StationAttachPoint; // 0x78
		::System::String* PlateAttachPoint; // 0x80
		::System::String* BlockAttachPoint; // 0x88
		::System::String* LaunchFailToast; // 0x90
		::System::String* OpenPlateFailToast; // 0x98
		::UnityEngine::Vector3 LaunchCameraFollowOffset; // 0xA0
		::UnityEngine::Vector3 LaunchCameraRotationOffset; // 0xAC
		::System::Single LaunchCameraBlendTime; // 0xB8
		::System::Single LaunchByPercent; // 0xBC
		::Il2CppArray<::RPG::Client::Prop::PinballCameraAnchorConfig>* PinballCameraAnchorConfigs; // 0xC0
		::System::String* StationTriggerName; // 0xC8
		::System::Single EnterStationCameraBlendTime; // 0xD0
		::System::Single EnterStationMoveDelay; // 0xD4
		::System::Single EnterStationMoveDuration; // 0xD8
		::System::Single ExitStationMoveDelay; // 0xDC
		::System::Single EnterStationHidePlayerDelay; // 0xE0
		::System::Single ExitStationShowPlayerDelay; // 0xE4
		::System::String* StationEntranceAttachPoint; // 0xE8
		::Il2CppArray<::UnityEngine::Vector3>* EnterStationCurveControlPoint; // 0xF0
		::System::String* EnterStationSwitchInEffectPath; // 0xF8
		::System::String* ExitStationSwitchOutEffectPath; // 0x100
		::System::String* EnterStationFollowEffectPath; // 0x108
		::System::String* START_PUZZLE_CONTROL_MODE_TEXT; // 0x110
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_6_47; // 0x118
		::System::Int32 Field_6_48; // 0x120
		::System::String* Field_6_49; // 0x128
		::System::Int32 Field_6_50; // 0x130
		::System::Int32 Field_6_51; // 0x134
		::System::Int32 Field_6_52; // 0x138
		::RPG::Client::Prop::PinballPageProxy_PinballPageHintState Field_6_53; // 0x13C
		::System::Int32 Field_6_54; // 0x140
		::System::Int32 Field_6_55; // 0x144
		::System::Collections::Generic::List_1<::Class_1_A2780D0F4B46A950*>* Field_6_56; // 0x148
		::Il2CppArray<::System::Int32>* Field_6_57; // 0x150
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_6_58; // 0x158
		::RPG::GameCore::PropComponent* Field_6_59; // 0x160
		::UnityEngine::Transform* Field_6_60; // 0x168
		::RPG::Client::Prop::PinballPageProxy* Field_6_61; // 0x170
		::Class_1_B51C604F8E585CA3* Field_6_62; // 0x178
		::Class_1_B51C604F8E585CA3* Field_6_63; // 0x180
		::RPG::Client::Prop::PinballPuzzleControlMode Field_6_64; // 0x188
		::System::Int32 Field_6_65; // 0x18C
		::System::Int32 Field_6_66; // 0x190
		::System::Int32 Field_6_67; // 0x194
		::System::Int32 Field_6_68; // 0x198
		::System::Collections::Generic::List_1<::System::Int32>* Field_6_69; // 0x1A0
		::System::Collections::Generic::List_1<::Class_2_9A317DC82C0F2C13*>* Field_6_70; // 0x1A8
		::Class_2_6445CB6AD59447E7* Field_6_71; // 0x1B0
		::System::Collections::Generic::List_1<::System::String*>* Field_6_72; // 0x1B8
		::System::Collections::Generic::List_1<::RPG::Client::Prop::PinballPageProxy_PinballPageFloatBtnType>* Field_6_73; // 0x1C0
		::UnityEngine::EventSystems::PointerEventData* Field_6_74; // 0x1C8
		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* Field_6_75; // 0x1D0
		::System::Int32 Field_6_76; // 0x1D8
		::RPG::Client::MonoEffect* Field_6_77; // 0x1E0
		::RPG::Client::MonoEffect* Field_6_78; // 0x1E8
		::RPG::Client::MonoEffect* Field_6_79; // 0x1F0
		::Class_1_E45C207B1AC948BE* Field_6_80; // 0x1F8
		::Class_1_E45C207B1AC948BE* Field_6_81; // 0x200
		::Class_1_E45C207B1AC948BE* Field_6_82; // 0x208
		::Class_1_E45C207B1AC948BE* Field_6_83; // 0x210
		::Class_2_355167F59BB7AE92* Field_6_84; // 0x218
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_6_85; // 0x220
		::RPG::Client::TwoKeyDictionary_3<::System::Int32, ::System::Int32, ::RPG::Client::Prop::PinballCameraAnchorConfig>* Field_6_86; // 0x228
		::Class_2_FE80ABC7B49BF77F* Field_6_87; // 0x230
		::System::Boolean Field_6_88; // 0x238
		::System::Boolean Field_6_89; // 0x239
		::System::Int32 Field_6_90; // 0x23C
		::System::Int32 Field_6_91; // 0x240
		::System::Boolean Field_6_92; // 0x244
		::System::Boolean Field_6_93; // 0x245
		::RPG::Client::VirtualCursor* Field_6_94; // 0x248
		::UnityEngine::Transform* Field_6_95; // 0x250
		::System::Boolean Field_6_96; // 0x258
		::UnityEngine::Coroutine* Field_6_97; // 0x260

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		::System::Void PinballDebug_SelectPinballItem(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_PINBALLDEBUG_SELECTPINBALLITEM_OFFSET))(this, a1);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void Method_6_9079FE2639801498(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_9079FE2639801498_OFFSET))(this, a1);
		}

		::System::Void LateUpdatePuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_LATEUPDATEPUZZLE_OFFSET))(this, a1);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void InitPinball()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_INITPINBALL_OFFSET))(this);
		}

		::System::Void InitOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_INITOPTIONS_OFFSET))(this);
		}

		::System::Void Method_6_B09E78EE7EE4F8FA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_B09E78EE7EE4F8FA_OFFSET))(this);
		}

		::Class_1_A2780D0F4B46A950* GetPinballItemByIndex(::System::Int32 a1)
		{
			return ((::Class_1_A2780D0F4B46A950*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GETPINBALLITEMBYINDEX_OFFSET))(this, a1);
		}

		::System::Void PinballConfigPosToMatrixPos(::UnityEngine::Vector2Int a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_PINBALLCONFIGPOSTOMATRIXPOS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnInteractStation(::Class_1_A2780D0F4B46A950* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A2780D0F4B46A950*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONINTERACTSTATION_OFFSET))(this, a1);
		}

		::System::Void StartPinballControlMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_STARTPINBALLCONTROLMODE_OFFSET))(this);
		}

		::System::Void StartPlayerControlMode(::Class_1_A2780D0F4B46A950* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A2780D0F4B46A950*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_STARTPLAYERCONTROLMODE_OFFSET))(this, a1);
		}

		::System::Void SwitchCurrentGameMode(::RPG::Client::Prop::PinballPuzzleControlMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PinballPuzzleControlMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_SWITCHCURRENTGAMEMODE_OFFSET))(this, a1);
		}

		::System::Void OnPinballItemInteractStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONPINBALLITEMINTERACTSTART_OFFSET))(this);
		}

		::System::Void OnPinballItemInteractEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONPINBALLITEMINTERACTEND_OFFSET))(this);
		}

		::System::Void OnPlateActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONPLATEACTIVE_OFFSET))(this);
		}

		::System::Void OnPlateDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONPLATEDEACTIVE_OFFSET))(this);
		}

		::System::Boolean CanActivePlate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_CANACTIVEPLATE_OFFSET))(this);
		}

		::System::Int32 Method_6_2AF6663D58564F35(::UnityEngine::Vector2 a1, ::System::Boolean& a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_2AF6663D58564F35_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_E3DE31A03057E055_OFFSET))(this);
		}

		::System::Void Method_6_7778ABE51AFDB516()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_7778ABE51AFDB516_OFFSET))(this);
		}

		::System::Void Method_6_0076C796B2045359()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_0076C796B2045359_OFFSET))(this);
		}

		::System::Void Method_6_B7F8E0B4AF22DEA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_B7F8E0B4AF22DEA3_OFFSET))(this);
		}

		::System::Void Method_6_7CE4CE3EBCB70547(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_7CE4CE3EBCB70547_OFFSET))(this, a1);
		}

		::System::Void Method_6_6C1C98B7B5F38CA0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_6C1C98B7B5F38CA0_OFFSET))(this, a1);
		}

		::System::Void Method_6_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_6_1E13A8A5C0FF7D62()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_1E13A8A5C0FF7D62_OFFSET))(this);
		}

		::System::Void Method_6_C450A961450309C9(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_C450A961450309C9_OFFSET))(this, a1);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_7F6685FB6B418CB3(::RPG::Client::Prop::PinballPageProxy_PinballPageHintState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PinballPageProxy_PinballPageHintState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_7F6685FB6B418CB3_OFFSET))(this, a1);
		}

		::System::Void Method_6_43A478BA01FE29B7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_43A478BA01FE29B7_OFFSET))(this);
		}

		::Class_1_A2780D0F4B46A950* Method_6_8AEE3C4E6BD69BAB(::RPG::Client::Prop::PinballPuzzleItemConfig a1)
		{
			return ((::Class_1_A2780D0F4B46A950*(*)(::PVOID, ::RPG::Client::Prop::PinballPuzzleItemConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_8AEE3C4E6BD69BAB_OFFSET))(this, a1);
		}

		::System::Void Method_6_1659BCB6D1A9FC34()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_1659BCB6D1A9FC34_OFFSET))(this);
		}

		::System::Void Method_6_D09831639F615812(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_D09831639F615812_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_E167CC791D3371F7(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_E167CC791D3371F7_OFFSET))(this, a1);
		}

		::System::Void Method_6_A88E33775C007389(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_A88E33775C007389_OFFSET))(this, a1);
		}

		::System::Void Method_6_E092EFE670864887()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_E092EFE670864887_OFFSET))(this);
		}

		::System::Void Launch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_LAUNCH_OFFSET))(this);
		}

		::System::Void Method_6_F7BA13C72A6B3F58()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_F7BA13C72A6B3F58_OFFSET))(this);
		}

		::System::Void Method_6_B398A0CD4E90F689(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_B398A0CD4E90F689_OFFSET))(this, a1);
		}

		::System::Void Method_6_9CD607631367DD7F(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_9CD607631367DD7F_OFFSET))(this, a1);
		}

		::System::Void Method_6_B398A0CD4E90F689_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_B398A0CD4E90F689_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_CAEE376DC5422269()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_CAEE376DC5422269_OFFSET))(this);
		}

		::System::Void Method_6_FD7514C64FB1B043(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_FD7514C64FB1B043_OFFSET))(this, a1);
		}

		::System::Void Method_6_2083A1568CE00304(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_2083A1568CE00304_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_61FA52F6867AECBB(::System::UInt32 a1, ::System::Single a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_61FA52F6867AECBB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndPinballControlMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ENDPINBALLCONTROLMODE_OFFSET))(this);
		}

		::System::Void Method_6_2E501395D1388877(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_2E501395D1388877_OFFSET))(this, a1);
		}

		::System::Void Method_6_B43EB0B611357B65(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_B43EB0B611357B65_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::PinballPageProxy_PinballPageHintState Method_6_BF8C902CD407608E(::RPG::Client::Prop::ChessDirection& a1)
		{
			return ((::RPG::Client::Prop::PinballPageProxy_PinballPageHintState(*)(::PVOID, ::RPG::Client::Prop::ChessDirection&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_BF8C902CD407608E_OFFSET))(this, a1);
		}

		::System::Void Method_6_135E3AAF62134019(::RPG::GameCore::PropComponent* a1, ::RPG::GameCore::PuzzleCustomEvent a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_135E3AAF62134019_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_AB88190D695EBEA9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_AB88190D695EBEA9_OFFSET))(this);
		}

		::System::Void Method_6_A1ADC999CFACEB89()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_A1ADC999CFACEB89_OFFSET))(this);
		}

		::System::Boolean Method_6_A3CD8010EE7E2C0B(::Class_1_A2780D0F4B46A950* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_A2780D0F4B46A950*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_A3CD8010EE7E2C0B_OFFSET))(this, a1);
		}

		::Class_2_9A317DC82C0F2C13* Method_6_D3855D86A1D70EA9(::System::Boolean a1, ::System::Single a2, ::UnityEngine::Vector3& a3, ::System::Boolean a4, ::RPG::Client::Prop::ChessDirection a5)
		{
			return ((::Class_2_9A317DC82C0F2C13*(*)(::PVOID, ::System::Boolean, ::System::Single, ::UnityEngine::Vector3&, ::System::Boolean, ::RPG::Client::Prop::ChessDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_D3855D86A1D70EA9_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_6_540DB5DAE524BF3C(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_540DB5DAE524BF3C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_540DB5DAE524BF3C_1(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_540DB5DAE524BF3C_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_B0E03B048EC0AD35(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_B0E03B048EC0AD35_OFFSET))(this, a1);
		}

		::System::Void Method_6_D41059BB825399DF(::Class_1_A2780D0F4B46A950* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A2780D0F4B46A950*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_D41059BB825399DF_OFFSET))(this, a1);
		}

		::System::Void Method_6_EE83221383696989(::Class_1_A2780D0F4B46A950* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A2780D0F4B46A950*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_EE83221383696989_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_51BBA01F511E6107()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_51BBA01F511E6107_OFFSET))(this);
		}

		::System::Void Method_6_4D2A473556700CDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_4D2A473556700CDC_OFFSET))(this);
		}

		::System::Void Method_6_601EF3E7226D7DC2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_601EF3E7226D7DC2_OFFSET))(this);
		}

		::System::Void Method_6_A27DC2C5A103933A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_A27DC2C5A103933A_OFFSET))(this);
		}

		::System::Int32 Method_6_F81C848FE9ED44F9(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::Prop::ChessDirection a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::Prop::ChessDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_F81C848FE9ED44F9_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_540DB5DAE524BF3C_2(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_540DB5DAE524BF3C_2_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_D2594BF9DC46F655(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_D2594BF9DC46F655_OFFSET))(this, a1);
		}

		::System::Void Method_6_464B80C09A37526F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_464B80C09A37526F_OFFSET))(this);
		}

		::System::Void ReportInteractPlate(::System::Int32 a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_REPORTINTERACTPLATE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_0120539054A2AC4D(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_0120539054A2AC4D_OFFSET))(this, a1);
		}

		::System::Void Method_6_41782CE468D1B24D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_41782CE468D1B24D_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_OwnerTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GET_OWNERTRANS_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_CurrentSelectPinballItem()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GET_CURRENTSELECTPINBALLITEM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_A2780D0F4B46A950*>* get_PinballItems_Debug()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_A2780D0F4B46A950*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GET_PINBALLITEMS_DEBUG_OFFSET))(this);
		}

		::System::Int32 get_PlateRemainCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GET_PLATEREMAINCOUNT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD___IFIXBASEPROXY_CANPUZZLEUNLOAD_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_LateUpdatePuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD___IFIXBASEPROXY_LATEUPDATEPUZZLE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET))(this, a1);
		}
	};
}
