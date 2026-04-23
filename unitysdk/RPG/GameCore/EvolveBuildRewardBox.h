#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EvolveBuildTreasureType.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildCoinData; }
namespace RPG::Client { class EvolveBuildCollectionGearDisplayData; }
namespace RPG::Client { class EvolveBuildGearsDetail; }
namespace RPG::Client { class EvolveBuildModule; }
namespace RPG::Client { class EvolveBuildTreasureSolution; }
namespace RPG::Client { class IEvolveBuildCollectionGear; }
namespace RPG::GameCore { class EvolveBuildGearManager; }
namespace RPG::GameCore { class EvolveBuildRewardBoxGear; }
namespace RPG::GameCore { class EvolveBuildRewardBoxGearUpgrade; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_CHECKOPENPHASERESULTDIALOG_OFFSET UNITYSDK_OFFSET(0xB680A50)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_CONTINUELEVELINBATTLEPHASE_OFFSET UNITYSDK_OFFSET(0xB6810F0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_CREATEFAKE_OFFSET UNITYSDK_OFFSET(0xB6803D0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_CREATE_OFFSET UNITYSDK_OFFSET(0xB67FFA0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GETFINDREWARDSUBTITLE_OFFSET UNITYSDK_OFFSET(0xB6807D0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GETFINDREWARDTITLE_OFFSET UNITYSDK_OFFSET(0xB6809A0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GETNOEMPTYBOXDATA_OFFSET UNITYSDK_OFFSET(0xB680BE0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GETTITLE_OFFSET UNITYSDK_OFFSET(0xB6805A0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GETUPWAVEDATA_OFFSET UNITYSDK_OFFSET(0xB681050)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_COINICON_OFFSET UNITYSDK_OFFSET(0xB684F80)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_COINNUM_OFFSET UNITYSDK_OFFSET(0xB684AF0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_CONFIRMTEXT_OFFSET UNITYSDK_OFFSET(0xB684B30)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_HASLASTFINISHNOTIFY_OFFSET UNITYSDK_OFFSET(0xB684BF0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_ISEXTRAREWARD_OFFSET UNITYSDK_OFFSET(0xB684C60)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_ISINTUTORIALSTAGE_OFFSET UNITYSDK_OFFSET(0xB684C70)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_RANDOMGEARSDATA_OFFSET UNITYSDK_OFFSET(0xB684AD0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_UIANIMENDTUTORIALUNLOCKID_OFFSET UNITYSDK_OFFSET(0xB684D10)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_UPWAVEDATA_OFFSET UNITYSDK_OFFSET(0xB684B10)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET__ISEXTRAREWARD_OFFSET UNITYSDK_OFFSET(0xB680AF0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET__MODULE_OFFSET UNITYSDK_OFFSET(0xB680770)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_PLAYANIMATIONFROMEVENTBEGIN_OFFSET UNITYSDK_OFFSET(0xB680E50)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_SET_COINNUM_OFFSET UNITYSDK_OFFSET(0xB684B00)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_SET_RANDOMGEARSDATA_OFFSET UNITYSDK_OFFSET(0xB684AE0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_SET_UPWAVEDATA_OFFSET UNITYSDK_OFFSET(0xB684B20)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_TRYOPENPHASERESULTDIALOG_OFFSET UNITYSDK_OFFSET(0xB680B00)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__ADDTOWAVEDATABYGEARID_OFFSET UNITYSDK_OFFSET(0xB682450)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__ADDTOWAVEDATA_OFFSET UNITYSDK_OFFSET(0xB682200)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__CCTOR_OFFSET UNITYSDK_OFFSET(0xB685030)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__COMPAREBOXGEARDATA_OFFSET UNITYSDK_OFFSET(0xB684490)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__CREATEANDLINKMIXUPDATA_OFFSET UNITYSDK_OFFSET(0xB683D80)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__CREATEANDLINKUPDATA_1_OFFSET UNITYSDK_OFFSET(0xB683E50)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__CREATEANDLINKUPDATA_OFFSET UNITYSDK_OFFSET(0xB683CE0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__CREATEFROMSOLUTIONS_OFFSET UNITYSDK_OFFSET(0xB680290)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__CTOR_OFFSET UNITYSDK_OFFSET(0xB680190)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__ENSURECOINDATA_OFFSET UNITYSDK_OFFSET(0xB680CA0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__GETFIRSTWAVEDATA_OFFSET UNITYSDK_OFFSET(0xB681D20)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__GETINDEXRANDOMGEARS_OFFSET UNITYSDK_OFFSET(0xB684860)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__GETNEXTEFFECTGEARTYPE_OFFSET UNITYSDK_OFFSET(0xB682720)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__GETULTRAFORGEORDUELFORGEWEAPONID_OFFSET UNITYSDK_OFFSET(0xB682010)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__INITFROMSOLUTIONS_OFFSET UNITYSDK_OFFSET(0xB681190)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__LINKDUELFORGEDATA_OFFSET UNITYSDK_OFFSET(0xB683A80)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__LINKFORGEDATA_OFFSET UNITYSDK_OFFSET(0xB683C50)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__LINKGEARDATA_OFFSET UNITYSDK_OFFSET(0xB681690)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__LINKULTRAFORGEDATA_OFFSET UNITYSDK_OFFSET(0xB6838A0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__REFRESHNEXTWAVEDATA_OFFSET UNITYSDK_OFFSET(0xB682CF0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__REFRESHRANDOMGEARDATA_OFFSET UNITYSDK_OFFSET(0xB681AE0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__REFRESHUPWAVEDATA_OFFSET UNITYSDK_OFFSET(0xB681990)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__TRYGETGEARLEVEL_OFFSET UNITYSDK_OFFSET(0xB681BC0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__TRYREFRESHNEXTWAVEDATA_OFFSET UNITYSDK_OFFSET(0xB681F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildRewardBox_TypeDefinitionIndex = 49350;

	class EvolveBuildRewardBox : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::GameCore::EvolveGearType>** StaticGet__GearTypeSort()
		{
			return (::Il2CppArray<::RPG::GameCore::EvolveGearType>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildRewardBox_TypeDefinitionIndex)->GetStaticField(0x4E6E0);
		}
		static ::Il2CppArray<::RPG::GameCore::EvolveGearType>** StaticGet__ExtraEffectGearType()
		{
			return (::Il2CppArray<::RPG::GameCore::EvolveGearType>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildRewardBox_TypeDefinitionIndex)->GetStaticField(0x4E6E8);
		}
		// static const ::System::String* _CustomCoinIconPath; // 0x0
		::RPG::Client::EvolveBuildGearsDetail* _GearsDetail; // 0x10
		::RPG::Client::EvolveBuildCoinData* _CointData; // 0x18
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::IEvolveBuildCollectionGear*>*>* _RandomGearsData_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCollectionGearDisplayData*>* _GearsDisplayData; // 0x28
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>*>* _UpWaveData_k__BackingField; // 0x30
		::RPG::GameCore::EvolveBuildGearManager* _Manager; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::IEvolveBuildCollectionGear*>* _BoxData; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::EvolveBuildRewardBoxGear*>* _LevelUpData; // 0x48
		::System::UInt32 _CoinNum_k__BackingField; // 0x50
		::RPG::GameCore::EvolveBuildTreasureType _TreasureType; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::EvolveBuildRewardBox* Create(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildTreasureSolution*>* solutions, ::System::UInt32 coinNum, ::RPG::GameCore::EvolveBuildTreasureType treasureType)
		{
			return ((::RPG::GameCore::EvolveBuildRewardBox*(*)(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildTreasureSolution*>*, ::System::UInt32, ::RPG::GameCore::EvolveBuildTreasureType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_CREATE_OFFSET))(solutions, coinNum, treasureType);
		}

		static ::RPG::GameCore::EvolveBuildRewardBox* CreateFake(::Il2CppArray<::System::UInt32>* gearIDs)
		{
			return ((::RPG::GameCore::EvolveBuildRewardBox*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_CREATEFAKE_OFFSET))(gearIDs);
		}

		::RPG::Client::TextID GetTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GETTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID GetFindRewardSubTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GETFINDREWARDSUBTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID GetFindRewardTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GETFINDREWARDTITLE_OFFSET))(this);
		}

		::System::Boolean CheckOpenPhaseResultDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_CHECKOPENPHASERESULTDIALOG_OFFSET))(this);
		}

		::System::Boolean TryOpenPhaseResultDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_TRYOPENPHASERESULTDIALOG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IEvolveBuildCollectionGear*>* GetNoEmptyBoxData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IEvolveBuildCollectionGear*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GETNOEMPTYBOXDATA_OFFSET))(this);
		}

		static ::System::Void PlayAnimationFromEventBegin(::UnityEngine::Animation* animation, ::System::String* animName, ::System::String* eventName)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_PLAYANIMATIONFROMEVENTBEGIN_OFFSET))(animation, animName, eventName);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>* GetUpWaveData(::System::Int32 index)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GETUPWAVEDATA_OFFSET))(this, index);
		}

		::System::Void ContinueLevelInBattlePhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_CONTINUELEVELINBATTLEPHASE_OFFSET))(this);
		}

		::System::Void _CreateFromSolutions(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildTreasureSolution*>* solutions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildTreasureSolution*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__CREATEFROMSOLUTIONS_OFFSET))(this, solutions);
		}

		::System::Void _InitFromSolutions(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildTreasureSolution*>* solutions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildTreasureSolution*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__INITFROMSOLUTIONS_OFFSET))(this, solutions);
		}

		::System::Void _RefreshUpWaveData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__REFRESHUPWAVEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>* _GetFirstWaveData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__GETFIRSTWAVEDATA_OFFSET))(this);
		}

		::System::UInt32 _GetUltraForgeOrDuelForgeWeaponID(::RPG::GameCore::EvolveBuildRewardBoxGear* upData)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__GETULTRAFORGEORDUELFORGEWEAPONID_OFFSET))(this, upData);
		}

		::System::Boolean _AddToWaveData(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>* waveData, ::RPG::GameCore::EvolveBuildRewardBoxGear* upData)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>*, ::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__ADDTOWAVEDATA_OFFSET))(this, waveData, upData);
		}

		::System::Boolean _AddToWaveDataByGearID(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>* waveData, ::System::UInt32 gearID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__ADDTOWAVEDATABYGEARID_OFFSET))(this, waveData, gearID);
		}

		::System::Boolean _TryRefreshNextWaveData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__TRYREFRESHNEXTWAVEDATA_OFFSET))(this);
		}

		::System::Void _RefreshNextWaveData(::RPG::GameCore::EvolveGearType effectGearType, ::System::Boolean isMix, ::System::Boolean forceNoForgeEffect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveGearType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__REFRESHNEXTWAVEDATA_OFFSET))(this, effectGearType, isMix, forceNoForgeEffect);
		}

		::System::Boolean _GetNextEffectGearType(::RPG::GameCore::EvolveGearType& forgeType, ::System::Boolean& isMix)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveGearType&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__GETNEXTEFFECTGEARTYPE_OFFSET))(this, forgeType, isMix);
		}

		::System::Void _LinkGearData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__LINKGEARDATA_OFFSET))(this);
		}

		::System::Void _LinkDuelForgeData(::System::UInt32 forgeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__LINKDUELFORGEDATA_OFFSET))(this, forgeID);
		}

		::System::Void _LinkUltraForgeData(::System::UInt32 forgeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__LINKULTRAFORGEDATA_OFFSET))(this, forgeID);
		}

		::System::Void _LinkForgeData(::System::UInt32 forgeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__LINKFORGEDATA_OFFSET))(this, forgeID);
		}

		::System::Void _CreateAndLinkUpData(::System::UInt32 gearID, ::System::UInt32 nextGearID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__CREATEANDLINKUPDATA_OFFSET))(this, gearID, nextGearID);
		}

		::System::Void _CreateAndLinkMixUpData(::System::UInt32 gearID, ::System::UInt32 forgeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__CREATEANDLINKMIXUPDATA_OFFSET))(this, gearID, forgeID);
		}

		::System::Void _CreateAndLinkUpData_1(::System::UInt32 gearID, ::RPG::GameCore::EvolveBuildRewardBoxGear* nextData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__CREATEANDLINKUPDATA_1_OFFSET))(this, gearID, nextData);
		}

		::System::Int32 _CompareBoxGearData(::RPG::Client::EvolveBuildCollectionGearDisplayData* a, ::RPG::Client::EvolveBuildCollectionGearDisplayData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildCollectionGearDisplayData*, ::RPG::Client::EvolveBuildCollectionGearDisplayData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__COMPAREBOXGEARDATA_OFFSET))(this, a, b);
		}

		::System::UInt32 _TryGetGearLevel(::System::UInt32 gearID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__TRYGETGEARLEVEL_OFFSET))(this, gearID);
		}

		::System::Void _RefreshRandomGearData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__REFRESHRANDOMGEARDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IEvolveBuildCollectionGear*>* _GetIndexRandomGears(::System::UInt32 index)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IEvolveBuildCollectionGear*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__GETINDEXRANDOMGEARS_OFFSET))(this, index);
		}

		::RPG::Client::EvolveBuildCoinData* _EnsureCoinData()
		{
			return ((::RPG::Client::EvolveBuildCoinData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__ENSURECOINDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::IEvolveBuildCollectionGear*>*>* get_RandomGearsData()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::IEvolveBuildCollectionGear*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_RANDOMGEARSDATA_OFFSET))(this);
		}

		::System::Void set_RandomGearsData(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::IEvolveBuildCollectionGear*>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::IEvolveBuildCollectionGear*>*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_SET_RANDOMGEARSDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_CoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_COINNUM_OFFSET))(this);
		}

		::System::Void set_CoinNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_SET_COINNUM_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>*>* get_UpWaveData()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_UPWAVEDATA_OFFSET))(this);
		}

		::System::Void set_UpWaveData(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_SET_UPWAVEDATA_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_ConfirmText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_CONFIRMTEXT_OFFSET))(this);
		}

		::System::Boolean get_HasLastFinishNotify()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_HASLASTFINISHNOTIFY_OFFSET))(this);
		}

		::System::Boolean get_IsExtraReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_ISEXTRAREWARD_OFFSET))(this);
		}

		::System::Boolean get_IsInTutorialStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_ISINTUTORIALSTAGE_OFFSET))(this);
		}

		::System::String* get_UIAnimEndTutorialUnlockID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_UIANIMENDTUTORIALUNLOCKID_OFFSET))(this);
		}

		::System::String* get_CoinIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_COINICON_OFFSET))(this);
		}

		::System::Boolean get__IsExtraReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET__ISEXTRAREWARD_OFFSET))(this);
		}

		::RPG::Client::EvolveBuildModule* get__Module()
		{
			return ((::RPG::Client::EvolveBuildModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET__MODULE_OFFSET))(this);
		}
	};
}
