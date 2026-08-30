#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/Player_TimerType.h"
#include "unitysdk/CriWare/CriManaMovieMaterialBase_MaxFrameDrop.h"
#include "unitysdk/CriWare/CriManaMovieMaterialBase_RenderMode.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"

namespace CriWare { class CriManaMovieMaterialBase_OnApplicationPauseCallback; }
namespace CriWare { class CriManaMoviePlayerHolder; }
namespace CriWare::CriMana { class Player; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class WaitForEndOfFrame; }

#define CRIWARE_CRIMANAMOVIEMATERIALBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x16505CC0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_CREATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x16507990)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_CRIINTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16508540)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x165057A0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_DESTROYOWNMATERIAL_OFFSET UNITYSDK_OFFSET(0x16507000)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_HAVERENDEREROWNER_OFFSET UNITYSDK_OFFSET(0x16507200)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_ISMATERIALAVAILABLE_OFFSET UNITYSDK_OFFSET(0x16506F40)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_ISRENDEREROWNERISTARGET_OFFSET UNITYSDK_OFFSET(0x16507220)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x16506F80)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_MAXFRAMEDROP_OFFSET UNITYSDK_OFFSET(0x16506F10)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x16506F60)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_TIMERTYPE_OFFSET UNITYSDK_OFFSET(0x16507040)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x165085A0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16508340)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16508040)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16507DA0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_ONMATERIALAVAILABLECHANGED_OFFSET UNITYSDK_OFFSET(0x16507540)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_ONMATERIALUPDATED_OFFSET UNITYSDK_OFFSET(0x16507550)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_ONWILLRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x16508570)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_PAUSE_OFFSET UNITYSDK_OFFSET(0x16507390)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_PLAYERMANUALFINALIZE_OFFSET UNITYSDK_OFFSET(0x165077E0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_PLAYERMANUALINITIALIZE_OFFSET UNITYSDK_OFFSET(0x16507560)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_PLAYERMANUALSETUP_OFFSET UNITYSDK_OFFSET(0x165078A0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_PLAYERMANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x16507BD0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_PLAY_OFFSET UNITYSDK_OFFSET(0x16507240)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_PROCESSAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x165085B0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_RENDERMOVIE_OFFSET UNITYSDK_OFFSET(0x16508520)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_RENDERTARGETMANUALFINALIZE_OFFSET UNITYSDK_OFFSET(0x16507BC0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_RENDERTARGETMANUALSETUP_OFFSET UNITYSDK_OFFSET(0x16507BB0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_RESTARTPLAYERROUTINE_OFFSET UNITYSDK_OFFSET(0x16507FE0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_HAVERENDEREROWNER_OFFSET UNITYSDK_OFFSET(0x16507210)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_ISMATERIALAVAILABLE_OFFSET UNITYSDK_OFFSET(0x16506F50)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_ISRENDEREROWNERISTARGET_OFFSET UNITYSDK_OFFSET(0x16507230)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x16506F90)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_MAXFRAMEDROP_OFFSET UNITYSDK_OFFSET(0x16506F20)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_PLAYER_OFFSET UNITYSDK_OFFSET(0x16506F70)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_TIMERTYPE_OFFSET UNITYSDK_OFFSET(0x16507050)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_START_OFFSET UNITYSDK_OFFSET(0x16508480)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_STOP_OFFSET UNITYSDK_OFFSET(0x165072E0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16506ED0)

namespace CriWare
{
	inline static constexpr unsigned int CriManaMovieMaterialBase_TypeDefinitionIndex = 38833;

