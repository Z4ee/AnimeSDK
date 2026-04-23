#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraDecalRaycast_DecalResultState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class CameraDecalRaycast; }
namespace RPG::Client { class FreeDecal; }
namespace RPG::Client { class PhotoGraphDecalContainer_PhotoGraphDecalContainerInitParam; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_AWAKE_OFFSET UNITYSDK_OFFSET(0xAC66DB0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_CASTDECAL_OFFSET UNITYSDK_OFFSET(0xAC65660)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_CLEARALLDECALS_OFFSET UNITYSDK_OFFSET(0xAC65F80)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xAC66D60)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GETDECALCOUNT_OFFSET UNITYSDK_OFFSET(0xAC66CD0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GET_DECALHEIGHT_OFFSET UNITYSDK_OFFSET(0xAC68740)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GET_DECALWIDTH_OFFSET UNITYSDK_OFFSET(0xAC68670)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GET_DEPTHBUFFERSAMPLERADIUSRATIO_OFFSET UNITYSDK_OFFSET(0xAC688E0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GET_MAXDEPTHTESTVARIANCE_OFFSET UNITYSDK_OFFSET(0xAC689B0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GET_MAXDEPTHVARIANCE_OFFSET UNITYSDK_OFFSET(0xAC68810)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GET_MAXRAYCASTLENGTH_OFFSET UNITYSDK_OFFSET(0xAC685B0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_INITPARAM_OFFSET UNITYSDK_OFFSET(0xAC68BD0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAC675E0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xAC67080)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_REGISTERDECALCOUNTCHANGEHANDLER_OFFSET UNITYSDK_OFFSET(0xAC66C80)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_REGISTERPREVIEWSTATEHANDLER_OFFSET UNITYSDK_OFFSET(0xAC66C30)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SETDECALTEXT_OFFSET UNITYSDK_OFFSET(0xAC664D0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SETENABLE_OFFSET UNITYSDK_OFFSET(0xAC65610)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SET_DECALHEIGHT_OFFSET UNITYSDK_OFFSET(0xAC687A0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SET_DECALWIDTH_OFFSET UNITYSDK_OFFSET(0xAC686D0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SET_DEPTHBUFFERSAMPLERADIUSRATIO_OFFSET UNITYSDK_OFFSET(0xAC68940)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SET_MAXDEPTHTESTVARIANCE_OFFSET UNITYSDK_OFFSET(0xAC68A10)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SET_MAXDEPTHVARIANCE_OFFSET UNITYSDK_OFFSET(0xAC68870)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SET_MAXRAYCASTLENGTH_OFFSET UNITYSDK_OFFSET(0xAC68610)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SHOWPREVIEWDECAL_OFFSET UNITYSDK_OFFSET(0xAC66840)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SPAWNED_OFFSET UNITYSDK_OFFSET(0xAC66D20)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_UNDOLASTDECAL_OFFSET UNITYSDK_OFFSET(0xAC66290)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xAC67AA0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__CLEARDECALS_OFFSET UNITYSDK_OFFSET(0xAC661B0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__CREATEDECAL_OFFSET UNITYSDK_OFFSET(0xAC66900)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0xAC68E80)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__DISPOSEALLDECALS_OFFSET UNITYSDK_OFFSET(0xAC67D30)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__DISPOSEASSETS_OFFSET UNITYSDK_OFFSET(0xAC67480)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__DISPOSEDECALLIST_OFFSET UNITYSDK_OFFSET(0xAC67390)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__DISPOSEPREVIEWDECAL_OFFSET UNITYSDK_OFFSET(0xAC67210)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__GETTEXTUREFROMPATH_OFFSET UNITYSDK_OFFSET(0xAC66540)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__INIT_OFFSET UNITYSDK_OFFSET(0xAC66E00)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__INVOKEDECALCOUNTCHANGE_OFFSET UNITYSDK_OFFSET(0xAC67DC0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__LOADDECALSFROMCACHE_OFFSET UNITYSDK_OFFSET(0xAC67870)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__ONDECALPUZZLECLEAR_OFFSET UNITYSDK_OFFSET(0xAC68A80)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__REMOVEDECALWITHANIFADEOUT_OFFSET UNITYSDK_OFFSET(0xAC657A0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xAC67550)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__REPORTCLEARDECAL_OFFSET UNITYSDK_OFFSET(0xAC66020)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__REPORTDECALCAST_OFFSET UNITYSDK_OFFSET(0xAC67E60)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__REPORTUNDODECAL_OFFSET UNITYSDK_OFFSET(0xAC66340)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__RESETDECALRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0xAC65EF0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__SAVEDECALSTOCACHE_OFFSET UNITYSDK_OFFSET(0xAC67280)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__SETDECALRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0xAC66B30)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__SHOTDECAL_OFFSET UNITYSDK_OFFSET(0xAC65830)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__UPDATECASTINFO_OFFSET UNITYSDK_OFFSET(0xAC67770)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__UPDATEDECALMOVEDESTROY_OFFSET UNITYSDK_OFFSET(0xAC684F0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__UPDATEPREVIEWDECALTEX_OFFSET UNITYSDK_OFFSET(0xAC666A0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__UPDATEPREVIEWDECAL_OFFSET UNITYSDK_OFFSET(0xAC67FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphDecalContainer_TypeDefinitionIndex = 63993;

	class PhotoGraphDecalContainer : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 _DefaultRenderQueueIndex = 0xBB8; // 0x0
		::System::Single DecalScale; // 0x18
		::System::Single FadeInAnimeSpeed; // 0x1C
		::System::Single FadeOutAnimeSpeed; // 0x20
		::System::Single PreviewDecalAlpha; // 0x24
		::System::Single PreviewDecalCD; // 0x28
		::System::Int32 MaxDecalCount; // 0x2C
		::System::Boolean _IsUpdating; // 0x30
		::UnityEngine::Texture* _CurSelectedDecalTex; // 0x38
		::System::UInt32 _CurSelectedDecalID; // 0x40
		::RPG::Client::CameraDecalRaycast* _CastModule; // 0x48
		::UnityEngine::GameObject* _DecalAssetRef; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::FreeDecal*>* _DecalList; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture*>* _DecalTexsDict; // 0x60
		::RPG::Client::FreeDecal* _PreviewDecal; // 0x68
		::System::Action_1<::System::Boolean>* _PreviewStateChangeHandler; // 0x70
		::System::Action_1<::System::Int32>* _DecalCountChangeHandler; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__CTOR_OFFSET))(this);
		}

		::System::Void SetEnable(::System::Boolean iSEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SETENABLE_OFFSET))(this, iSEnable);
		}

		::RPG::Client::CameraDecalRaycast_DecalResultState CastDecal()
		{
			return ((::RPG::Client::CameraDecalRaycast_DecalResultState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_CASTDECAL_OFFSET))(this);
		}

		::System::Void ClearAllDecals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_CLEARALLDECALS_OFFSET))(this);
		}

		::System::Void UndoLastDecal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_UNDOLASTDECAL_OFFSET))(this);
		}

		::System::Void SetDecalText(::System::String* textPath, ::System::UInt32 decalID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SETDECALTEXT_OFFSET))(this, textPath, decalID);
		}

		::System::Void ShowPreviewDecal(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SHOWPREVIEWDECAL_OFFSET))(this, isShow);
		}

		::System::Void RegisterPreviewStateHandler(::System::Action_1<::System::Boolean>* stateChangeHandler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_REGISTERPREVIEWSTATEHANDLER_OFFSET))(this, stateChangeHandler);
		}

		::System::Void RegisterDecalCountChangeHandler(::System::Action_1<::System::Int32>* countChangeHandler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_REGISTERDECALCOUNTCHANGEHANDLER_OFFSET))(this, countChangeHandler);
		}

		::System::Int32 GetDecalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GETDECALCOUNT_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_DESPAWNED_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__INIT_OFFSET))(this);
		}

		::System::Boolean _SaveDecalsToCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__SAVEDECALSTOCACHE_OFFSET))(this);
		}

		::System::Void _LoadDecalsFromCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__LOADDECALSFROMCACHE_OFFSET))(this);
		}

		::System::Void _ResetDecalRenderQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__RESETDECALRENDERQUEUE_OFFSET))(this);
		}

		::System::Void _DisposeAllDecals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__DISPOSEALLDECALS_OFFSET))(this);
		}

		::System::Void _DisposeDecalList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__DISPOSEDECALLIST_OFFSET))(this);
		}

		::System::Void _DisposePreviewDecal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__DISPOSEPREVIEWDECAL_OFFSET))(this);
		}

		::System::Void _DisposeAssets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__DISPOSEASSETS_OFFSET))(this);
		}

		::System::Void _ShotDecal(::System::Single forwardOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__SHOTDECAL_OFFSET))(this, forwardOffset);
		}

		::RPG::Client::FreeDecal* _CreateDecal(::System::Single alpha)
		{
			return ((::RPG::Client::FreeDecal*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__CREATEDECAL_OFFSET))(this, alpha);
		}

		::System::Void _SetDecalRenderQueue(::RPG::Client::FreeDecal* decal, ::System::Int32 renderQueue)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FreeDecal*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__SETDECALRENDERQUEUE_OFFSET))(this, decal, renderQueue);
		}

		::System::Void _ClearDecals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__CLEARDECALS_OFFSET))(this);
		}

		::System::Void _RemoveDecalWithAniFadeOut(::RPG::Client::FreeDecal* decal)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FreeDecal*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__REMOVEDECALWITHANIFADEOUT_OFFSET))(this, decal);
		}

		::System::Void _UpdatePreviewDecalTex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__UPDATEPREVIEWDECALTEX_OFFSET))(this);
		}

		::System::Void _UpdateCastInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__UPDATECASTINFO_OFFSET))(this);
		}

		::System::Void _UpdatePreviewDecal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__UPDATEPREVIEWDECAL_OFFSET))(this);
		}

		::System::Void _UpdateDecalMoveDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__UPDATEDECALMOVEDESTROY_OFFSET))(this);
		}

		::UnityEngine::Texture* _GetTextureFromPath(::System::String* texturePath)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__GETTEXTUREFROMPATH_OFFSET))(this, texturePath);
		}

		::System::Void _InvokeDecalCountChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__INVOKEDECALCOUNTCHANGE_OFFSET))(this);
		}

		::System::Single get_MaxRaycastLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GET_MAXRAYCASTLENGTH_OFFSET))(this);
		}

		::System::Void set_MaxRaycastLength(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SET_MAXRAYCASTLENGTH_OFFSET))(this, value);
		}

		::System::Single get_DecalWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GET_DECALWIDTH_OFFSET))(this);
		}

		::System::Void set_DecalWidth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SET_DECALWIDTH_OFFSET))(this, value);
		}

		::System::Single get_DecalHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GET_DECALHEIGHT_OFFSET))(this);
		}

		::System::Void set_DecalHeight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SET_DECALHEIGHT_OFFSET))(this, value);
		}

		::System::Single get_MaxDepthVariance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GET_MAXDEPTHVARIANCE_OFFSET))(this);
		}

		::System::Void set_MaxDepthVariance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SET_MAXDEPTHVARIANCE_OFFSET))(this, value);
		}

		::System::Single get_DepthBufferSampleRadiusRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GET_DEPTHBUFFERSAMPLERADIUSRATIO_OFFSET))(this);
		}

		::System::Void set_DepthBufferSampleRadiusRatio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SET_DEPTHBUFFERSAMPLERADIUSRATIO_OFFSET))(this, value);
		}

		::System::Single get_MaxDepthTestVariance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GET_MAXDEPTHTESTVARIANCE_OFFSET))(this);
		}

		::System::Void set_MaxDepthTestVariance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SET_MAXDEPTHTESTVARIANCE_OFFSET))(this, value);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _RemoveNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__REMOVENOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnDecalPuzzleClear(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__ONDECALPUZZLECLEAR_OFFSET))(this, arg);
		}

		::System::Void _ReportDecalCast(::RPG::Client::FreeDecal* decal)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FreeDecal*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__REPORTDECALCAST_OFFSET))(this, decal);
		}

		::System::Void _ReportUndoDecal(::RPG::Client::FreeDecal* decal)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FreeDecal*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__REPORTUNDODECAL_OFFSET))(this, decal);
		}

		::System::Void _ReportClearDecal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__REPORTCLEARDECAL_OFFSET))(this);
		}

		::System::Void InitParam(::RPG::Client::PhotoGraphDecalContainer_PhotoGraphDecalContainerInitParam* containerInitParam)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphDecalContainer_PhotoGraphDecalContainerInitParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_INITPARAM_OFFSET))(this, containerInitParam);
		}
	};
}
