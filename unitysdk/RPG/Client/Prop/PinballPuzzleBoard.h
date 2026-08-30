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

class Class_1_9F1BD5B95B779DD0;
class Class_1_A2780D0F4B46A950;
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

#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_CANACTIVEPLATE_OFFSET UNITYSDK_OFFSET(0xDCEFB30)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xDCEB620)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCEA710)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ENDPINBALLCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xDCF3530)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GETPINBALLITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0xDCECB50)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GET_CURRENTSELECTPINBALLITEM_OFFSET UNITYSDK_OFFSET(0xDCE81B0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GET_OWNERTRANS_OFFSET UNITYSDK_OFFSET(0xDCF4EF0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GET_PINBALLITEMS_DEBUG_OFFSET UNITYSDK_OFFSET(0xDCF4F00)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GET_PLATEREMAINCOUNT_OFFSET UNITYSDK_OFFSET(0xDCF4F10)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_INITOPTIONS_OFFSET UNITYSDK_OFFSET(0xDCEA2A0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_INITPINBALL_OFFSET UNITYSDK_OFFSET(0xDCE99F0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDCE9960)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDCEB660)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_LATEUPDATEPUZZLE_OFFSET UNITYSDK_OFFSET(0xDCEB980)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_LAUNCH_OFFSET UNITYSDK_OFFSET(0xDCF1BD0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xDCEEC40)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_0120539054A2AC4D_OFFSET UNITYSDK_OFFSET(0xDCEAC80)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0xDCF0150)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0xDCF01E0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_2083A1568CE00304_OFFSET UNITYSDK_OFFSET(0xDCF3170)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_227FF8FF03B4EC11_OFFSET UNITYSDK_OFFSET(0xDCEE020)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_2AF6663D58564F35_OFFSET UNITYSDK_OFFSET(0xDCEC260)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_378D17F5AC4A22EE_OFFSET UNITYSDK_OFFSET(0xDCEFB80)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_3809AF1D89D86A94_OFFSET UNITYSDK_OFFSET(0xDCED640)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0xDCEDFB0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0xDCEE5A0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0xDCEEBD0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0xDCF44D0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_540DB5DAE524BF3C_1_OFFSET UNITYSDK_OFFSET(0xDCF4250)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_540DB5DAE524BF3C_2_OFFSET UNITYSDK_OFFSET(0xDCF48E0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_540DB5DAE524BF3C_OFFSET UNITYSDK_OFFSET(0xDCF41F0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0xDCF45F0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_6C1C98B7B5F38CA0_OFFSET UNITYSDK_OFFSET(0xDCF04F0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_7CE4CE3EBCB70547_OFFSET UNITYSDK_OFFSET(0xDCEFFB0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_7F6685FB6B418CB3_OFFSET UNITYSDK_OFFSET(0xDCEE4F0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0xDCF0730)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0xDCF19D0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_8AEE3C4E6BD69BAB_OFFSET UNITYSDK_OFFSET(0xDCEC880)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xDCF0540)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_98BACA2FF165A70D_OFFSET UNITYSDK_OFFSET(0xDCEB930)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_9CD607631367DD7F_OFFSET UNITYSDK_OFFSET(0xDCF23D0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_9F218BA7C451254A_OFFSET UNITYSDK_OFFSET(0xDCF42B0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xDCEB550)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0xDCEB1B0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_A88E33775C007389_OFFSET UNITYSDK_OFFSET(0xDCE9360)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0xDCEEEE0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xDCEA5E0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_B398A0CD4E90F689_1_OFFSET UNITYSDK_OFFSET(0xDCF2550)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_B398A0CD4E90F689_OFFSET UNITYSDK_OFFSET(0xDCF22D0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_B3F1A3A8F66EAE32_OFFSET UNITYSDK_OFFSET(0xDCEBF80)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0xDCEB330)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_BF1183757C521F0F_OFFSET UNITYSDK_OFFSET(0xDCF4150)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xDCF05C0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDCF06F0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_CAEE376DC5422269_OFFSET UNITYSDK_OFFSET(0xDCF1C20)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_CFB00179EC6A3756_OFFSET UNITYSDK_OFFSET(0xDCF3E20)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_D09831639F615812_OFFSET UNITYSDK_OFFSET(0xDCE9230)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_D2594BF9DC46F655_OFFSET UNITYSDK_OFFSET(0xDCF0BC0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_D3855D86A1D70EA9_OFFSET UNITYSDK_OFFSET(0xDCF2650)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_D41059BB825399DF_OFFSET UNITYSDK_OFFSET(0xDCECD90)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_DE62129A329C6551_OFFSET UNITYSDK_OFFSET(0xDCF3CB0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xDCEFC80)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_EE83221383696989_OFFSET UNITYSDK_OFFSET(0xDCF0C60)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0xDCF2280)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_F81C848FE9ED44F9_OFFSET UNITYSDK_OFFSET(0xDCF3FF0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_F86E3F6E3E2B1642_OFFSET UNITYSDK_OFFSET(0xDCF3F20)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0xDCF3030)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONINTERACTSTATION_OFFSET UNITYSDK_OFFSET(0xDCECBD0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONPINBALLITEMINTERACTEND_OFFSET UNITYSDK_OFFSET(0xDCEB8D0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONPINBALLITEMINTERACTSTART_OFFSET UNITYSDK_OFFSET(0xDCEF9D0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONPLATEACTIVE_OFFSET UNITYSDK_OFFSET(0xDCEFA10)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONPLATEDEACTIVE_OFFSET UNITYSDK_OFFSET(0xDCEFAA0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_PINBALLCONFIGPOSTOMATRIXPOS_OFFSET UNITYSDK_OFFSET(0xDCECAF0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_PINBALLDEBUG_SELECTPINBALLITEM_OFFSET UNITYSDK_OFFSET(0xDCE8C00)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_REPORTINTERACTPLATE_OFFSET UNITYSDK_OFFSET(0xDCF4940)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xDCEB6A0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_STARTPINBALLCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xDCED760)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_STARTPLAYERCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xDCED800)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_SWITCHCURRENTGAMEMODE_OFFSET UNITYSDK_OFFSET(0xDCECD40)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xDCEBB80)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xDCF4F20)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PinballPuzzleBoard_TypeDefinitionIndex = 78297;

	class PinballPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		// static const ::System::String* NNODGCJAECN; // 0x0
		// static const ::System::String* GHPNLJMPKHH; // 0x0
		// static const ::System::String* AHANHNDHGGG; // 0x0
		// static const ::System::String* LOAGLGKPKNE; // 0x0
		// static const ::System::String* ICHLLKDDPDM; // 0x0
		// static const ::System::String* BMBGCHFKIEN; // 0x0
		// static const ::System::String* EDPFLCFKFMJ; // 0x0
		// static const ::System::String* MFDJLKONJFC; // 0x0
		// static const ::System::String* BHFCBELHFON; // 0x0
		// static const ::System::String* PHFDALIHLHE; // 0x0
		// static const ::System::String* ECELFJPDFHL; // 0x0
		// static const ::System::String* KMEGJFNHAKB; // 0x0
		// static const ::System::String* PAJNAJNLPIG; // 0x0
		// static const ::System::String* FGPNJAKKLLF; // 0x0
		// static const ::System::String* ANOHCFKNFMC; // 0x0
		// static const ::System::String* DAIANGHGOLL; // 0x0
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
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* FAAMDCHJFCG; // 0x118
		::System::Int32 IOLGINMLMPG; // 0x120
		::System::String* FCBPFFFCNKD; // 0x128
		::System::Int32 KOFMJAGFCCN; // 0x130
		::System::Int32 FPICKBDAHNI; // 0x134
		::System::Int32 CKONCOJBLFK; // 0x138
		::RPG::Client::Prop::PinballPageProxy_PinballPageHintState FNOOKLFCHMP; // 0x13C
		::System::Int32 PPMHACHJHDM; // 0x140
		::System::Int32 OEEJEOOPEMN; // 0x144
		::System::Collections::Generic::List_1<::Class_1_A2780D0F4B46A950*>* DCKHPCOIINI; // 0x148
		::Il2CppArray<::System::Int32>* BILNGLCPKPL; // 0x150
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* BMOILCKLJKP; // 0x158
		::RPG::GameCore::PropComponent* FEOOACOCPCN; // 0x160
		::UnityEngine::Transform* PDGDCPLEPFC; // 0x168
		::RPG::Client::Prop::PinballPageProxy* LCHFDIMKOPC; // 0x170
		::Class_1_9F1BD5B95B779DD0* EFBHGFKIGAL; // 0x178
		::Class_1_9F1BD5B95B779DD0* FCNGFGHNFKJ; // 0x180
		::RPG::Client::Prop::PinballPuzzleControlMode DKPILNDEIFK; // 0x188
		::System::Int32 OGKHJELJFAL; // 0x18C
		::System::Int32 IBCJGBNABJK; // 0x190
		::System::Int32 IDHEAAJDAHD; // 0x194
		::System::Int32 JDBMBIENDEJ; // 0x198
		::System::Collections::Generic::List_1<::System::Int32>* HKDNKPFCOPJ; // 0x1A0
		::System::Collections::Generic::List_1<::Class_2_9A317DC82C0F2C13*>* MCPCLAHENKP; // 0x1A8
		::Class_2_6445CB6AD59447E7* OECKBKJLPEB; // 0x1B0
		::System::Collections::Generic::List_1<::System::String*>* OADEENPOBPG; // 0x1B8
		::System::Collections::Generic::List_1<::RPG::Client::Prop::PinballPageProxy_PinballPageFloatBtnType>* IIMDHNCIHIL; // 0x1C0
		::UnityEngine::EventSystems::PointerEventData* AFFCBLEDOKJ; // 0x1C8
		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* AFJKCFFMLHC; // 0x1D0
		::System::Int32 NKLBDPACBID; // 0x1D8
		::RPG::Client::MonoEffect* DOHONNCMDEK; // 0x1E0
		::RPG::Client::MonoEffect* MALFOOKKLMO; // 0x1E8
		::RPG::Client::MonoEffect* MGFNGFFLCDM; // 0x1F0
		::Class_1_E45C207B1AC948BE* IBFLJNIJBDE; // 0x1F8
		::Class_1_E45C207B1AC948BE* MLEOHJPCFBL; // 0x200
		::Class_1_E45C207B1AC948BE* ONAHCEMBBHB; // 0x208
		::Class_1_E45C207B1AC948BE* LDNJDFGCPIN; // 0x210
		::Class_2_355167F59BB7AE92* NMHINBKPOFN; // 0x218
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* BNLNNKBFJAL; // 0x220
		::RPG::Client::TwoKeyDictionary_3<::System::Int32, ::System::Int32, ::RPG::Client::Prop::PinballCameraAnchorConfig>* IGLBHFMELCG; // 0x228
		::Class_2_FE80ABC7B49BF77F* BHNCILOLMFB; // 0x230
		::System::Boolean AGLMFKHDHCJ; // 0x238
		::System::Boolean PMMNGNJMOJP; // 0x239
		::System::Int32 JIBJKHCJFBJ; // 0x23C
		::System::Int32 HHJKKIMFJAI; // 0x240
		::System::Boolean DOGCAGFGPKL; // 0x244
		::System::Boolean JGJJBDFAFIN; // 0x245
		::RPG::Client::VirtualCursor* GNGEFFIBCMO; // 0x248
		::UnityEngine::Transform* DJMFKNOIPCP; // 0x250
		::System::Boolean LHONFPDDIDK; // 0x258
		::UnityEngine::Coroutine* AJAGBEEBACC; // 0x260

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

		::System::Void Method_6_98BACA2FF165A70D(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_98BACA2FF165A70D_OFFSET))(this, a1);
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

		::System::Void Method_6_102A1038C38883F3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_102A1038C38883F3_OFFSET))(this);
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

		::System::Void Method_6_81FEFD1B22CE37A2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_81FEFD1B22CE37A2_OFFSET))(this);
		}

		::System::Void Method_6_D09831639F615812(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_D09831639F615812_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_378D17F5AC4A22EE(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_378D17F5AC4A22EE_OFFSET))(this, a1);
		}

		::System::Void Method_6_A88E33775C007389(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_A88E33775C007389_OFFSET))(this, a1);
		}

		::System::Void Method_6_8542E37E74FDE1B5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_8542E37E74FDE1B5_OFFSET))(this);
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

		::System::Void Method_6_B3F1A3A8F66EAE32(::System::UInt32 a1, ::System::Single a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_B3F1A3A8F66EAE32_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndPinballControlMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ENDPINBALLCONTROLMODE_OFFSET))(this);
		}

		::System::Void Method_6_DE62129A329C6551(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_DE62129A329C6551_OFFSET))(this, a1);
		}

		::System::Void Method_6_CFB00179EC6A3756(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_CFB00179EC6A3756_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::PinballPageProxy_PinballPageHintState Method_6_227FF8FF03B4EC11(::RPG::Client::Prop::ChessDirection& a1)
		{
			return ((::RPG::Client::Prop::PinballPageProxy_PinballPageHintState(*)(::PVOID, ::RPG::Client::Prop::ChessDirection&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_227FF8FF03B4EC11_OFFSET))(this, a1);
		}

		::System::Void Method_6_3809AF1D89D86A94(::RPG::GameCore::PropComponent* a1, ::RPG::GameCore::PuzzleCustomEvent a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_3809AF1D89D86A94_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_AB88190D695EBEA9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_AB88190D695EBEA9_OFFSET))(this);
		}

		::System::Void Method_6_A1ADC999CFACEB89()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_A1ADC999CFACEB89_OFFSET))(this);
		}

		::System::Boolean Method_6_F86E3F6E3E2B1642(::Class_1_A2780D0F4B46A950* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_A2780D0F4B46A950*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_F86E3F6E3E2B1642_OFFSET))(this, a1);
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

		::System::Void Method_6_BF1183757C521F0F(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_BF1183757C521F0F_OFFSET))(this, a1);
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

		::System::Void Method_6_9F218BA7C451254A(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_METHOD_6_9F218BA7C451254A_OFFSET))(this, a1);
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
	};
}