	class CriManaMovieMaterialBase : public ::CriWare::CriMonoBehaviour
	{
	public:
		::System::Boolean playOnStart; // 0x28
		::System::Boolean restartOnEnable; // 0x29
		::System::Boolean _isMaterialAvailable_k__BackingField; // 0x2A
		::CriWare::CriMana::Player* _player_k__BackingField; // 0x30
		::CriWare::CriManaMovieMaterialBase_RenderMode renderMode; // 0x38
		::CriWare::CriManaMovieMaterialBase_OnApplicationPauseCallback* onApplicationPauseCallback; // 0x40
		::CriWare::CriMana::Player_TimerType _timerType; // 0x48
		::UnityEngine::Material* _material; // 0x50
		::CriWare::CriManaMovieMaterialBase_MaxFrameDrop _maxFrameDrop; // 0x58
		::System::Boolean materialOwn; // 0x5C
		::System::Boolean isMonoBehaviourStartCalled; // 0x5D
		::System::Boolean wasDisabled; // 0x5E
		::System::Boolean wasPausedOnDisable; // 0x5F
		::System::Boolean previousOnApplicationPauseStatus; // 0x60
		::UnityEngine::WaitForEndOfFrame* frameEnd; // 0x68
		::System::Boolean unpauseOnApplicationUnpause; // 0x70
		::System::Boolean _HaveRendererOwner_k__BackingField; // 0x71
		::System::Boolean _IsRendererOwnerIsTarget_k__BackingField; // 0x72
		::CriWare::CriManaMoviePlayerHolder* playerHolder; // 0x78
		::System::UInt64 _recordUserTimer; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE__CTOR_OFFSET))(this);
		}

		::CriWare::CriManaMovieMaterialBase_MaxFrameDrop get_maxFrameDrop()
		{
			return ((::CriWare::CriManaMovieMaterialBase_MaxFrameDrop(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_MAXFRAMEDROP_OFFSET))(this);
		}

		::System::Void set_maxFrameDrop(::CriWare::CriManaMovieMaterialBase_MaxFrameDrop a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriManaMovieMaterialBase_MaxFrameDrop))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_MAXFRAMEDROP_OFFSET))(this, a1);
		}

		::System::Boolean get_isMaterialAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_ISMATERIALAVAILABLE_OFFSET))(this);
		}

		::System::Void set_isMaterialAvailable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_ISMATERIALAVAILABLE_OFFSET))(this, a1);
		}

		::CriWare::CriMana::Player* get_player()
		{
			return ((::CriWare::CriMana::Player*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_PLAYER_OFFSET))(this);
		}

		::System::Void set_player(::CriWare::CriMana::Player* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_PLAYER_OFFSET))(this, a1);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_MATERIAL_OFFSET))(this);
		}

		::System::Void set_material(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_MATERIAL_OFFSET))(this, a1);
		}

		::System::Void DestroyOwnMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_DESTROYOWNMATERIAL_OFFSET))(this);
		}

		::CriWare::CriMana::Player_TimerType get_timerType()
		{
			return ((::CriWare::CriMana::Player_TimerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_TIMERTYPE_OFFSET))(this);
		}

		::System::Void set_timerType(::CriWare::CriMana::Player_TimerType a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_TimerType))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_TIMERTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_HaveRendererOwner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_HAVERENDEREROWNER_OFFSET))(this);
		}

		::System::Void set_HaveRendererOwner(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_HAVERENDEREROWNER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRendererOwnerIsTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_ISRENDEREROWNERISTARGET_OFFSET))(this);
		}

		::System::Void set_IsRendererOwnerIsTarget(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_ISRENDEREROWNERISTARGET_OFFSET))(this, a1);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_PLAY_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_STOP_OFFSET))(this);
		}

		::System::Void Pause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_PAUSE_OFFSET))(this, a1);
		}

		::System::Void OnMaterialAvailableChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_ONMATERIALAVAILABLECHANGED_OFFSET))(this);
		}

		::System::Void OnMaterialUpdated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_ONMATERIALUPDATED_OFFSET))(this);
		}

		::System::Void PlayerManualInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_PLAYERMANUALINITIALIZE_OFFSET))(this);
		}

		::System::Void PlayerManualFinalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_PLAYERMANUALFINALIZE_OFFSET))(this);
		}

		::System::Void PlayerManualSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_PLAYERMANUALSETUP_OFFSET))(this);
		}

		::System::Boolean RenderTargetManualSetup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_RENDERTARGETMANUALSETUP_OFFSET))(this);
		}

		::System::Void RenderTargetManualFinalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_RENDERTARGETMANUALFINALIZE_OFFSET))(this);
		}

		::System::Void PlayerManualUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_PLAYERMANUALUPDATE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_ONENABLE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* RestartPlayerRoutine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_RESTARTPLAYERROUTINE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_START_OFFSET))(this);
		}

		::System::Void CriInternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_CRIINTERNALUPDATE_OFFSET))(this);
		}

		::System::Void RenderMovie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_RENDERMOVIE_OFFSET))(this);
		}

		::System::Void CriInternalLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_CRIINTERNALLATEUPDATE_OFFSET))(this);
		}

		::System::Void OnWillRenderObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_ONWILLRENDEROBJECT_OFFSET))(this);
		}

		::System::Void OnApplicationPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_ONAPPLICATIONPAUSE_OFFSET))(this, a1);
		}

		::System::Void ProcessApplicationPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_PROCESSAPPLICATIONPAUSE_OFFSET))(this, a1);
		}

		::System::Void CreateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_CREATEMATERIAL_OFFSET))(this);
		}
	};
}
