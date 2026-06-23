#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_459DF15A662DC811_Struct_2_6F78FEE82F482190.h"
#include "unitysdk/Enum_3_41227C43B8705FA0.h"
#include "unitysdk/Enum_3_EB457EC35BBF1AAD.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/FloorSubsystem_SplineMeta.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_A17F88B27FA91D04.h"

class Class_1_204C453CC79AE4E0;
class Class_1_204C453CC79AE4E0_1;
class Class_1_204C453CC79AE4E0_2;
class Class_1_50E88D52C3691096;
class Class_1_E795C5D5DDF30620;
class Class_1_F8A4F21F742B6836;
class Class_2_167BB37617B940E3;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole { class FloorSubsystem_FGamePlayTagSupport; }
namespace MoleMole { class MonoTriggerEventDispatcher; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
template <typename T1, typename T2> class Class_1_459DF15A662DC811;

#define MOLEMOLE_FLOORSUBSYSTEM_ADDDYNAMICCONFIGTRIGGER_OFFSET UNITYSDK_OFFSET(0x10D301B0)
#define MOLEMOLE_FLOORSUBSYSTEM_CLEARALLGAMEPLAYTAGCACHE_OFFSET UNITYSDK_OFFSET(0x10D32C00)
#define MOLEMOLE_FLOORSUBSYSTEM_CLEARGAMEPLAYTAGCACHE_1_OFFSET UNITYSDK_OFFSET(0x10D329C0)
#define MOLEMOLE_FLOORSUBSYSTEM_CLEARGAMEPLAYTAGCACHE_OFFSET UNITYSDK_OFFSET(0x10D32910)
#define MOLEMOLE_FLOORSUBSYSTEM_CREATECURVYSPLINE_OFFSET UNITYSDK_OFFSET(0x10D2F0B0)
#define MOLEMOLE_FLOORSUBSYSTEM_CREATETRIGGEREVENTDISPATCHER_OFFSET UNITYSDK_OFFSET(0x10D2E1B0)
#define MOLEMOLE_FLOORSUBSYSTEM_GETCONFIGTRIGGER_1_OFFSET UNITYSDK_OFFSET(0x10D2E640)
#define MOLEMOLE_FLOORSUBSYSTEM_GETCONFIGTRIGGER_2_OFFSET UNITYSDK_OFFSET(0x10D2D100)
#define MOLEMOLE_FLOORSUBSYSTEM_GETCONFIGTRIGGER_OFFSET UNITYSDK_OFFSET(0x10D2CFA0)
#define MOLEMOLE_FLOORSUBSYSTEM_GETGAMEPLAYTAGSFROMCONFIG_OFFSET UNITYSDK_OFFSET(0x10D31200)
#define MOLEMOLE_FLOORSUBSYSTEM_GETSPLINESBYGAMEPLAYTAG_1_OFFSET UNITYSDK_OFFSET(0x10D326B0)
#define MOLEMOLE_FLOORSUBSYSTEM_GETSPLINESBYGAMEPLAYTAG_OFFSET UNITYSDK_OFFSET(0x10D31BA0)
#define MOLEMOLE_FLOORSUBSYSTEM_GETVIEWOBJECTSBYSPLINE_OFFSET UNITYSDK_OFFSET(0x10D30C50)
#define MOLEMOLE_FLOORSUBSYSTEM_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x10D307F0)
#define MOLEMOLE_FLOORSUBSYSTEM_GET_FLOORUSAGE_OFFSET UNITYSDK_OFFSET(0x10D30800)
#define MOLEMOLE_FLOORSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10D2D710)
#define MOLEMOLE_FLOORSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10D2DD10)
#define MOLEMOLE_FLOORSUBSYSTEM_ONSECTIONSWITCHED_OFFSET UNITYSDK_OFFSET(0x10D331B0)
#define MOLEMOLE_FLOORSUBSYSTEM_ONSPLINEADDED_OFFSET UNITYSDK_OFFSET(0x10D2F8F0)
#define MOLEMOLE_FLOORSUBSYSTEM_ONSPLINEDISPOSED_OFFSET UNITYSDK_OFFSET(0x10D31260)
#define MOLEMOLE_FLOORSUBSYSTEM_RECORDVIEWOBJECTFROMSPLINE_OFFSET UNITYSDK_OFFSET(0x10D2EC70)
#define MOLEMOLE_FLOORSUBSYSTEM_REMOVEVIEWOBJECTFROMSPLINE_OFFSET UNITYSDK_OFFSET(0x10D30EA0)
#define MOLEMOLE_FLOORSUBSYSTEM_REQUESTSPLINE_1_OFFSET UNITYSDK_OFFSET(0x10D2E900)
#define MOLEMOLE_FLOORSUBSYSTEM_REQUESTSPLINE_OFFSET UNITYSDK_OFFSET(0x10D2E850)
#define MOLEMOLE_FLOORSUBSYSTEM_REQUEST_1_OFFSET UNITYSDK_OFFSET(0x10D2E330)
#define MOLEMOLE_FLOORSUBSYSTEM_REQUEST_OFFSET UNITYSDK_OFFSET(0x10D2DFA0)
#define MOLEMOLE_FLOORSUBSYSTEM_SETFLOORID_OFFSET UNITYSDK_OFFSET(0x10D31170)
#define MOLEMOLE_FLOORSUBSYSTEM_TRYGETCONFIGBATTLEREGION_1_OFFSET UNITYSDK_OFFSET(0x10D2D480)
#define MOLEMOLE_FLOORSUBSYSTEM_TRYGETCONFIGBATTLEREGION_OFFSET UNITYSDK_OFFSET(0x10D2D2F0)
#define MOLEMOLE_FLOORSUBSYSTEM_TRYGETCONFIGPOINT_OFFSET UNITYSDK_OFFSET(0x10D30810)
#define MOLEMOLE_FLOORSUBSYSTEM_TRYGETCONFIGSPLINE_OFFSET UNITYSDK_OFFSET(0x10D2EE90)
#define MOLEMOLE_FLOORSUBSYSTEM_TRYGETSPLINEKEY_OFFSET UNITYSDK_OFFSET(0x10D30A30)
#define MOLEMOLE_FLOORSUBSYSTEM_TRYGETSPLINE_OFFSET UNITYSDK_OFFSET(0x10D30100)
#define MOLEMOLE_FLOORSUBSYSTEM_UNLOADTRIGGERDISPATCHERBYSUITEINFO_OFFSET UNITYSDK_OFFSET(0x10D32EE0)
#define MOLEMOLE_FLOORSUBSYSTEM_UPDATETRIGGERDISPATCHERBYSUITEINFO_OFFSET UNITYSDK_OFFSET(0x10D32CA0)
#define MOLEMOLE_FLOORSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D33310)
#define MOLEMOLE_FLOORSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x10D332F0)
#define MOLEMOLE_FLOORSUBSYSTEM__ONAWAKE_B__2_1_OFFSET UNITYSDK_OFFSET(0x10D333A0)
#define MOLEMOLE_FLOORSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10D33650)
#define MOLEMOLE_FLOORSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10D336E0)

namespace MoleMole
{
	inline static constexpr unsigned int FloorSubsystem_TypeDefinitionIndex = 40434;

