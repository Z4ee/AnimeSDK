#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6F8A99E32D870A94.h"
#include "unitysdk/Enum_3_BB513C7A0A1D8F6D.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"
#include "unitysdk/MoleMole/BattleRegionSubsystem___c__DisplayClass34_0.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_A17F88B27FA91D04.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_50E88D52C3691096;
class Class_3_61A5922E5046F385_1;
namespace Octree { template <typename T> class BoundsOctree_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_CHECKBATTLEREGIONTELEPORTLEGAL_OFFSET UNITYSDK_OFFSET(0x1358ED80)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_CHECKCURRENTBATTLEREGIONCONFLICT_OFFSET UNITYSDK_OFFSET(0x1358ED00)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_CHECKENTITYINANYACTIVEBATTLEREGION_OFFSET UNITYSDK_OFFSET(0x1358F050)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_CREATEBATTLEREGIONBYFLOORID_OFFSET UNITYSDK_OFFSET(0x1358E620)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_CREATEBATTLEREGIONBYGROUPID_OFFSET UNITYSDK_OFFSET(0x135912C0)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_CREATEBATTLEREGIONHANDLE_1_OFFSET UNITYSDK_OFFSET(0x135907C0)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_CREATEBATTLEREGIONHANDLE_OFFSET UNITYSDK_OFFSET(0x13591D60)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_DISPATCHGRAPHEVENT_OFFSET UNITYSDK_OFFSET(0x1358F6D0)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_FINDALLINTERSECTIONSNONALLOC_OFFSET UNITYSDK_OFFSET(0x1358D700)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_FINDALLINTERSECTIONSWITHACCELERATIONNONALLOC_1_OFFSET UNITYSDK_OFFSET(0x1358DEE0)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_FINDALLINTERSECTIONSWITHACCELERATIONNONALLOC_OFFSET UNITYSDK_OFFSET(0x1358D7B0)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_FINDALLINTERSECTIONSWITHLOOPNONALLOC_OFFSET UNITYSDK_OFFSET(0x1358DB80)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_GETBATTLEREGIONDOORASSETPATHBYTYPE_OFFSET UNITYSDK_OFFSET(0x1358D070)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_GETBATTLEREGIONHANDLE_1_OFFSET UNITYSDK_OFFSET(0x13592640)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_GETBATTLEREGIONHANDLE_OFFSET UNITYSDK_OFFSET(0x13591B50)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_GETORCREATEBATTLEREGIONHANDLE_OFFSET UNITYSDK_OFFSET(0x13592570)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1358E330)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_ONBATTLEREGIONENTITYREMOVED_OFFSET UNITYSDK_OFFSET(0x135923B0)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1358E880)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1358E820)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_PRELOADBATTLEREGIONDOORASSET_OFFSET UNITYSDK_OFFSET(0x1358D200)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_RESETFLOORBATTLEREGIONBYGROUPID_OFFSET UNITYSDK_OFFSET(0x13592520)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_SETBATTLEREGIONPRELOADED_OFFSET UNITYSDK_OFFSET(0x1358FB50)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_SETBATTLEREGIONPREPARE_OFFSET UNITYSDK_OFFSET(0x1358FEF0)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_SETBATTLEREGIONSIGHTSEEING_OFFSET UNITYSDK_OFFSET(0x1358F330)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_SETBATTLEREGIONWALLED_OFFSET UNITYSDK_OFFSET(0x135902A0)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_UNLOADBATTLEREGIONBYGROUPID_OFFSET UNITYSDK_OFFSET(0x135914E0)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_UNLOADBATTLEREGIONBYSUITEINFO_OFFSET UNITYSDK_OFFSET(0x13591EA0)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_UNLOADBATTLEREGION_OFFSET UNITYSDK_OFFSET(0x13590640)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM_UPDATEORCREATEBATTLEREGIONBYSUITEINFO_OFFSET UNITYSDK_OFFSET(0x13591840)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x13592D70)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x13592D50)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM__DISPATCHGRAPHEVENT_G__DISPATCHINTERNAL_34_0_OFFSET UNITYSDK_OFFSET(0x13592AF0)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM__DISPATCHGRAPHEVENT_G__DISPATCHWITHSUITEINFOINTERNAL_34_1_OFFSET UNITYSDK_OFFSET(0x13592C20)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13592F80)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13593010)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x135930A0)

namespace MoleMole
{
	inline static constexpr unsigned int BattleRegionSubsystem_TypeDefinitionIndex = 64240;

