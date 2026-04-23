#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_151B93D9C4BBDCA4.h"
#include "unitysdk/RPG/Client/LittleGame/ElfRestaurant/SIMGameState.h"
#include "unitysdk/RPG/GameCore/ElfProperty.h"
#include "unitysdk/RPG/GameCore/RestaurantFacilityType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_382;
class Class_0_16E4307DCC419505_93;
class Class_1_75C90E178B164D38;
class Class_1_867B6CE75953535A;
class Class_1_9CBC71DC5240DC00;
class Class_2_E2910CE9CBBA0DE5;
class Class_3_68E4C4E7E4DEB30E;
class Class_3_F4528A5C0F861AF2;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::Client { class ElfRestaurantModule; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::Client::LittleGame::ElfRestaurant { class ElfRestaurantView; }
namespace RPG::GameCore { class ElfRestaurantGameConfig; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_EXITSUPEREVENTCAMERA_OFFSET UNITYSDK_OFFSET(0xA25CF00)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_FOCUSSUPEREVENTCAMERA_OFFSET UNITYSDK_OFFSET(0xA25CC30)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GETALLFACILITIES_OFFSET UNITYSDK_OFFSET(0xA257930)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GETCHEFENTITYGROUP_OFFSET UNITYSDK_OFFSET(0xA2587A0)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GETCUSTOMERENTITYGROUP_OFFSET UNITYSDK_OFFSET(0xA2588D0)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GETEMPLOYEEENTITYGROUP_OFFSET UNITYSDK_OFFSET(0xA258670)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GETENTITYWITHRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA254770)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GETENTRYPOSITION_OFFSET UNITYSDK_OFFSET(0xA259460)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GETGAMEENTITY_OFFSET UNITYSDK_OFFSET(0xA2594F0)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GETGLOBALPROPERTY_OFFSET UNITYSDK_OFFSET(0xA259550)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GETHEADWAITERENTITY_OFFSET UNITYSDK_OFFSET(0xA258A00)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GETONSITCUSTOMERCOUNT_OFFSET UNITYSDK_OFFSET(0xA258C80)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GETSTATETREEROOT_OFFSET UNITYSDK_OFFSET(0xA254580)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GETTOTALSITCOUNT_OFFSET UNITYSDK_OFFSET(0xA258F90)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0xA2596E0)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0xA2596D0)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_ONENTERRESTAURANTBUILD_OFFSET UNITYSDK_OFFSET(0xA255930)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_ONEXITRESTAURANTBUILD_OFFSET UNITYSDK_OFFSET(0xA255F70)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_PAUSEGAME_OFFSET UNITYSDK_OFFSET(0xA259750)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_RESUMEGAME_OFFSET UNITYSDK_OFFSET(0xA259C00)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_SETGLOBALPROPERTY_OFFSET UNITYSDK_OFFSET(0xA259600)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_SETPREVIEWFACILITYACTIVE_OFFSET UNITYSDK_OFFSET(0xA25DA10)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_UPGRADEFACILITY_OFFSET UNITYSDK_OFFSET(0xA256950)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__ADDNOTIFY_OFFSET UNITYSDK_OFFSET(0xA254F90)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__APPLYTRANSPARENTMATERIAL_1_OFFSET UNITYSDK_OFFSET(0xA25D660)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__APPLYTRANSPARENTMATERIAL_OFFSET UNITYSDK_OFFSET(0xA25D5A0)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__CACHEORIGINALMATERIALS_1_OFFSET UNITYSDK_OFFSET(0xA25D360)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__CACHEORIGINALMATERIALS_OFFSET UNITYSDK_OFFSET(0xA25D2A0)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA25E360)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__CLEARTABLEOUTLINE_OFFSET UNITYSDK_OFFSET(0xA25B2F0)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__CREATEGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0xA254980)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xA25E260)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__DESTROYGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0xA2556D0)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__DISPOSEUIMEDIATOR_OFFSET UNITYSDK_OFFSET(0xA25BE60)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__EXITCAMERA_OFFSET UNITYSDK_OFFSET(0xA255FD0)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__EXITGAME_OFFSET UNITYSDK_OFFSET(0xA25C9C0)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__FINISHGAME_OFFSET UNITYSDK_OFFSET(0xA25C400)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__FOCUSRESTAURANTBUILDCAMERA_OFFSET UNITYSDK_OFFSET(0xA255990)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__FOCUSRESTAURANTCAMERA_OFFSET UNITYSDK_OFFSET(0xA25A990)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__INITUIMEDIATOR_OFFSET UNITYSDK_OFFSET(0xA25A720)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__ONCLEAR_OFFSET UNITYSDK_OFFSET(0xA255450)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__ONGAMERUN_OFFSET UNITYSDK_OFFSET(0xA25B8C0)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__ONGROUPEVENT_OFFSET UNITYSDK_OFFSET(0xA25D1D0)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__ONINIT_OFFSET UNITYSDK_OFFSET(0xA254830)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xA25CBB0)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__ONSTART_OFFSET UNITYSDK_OFFSET(0xA2550D0)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__ONTICK_OFFSET UNITYSDK_OFFSET(0xA255880)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__PAUSEGAME_OFFSET UNITYSDK_OFFSET(0xA2597B0)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__PREPAREBUILDINGGAME_OFFSET UNITYSDK_OFFSET(0xA255160)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__REAPPLYMATERIALS_1_OFFSET UNITYSDK_OFFSET(0xA25E110)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__REAPPLYMATERIALS_OFFSET UNITYSDK_OFFSET(0xA25DEC0)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__REMOVENOTIFY_OFFSET UNITYSDK_OFFSET(0xA255590)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__REMOVEUNPURCHASEDFACILITIES_OFFSET UNITYSDK_OFFSET(0xA256130)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__RESETFACILITIES_OFFSET UNITYSDK_OFFSET(0xA25C530)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__SETUPBOARD_OFFSET UNITYSDK_OFFSET(0xA259C60)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__SETUPDECORATORS_OFFSET UNITYSDK_OFFSET(0xA259D50)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__SETUPDEVICES_OFFSET UNITYSDK_OFFSET(0xA259F60)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__SETUPEMPLOYEES_OFFSET UNITYSDK_OFFSET(0xA25ADB0)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__SETUPGAMEENTITY_OFFSET UNITYSDK_OFFSET(0xA25A870)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__SETUPLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xA2551C0)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__SETUPNEXTUNPURCHASEDDECORATOR_OFFSET UNITYSDK_OFFSET(0xA25D7E0)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__SETUPOBSTACLES_OFFSET UNITYSDK_OFFSET(0xA25B120)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__SETUPSMARTOBJECTENTITIES_OFFSET UNITYSDK_OFFSET(0xA25ACC0)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__SETUPTABLES_OFFSET UNITYSDK_OFFSET(0xA25A170)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__SETUPUNPURCHASEDFACILITIES_OFFSET UNITYSDK_OFFSET(0xA255AE0)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__STARTGAME_OFFSET UNITYSDK_OFFSET(0xA25A470)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__TRIGGERGROUPEVENT_OFFSET UNITYSDK_OFFSET(0xA25CB10)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__UPGRADEDECORATOR_OFFSET UNITYSDK_OFFSET(0xA257100)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__UPGRADEDEVICE_OFFSET UNITYSDK_OFFSET(0xA257500)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__UPGRADETABLE_OFFSET UNITYSDK_OFFSET(0xA2569E0)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE___IFIXBASEPROXY_GETSTATETREEROOT_OFFSET UNITYSDK_OFFSET(0xA25E530)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE___IFIXBASEPROXY__ONCLEAR_OFFSET UNITYSDK_OFFSET(0xA25E670)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE___IFIXBASEPROXY__ONINIT_OFFSET UNITYSDK_OFFSET(0xA25E5A0)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE___IFIXBASEPROXY__ONSTART_OFFSET UNITYSDK_OFFSET(0xA25E610)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xA25E6D0)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE___SETUPUNPURCHASEDFACILITIES_B__56_0_OFFSET UNITYSDK_OFFSET(0xA25E3A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantGameInstance_TypeDefinitionIndex = 55687;

	class ElfRestaurantGameInstance : public ::Class_1_151B93D9C4BBDCA4
	{
	public:
		static ::System::String** StaticGet_EventName_OnGameFinish()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantGameInstance_TypeDefinitionIndex)->GetStaticField(0x5CA0);
		}
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* _BoardEntity; // 0x78
		::RPG::Client::ElfRestaurantModule* _ElfRestaurantModule; // 0x80
		::Class_1_867B6CE75953535A* _Contexts; // 0x88
		::Class_3_68E4C4E7E4DEB30E* _UpdateSystems; // 0x90
		::RPG::GameCore::GameEntity* _OwnerGroupEntity; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_9CBC71DC5240DC00*>* _RendererCacheMap; // 0xA0
		::RPG::GameCore::EventManager* _EventManagerRef; // 0xA8
		::Class_3_F4528A5C0F861AF2* _Services; // 0xB0
		::RPG::Client::LittleGame::ElfRestaurant::SIMGameState GameState; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__CCTOR_OFFSET))();
		}

		::Class_2_E2910CE9CBBA0DE5* GetStateTreeRoot(::System::Int32 runtimeEntityID)
		{
			return ((::Class_2_E2910CE9CBBA0DE5*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GETSTATETREEROOT_OFFSET))(this, runtimeEntityID);
		}

		::System::Void _OnInit(::Class_1_75C90E178B164D38* initParams)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_75C90E178B164D38*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__ONINIT_OFFSET))(this, initParams);
		}

		::System::Void _OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__ONSTART_OFFSET))(this);
		}

		::System::Void _OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__ONCLEAR_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__ONTICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void OnEnterRestaurantBuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_ONENTERRESTAURANTBUILD_OFFSET))(this);
		}

		::System::Void OnExitRestaurantBuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_ONEXITRESTAURANTBUILD_OFFSET))(this);
		}

		::System::Void UpgradeFacility(::System::UInt32 facilityId, ::System::UInt32 level, ::RPG::GameCore::RestaurantFacilityType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::RestaurantFacilityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_UPGRADEFACILITY_OFFSET))(this, facilityId, level, type);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantView*>* GetAllFacilities()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantView*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GETALLFACILITIES_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ElfRestaurantGameEntity* GetEntityWithRuntimeID(::System::Int32 runtimeID)
		{
			return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GETENTITYWITHRUNTIMEID_OFFSET))(this, runtimeID);
		}

		::Entitas::IGroup_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetEmployeeEntityGroup()
		{
			return ((::Entitas::IGroup_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GETEMPLOYEEENTITYGROUP_OFFSET))(this);
		}

		::Entitas::IGroup_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetChefEntityGroup()
		{
			return ((::Entitas::IGroup_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GETCHEFENTITYGROUP_OFFSET))(this);
		}

		::Entitas::IGroup_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* GetCustomerEntityGroup()
		{
			return ((::Entitas::IGroup_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GETCUSTOMERENTITYGROUP_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ElfRestaurantGameEntity* GetHeadWaiterEntity()
		{
			return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GETHEADWAITERENTITY_OFFSET))(this);
		}

		::System::Int32 GetOnSitCustomerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GETONSITCUSTOMERCOUNT_OFFSET))(this);
		}

		::System::Int32 GetTotalSitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GETTOTALSITCOUNT_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetEntryPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GETENTRYPOSITION_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ElfRestaurantGameEntity* GetGameEntity()
		{
			return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GETGAMEENTITY_OFFSET))(this);
		}

		::System::Single GetGlobalProperty(::RPG::GameCore::ElfProperty property)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ElfProperty))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GETGLOBALPROPERTY_OFFSET))(this, property);
		}

		::System::Void SetGlobalProperty(::RPG::GameCore::ElfProperty property, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElfProperty, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_SETGLOBALPROPERTY_OFFSET))(this, property, value);
		}

		::Class_3_F4528A5C0F861AF2* get_Services()
		{
			return ((::Class_3_F4528A5C0F861AF2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GET_SERVICES_OFFSET))(this);
		}

		::RPG::GameCore::ElfRestaurantGameConfig* get_GameConfig()
		{
			return ((::RPG::GameCore::ElfRestaurantGameConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_GET_GAMECONFIG_OFFSET))(this);
		}

		::System::Void PauseGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_PAUSEGAME_OFFSET))(this);
		}

		::System::Void ResumeGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_RESUMEGAME_OFFSET))(this);
		}

		::System::Void _PauseGame(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__PAUSEGAME_OFFSET))(this, isPause);
		}

		::System::Void _CreateGameContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__CREATEGAMECONTEXT_OFFSET))(this);
		}

		::System::Void _DestroyGameContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__DESTROYGAMECONTEXT_OFFSET))(this);
		}

		::System::Void _AddNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__ADDNOTIFY_OFFSET))(this);
		}

		::System::Void _RemoveNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__REMOVENOTIFY_OFFSET))(this);
		}

		::System::Void _PrepareBuildingGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__PREPAREBUILDINGGAME_OFFSET))(this);
		}

		::System::Void _SetupLevelConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__SETUPLEVELCONFIG_OFFSET))(this);
		}

		::System::Void _StartGame(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__STARTGAME_OFFSET))(this, arg);
		}

		::System::Void _OnGameRun()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__ONGAMERUN_OFFSET))(this);
		}

		::System::Void _InitUIMediator()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__INITUIMEDIATOR_OFFSET))(this);
		}

		::System::Void _DisposeUIMediator()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__DISPOSEUIMEDIATOR_OFFSET))(this);
		}

		::System::Void _FinishGame(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__FINISHGAME_OFFSET))(this, arg);
		}

		::System::Void _ExitGame(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__EXITGAME_OFFSET))(this, arg);
		}

		::System::Void _OnScreenSizeChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__ONSCREENSIZECHANGED_OFFSET))(this, arg);
		}

		::System::Void _FocusRestaurantBuildCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__FOCUSRESTAURANTBUILDCAMERA_OFFSET))(this);
		}

		::System::Void _FocusRestaurantCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__FOCUSRESTAURANTCAMERA_OFFSET))(this);
		}

		::System::Void _ExitCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__EXITCAMERA_OFFSET))(this);
		}

		::System::Void FocusSuperEventCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_FOCUSSUPEREVENTCAMERA_OFFSET))(this);
		}

		::System::Void ExitSuperEventCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_EXITSUPEREVENTCAMERA_OFFSET))(this);
		}

		::System::Void _TriggerGroupEvent(::System::String* sEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__TRIGGERGROUPEVENT_OFFSET))(this, sEvent);
		}

		::System::Void _OnGroupEvent(::Class_0_16E4307DCC419505_382* pEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__ONGROUPEVENT_OFFSET))(this, pEvent);
		}

		::System::Void _SetupBoard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__SETUPBOARD_OFFSET))(this);
		}

		::System::Void _SetupDecorators()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__SETUPDECORATORS_OFFSET))(this);
		}

		::System::Void _SetupTables(::System::Action* onTableLoad)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__SETUPTABLES_OFFSET))(this, onTableLoad);
		}

		::System::Void _SetupDevices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__SETUPDEVICES_OFFSET))(this);
		}

		::System::Void _CacheOriginalMaterials(::Class_0_16E4307DCC419505_93* view)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_93*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__CACHEORIGINALMATERIALS_OFFSET))(this, view);
		}

		::System::Void _CacheOriginalMaterials_1(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__CACHEORIGINALMATERIALS_1_OFFSET))(this, go);
		}

		::System::Void _ApplyTransparentMaterial(::Class_0_16E4307DCC419505_93* view)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_93*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__APPLYTRANSPARENTMATERIAL_OFFSET))(this, view);
		}

		::System::Void _ApplyTransparentMaterial_1(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__APPLYTRANSPARENTMATERIAL_1_OFFSET))(this, go);
		}

		::System::Void _SetupUnPurchasedFacilities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__SETUPUNPURCHASEDFACILITIES_OFFSET))(this);
		}

		::System::Void _SetupNextUnPurchasedDecorator(::System::UInt32 currentLevel, ::System::Boolean needApearEffect)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__SETUPNEXTUNPURCHASEDDECORATOR_OFFSET))(this, currentLevel, needApearEffect);
		}

		::System::Void SetPreviewFacilityActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE_SETPREVIEWFACILITYACTIVE_OFFSET))(this, active);
		}

		::System::Void _RemoveUnPurchasedFacilities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__REMOVEUNPURCHASEDFACILITIES_OFFSET))(this);
		}

		::System::Void _ReapplyMaterials(::Class_0_16E4307DCC419505_93* view, ::System::Boolean needApearEffect)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_93*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__REAPPLYMATERIALS_OFFSET))(this, view, needApearEffect);
		}

		::System::Void _ReapplyMaterials_1(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__REAPPLYMATERIALS_1_OFFSET))(this, go);
		}

		::System::Void _UpgradeTable(::System::UInt32 tableID, ::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__UPGRADETABLE_OFFSET))(this, tableID, level);
		}

		::System::Void _UpgradeDecorator(::System::UInt32 decoratorID, ::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__UPGRADEDECORATOR_OFFSET))(this, decoratorID, level);
		}

		::System::Void _UpgradeDevice(::System::UInt32 deviceID, ::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__UPGRADEDEVICE_OFFSET))(this, deviceID, level);
		}

		::System::Void _ResetFacilities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__RESETFACILITIES_OFFSET))(this);
		}

		::System::Void _SetupGameEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__SETUPGAMEENTITY_OFFSET))(this);
		}

		::System::Void _SetupSmartObjectEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__SETUPSMARTOBJECTENTITIES_OFFSET))(this);
		}

		::System::Void _SetupEmployees()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__SETUPEMPLOYEES_OFFSET))(this);
		}

		::System::Void _SetupObstacles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__SETUPOBSTACLES_OFFSET))(this);
		}

		::System::Void _ClearTableOutline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE__CLEARTABLEOUTLINE_OFFSET))(this);
		}

		::System::Void __SetupUnPurchasedFacilities_b__56_0(::RPG::Client::LittleGame::ElfRestaurantGameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE___SETUPUNPURCHASEDFACILITIES_B__56_0_OFFSET))(this, entity);
		}

		::Class_2_E2910CE9CBBA0DE5* __iFixBaseProxy_GetStateTreeRoot(::System::Int32 P0)
		{
			return ((::Class_2_E2910CE9CBBA0DE5*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE___IFIXBASEPROXY_GETSTATETREEROOT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__OnInit(::Class_1_75C90E178B164D38* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_75C90E178B164D38*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE___IFIXBASEPROXY__ONINIT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE___IFIXBASEPROXY__ONSTART_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE___IFIXBASEPROXY__ONCLEAR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
		}
	};
}