	class FloorSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::FloorSubsystem*>
	{
	public:
		static ::Class_2_167BB37617B940E3** StaticGet_actorAbility()
		{
			return (::Class_2_167BB37617B940E3**)Il2CppClass::FromTypeDefinitionIndex(FloorSubsystem_TypeDefinitionIndex)->GetStaticField(0x341B0);
		}
		::Class_1_F8A4F21F742B6836* _configFloor; // 0x10
		::Class_1_459DF15A662DC811<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::MoleMole::MonoTriggerEventDispatcher*>* m_TriggerMap; // 0x18
		::System::Collections::Generic::Dictionary_2<::MoleMole::FloorSubsystem_SplineMeta, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* m_Spline2ViewObjects; // 0x20
		::Class_1_459DF15A662DC811<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::FluffyUnderware::Curvy::CurvySpline*>* m_SplineMap; // 0x28
		::System::Collections::Generic::Dictionary_2<::Foundation::Unreal::FGameplayTag, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>*>* m_SplineTagCache; // 0x30
		::MoleMole::FloorSubsystem_FGamePlayTagSupport* _OnSplineAdded; // 0x38
		::MoleMole::FloorSubsystem_FGamePlayTagSupport* _OnSplineDisposed; // 0x40
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>* m_GetSplinesResultCache; // 0x48
		::System::Collections::Generic::Dictionary_2<::FluffyUnderware::Curvy::CurvySpline*, ::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>>* m_Spline2Key; // 0x50
		::System::Int32 _floorID; // 0x58
		::Enum_3_EB457EC35BBF1AAD _floorUsage; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM__CCTOR_OFFSET))();
		}

		::Class_1_204C453CC79AE4E0* GetConfigTrigger(::System::UInt32 groupID, ::System::String* key, ::Foundation::ViewObject::SuiteInfo suiteInfo)
		{
			return ((::Class_1_204C453CC79AE4E0*(*)(::PVOID, ::System::UInt32, ::System::String*, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_GETCONFIGTRIGGER_OFFSET))(this, groupID, key, suiteInfo);
		}

		::System::Boolean TryGetConfigBattleRegion(::System::UInt32 groupID, ::System::String* key, ::Foundation::ViewObject::SuiteInfo suiteInfo, ::Class_1_50E88D52C3691096*& battleRegion, ::System::UInt32& ownerGroupID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::Foundation::ViewObject::SuiteInfo, ::Class_1_50E88D52C3691096*&, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_TRYGETCONFIGBATTLEREGION_OFFSET))(this, groupID, key, suiteInfo, battleRegion, ownerGroupID);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::Class_1_459DF15A662DC811_Struct_2_6F78FEE82F482190<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::MoleMole::MonoTriggerEventDispatcher*> Request(::System::String* key, ::MoleMole::MonoTriggerEventDispatcher*& dispatcher)
		{
			return ((::Class_1_459DF15A662DC811_Struct_2_6F78FEE82F482190<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::MoleMole::MonoTriggerEventDispatcher*>(*)(::PVOID, ::System::String*, ::MoleMole::MonoTriggerEventDispatcher*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_REQUEST_OFFSET))(this, key, dispatcher);
		}

		::Class_1_459DF15A662DC811_Struct_2_6F78FEE82F482190<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::MoleMole::MonoTriggerEventDispatcher*> Request_1(::System::UInt32 groupId, ::Foundation::ViewObject::SuiteInfo suiteInfo, ::System::String* key, ::System::Boolean keepFloorTriggerOnSuiteChange, ::MoleMole::MonoTriggerEventDispatcher*& dispatcher)
		{
			return ((::Class_1_459DF15A662DC811_Struct_2_6F78FEE82F482190<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::MoleMole::MonoTriggerEventDispatcher*>(*)(::PVOID, ::System::UInt32, ::Foundation::ViewObject::SuiteInfo, ::System::String*, ::System::Boolean, ::MoleMole::MonoTriggerEventDispatcher*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_REQUEST_1_OFFSET))(this, groupId, suiteInfo, key, keepFloorTriggerOnSuiteChange, dispatcher);
		}

		::Class_1_459DF15A662DC811_Struct_2_6F78FEE82F482190<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::FluffyUnderware::Curvy::CurvySpline*> RequestSpline(::System::UInt32 groupId, ::System::String* key, ::FluffyUnderware::Curvy::CurvySpline*& spline)
		{
			return ((::Class_1_459DF15A662DC811_Struct_2_6F78FEE82F482190<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::FluffyUnderware::Curvy::CurvySpline*>(*)(::PVOID, ::System::UInt32, ::System::String*, ::FluffyUnderware::Curvy::CurvySpline*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_REQUESTSPLINE_OFFSET))(this, groupId, key, spline);
		}

		::Class_1_459DF15A662DC811_Struct_2_6F78FEE82F482190<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::FluffyUnderware::Curvy::CurvySpline*> RequestSpline_1(::System::UInt32 groupId, ::System::String* key, ::FluffyUnderware::Curvy::CurvySpline*& spline, ::Foundation::ViewObject::ViewObjectHandle viewObjectHandle)
		{
			return ((::Class_1_459DF15A662DC811_Struct_2_6F78FEE82F482190<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::FluffyUnderware::Curvy::CurvySpline*>(*)(::PVOID, ::System::UInt32, ::System::String*, ::FluffyUnderware::Curvy::CurvySpline*&, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_REQUESTSPLINE_1_OFFSET))(this, groupId, key, spline, viewObjectHandle);
		}

		::System::Boolean TryGetSpline(::System::UInt32 groupId, ::System::String* key, ::FluffyUnderware::Curvy::CurvySpline*& spline)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::FluffyUnderware::Curvy::CurvySpline*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_TRYGETSPLINE_OFFSET))(this, groupId, key, spline);
		}

		::MoleMole::MonoTriggerEventDispatcher* CreateTriggerEventDispatcher(::Class_1_204C453CC79AE4E0* configTrigger)
		{
			return ((::MoleMole::MonoTriggerEventDispatcher*(*)(::PVOID, ::Class_1_204C453CC79AE4E0*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_CREATETRIGGEREVENTDISPATCHER_OFFSET))(this, configTrigger);
		}

		::FluffyUnderware::Curvy::CurvySpline* CreateCurvySpline(::Class_1_204C453CC79AE4E0_1* configTrigger)
		{
			return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID, ::Class_1_204C453CC79AE4E0_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_CREATECURVYSPLINE_OFFSET))(this, configTrigger);
		}

		static ::MoleMole::MonoTriggerEventDispatcher* AddDynamicConfigTrigger(::Class_1_E795C5D5DDF30620* config, ::UnityEngine::Transform* parent, ::Enum_3_41227C43B8705FA0 configurableColliderType)
		{
			return ((::MoleMole::MonoTriggerEventDispatcher*(*)(::Class_1_E795C5D5DDF30620*, ::UnityEngine::Transform*, ::Enum_3_41227C43B8705FA0))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_ADDDYNAMICCONFIGTRIGGER_OFFSET))(config, parent, configurableColliderType);
		}

		::System::Int32 get_FloorID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_GET_FLOORID_OFFSET))(this);
		}

		::Enum_3_EB457EC35BBF1AAD get_FloorUsage()
		{
			return ((::Enum_3_EB457EC35BBF1AAD(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_GET_FLOORUSAGE_OFFSET))(this);
		}

		::Class_1_204C453CC79AE4E0* GetConfigTrigger_1(::System::UInt32 groupID, ::System::String* key, ::System::Boolean& isFloorTrigger)
		{
			return ((::Class_1_204C453CC79AE4E0*(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_GETCONFIGTRIGGER_1_OFFSET))(this, groupID, key, isFloorTrigger);
		}

		::Class_1_204C453CC79AE4E0* GetConfigTrigger_2(::System::UInt32 groupID, ::System::String* key)
		{
			return ((::Class_1_204C453CC79AE4E0*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_GETCONFIGTRIGGER_2_OFFSET))(this, groupID, key);
		}

		::System::Boolean TryGetConfigPoint(::System::UInt32 groupID, ::System::String* key, ::Class_1_204C453CC79AE4E0_2*& point)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::Class_1_204C453CC79AE4E0_2*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_TRYGETCONFIGPOINT_OFFSET))(this, groupID, key, point);
		}

		::System::Boolean TryGetConfigSpline(::System::UInt32 groupID, ::System::String* key, ::Class_1_204C453CC79AE4E0_1*& spline)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::Class_1_204C453CC79AE4E0_1*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_TRYGETCONFIGSPLINE_OFFSET))(this, groupID, key, spline);
		}

		::System::Boolean TryGetSplineKey(::FluffyUnderware::Curvy::CurvySpline* curvySpline, ::System::UInt32& groupID, ::System::String*& splineName)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::System::UInt32&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_TRYGETSPLINEKEY_OFFSET))(this, curvySpline, groupID, splineName);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Foundation::ViewObject::ViewObjectHandle>* GetViewObjectsBySpline(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Foundation::ViewObject::ViewObjectHandle>*(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_GETVIEWOBJECTSBYSPLINE_OFFSET))(this, spline);
		}

		::System::Void RemoveViewObjectFromSpline(::FluffyUnderware::Curvy::CurvySpline* spline, ::Foundation::ViewObject::ViewObjectHandle viewObjectHandle)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_REMOVEVIEWOBJECTFROMSPLINE_OFFSET))(this, spline, viewObjectHandle);
		}

		::System::Void RecordViewObjectFromSpline(::FluffyUnderware::Curvy::CurvySpline* spline, ::Foundation::ViewObject::ViewObjectHandle viewObjectHandle)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_RECORDVIEWOBJECTFROMSPLINE_OFFSET))(this, spline, viewObjectHandle);
		}

		::System::Boolean TryGetConfigBattleRegion_1(::System::UInt32 groupID, ::System::String* key, ::Class_1_50E88D52C3691096*& battleRegion, ::System::UInt32& ownerGroupID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::Class_1_50E88D52C3691096*&, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_TRYGETCONFIGBATTLEREGION_1_OFFSET))(this, groupID, key, battleRegion, ownerGroupID);
		}

		::System::Void SetFloorID(::System::Int32 floorID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_SETFLOORID_OFFSET))(this, floorID);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* GetGamePlayTagsFromConfig(::Class_1_204C453CC79AE4E0_1* config)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID, ::Class_1_204C453CC79AE4E0_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_GETGAMEPLAYTAGSFROMCONFIG_OFFSET))(this, config);
		}

		::System::Void OnSplineAdded(::FluffyUnderware::Curvy::CurvySpline* spline, ::Class_1_204C453CC79AE4E0_1* config)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::Class_1_204C453CC79AE4E0_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_ONSPLINEADDED_OFFSET))(this, spline, config);
		}

		::System::Void OnSplineDisposed(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_ONSPLINEDISPOSED_OFFSET))(this, spline);
		}

		::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>* GetSplinesByGamePlayTag(::Foundation::Unreal::FGameplayTag gamePlayTag, ::System::Boolean buildCache)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>*(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_GETSPLINESBYGAMEPLAYTAG_OFFSET))(this, gamePlayTag, buildCache);
		}

		::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>* GetSplinesByGamePlayTag_1(::System::String* gamePlayTag, ::System::Boolean buildCache)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_GETSPLINESBYGAMEPLAYTAG_1_OFFSET))(this, gamePlayTag, buildCache);
		}

		::System::Void ClearGamePlayTagCache(::Foundation::Unreal::FGameplayTag gamePlayTag)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_CLEARGAMEPLAYTAGCACHE_OFFSET))(this, gamePlayTag);
		}

		::System::Void ClearGamePlayTagCache_1(::System::String* gamePlayTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_CLEARGAMEPLAYTAGCACHE_1_OFFSET))(this, gamePlayTag);
		}

		::System::Void ClearAllGamePlayTagCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_CLEARALLGAMEPLAYTAGCACHE_OFFSET))(this);
		}

		::System::Void UpdateTriggerDispatcherBySuiteInfo(::System::UInt32 groupId, ::Foundation::ViewObject::SuiteInfo suiteInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_UPDATETRIGGERDISPATCHERBYSUITEINFO_OFFSET))(this, groupId, suiteInfo);
		}

		::System::Void UnloadTriggerDispatcherBySuiteInfo(::System::UInt32 groupId, ::Foundation::ViewObject::SuiteInfo suiteInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_UNLOADTRIGGERDISPATCHERBYSUITEINFO_OFFSET))(this, groupId, suiteInfo);
		}

		::System::Void OnSectionSwitched(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_ONSECTIONSWITCHED_OFFSET))(this, args);
		}

		::System::Void _OnAwake_b__2_1(::FluffyUnderware::Curvy::CurvySpline* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM__ONAWAKE_B__2_1_OFFSET))(this, value);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
