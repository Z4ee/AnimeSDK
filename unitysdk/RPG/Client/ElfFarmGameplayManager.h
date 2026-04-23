#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_382;
class Class_1_004034A1FAAF468A;
namespace RPG::Client { class ElfCell; }
namespace RPG::Client { class ElfFarm; }
namespace RPG::Client { class ElfField; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class ElfRestaurantGameConfig; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_CREATELOCALENTITY_OFFSET UNITYSDK_OFFSET(0xA22C570)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA22BA90)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_FIREEFFECTASYNC_OFFSET UNITYSDK_OFFSET(0xA22BB20)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_FIREEFFECT_OFFSET UNITYSDK_OFFSET(0xA22C430)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_FOCUSFARM_OFFSET UNITYSDK_OFFSET(0xA22BCA0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GETCELL_OFFSET UNITYSDK_OFFSET(0xA22C1E0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GETFARM_OFFSET UNITYSDK_OFFSET(0xA22C3A0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GETFIELD_OFFSET UNITYSDK_OFFSET(0xA22C040)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GETFOCUSFARM_OFFSET UNITYSDK_OFFSET(0xA22C000)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0xA22C630)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xA22A340)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_ONPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0xA22BAD0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_REFRESHENTITIES_OFFSET UNITYSDK_OFFSET(0xA22C5E0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_RUNTIMEDISPOSE_OFFSET UNITYSDK_OFFSET(0xA22AE30)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_RUNTIMERESET_OFFSET UNITYSDK_OFFSET(0xA22A6E0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0xA22C640)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_UNFOCUSFARM_OFFSET UNITYSDK_OFFSET(0xA22BEC0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_UNINIT_OFFSET UNITYSDK_OFFSET(0xA22AC10)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA22D490)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA22D430)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__INITFARMEMPLOYEE_OFFSET UNITYSDK_OFFSET(0xA22B4C0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__INITFARMS_OFFSET UNITYSDK_OFFSET(0xA22B1F0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__MEMORYPUZZLEBEGINDATAREPORT_OFFSET UNITYSDK_OFFSET(0xA22D120)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__MEMORYPUZZLEENDDATAREPORT_OFFSET UNITYSDK_OFFSET(0xA22D2A0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONARTMODELLOAD_OFFSET UNITYSDK_OFFSET(0xA22CFE0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONARTMODELUNLOAD_OFFSET UNITYSDK_OFFSET(0xA22D090)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONELFEMPLOYEELEVELUPFINISH_OFFSET UNITYSDK_OFFSET(0xA22CD40)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONELFFARMCELLUPDATE_OFFSET UNITYSDK_OFFSET(0xA22CE00)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONGROUPEVENT_OFFSET UNITYSDK_OFFSET(0xA22CF90)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xA22CD90)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__TRIGGERENTITYEVENT_OFFSET UNITYSDK_OFFSET(0xA22CE50)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__TRIGGERGROUPEVENT_OFFSET UNITYSDK_OFFSET(0xA22CEF0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UNINITFARMS_OFFSET UNITYSDK_OFFSET(0xA22B920)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UPDATEARTFARMS_OFFSET UNITYSDK_OFFSET(0xA22AF90)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UPDATEFARMCROPSBYPHASE_OFFSET UNITYSDK_OFFSET(0xA22B540)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UPDATEFARMEMPLOYEES_OFFSET UNITYSDK_OFFSET(0xA22C960)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UPDATEFARMS_OFFSET UNITYSDK_OFFSET(0xA22C730)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfFarmGameplayManager_TypeDefinitionIndex = 63322;

	class ElfFarmGameplayManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_CropsEffectPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfFarmGameplayManager_TypeDefinitionIndex)->GetStaticField(0x6B40);
		}
		static ::System::String** StaticGet_FCV_IsPlantShow()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfFarmGameplayManager_TypeDefinitionIndex)->GetStaticField(0x6B48);
		}
		static ::System::String** StaticGet_ElfFarmBoardPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfFarmGameplayManager_TypeDefinitionIndex)->GetStaticField(0x6B50);
		}
		static ::RPG::Client::ElfFarmGameplayManager** StaticGet_CurrentManager()
		{
			return (::RPG::Client::ElfFarmGameplayManager**)Il2CppClass::FromTypeDefinitionIndex(ElfFarmGameplayManager_TypeDefinitionIndex)->GetStaticField(0x6B58);
		}
		static ::System::String** StaticGet__Gamekey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfFarmGameplayManager_TypeDefinitionIndex)->GetStaticField(0x6B60);
		}
		::RPG::Client::RuntimeGroupManager* _RuntimeGroupRef; // 0x10
		::RPG::Client::MonoEffectManager* _EffectManagerRef; // 0x18
		::RPG::GameCore::ElfRestaurantGameConfig* GameConfig; // 0x20
		::RPG::Client::TwoKeyDictionary_3<::System::Int32, ::System::Int32, ::UnityEngine::Transform*>* _ArtFarmFieldRootMap; // 0x28
		::RPG::Client::ElfFarm* _CurFarm; // 0x30
		::RPG::GameCore::GameEntity* _OwnerGroupEntity; // 0x38
		::RPG::GameCore::GameEntity* _OwnerEntity; // 0x40
		::Class_1_004034A1FAAF468A* BoardPrefab; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _LoadedEmployeeList; // 0x50
		::RPG::Client::TriggerEffectParamsRef _CropsEffectParamsRef; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::ElfFarm*>* _OwnerFarmMap; // 0x68
		::System::String* MatureCropsEffectPath; // 0x70
		::RPG::GameCore::EventManager* _EventManagerRef; // 0x78
		::System::UInt32 _OwnerGroupEntityID; // 0x80
		::System::Int32 _SerializeNumber; // 0x84
		::System::Boolean _IsInitialized_k__BackingField; // 0x88
		::System::Boolean _IsReportStarted; // 0x89
		::System::UInt32 _OwnerEntityID; // 0x8C
		::System::Single _ContinueTime; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Init(::RPG::GameCore::GameEntity* ownerEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_INIT_OFFSET))(this, ownerEntity);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_UNINIT_OFFSET))(this);
		}

		::System::Void RuntimeReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_RUNTIMERESET_OFFSET))(this);
		}

		::System::Void _UpdateArtFarms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UPDATEARTFARMS_OFFSET))(this);
		}

		::System::Void RuntimeDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_RUNTIMEDISPOSE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void OnProgressChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_ONPROGRESSCHANGED_OFFSET))(this);
		}

		::System::Void _UpdateFarmCropsByPhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UPDATEFARMCROPSBYPHASE_OFFSET))(this);
		}

		::System::Void FocusFarm(::System::Int32 farmID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_FOCUSFARM_OFFSET))(this, farmID);
		}

		::System::Void UnFocusFarm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_UNFOCUSFARM_OFFSET))(this);
		}

		::RPG::Client::ElfFarm* GetFocusFarm()
		{
			return ((::RPG::Client::ElfFarm*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GETFOCUSFARM_OFFSET))(this);
		}

		::RPG::Client::ElfField* GetField(::System::Int32 fieldID)
		{
			return ((::RPG::Client::ElfField*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GETFIELD_OFFSET))(this, fieldID);
		}

		::RPG::Client::ElfCell* GetCell(::System::Int32 fieldID, ::System::Int32 cellID)
		{
			return ((::RPG::Client::ElfCell*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GETCELL_OFFSET))(this, fieldID, cellID);
		}

		::RPG::Client::ElfFarm* GetFarm(::System::Int32 farmID)
		{
			return ((::RPG::Client::ElfFarm*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GETFARM_OFFSET))(this, farmID);
		}

		::RPG::Client::TriggerEffectParams* FireEffect(::System::String* EffectPath, ::UnityEngine::Vector3 position)
		{
			return ((::RPG::Client::TriggerEffectParams*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_FIREEFFECT_OFFSET))(this, EffectPath, position);
		}

		::RPG::Client::TriggerEffectParams* FireEffectAsync(::System::String* EffectPath, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::RPG::Client::TriggerEffectParams*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_FIREEFFECTASYNC_OFFSET))(this, EffectPath, position, rotation);
		}

		::System::Void CreateLocalEntity(::System::UInt32 groupID, ::System::UInt32 configID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_CREATELOCALENTITY_OFFSET))(this, groupID, configID);
		}

		::System::Void RefreshEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_REFRESHENTITIES_OFFSET))(this);
		}

		::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GET_ISINITIALIZED_OFFSET))(this);
		}

		::System::Void set_IsInitialized(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_SET_ISINITIALIZED_OFFSET))(this, value);
		}

		::System::Void _InitFarms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__INITFARMS_OFFSET))(this);
		}

		::System::Void _UpdateFarms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UPDATEFARMS_OFFSET))(this);
		}

		::System::Void _UnInitFarms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UNINITFARMS_OFFSET))(this);
		}

		::System::Void _InitFarmEmployee()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__INITFARMEMPLOYEE_OFFSET))(this);
		}

		::System::Void _UpdateFarmEmployees()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UPDATEFARMEMPLOYEES_OFFSET))(this);
		}

		::System::Void _OnElfEmployeeLevelUpFinish(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONELFEMPLOYEELEVELUPFINISH_OFFSET))(this, param);
		}

		::System::Void _OnScreenSizeChanged(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONSCREENSIZECHANGED_OFFSET))(this, param);
		}

		::System::Void _OnElfFarmCellUpdate(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONELFFARMCELLUPDATE_OFFSET))(this, param);
		}

		::System::Void _TriggerEntityEvent(::System::UInt32 instanceID, ::System::String* sEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__TRIGGERENTITYEVENT_OFFSET))(this, instanceID, sEvent);
		}

		::System::Void _TriggerGroupEvent(::System::String* sEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__TRIGGERGROUPEVENT_OFFSET))(this, sEvent);
		}

		::System::Void _OnGroupEvent(::Class_0_16E4307DCC419505_382* pEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONGROUPEVENT_OFFSET))(this, pEvent);
		}

		::System::Void _OnArtModelLoad(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONARTMODELLOAD_OFFSET))(this, param);
		}

		::System::Void _OnArtModelUnload(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONARTMODELUNLOAD_OFFSET))(this, param);
		}

		::System::Void _MemoryPuzzleBeginDataReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__MEMORYPUZZLEBEGINDATAREPORT_OFFSET))(this);
		}

		::System::Void _MemoryPuzzleEndDataReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__MEMORYPUZZLEENDDATAREPORT_OFFSET))(this);
		}
	};
}
