#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_071C742764E4C823;
class Class_2_186B4E1BC116EFF3;
class ScreenSpaceQuadRenderer;
class ScreenSpaceSplineRenderer;
namespace MoleMole { class MonsterHatredLineSubSystem_HatredLineLinkData; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_CHECKADDNEWENTITY_OFFSET UNITYSDK_OFFSET(0x17923C00)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_CHECKCANLINKHATREDLINE_OFFSET UNITYSDK_OFFSET(0x17921B10)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_CHECKVALIDENTITY_OFFSET UNITYSDK_OFFSET(0x179241D0)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_FETCHNEEDPROCESSDATA_OFFSET UNITYSDK_OFFSET(0x17921090)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_LINKTARGETHEAD_OFFSET UNITYSDK_OFFSET(0x17922900)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_LOADHEADQUADRESOBJ_OFFSET UNITYSDK_OFFSET(0x17922E60)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_LOADRESOBJ_OFFSET UNITYSDK_OFFSET(0x17922820)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x17920BE0)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17922F40)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x17923AF0)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_ONMONSTERREMOVE_OFFSET UNITYSDK_OFFSET(0x17923DF0)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x17921230)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_REFRESHHATREDLINESTATE_OFFSET UNITYSDK_OFFSET(0x17922330)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x179236D0)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_RELEASEHATREDLINEGAMEOBJECTTOPOOL_OFFSET UNITYSDK_OFFSET(0x17924320)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_RELEASEHATREDLINE_OFFSET UNITYSDK_OFFSET(0x179221B0)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_RELEASELINKTARGETHEAD_OFFSET UNITYSDK_OFFSET(0x17921F90)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_SETENTITYLINKINFO_OFFSET UNITYSDK_OFFSET(0x17921C40)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_TICKHATREDLINE_OFFSET UNITYSDK_OFFSET(0x179217B0)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_TICKWAITINGENTITY_OFFSET UNITYSDK_OFFSET(0x179215C0)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x17923970)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x179243C0)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x17924720)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x179247B0)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x17924840)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x179248D0)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x17924960)

namespace MoleMole
{
	inline static constexpr unsigned int MonsterHatredLineSubSystem_TypeDefinitionIndex = 44940;

	class MonsterHatredLineSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::MonsterHatredLineSubSystem*>
	{
	public:
		// static const ::System::Single tikcInterval; // 0x0
		::Foundation::AssetRequestHandle lineResHandle; // 0x10
		::Foundation::AssetPath lineResPath; // 0x30
		::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* headQuadObjectPool; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ScreenSpaceQuadRenderer*>* linkHeadDic; // 0x48
		::System::String* hideHetredLineAnimatorZoneTag; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* linkedTargetRecord; // 0x58
		::Foundation::AssetPath quadResPath; // 0x60
		::Foundation::AssetRequestHandle quadResHandle; // 0x70
		::System::Collections::Generic::List_1<::MoleMole::MonsterHatredLineSubSystem_HatredLineLinkData*>* hatredLineDataList; // 0x90
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* waittingList; // 0x98
		::System::String* playerAttachPointName; // 0xA0
		::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* hatredLineObjectPool; // 0xA8
		::System::Collections::Generic::List_1<::MoleMole::MonsterHatredLineSubSystem_HatredLineLinkData*>* newAddHatredDataList; // 0xB0
		::System::String* enemyAttachPointName; // 0xB8
		::System::String* hetredLineEnableAnimatorZoneTag; // 0xC0
		::System::Single timer; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void TickWaitingEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_TICKWAITINGENTITY_OFFSET))(this);
		}

		::System::Void TickHatredLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_TICKHATREDLINE_OFFSET))(this);
		}

		::System::Void SetEntityLinkInfo(::MoleMole::Battle::Entity* sourceEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_SETENTITYLINKINFO_OFFSET))(this, sourceEntity);
		}

		::System::Void RefreshHatredLineState(::MoleMole::MonsterHatredLineSubSystem_HatredLineLinkData* linkData, ::System::Boolean ignoreZoneTagsCheck)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonsterHatredLineSubSystem_HatredLineLinkData*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_REFRESHHATREDLINESTATE_OFFSET))(this, linkData, ignoreZoneTagsCheck);
		}

		::System::Void ReleaseLinkTargetHead(::System::UInt32 targetEntityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_RELEASELINKTARGETHEAD_OFFSET))(this, targetEntityId);
		}

		::System::Void LinkTargetHead(::System::UInt32 targetEntityId, ::System::String* attachPointName)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_LINKTARGETHEAD_OFFSET))(this, targetEntityId, attachPointName);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void CheckAddNewEntity(::Class_2_186B4E1BC116EFF3* evtEntityReady)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_186B4E1BC116EFF3*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_CHECKADDNEWENTITY_OFFSET))(this, evtEntityReady);
		}

		::System::Boolean CheckValidEntity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_CHECKVALIDENTITY_OFFSET))(this, entity);
		}

		::System::Void OnMonsterRemove(::Class_2_071C742764E4C823* evtEntityRemove)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_071C742764E4C823*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_ONMONSTERREMOVE_OFFSET))(this, evtEntityRemove);
		}

		::System::Void FetchNeedProcessData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_FETCHNEEDPROCESSDATA_OFFSET))(this);
		}

		::System::Boolean CheckCanLinkHatredLine(::MoleMole::Battle::Entity* sourceEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_CHECKCANLINKHATREDLINE_OFFSET))(this, sourceEntity);
		}

		::UnityEngine::GameObject* LoadResObj()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_LOADRESOBJ_OFFSET))(this);
		}

		::UnityEngine::GameObject* LoadHeadQuadResObj()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_LOADHEADQUADRESOBJ_OFFSET))(this);
		}

		::System::Void ReleaseHatredLineGameObjectToPool(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_RELEASEHATREDLINEGAMEOBJECTTOPOOL_OFFSET))(this, go);
		}

		::System::Void ReleaseHatredLine(::ScreenSpaceSplineRenderer* splineRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenSpaceSplineRenderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_RELEASEHATREDLINE_OFFSET))(this, splineRenderer);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void __base_UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
