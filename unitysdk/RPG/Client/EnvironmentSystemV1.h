#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/RPG/Client/EnvironmentSystem.h"
#include "unitysdk/RPG/Client/MainlightSwitchType.h"
#include "unitysdk/RPG/CustomRP/GameCameraType.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/Struct_2_FB7FD3F7A6A85D5E.h"
#include "unitysdk/UnityEngine/Rendering/AmbientVolumneData.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_0_16E4307DCC419505_336;
class Class_1_303D5A33D1401D59;
class Class_1_58C07D56FC57643C;
class Class_1_990E4282A5D5942A;
class Class_1_A392F01C781E3108;
class Class_1_DA5BEDF62053421B;
namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class FrameCaptureManager; }
namespace RPG::Client { class PPEffectManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_ADDDYNAMICBLOCKLIGHT_OFFSET UNITYSDK_OFFSET(0x17CC8950)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_APPLYPATCHTOACTIVEPROFILE_OFFSET UNITYSDK_OFFSET(0x17CCD2F0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_AWAKE_OFFSET UNITYSDK_OFFSET(0x17CCE550)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_CANCELASYNCINIT_OFFSET UNITYSDK_OFFSET(0x17CD1CE0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_CANCELTRANSITION_OFFSET UNITYSDK_OFFSET(0x17CCD1F0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_CLEARENVIROPATCH_OFFSET UNITYSDK_OFFSET(0x17CCD160)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_CLEAR_OFFSET UNITYSDK_OFFSET(0x17CD1E60)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_DISABLEENVGPUPARTICLE_OFFSET UNITYSDK_OFFSET(0x17CD2830)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_DISABLEENVPARTICLE_OFFSET UNITYSDK_OFFSET(0x17CD28A0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_EDITORUPDATE_OFFSET UNITYSDK_OFFSET(0x17CCE200)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_FINISHTRANSITION_OFFSET UNITYSDK_OFFSET(0x17CC8EB0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_FORCEINITPPEFFECTMANAGER_OFFSET UNITYSDK_OFFSET(0x17CD2B80)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETCAPSULEAOMANAGER_OFFSET UNITYSDK_OFFSET(0x17CD2C90)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETDATA_OFFSET UNITYSDK_OFFSET(0x17CD0870)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETENVTRANSITMANAGER_OFFSET UNITYSDK_OFFSET(0x17CD1C90)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETFRAMECAPTUREMANAGER_OFFSET UNITYSDK_OFFSET(0x17CD2AE0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETISCURSWITCHWORK_OFFSET UNITYSDK_OFFSET(0x17CD0420)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETISVALID_OFFSET UNITYSDK_OFFSET(0x17CD0910)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETMATERIALEFFECTMANAGER_OFFSET UNITYSDK_OFFSET(0x17CD2C40)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETPPEFFECTMANAGER_OFFSET UNITYSDK_OFFSET(0x17CD2B30)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETTODPROFILE_OFFSET UNITYSDK_OFFSET(0x17CCD460)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_GET_ACTIVEPROFILEV1_OFFSET UNITYSDK_OFFSET(0x17CD7D20)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_GET_ACTIVEPROFILE_OFFSET UNITYSDK_OFFSET(0x17CD7D10)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_HASPRIORITY_OFFSET UNITYSDK_OFFSET(0x17CC8820)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_INITENVIRONMENTSYSTEMASYNC_OFFSET UNITYSDK_OFFSET(0x17CD1960)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_INITENVIRONMENTSYSTEM_OFFSET UNITYSDK_OFFSET(0x17CD1790)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_INITENVSYSTEMV2INEDITORMODE_OFFSET UNITYSDK_OFFSET(0x17CCE290)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_INITPROFILE_OFFSET UNITYSDK_OFFSET(0x17CCD4C0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_INITSTATICANDCLEARSCENE_OFFSET UNITYSDK_OFFSET(0x17CCD560)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_INIT_OFFSET UNITYSDK_OFFSET(0x17CCEAC0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_LATETICK_OFFSET UNITYSDK_OFFSET(0x17CCF8E0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17CCE8F0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17CCE690)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_RECORDMAINLIGHTDIR_OFFSET UNITYSDK_OFFSET(0x17CD23A0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_RELEASEPRIORITY_OFFSET UNITYSDK_OFFSET(0x17CC7440)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_REMOVEDYNAMICBLOCKLIGHT_OFFSET UNITYSDK_OFFSET(0x17CC8A90)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_RENDER_OFFSET UNITYSDK_OFFSET(0x17CD0710)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_RESETACTIVEPROFILE_OFFSET UNITYSDK_OFFSET(0x17CC8880)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_RESETLEVELMAINLIGHTROATATEOFFET_OFFSET UNITYSDK_OFFSET(0x17CD16B0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_RESETMAINLIGHTROATATEOFFET_OFFSET UNITYSDK_OFFSET(0x17CD24A0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_RESETMAINLIGHT_OFFSET UNITYSDK_OFFSET(0x17CD25A0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_RESETPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x17CD2540)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_RESTOREMAINLIGHTDIR_OFFSET UNITYSDK_OFFSET(0x17CD2420)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETACTIVEPROFILEASYNC_OFFSET UNITYSDK_OFFSET(0x17CC8160)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETACTIVEPROFILE_OFFSET UNITYSDK_OFFSET(0x17CC6F70)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETBOOLPATCH_OFFSET UNITYSDK_OFFSET(0x17CCCC90)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETENABLECHARALIGHT_OFFSET UNITYSDK_OFFSET(0x17CD29E0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETENABLESCENELIGHT_OFFSET UNITYSDK_OFFSET(0x17CD2A60)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETENABLESHADOWLIGHT_OFFSET UNITYSDK_OFFSET(0x17CD2960)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETENABLESKYBOX_OFFSET UNITYSDK_OFFSET(0x17CC80E0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETENABLEUPDATE_OFFSET UNITYSDK_OFFSET(0x17CD2910)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETENABLE_OFFSET UNITYSDK_OFFSET(0x17CD2330)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETFLOATPATCH_OFFSET UNITYSDK_OFFSET(0x17CCCFD0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETMAINLIGHTSWITCH_OFFSET UNITYSDK_OFFSET(0x17CD26C0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETMONSTERLIGHTBYCAMERADIR_OFFSET UNITYSDK_OFFSET(0x17CD31F0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETTRANSITIONRATE_OFFSET UNITYSDK_OFFSET(0x17CCD360)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETTRANSITIONTARGETPROFILE_OFFSET UNITYSDK_OFFSET(0x17CC8BD0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETVECTORPATCH_OFFSET UNITYSDK_OFFSET(0x17CCCE30)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_SET_OFFSET UNITYSDK_OFFSET(0x17CD0600)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_START_OFFSET UNITYSDK_OFFSET(0x17CCEA60)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_TICK_OFFSET UNITYSDK_OFFSET(0x17CCF130)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_UNINIT_OFFSET UNITYSDK_OFFSET(0x17CD1FB0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1_VERSION_OFFSET UNITYSDK_OFFSET(0x17CCE240)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__APPLYPIPELINEASSETSETTINGS_OFFSET UNITYSDK_OFFSET(0x17CCAAF0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__APPLYPIPELINEQUALITYSETTINGS_OFFSET UNITYSDK_OFFSET(0x17CCC8D0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__APPLYPIPELINESHADOWSETTINGS_OFFSET UNITYSDK_OFFSET(0x17CC9080)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__ATMOSPHERESCATTERINGCELESTIALCONTROL_OFFSET UNITYSDK_OFFSET(0x17CD4F30)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__ATMOSPHERESCATTERPRECOMPUTE_OFFSET UNITYSDK_OFFSET(0x17CD5C00)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__CHECKENVIROMENTCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x17CD0960)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__CLEARALLCOMMAND_OFFSET UNITYSDK_OFFSET(0x17CC7650)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__CLOSEFOG_OFFSET UNITYSDK_OFFSET(0x17CD1EE0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__CTOR_OFFSET UNITYSDK_OFFSET(0x17CD7D30)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__PUSHCOMMMANDQUEUE_OFFSET UNITYSDK_OFFSET(0x17CC77C0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__REFPROBEGAMMATOLINEARSPACE_OFFSET UNITYSDK_OFFSET(0x17CD2CE0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__REFRESHACTIVEPROFILEASYNC_OFFSET UNITYSDK_OFFSET(0x17CC85D0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__REFRESHACTIVEPROFILE_OFFSET UNITYSDK_OFFSET(0x17CC7A20)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__SETGLOBALREFLECTIONPROBE_OFFSET UNITYSDK_OFFSET(0x17CD2D90)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__TIMEOFDAYTICK_OFFSET UNITYSDK_OFFSET(0x17CD4DA0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATECOMPONENTBYENVIROCLIPS_OFFSET UNITYSDK_OFFSET(0x17CCCBE0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATEENVIROCLIPSBYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x17CD1210)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATEENVIROLIGHT_OFFSET UNITYSDK_OFFSET(0x17CD34A0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATENVIROPREFABS_OFFSET UNITYSDK_OFFSET(0x17CCF5D0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATEPIPELINEDATA_OFFSET UNITYSDK_OFFSET(0x17CD0480)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATESKYBOX_OFFSET UNITYSDK_OFFSET(0x17CD3E30)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATEVFCONTROLLER_OFFSET UNITYSDK_OFFSET(0x17CD5C70)

namespace RPG::Client
{
	inline static constexpr unsigned int EnvironmentSystemV1_TypeDefinitionIndex = 66650;

	class EnvironmentSystemV1 : public ::RPG::Client::EnvironmentSystem
	{
	public:
		::System::Boolean _ActiveProfileEndTransition; // 0x218
		::System::Boolean _ActiveProfileIsDirty; // 0x219
		::System::Collections::Generic::List_1<::Class_1_58C07D56FC57643C*>* _ProfileControlCommandQueue; // 0x220
		::RPG::Client::EnvironmentSystem* _EnvSystemV2; // 0x228
		::System::Int32 _RefreshShadowCount; // 0x230
		::System::Single _CurrentTimeOfDay; // 0x234
		::EnviromentSystem::EnviromentProfile* _ActiveProfile; // 0x238
		::System::Collections::Generic::List_1<::Struct_2_FB7FD3F7A6A85D5E>* _EnviroCharacterList; // 0x240
		::Class_1_DA5BEDF62053421B* _EnvTransitManager; // 0x248

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__CTOR_OFFSET))(this);
		}

		::System::Void SetActiveProfile(::Class_0_16E4307DCC419505_336* a1, ::RPG::GameCore::EnviromentControlPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_336*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETACTIVEPROFILE_OFFSET))(this, a1, a2);
		}

		::System::Void SetActiveProfileAsync(::Class_0_16E4307DCC419505_336* a1, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a2, ::RPG::GameCore::EnviromentControlPriority a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_336*, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETACTIVEPROFILEASYNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 ReleasePriority(::RPG::GameCore::EnviromentControlPriority a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_RELEASEPRIORITY_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasPriority(::RPG::GameCore::EnviromentControlPriority a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_HASPRIORITY_OFFSET))(this, a1);
		}

		::System::Void ResetActiveProfile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_RESETACTIVEPROFILE_OFFSET))(this);
		}

		::System::Void AddDynamicBlockLight(::Class_1_303D5A33D1401D59* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_ADDDYNAMICBLOCKLIGHT_OFFSET))(this, a1);
		}

		::System::Void RemoveDynamicBlockLight(::Class_1_303D5A33D1401D59* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_REMOVEDYNAMICBLOCKLIGHT_OFFSET))(this, a1);
		}

		::System::Int32 SetTransitionTargetProfile(::Class_0_16E4307DCC419505_336* a1, ::RPG::GameCore::EnviromentControlPriority a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_336*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETTRANSITIONTARGETPROFILE_OFFSET))(this, a1, a2);
		}

		::System::Void FinishTransition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_FINISHTRANSITION_OFFSET))(this, a1);
		}

		::System::Void SetBoolPatch(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Boolean a2, ::RPG::GameCore::EnviromentControlPriority a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Boolean, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETBOOLPATCH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetVectorPatch(::EnviromentSystem::EnviromentPropertiesID a1, ::UnityEngine::Vector4 a2, ::RPG::GameCore::EnviromentControlPriority a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::UnityEngine::Vector4, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETVECTORPATCH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetFloatPatch(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Single a2, ::RPG::GameCore::EnviromentControlPriority a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Single, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETFLOATPATCH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ClearEnviroPatch(::RPG::GameCore::EnviromentControlPriority a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_CLEARENVIROPATCH_OFFSET))(this, a1);
		}

		::System::Void ApplyPatchToActiveProfile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_APPLYPATCHTOACTIVEPROFILE_OFFSET))(this);
		}

		::System::Void CancelTransition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_CANCELTRANSITION_OFFSET))(this, a1);
		}

		::System::Void SetTransitionRate(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETTRANSITIONRATE_OFFSET))(this, a1, a2);
		}

		::Class_0_16E4307DCC419505_336* GetTODProfile()
		{
			return ((::Class_0_16E4307DCC419505_336*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETTODPROFILE_OFFSET))(this);
		}

		::System::Void _PushCommmandQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__PUSHCOMMMANDQUEUE_OFFSET))(this);
		}

		::System::Void _RefreshActiveProfileAsync(::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__REFRESHACTIVEPROFILEASYNC_OFFSET))(this, a1);
		}

		::System::Void _RefreshActiveProfile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__REFRESHACTIVEPROFILE_OFFSET))(this);
		}

		::System::Void _ClearAllCommand(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__CLEARALLCOMMAND_OFFSET))(this, a1);
		}

		::System::Void InitProfile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_INITPROFILE_OFFSET))(this);
		}

		::System::Void EditorUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_EDITORUPDATE_OFFSET))(this);
		}

		::System::Int32 Version()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_VERSION_OFFSET))(this);
		}

		::RPG::Client::EnvironmentSystem* InitEnvSystemV2InEditorMode()
		{
			return ((::RPG::Client::EnvironmentSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_INITENVSYSTEMV2INEDITORMODE_OFFSET))(this);
		}

		static ::System::Void InitStaticAndClearScene(::RPG::Client::EnvironmentSystemV1* a1)
		{
			return ((::System::Void(*)(::RPG::Client::EnvironmentSystemV1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_INITSTATICANDCLEARSCENE_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_ONDISABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_START_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_TICK_OFFSET))(this, a1);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_LATETICK_OFFSET))(this, a1);
		}

		::System::Void Set(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SET_OFFSET))(this, a1);
		}

		::System::Void Render(::RPG::CustomRP::GameCameraType a1, ::UnityEngine::Rendering::CommandBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::GameCameraType, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_RENDER_OFFSET))(this, a1, a2);
		}

		::System::Void GetData(::UnityEngine::Rendering::AmbientVolumneData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AmbientVolumneData&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETDATA_OFFSET))(this, a1);
		}

		::System::Boolean GetIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETISVALID_OFFSET))(this);
		}

		::System::Boolean Init(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_INIT_OFFSET))(this, a1);
		}

		::System::Void InitEnvironmentSystem(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_INITENVIRONMENTSYSTEM_OFFSET))(this, a1);
		}

		::System::Void InitEnvironmentSystemAsync(::Class_0_16E4307DCC419505_336* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_336*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_INITENVIRONMENTSYSTEMASYNC_OFFSET))(this, a1, a2);
		}

		::System::Void CancelAsyncInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_CANCELASYNCINIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_CLEAR_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_UNINIT_OFFSET))(this);
		}

		::System::Void SetEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETENABLE_OFFSET))(this, a1);
		}

		::System::Void RecordMainLightDir()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_RECORDMAINLIGHTDIR_OFFSET))(this);
		}

		::System::Void RestoreMainLightDir()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_RESTOREMAINLIGHTDIR_OFFSET))(this);
		}

		::System::Void ResetMainLightRoatateOffet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_RESETMAINLIGHTROATATEOFFET_OFFSET))(this);
		}

		::System::Void ResetPostProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_RESETPOSTPROCESS_OFFSET))(this);
		}

		::System::Void ResetMainLight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_RESETMAINLIGHT_OFFSET))(this);
		}

		::System::Void ResetLevelMainLightRoatateOffet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_RESETLEVELMAINLIGHTROATATEOFFET_OFFSET))(this);
		}

		::System::Void SetMainLightSwitch(::RPG::Client::MainlightSwitchType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainlightSwitchType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETMAINLIGHTSWITCH_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetIsCurSwitchWork(::RPG::Client::MainlightSwitchType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainlightSwitchType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETISCURSWITCHWORK_OFFSET))(this, a1);
		}

		::System::Void DisableEnvGPUParticle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_DISABLEENVGPUPARTICLE_OFFSET))(this);
		}

		::System::Void DisableEnvParticle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_DISABLEENVPARTICLE_OFFSET))(this);
		}

		::System::Void SetEnableUpdate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETENABLEUPDATE_OFFSET))(this, a1);
		}

		::System::Void SetEnableSkyBox(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETENABLESKYBOX_OFFSET))(this, a1);
		}

		::System::Void SetEnableShadowLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETENABLESHADOWLIGHT_OFFSET))(this, a1);
		}

		::System::Void SetEnableCharaLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETENABLECHARALIGHT_OFFSET))(this, a1);
		}

		::System::Void SetEnableSceneLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETENABLESCENELIGHT_OFFSET))(this, a1);
		}

		::RPG::Client::FrameCaptureManager* GetFrameCaptureManager()
		{
			return ((::RPG::Client::FrameCaptureManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETFRAMECAPTUREMANAGER_OFFSET))(this);
		}

		::RPG::Client::PPEffectManager* GetPPEffectManager()
		{
			return ((::RPG::Client::PPEffectManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETPPEFFECTMANAGER_OFFSET))(this);
		}

		::System::Void ForceInitPPEffectManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_FORCEINITPPEFFECTMANAGER_OFFSET))(this);
		}

		::Class_1_A392F01C781E3108* GetMaterialEffectManager()
		{
			return ((::Class_1_A392F01C781E3108*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETMATERIALEFFECTMANAGER_OFFSET))(this);
		}

		::Class_1_DA5BEDF62053421B* GetEnvTransitManager()
		{
			return ((::Class_1_DA5BEDF62053421B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETENVTRANSITMANAGER_OFFSET))(this);
		}

		::Class_1_990E4282A5D5942A* GetCapsuleAOManager()
		{
			return ((::Class_1_990E4282A5D5942A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_GETCAPSULEAOMANAGER_OFFSET))(this);
		}

		static ::System::Single _RefProbeGammaToLinearSpace(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__REFPROBEGAMMATOLINEARSPACE_OFFSET))(a1);
		}

		::System::Void _UpdatEnviroPrefabs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATENVIROPREFABS_OFFSET))(this);
		}

		::System::Void _CloseFog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__CLOSEFOG_OFFSET))(this);
		}

		::System::Boolean _CheckEnviromentComponents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__CHECKENVIROMENTCOMPONENTS_OFFSET))(this);
		}

		::System::Void _ApplyPipelineAssetSettings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__APPLYPIPELINEASSETSETTINGS_OFFSET))(this);
		}

		::System::Void _ApplyPipelineShadowSettings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__APPLYPIPELINESHADOWSETTINGS_OFFSET))(this);
		}

		::System::Void _ApplyPipelineQualitySettings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__APPLYPIPELINEQUALITYSETTINGS_OFFSET))(this);
		}

		::System::Void _SetGlobalReflectionProbe()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__SETGLOBALREFLECTIONPROBE_OFFSET))(this);
		}

		::System::Void SetMonsterLightByCameraDir(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_SETMONSTERLIGHTBYCAMERADIR_OFFSET))(this, a1);
		}

		::System::Void _UpdateEnviroClipsByComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATEENVIROCLIPSBYCOMPONENT_OFFSET))(this);
		}

		::System::Void _UpdateEnviroLight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATEENVIROLIGHT_OFFSET))(this);
		}

		::System::Void _UpdateSkyBox()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATESKYBOX_OFFSET))(this);
		}

		::System::Void _UpdateVFController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATEVFCONTROLLER_OFFSET))(this);
		}

		::System::Void _TimeOfDayTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__TIMEOFDAYTICK_OFFSET))(this);
		}

		::System::Void _AtmosphereScatteringCelestialControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__ATMOSPHERESCATTERINGCELESTIALCONTROL_OFFSET))(this);
		}

		::System::Void _AtmosphereScatterPrecompute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__ATMOSPHERESCATTERPRECOMPUTE_OFFSET))(this);
		}

		::System::Void _UpdateComponentByEnviroClips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATECOMPONENTBYENVIROCLIPS_OFFSET))(this);
		}

		::System::Void _UpdatePipelineData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1__UPDATEPIPELINEDATA_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_336* get_ActiveProfile()
		{
			return ((::Class_0_16E4307DCC419505_336*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_GET_ACTIVEPROFILE_OFFSET))(this);
		}

		::EnviromentSystem::EnviromentProfile* get_ActiveProfileV1()
		{
			return ((::EnviromentSystem::EnviromentProfile*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1_GET_ACTIVEPROFILEV1_OFFSET))(this);
		}
	};
}
