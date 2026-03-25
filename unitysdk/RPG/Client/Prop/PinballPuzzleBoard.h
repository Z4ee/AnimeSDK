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

class Class_1_26CC4FDC0664CC03;
class Class_1_A2780D0F4B46A950;
class Class_1_DD81253E160EB8B2;
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

#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_CANACTIVEPLATE_OFFSET UNITYSDK_OFFSET(0xA11F8C0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xA11BA30)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA11AC40)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ENDPINBALLCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xA122DC0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GETPINBALLITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0xA11CD50)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GET_CURRENTSELECTPINBALLITEM_OFFSET UNITYSDK_OFFSET(0xA118CB0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GET_OWNERTRANS_OFFSET UNITYSDK_OFFSET(0xA1246B0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GET_PINBALLITEMS_DEBUG_OFFSET UNITYSDK_OFFSET(0xA1246C0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GET_PLATEREMAINCOUNT_OFFSET UNITYSDK_OFFSET(0xA1246D0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_INITOPTIONS_OFFSET UNITYSDK_OFFSET(0xA11A830)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_INITPINBALL_OFFSET UNITYSDK_OFFSET(0xA11A130)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA11A0A0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xA11BA70)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_LATEUPDATEPUZZLE_OFFSET UNITYSDK_OFFSET(0xA11BCD0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_LAUNCH_OFFSET UNITYSDK_OFFSET(0xA121660)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_01F8C9B8FEC4A2CF_OFFSET UNITYSDK_OFFSET(0xA123500)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_070546811DD6F16C_OFFSET UNITYSDK_OFFSET(0xA123900)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_08C689627757D0F9_OFFSET UNITYSDK_OFFSET(0xA123600)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0xA123DF0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_1676349FAEF4B05E_OFFSET UNITYSDK_OFFSET(0xA1216B0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xA11EAE0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_1AD3CAF2B0982C3F_OFFSET UNITYSDK_OFFSET(0xA1203E0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_1CFEF2C87EA4995A_OFFSET UNITYSDK_OFFSET(0xA11CFE0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_2083A1568CE00304_OFFSET UNITYSDK_OFFSET(0xA122A10)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0xA121450)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0xA11E430)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_280628713361E10F_OFFSET UNITYSDK_OFFSET(0xA1207E0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0xA11FE80)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_3972738626E6BB6F_OFFSET UNITYSDK_OFFSET(0xA11C480)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_5152ABC5D08CE614_OFFSET UNITYSDK_OFFSET(0xA119C30)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_529341EF7E8B39BE_OFFSET UNITYSDK_OFFSET(0xA11FC50)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_540DB5DAE524BF3C_1_OFFSET UNITYSDK_OFFSET(0xA123A50)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_540DB5DAE524BF3C_2_OFFSET UNITYSDK_OFFSET(0xA1240A0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_540DB5DAE524BF3C_OFFSET UNITYSDK_OFFSET(0xA1239F0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_5FB066975C67F812_OFFSET UNITYSDK_OFFSET(0xA11E050)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_61FA52F6867AECBB_OFFSET UNITYSDK_OFFSET(0xA11C1D0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0xA121C90)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0xA11B5E0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_74EB46AAC179C832_OFFSET UNITYSDK_OFFSET(0xA11B0C0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_7778ABE51AFDB516_OFFSET UNITYSDK_OFFSET(0xA11FDF0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_78E88B7CB3CC1E2A_OFFSET UNITYSDK_OFFSET(0xA121DB0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_825CC99DD653DEE0_OFFSET UNITYSDK_OFFSET(0xA11ED30)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_8AEE3C4E6BD69BAB_OFFSET UNITYSDK_OFFSET(0xA11CA80)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_9547E82748FE6C69_OFFSET UNITYSDK_OFFSET(0xA1201A0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA1201F0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0xA11EA70)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xA11B960)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_A3CD8010EE7E2C0B_OFFSET UNITYSDK_OFFSET(0xA123710)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_B09E78EE7EE4F8FA_1_OFFSET UNITYSDK_OFFSET(0xA11F9C0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xA11AB10)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_BA410EA09457B5C1_OFFSET UNITYSDK_OFFSET(0xA11BC80)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_C2D94B542F8BDBB0_OFFSET UNITYSDK_OFFSET(0xA11F910)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xA120270)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_C8F93DC0DF0652A4_1_OFFSET UNITYSDK_OFFSET(0xA121F10)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_C8F93DC0DF0652A4_OFFSET UNITYSDK_OFFSET(0xA121CE0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_C9748511121817AE_OFFSET UNITYSDK_OFFSET(0xA11E380)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA11DFE0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA1203A0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0xA119B00)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_D2594BF9DC46F655_OFFSET UNITYSDK_OFFSET(0xA120740)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_D6288EFA98A301E9_OFFSET UNITYSDK_OFFSET(0xA11D7E0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_E658B2206C1568CD_OFFSET UNITYSDK_OFFSET(0xA121FE0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0xA123CD0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xA11B760)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_F7E674C1303ACB5B_OFFSET UNITYSDK_OFFSET(0xA123AB0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_F81C848FE9ED44F9_OFFSET UNITYSDK_OFFSET(0xA123780)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0xA1228D0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONINTERACTSTATION_OFFSET UNITYSDK_OFFSET(0xA11CDE0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONPINBALLITEMINTERACTEND_OFFSET UNITYSDK_OFFSET(0xA11BC20)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONPINBALLITEMINTERACTSTART_OFFSET UNITYSDK_OFFSET(0xA11F760)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONPLATEACTIVE_OFFSET UNITYSDK_OFFSET(0xA11F7A0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONPLATEDEACTIVE_OFFSET UNITYSDK_OFFSET(0xA11F830)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_PINBALLCONFIGPOSTOMATRIXPOS_OFFSET UNITYSDK_OFFSET(0xA11CCF0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_PINBALLDEBUG_SELECTPINBALLITEM_OFFSET UNITYSDK_OFFSET(0xA119550)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_REPORTINTERACTPLATE_OFFSET UNITYSDK_OFFSET(0xA124100)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xA11BAB0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_STARTPINBALLCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xA11D900)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_STARTPLAYERCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xA11D9B0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_SWITCHCURRENTGAMEMODE_OFFSET UNITYSDK_OFFSET(0xA11CF90)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xA11BE60)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xA1246E0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD___IFIXBASEPROXY_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xA124BF0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA124BE0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA124BD0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xA124C30)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD___IFIXBASEPROXY_LATEUPDATEPUZZLE_OFFSET UNITYSDK_OFFSET(0xA124CE0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xA124CA0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xA124D40)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PinballPuzzleBoard_TypeDefinitionIndex = 64217;

	class PinballPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		// static const ::System::String* Field_6_11; // 0x0
		// static const ::System::String* Field_6_12; // 0x0
		// static const ::System::String* Field_6_13; // 0x0
		// static const ::System::String* Field_6_14; // 0x0
		// static const ::System::String* Field_6_35; // 0x0
		// static const ::System::String* Field_6_36; // 0x0
		// static const ::System::String* Field_6_37; // 0x0
		// static const ::System::String* Field_6_38; // 0x0
		// static const ::System::String* Field_6_39; // 0x0
		// static const ::System::String* Field_6_40; // 0x0
		// static const ::System::String* Field_6_41; // 0x0
		// static const ::System::String* Field_6_42; // 0x0
		// static const ::System::String* Field_6_43; // 0x0
		// static const ::System::String* Field_6_44; // 0x0
		// static const ::System::String* Field_6_45; // 0x0
		// static const ::System::String* Field_6_47; // 0x0
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
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_6_46; // 0x118
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
		::Class_1_26CC4FDC0664CC03* Field_6_62; // 0x178
		::Class_1_26CC4FDC0664CC03* Field_6_63; // 0x180
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
		::Class_1_DD81253E160EB8B2* Field_6_80; // 0x1F8
		::Class_1_DD81253E160EB8B2* Field_6_81; // 0x200
		::Class_1_DD81253E160EB8B2* Field_6_82; // 0x208
		::Class_1_DD81253E160EB8B2* Field_6_83; // 0x210
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

		::System::Void Method_6_BA410EA09457B5C1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_BA410EA09457B5C1_OFFSET))(this, a1);
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

		::System::Int32 Method_6_3972738626E6BB6F(::UnityEngine::Vector2 a1, ::System::Boolean& a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_3972738626E6BB6F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_B09E78EE7EE4F8FA_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_B09E78EE7EE4F8FA_1_OFFSET))(this);
		}

		::System::Void Method_6_7778ABE51AFDB516()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_7778ABE51AFDB516_OFFSET))(this);
		}

		::System::Void Method_6_18982EFD3B740683()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_18982EFD3B740683_OFFSET))(this);
		}

		::System::Void Method_6_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_EDFD49C942C75D6C_OFFSET))(this);
		}

		::System::Void Method_6_529341EF7E8B39BE(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_529341EF7E8B39BE_OFFSET))(this, a1);
		}

		::System::Void Method_6_9547E82748FE6C69(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_9547E82748FE6C69_OFFSET))(this, a1);
		}

		::System::Void Method_6_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_6_367B9590522079D1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_367B9590522079D1_OFFSET))(this);
		}

		::System::Void Method_6_C450A961450309C9(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_C450A961450309C9_OFFSET))(this, a1);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_C9748511121817AE(::RPG::Client::Prop::PinballPageProxy_PinballPageHintState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PinballPageProxy_PinballPageHintState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_C9748511121817AE_OFFSET))(this, a1);
		}

		::System::Void Method_6_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_CA373AA1C7054598_1_OFFSET))(this);
		}

		::Class_1_A2780D0F4B46A950* Method_6_8AEE3C4E6BD69BAB(::RPG::Client::Prop::PinballPuzzleItemConfig a1)
		{
			return ((::Class_1_A2780D0F4B46A950*(*)(::PVOID, ::RPG::Client::Prop::PinballPuzzleItemConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_8AEE3C4E6BD69BAB_OFFSET))(this, a1);
		}

		::System::Void Method_6_1AD3CAF2B0982C3F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_1AD3CAF2B0982C3F_OFFSET))(this);
		}

		::System::Void Method_6_CB613A5EF970C11B(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_CB613A5EF970C11B_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_C2D94B542F8BDBB0(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_C2D94B542F8BDBB0_OFFSET))(this, a1);
		}

		::System::Void Method_6_5152ABC5D08CE614(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_5152ABC5D08CE614_OFFSET))(this, a1);
		}

		::System::Void Method_6_228E3444D290BEE7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_228E3444D290BEE7_OFFSET))(this);
		}

		::System::Void Launch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_LAUNCH_OFFSET))(this);
		}

		::System::Void Method_6_6D93101E4CE10A96()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_6D93101E4CE10A96_OFFSET))(this);
		}

		::System::Void Method_6_C8F93DC0DF0652A4(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_C8F93DC0DF0652A4_OFFSET))(this, a1);
		}

		::System::Void Method_6_78E88B7CB3CC1E2A(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_78E88B7CB3CC1E2A_OFFSET))(this, a1);
		}

		::System::Void Method_6_C8F93DC0DF0652A4_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_C8F93DC0DF0652A4_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_1676349FAEF4B05E()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_1676349FAEF4B05E_OFFSET))(this);
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

		::System::Void Method_6_01F8C9B8FEC4A2CF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_01F8C9B8FEC4A2CF_OFFSET))(this, a1);
		}

		::System::Void Method_6_08C689627757D0F9(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_08C689627757D0F9_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::PinballPageProxy_PinballPageHintState Method_6_5FB066975C67F812(::RPG::Client::Prop::ChessDirection& a1)
		{
			return ((::RPG::Client::Prop::PinballPageProxy_PinballPageHintState(*)(::PVOID, ::RPG::Client::Prop::ChessDirection&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_5FB066975C67F812_OFFSET))(this, a1);
		}

		::System::Void Method_6_D6288EFA98A301E9(::RPG::GameCore::PropComponent* a1, ::RPG::GameCore::PuzzleCustomEvent a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_D6288EFA98A301E9_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_825CC99DD653DEE0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_825CC99DD653DEE0_OFFSET))(this);
		}

		::System::Void Method_6_A1ADC999CFACEB89()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_A1ADC999CFACEB89_OFFSET))(this);
		}

		::System::Boolean Method_6_A3CD8010EE7E2C0B(::Class_1_A2780D0F4B46A950* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_A2780D0F4B46A950*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_A3CD8010EE7E2C0B_OFFSET))(this, a1);
		}

		::Class_2_9A317DC82C0F2C13* Method_6_E658B2206C1568CD(::System::Boolean a1, ::System::Single a2, ::UnityEngine::Vector3& a3, ::System::Boolean a4, ::RPG::Client::Prop::ChessDirection a5)
		{
			return ((::Class_2_9A317DC82C0F2C13*(*)(::PVOID, ::System::Boolean, ::System::Single, ::UnityEngine::Vector3&, ::System::Boolean, ::RPG::Client::Prop::ChessDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_E658B2206C1568CD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_6_540DB5DAE524BF3C(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_540DB5DAE524BF3C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_540DB5DAE524BF3C_1(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_540DB5DAE524BF3C_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_070546811DD6F16C(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_070546811DD6F16C_OFFSET))(this, a1);
		}

		::System::Void Method_6_1CFEF2C87EA4995A(::Class_1_A2780D0F4B46A950* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A2780D0F4B46A950*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_1CFEF2C87EA4995A_OFFSET))(this, a1);
		}

		::System::Void Method_6_280628713361E10F(::Class_1_A2780D0F4B46A950* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A2780D0F4B46A950*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_280628713361E10F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_EAD10B3E55E2C4C5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_EAD10B3E55E2C4C5_OFFSET))(this);
		}

		::System::Void Method_6_96A53A17AC5D0E93()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_96A53A17AC5D0E93_OFFSET))(this);
		}

		::System::Void Method_6_0B7E3489D2C0938B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_0B7E3489D2C0938B_OFFSET))(this);
		}

		::System::Void Method_6_739DB9F245C7FAD0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_739DB9F245C7FAD0_OFFSET))(this);
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

		::System::Void Method_6_24B05D2E15A5C3C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_24B05D2E15A5C3C8_OFFSET))(this);
		}

		::System::Void ReportInteractPlate(::System::Int32 a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_REPORTINTERACTPLATE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_74EB46AAC179C832(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_74EB46AAC179C832_OFFSET))(this, a1);
		}

		::System::Void Method_6_F7E674C1303ACB5B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_F7E674C1303ACB5B_OFFSET))(this, a1);
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

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
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

		::System::Void __iFixBaseProxy_LateUpdatePuzzle(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD___IFIXBASEPROXY_LATEUPDATEPUZZLE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_TickPuzzle(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET))(this, P0);
		}
	};
}
