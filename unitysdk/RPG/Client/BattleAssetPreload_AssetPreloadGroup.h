#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2C2DA62D5BBB20B1_PreloadType.h"
#include "unitysdk/RPG/Client/GameObjectPoolUsage.h"
#include "unitysdk/RPG/Client/PreloadItemFlag.h"
#include "unitysdk/RPG/Client/UpdatePreloadTypeMethod.h"
#include "unitysdk/RPG/GameCore/PreloadGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_2C2DA62D5BBB20B1;
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace RPG::Client { class BattleAssetPreload; }
namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroupCreateParam; }
namespace RPG::GameCore { class PreloadItemScoreConfig; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_ADDASSETS_OFFSET UNITYSDK_OFFSET(0x9DE75F0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_ADDASSET_OFFSET UNITYSDK_OFFSET(0x9DE7520)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_COLLECTITEMSIZE_OFFSET UNITYSDK_OFFSET(0x9DE8D70)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DE5050)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GETASSETITEMSCORE_OFFSET UNITYSDK_OFFSET(0x9DE6A70)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GETPRELOADITEM_OFFSET UNITYSDK_OFFSET(0x9DE7260)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x9DE64F0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x9DE64E0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x9DE6180)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x9DE5FF0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x9DE6170)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_ISLOADINGORLOADED_OFFSET UNITYSDK_OFFSET(0x9DE6050)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9DE6500)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_PRELOADMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x9DE5F80)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_HASITEMOFFLAG_OFFSET UNITYSDK_OFFSET(0x9DE7AB0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9DE65C0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_MAPASSETPATH_OFFSET UNITYSDK_OFFSET(0x9DE6B50)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_MARKNOUSEITEM_OFFSET UNITYSDK_OFFSET(0x9DE8DB0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_ONPRELOADTAGSTAGECHANGE_OFFSET UNITYSDK_OFFSET(0x9DE8BF0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_RECOLLECTRESOURCE_OFFSET UNITYSDK_OFFSET(0x9DE67F0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHAFTERENTERADVENTURE_OFFSET UNITYSDK_OFFSET(0x9DE8290)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHAFTERENTERBATTLENEW_OFFSET UNITYSDK_OFFSET(0x9DE87A0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHAFTERENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x9DE8500)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFOREENTERADVENTURE_OFFSET UNITYSDK_OFFSET(0x9DE81E0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFOREENTERBATTLENEW_OFFSET UNITYSDK_OFFSET(0x9DE86A0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFOREENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x9DE8450)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFORELEAVEADVENTURE_OFFSET UNITYSDK_OFFSET(0x9DE83C0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFORELEAVEBATTLENEW_OFFSET UNITYSDK_OFFSET(0x9DE88A0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFORELEAVEBATTLE_OFFSET UNITYSDK_OFFSET(0x9DE8610)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFORERESTARTBATTLE_OFFSET UNITYSDK_OFFSET(0x9DE85B0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFORESWITCHMAP_OFFSET UNITYSDK_OFFSET(0x9DE8380)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHINADVENTURE_OFFSET UNITYSDK_OFFSET(0x9DE8340)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHPRELOADTYPE_OFFSET UNITYSDK_OFFSET(0x9DE80B0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REGISTERPRELOADITEM_OFFSET UNITYSDK_OFFSET(0x9DE6BA0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_RELEASERESOURCE_OFFSET UNITYSDK_OFFSET(0x9DE6860)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REMOVEPRELOADITEMBYFLAG_OFFSET UNITYSDK_OFFSET(0x9DE7BF0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REMOVEPRELOADITEM_1_OFFSET UNITYSDK_OFFSET(0x9DE7880)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REMOVEPRELOADITEM_OFFSET UNITYSDK_OFFSET(0x9DE7720)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_SETPRELOADTYPEBIAS_OFFSET UNITYSDK_OFFSET(0x9DE6220)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x9DE6190)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_SET_PRELOADMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x9DE5F90)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9DE6510)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_UPDATEPRELOADTYPEBYFLAG_OFFSET UNITYSDK_OFFSET(0x9DE7DB0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_UPDATEPRELOADTYPE_OFFSET UNITYSDK_OFFSET(0x9DE7F80)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__CALREALPRELOADTYPE_OFFSET UNITYSDK_OFFSET(0x9DE7430)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__COLLECTRESOURCEIMPLFORCOLLECTIONMODE_OFFSET UNITYSDK_OFFSET(0x9DE89F0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__COLLECTRESOURCEIMPL_OFFSET UNITYSDK_OFFSET(0x9DE89B0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__CONVERTTOORIGINLOD_OFFSET UNITYSDK_OFFSET(0x9DE8F80)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x9DE9030)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__GENITEMNAME_OFFSET UNITYSDK_OFFSET(0x9DE8F00)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__GETSYNCPRELOADITEM_OFFSET UNITYSDK_OFFSET(0x9DE7930)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__ONACTIVESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9DE8BB0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x9DE8970)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x9DE8930)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__ONPRELOADTYPEBIASCHANGE_OFFSET UNITYSDK_OFFSET(0x9DE8A70)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__RELEASERESOURCEIMPL_OFFSET UNITYSDK_OFFSET(0x9DE8A30)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__UPDATEPRELOADTYPEIMPL_OFFSET UNITYSDK_OFFSET(0x9DE7040)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9DE9140)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAssetPreload_AssetPreloadGroup_TypeDefinitionIndex = 55030;

	class BattleAssetPreload_AssetPreloadGroup : public ::System::Object
	{
	public:
		::RPG::GameCore::PreloadItemScoreConfig* _ItemScoreConfig; // 0x10
		::Collections::Pooled::PooledDictionary_2<::System::String*, ::Class_1_2C2DA62D5BBB20B1*>* _PreloadItemDict; // 0x18
		::Collections::Pooled::PooledDictionary_2<::System::String*, ::System::Int32>* _PreloadTypeBiasDict; // 0x20
		::RPG::Client::BattleAssetPreload* _Owner; // 0x28
		::RPG::Client::BattleAssetPreload_AssetPreloadGroupCreateParam* _CreateParamBase; // 0x30
		::Collections::Pooled::PooledDictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* _SyncPreloadTypeDict; // 0x38
		::System::Int32 _PreloadTypeBias; // 0x40
		::RPG::GameCore::PreloadGroupType _GroupType; // 0x44
		::System::UInt32 _GroupID; // 0x48
		::System::Boolean _IsActive; // 0x4C
		::System::Int32 _PreloadMultiplier; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_PreloadMultiplier()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_PRELOADMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_PreloadMultiplier(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_SET_PRELOADMULTIPLIER_OFFSET))(this, value);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean get_IsLoadingOrLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_ISLOADINGORLOADED_OFFSET))(this);
		}

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_ISENABLE_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_SET_ISACTIVE_OFFSET))(this, value);
		}

		::RPG::GameCore::PreloadGroupType get_GroupType()
		{
			return ((::RPG::GameCore::PreloadGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_GROUPTYPE_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_GROUPID_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_ISVALID_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_TOSTRING_OFFSET))(this);
		}

		::System::Void Initialize(::RPG::Client::BattleAssetPreload* owner, ::RPG::GameCore::PreloadGroupType groupType, ::System::UInt32 groupID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroupCreateParam* createParam)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload*, ::RPG::GameCore::PreloadGroupType, ::System::UInt32, ::RPG::Client::BattleAssetPreload_AssetPreloadGroupCreateParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_INITIALIZE_OFFSET))(this, owner, groupType, groupID, createParam);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_DISPOSE_OFFSET))(this);
		}

		::System::Single GetAssetItemScore(::System::String* itemProfilerName)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GETASSETITEMSCORE_OFFSET))(this, itemProfilerName);
		}

		::System::String* MapAssetPath(::System::String* originPath)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_MAPASSETPATH_OFFSET))(this, originPath);
		}

		::Class_1_2C2DA62D5BBB20B1* RegisterPreloadItem(::System::String* itemProfilerName, ::RPG::Client::PreloadItemFlag flag, ::Class_1_2C2DA62D5BBB20B1_PreloadType preloadType, ::System::String* preloadTag)
		{
			return ((::Class_1_2C2DA62D5BBB20B1*(*)(::PVOID, ::System::String*, ::RPG::Client::PreloadItemFlag, ::Class_1_2C2DA62D5BBB20B1_PreloadType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REGISTERPRELOADITEM_OFFSET))(this, itemProfilerName, flag, preloadType, preloadTag);
		}

		::Class_1_2C2DA62D5BBB20B1_PreloadType _CalRealPreloadType(::Class_1_2C2DA62D5BBB20B1_PreloadType preloadType, ::System::Int32 bias, ::System::String* preloadTag)
		{
			return ((::Class_1_2C2DA62D5BBB20B1_PreloadType(*)(::PVOID, ::Class_1_2C2DA62D5BBB20B1_PreloadType, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__CALREALPRELOADTYPE_OFFSET))(this, preloadType, bias, preloadTag);
		}

		::System::Void AddAsset(::Class_1_2C2DA62D5BBB20B1* preloadItem, ::System::String* assetPath, ::System::Single score, ::System::Type* type, ::System::Int32 preloadCnt, ::RPG::Client::GameObjectPoolUsage poolUsage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2C2DA62D5BBB20B1*, ::System::String*, ::System::Single, ::System::Type*, ::System::Int32, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_ADDASSET_OFFSET))(this, preloadItem, assetPath, score, type, preloadCnt, poolUsage);
		}

		::System::Void AddAssets(::Class_1_2C2DA62D5BBB20B1* preloadItem, ::Il2CppArray<::System::String*>* assetPaths, ::System::Single score, ::System::Type* type, ::System::Int32 preloadCnt, ::RPG::Client::GameObjectPoolUsage poolUsage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2C2DA62D5BBB20B1*, ::Il2CppArray<::System::String*>*, ::System::Single, ::System::Type*, ::System::Int32, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_ADDASSETS_OFFSET))(this, preloadItem, assetPaths, score, type, preloadCnt, poolUsage);
		}

		::System::Void RemovePreloadItem(::System::String* itemProfilerName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REMOVEPRELOADITEM_OFFSET))(this, itemProfilerName);
		}

		::System::Void RemovePreloadItem_1(::Class_1_2C2DA62D5BBB20B1* preloadItem)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2C2DA62D5BBB20B1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REMOVEPRELOADITEM_1_OFFSET))(this, preloadItem);
		}

		::Class_1_2C2DA62D5BBB20B1* GetPreloadItem(::System::String* itemProfilerName)
		{
			return ((::Class_1_2C2DA62D5BBB20B1*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GETPRELOADITEM_OFFSET))(this, itemProfilerName);
		}

		::Class_1_2C2DA62D5BBB20B1* _GetSyncPreloadItem(::System::String* itemProfilerName)
		{
			return ((::Class_1_2C2DA62D5BBB20B1*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__GETSYNCPRELOADITEM_OFFSET))(this, itemProfilerName);
		}

		::System::Boolean HasItemOfFlag(::RPG::Client::PreloadItemFlag flag)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PreloadItemFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_HASITEMOFFLAG_OFFSET))(this, flag);
		}

		::System::Void RemovePreloadItemByFlag(::RPG::Client::PreloadItemFlag flag)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PreloadItemFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REMOVEPRELOADITEMBYFLAG_OFFSET))(this, flag);
		}

		::System::Void UpdatePreloadTypeByFlag(::RPG::Client::PreloadItemFlag flag, ::Class_1_2C2DA62D5BBB20B1_PreloadType preloadType, ::RPG::Client::UpdatePreloadTypeMethod method, ::System::String* exceptItemName, ::RPG::Client::PreloadItemFlag exceptFlag)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PreloadItemFlag, ::Class_1_2C2DA62D5BBB20B1_PreloadType, ::RPG::Client::UpdatePreloadTypeMethod, ::System::String*, ::RPG::Client::PreloadItemFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_UPDATEPRELOADTYPEBYFLAG_OFFSET))(this, flag, preloadType, method, exceptItemName, exceptFlag);
		}

		::System::Void UpdatePreloadType(::System::String* itemProfilerName, ::Class_1_2C2DA62D5BBB20B1_PreloadType preloadType, ::RPG::Client::UpdatePreloadTypeMethod method)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_2C2DA62D5BBB20B1_PreloadType, ::RPG::Client::UpdatePreloadTypeMethod))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_UPDATEPRELOADTYPE_OFFSET))(this, itemProfilerName, preloadType, method);
		}

		::System::Void _UpdatePreloadTypeImpl(::Class_1_2C2DA62D5BBB20B1* preloadItem, ::Class_1_2C2DA62D5BBB20B1_PreloadType preloadType, ::RPG::Client::UpdatePreloadTypeMethod method)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2C2DA62D5BBB20B1*, ::Class_1_2C2DA62D5BBB20B1_PreloadType, ::RPG::Client::UpdatePreloadTypeMethod))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__UPDATEPRELOADTYPEIMPL_OFFSET))(this, preloadItem, preloadType, method);
		}

		::System::Void RecollectResource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_RECOLLECTRESOURCE_OFFSET))(this);
		}

		::System::Void ReleaseResource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_RELEASERESOURCE_OFFSET))(this);
		}

		::System::Void RefreshPreloadType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHPRELOADTYPE_OFFSET))(this);
		}

		::System::Void RefreshBeforeEnterAdventure()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFOREENTERADVENTURE_OFFSET))(this);
		}

		::System::Void RefreshAfterEnterAdventure()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHAFTERENTERADVENTURE_OFFSET))(this);
		}

		::System::Void RefreshInAdventure()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHINADVENTURE_OFFSET))(this);
		}

		::System::Void RefreshBeforeSwitchMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFORESWITCHMAP_OFFSET))(this);
		}

		::System::Void RefreshBeforeLeaveAdventure()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFORELEAVEADVENTURE_OFFSET))(this);
		}

		::System::Void RefreshBeforeEnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFOREENTERBATTLE_OFFSET))(this);
		}

		::System::Void RefreshAfterEnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHAFTERENTERBATTLE_OFFSET))(this);
		}

		::System::Void RefreshBeforeRestartBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFORERESTARTBATTLE_OFFSET))(this);
		}

		::System::Void RefreshBeforeLeaveBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFORELEAVEBATTLE_OFFSET))(this);
		}

		::System::Void RefreshBeforeEnterBattleNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFOREENTERBATTLENEW_OFFSET))(this);
		}

		::System::Void RefreshAfterEnterBattleNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHAFTERENTERBATTLENEW_OFFSET))(this);
		}

		::System::Void RefreshBeforeLeaveBattleNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFORELEAVEBATTLENEW_OFFSET))(this);
		}

		::System::Void _OnInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__ONINITIALIZE_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _CollectResourceImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__COLLECTRESOURCEIMPL_OFFSET))(this);
		}

		::System::Void _CollectResourceImplForCollectionMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__COLLECTRESOURCEIMPLFORCOLLECTIONMODE_OFFSET))(this);
		}

		::System::Void _ReleaseResourceImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__RELEASERESOURCEIMPL_OFFSET))(this);
		}

		::System::Void _OnPreloadTypeBiasChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__ONPRELOADTYPEBIASCHANGE_OFFSET))(this);
		}

		::System::Void _OnActiveStateChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__ONACTIVESTATECHANGE_OFFSET))(this);
		}

		::System::Void OnPreloadTagStageChange(::System::String* tag, ::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_ONPRELOADTAGSTAGECHANGE_OFFSET))(this, tag, active);
		}

		::System::Void CollectItemSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_COLLECTITEMSIZE_OFFSET))(this);
		}

		::System::Void MarkNoUseItem(::System::String* itemName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_MARKNOUSEITEM_OFFSET))(this, itemName);
		}

		::System::Void SetPreloadTypeBias(::System::String* itemProfilerName, ::System::Int32 bias)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_SETPRELOADTYPEBIAS_OFFSET))(this, itemProfilerName, bias);
		}

		static ::System::String* _GenItemName(::System::String* prefix, ::System::Object* key)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__GENITEMNAME_OFFSET))(prefix, key);
		}

		static ::System::String* _ConvertToOriginLod(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__CONVERTTOORIGINLOD_OFFSET))(path);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
