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

#define CRIWARE_CRIMANAMOVIEMATERIALBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E662CA0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_CREATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E662A90)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_CRIINTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E6631C0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x1E663190)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_HAVERENDEREROWNER_OFFSET UNITYSDK_OFFSET(0x1E6620A0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_ISMATERIALAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1E661E90)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1E661ED0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_MAXFRAMEDROP_OFFSET UNITYSDK_OFFSET(0x1E661E60)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1E661EB0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_TIMERTYPE_OFFSET UNITYSDK_OFFSET(0x1E661FF0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1E663210)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E6630B0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E662F10)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E662CB0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_ONMATERIALAVAILABLECHANGED_OFFSET UNITYSDK_OFFSET(0x1E662350)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_ONMATERIALUPDATED_OFFSET UNITYSDK_OFFSET(0x1E662360)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_ONWILLRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x1E6631E0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_PAUSE_OFFSET UNITYSDK_OFFSET(0x1E662220)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_PLAYERMANUALFINALIZE_OFFSET UNITYSDK_OFFSET(0x1E662560)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_PLAYERMANUALINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E662370)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_PLAYERMANUALSETUP_OFFSET UNITYSDK_OFFSET(0x1E6626E0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_PLAYERMANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x1E662BE0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_PLAY_OFFSET UNITYSDK_OFFSET(0x1E6620C0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_PROCESSAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1E663220)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_RENDERMOVIE_OFFSET UNITYSDK_OFFSET(0x1E6631A0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_RENDERTARGETMANUALFINALIZE_OFFSET UNITYSDK_OFFSET(0x1E662BD0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_RENDERTARGETMANUALSETUP_OFFSET UNITYSDK_OFFSET(0x1E662BC0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_RESTARTPLAYERROUTINE_OFFSET UNITYSDK_OFFSET(0x1E662EC0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_HAVERENDEREROWNER_OFFSET UNITYSDK_OFFSET(0x1E6620B0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_ISMATERIALAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1E661EA0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1E661EE0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_MAXFRAMEDROP_OFFSET UNITYSDK_OFFSET(0x1E661E70)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1E661EC0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_TIMERTYPE_OFFSET UNITYSDK_OFFSET(0x1E662000)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_START_OFFSET UNITYSDK_OFFSET(0x1E6630D0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_STOP_OFFSET UNITYSDK_OFFSET(0x1E662100)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E663440)

namespace CriWare
{
	inline static constexpr unsigned int CriManaMovieMaterialBase_TypeDefinitionIndex = 34333;

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
		::UnityEngine::WaitForEndOfFrame* frameEnd; // 0x60
		::System::Boolean unpauseOnApplicationUnpause; // 0x68
		::System::Boolean _HaveRendererOwner_k__BackingField; // 0x69
		::CriWare::CriManaMoviePlayerHolder* playerHolder; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE__CTOR_OFFSET))(this);
		}

		::CriWare::CriManaMovieMaterialBase_MaxFrameDrop get_maxFrameDrop()
		{
			return ((::CriWare::CriManaMovieMaterialBase_MaxFrameDrop(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_MAXFRAMEDROP_OFFSET))(this);
		}

		::System::Void set_maxFrameDrop(::CriWare::CriManaMovieMaterialBase_MaxFrameDrop value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriManaMovieMaterialBase_MaxFrameDrop))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_MAXFRAMEDROP_OFFSET))(this, value);
		}

		::System::Boolean get_isMaterialAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_ISMATERIALAVAILABLE_OFFSET))(this);
		}

		::System::Void set_isMaterialAvailable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_ISMATERIALAVAILABLE_OFFSET))(this, value);
		}

		::CriWare::CriMana::Player* get_player()
		{
			return ((::CriWare::CriMana::Player*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_PLAYER_OFFSET))(this);
		}

		::System::Void set_player(::CriWare::CriMana::Player* value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_PLAYER_OFFSET))(this, value);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_MATERIAL_OFFSET))(this);
		}

		::System::Void set_material(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_MATERIAL_OFFSET))(this, value);
		}

		::CriWare::CriMana::Player_TimerType get_timerType()
		{
			return ((::CriWare::CriMana::Player_TimerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_TIMERTYPE_OFFSET))(this);
		}

		::System::Void set_timerType(::CriWare::CriMana::Player_TimerType value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_TimerType))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_TIMERTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_HaveRendererOwner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_GET_HAVERENDEREROWNER_OFFSET))(this);
		}

		::System::Void set_HaveRendererOwner(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_SET_HAVERENDEREROWNER_OFFSET))(this, value);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_PLAY_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_STOP_OFFSET))(this);
		}

		::System::Void Pause(::System::Boolean sw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_PAUSE_OFFSET))(this, sw);
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

		::System::Void OnApplicationPause(::System::Boolean appPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_ONAPPLICATIONPAUSE_OFFSET))(this, appPause);
		}

		::System::Void ProcessApplicationPause(::System::Boolean appPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_PROCESSAPPLICATIONPAUSE_OFFSET))(this, appPause);
		}

		::System::Void CreateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_CREATEMATERIAL_OFFSET))(this);
		}
	};
}