	class BattleRegionSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BattleRegionSubsystem*>
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::Enum_3_BB513C7A0A1D8F6D, ::Foundation::AssetPath>** StaticGet_DoorEffectMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::Enum_3_BB513C7A0A1D8F6D, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(BattleRegionSubsystem_TypeDefinitionIndex)->GetStaticField(0x497C0);
		}
		::Octree::BoundsOctree_1<::MoleMole::EntityHandle>* BattleRegionOctree; // 0x10
		::MoleMole::EntityHandle CurrentBattleRegion; // 0x18
		::System::Collections::Generic::Dictionary_2<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::MoleMole::EntityHandle>* BattleRegionMap; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* ParallelBattleRegions; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM__CCTOR_OFFSET))();
		}

		static ::Foundation::AssetPath GetBattleRegionDoorAssetPathByType(::Enum_3_BB513C7A0A1D8F6D doorEffectType)
		{
			return ((::Foundation::AssetPath(*)(::Enum_3_BB513C7A0A1D8F6D))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_GETBATTLEREGIONDOORASSETPATHBYTYPE_OFFSET))(doorEffectType);
		}

		::System::Void PreloadBattleRegionDoorAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_PRELOADBATTLEREGIONDOORASSET_OFFSET))(this);
		}

		::System::Void FindAllIntersectionsNonAlloc(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* collidingWith, ::UnityEngine::Vector3 point, ::System::Boolean acceleration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_FINDALLINTERSECTIONSNONALLOC_OFFSET))(this, collidingWith, point, acceleration);
		}

		::System::Void FindAllIntersectionsWithLoopNonAlloc(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* collidingWith, ::UnityEngine::Vector3 point)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_FINDALLINTERSECTIONSWITHLOOPNONALLOC_OFFSET))(this, collidingWith, point);
		}

		::System::Void FindAllIntersectionsWithAccelerationNonAlloc(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* collidingWith, ::UnityEngine::Vector3 point)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_FINDALLINTERSECTIONSWITHACCELERATIONNONALLOC_OFFSET))(this, collidingWith, point);
		}

		::System::Void FindAllIntersectionsWithAccelerationNonAlloc_1(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* collidingWith, ::UnityEngine::Vector3 center, ::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_FINDALLINTERSECTIONSWITHACCELERATIONNONALLOC_1_OFFSET))(this, collidingWith, center, radius);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean CheckCurrentBattleRegionConflict(::Class_3_61A5922E5046F385_1* component)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_61A5922E5046F385_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_CHECKCURRENTBATTLEREGIONCONFLICT_OFFSET))(this, component);
		}

		::System::Boolean CheckBattleRegionTeleportLegal(::Class_3_61A5922E5046F385_1* component)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_61A5922E5046F385_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_CHECKBATTLEREGIONTELEPORTLEGAL_OFFSET))(this, component);
		}

		::System::Boolean CheckEntityInAnyActiveBattleRegion(::MoleMole::EntityHandle entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_CHECKENTITYINANYACTIVEBATTLEREGION_OFFSET))(this, entity);
		}

		::System::Void SetBattleRegionSightseeing(::Class_3_61A5922E5046F385_1* component)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_61A5922E5046F385_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_SETBATTLEREGIONSIGHTSEEING_OFFSET))(this, component);
		}

		::System::Void SetBattleRegionPreloaded(::Class_3_61A5922E5046F385_1* component)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_61A5922E5046F385_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_SETBATTLEREGIONPRELOADED_OFFSET))(this, component);
		}

		::System::Void SetBattleRegionPrepare(::Class_3_61A5922E5046F385_1* component)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_61A5922E5046F385_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_SETBATTLEREGIONPREPARE_OFFSET))(this, component);
		}

		::System::Void SetBattleRegionWalled(::Class_3_61A5922E5046F385_1* component)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_61A5922E5046F385_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_SETBATTLEREGIONWALLED_OFFSET))(this, component);
		}

		::System::Void UnloadBattleRegion(::Class_3_61A5922E5046F385_1* component)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_61A5922E5046F385_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_UNLOADBATTLEREGION_OFFSET))(this, component);
		}

		::System::Void CreateBattleRegionByFloorId(::System::Int32 floorId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_CREATEBATTLEREGIONBYFLOORID_OFFSET))(this, floorId);
		}

		::System::Void CreateBattleRegionByGroupId(::System::UInt32 groupId, ::Foundation::ViewObject::SuiteInfo suiteInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_CREATEBATTLEREGIONBYGROUPID_OFFSET))(this, groupId, suiteInfo);
		}

		::System::Void UnloadBattleRegionByGroupId(::System::UInt32 groupId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_UNLOADBATTLEREGIONBYGROUPID_OFFSET))(this, groupId);
		}

		::System::Void UpdateOrCreateBattleRegionBySuiteInfo(::System::UInt32 groupId, ::Foundation::ViewObject::SuiteInfo suiteInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_UPDATEORCREATEBATTLEREGIONBYSUITEINFO_OFFSET))(this, groupId, suiteInfo);
		}

		::System::Void UnloadBattleRegionBySuiteInfo(::System::UInt32 groupId, ::Foundation::ViewObject::SuiteInfo suiteInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_UNLOADBATTLEREGIONBYSUITEINFO_OFFSET))(this, groupId, suiteInfo);
		}

		::System::Void OnBattleRegionEntityRemoved(::MoleMole::EntityHandle entity, ::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*> key)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_ONBATTLEREGIONENTITYREMOVED_OFFSET))(this, entity, key);
		}

		::System::Void ResetFloorBattleRegionByGroupId(::System::UInt32 groupId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_RESETFLOORBATTLEREGIONBYGROUPID_OFFSET))(this, groupId);
		}

		::MoleMole::EntityHandle GetOrCreateBattleRegionHandle(::System::UInt32 groupId, ::System::String* key, ::Foundation::ViewObject::SuiteInfo suiteInfo)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::System::UInt32, ::System::String*, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_GETORCREATEBATTLEREGIONHANDLE_OFFSET))(this, groupId, key, suiteInfo);
		}

		::MoleMole::EntityHandle GetBattleRegionHandle(::System::UInt32 groupId, ::System::String* key)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_GETBATTLEREGIONHANDLE_OFFSET))(this, groupId, key);
		}

		::MoleMole::EntityHandle GetBattleRegionHandle_1(::System::UInt32 groupId, ::System::String* key, ::Foundation::ViewObject::SuiteInfo suiteInfo)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::System::UInt32, ::System::String*, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_GETBATTLEREGIONHANDLE_1_OFFSET))(this, groupId, key, suiteInfo);
		}

		::MoleMole::EntityHandle CreateBattleRegionHandle(::System::UInt32 groupId, ::System::String* key, ::Foundation::ViewObject::SuiteInfo suiteInfo)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::System::UInt32, ::System::String*, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_CREATEBATTLEREGIONHANDLE_OFFSET))(this, groupId, key, suiteInfo);
		}

		::MoleMole::EntityHandle CreateBattleRegionHandle_1(::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*> key, ::Class_1_50E88D52C3691096* config, ::Foundation::ViewObject::SuiteInfo suiteInfo)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::Class_1_50E88D52C3691096*, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_CREATEBATTLEREGIONHANDLE_1_OFFSET))(this, key, config, suiteInfo);
		}

		::System::Void DispatchGraphEvent(::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*> key, ::Foundation::ViewObject::SuiteInfo suiteInfo, ::Enum_3_6F8A99E32D870A94 prevStatus, ::Enum_3_6F8A99E32D870A94 currentStatus)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::Foundation::ViewObject::SuiteInfo, ::Enum_3_6F8A99E32D870A94, ::Enum_3_6F8A99E32D870A94))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM_DISPATCHGRAPHEVENT_OFFSET))(this, key, suiteInfo, prevStatus, currentStatus);
		}

		static ::System::Void _DispatchGraphEvent_g__DispatchInternal_34_0(::System::UInt32 group, ::MoleMole::BattleRegionSubsystem___c__DisplayClass34_0& a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::MoleMole::BattleRegionSubsystem___c__DisplayClass34_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM__DISPATCHGRAPHEVENT_G__DISPATCHINTERNAL_34_0_OFFSET))(group, a2);
		}

		static ::System::Void _DispatchGraphEvent_g__DispatchWithSuiteInfoInternal_34_1(::System::UInt32 group, ::MoleMole::BattleRegionSubsystem___c__DisplayClass34_0& a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::MoleMole::BattleRegionSubsystem___c__DisplayClass34_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM__DISPATCHGRAPHEVENT_G__DISPATCHWITHSUITEINFOINTERNAL_34_1_OFFSET))(group, a2);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
