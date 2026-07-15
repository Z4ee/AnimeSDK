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

#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_CHECKOPENPHASERESULTDIALOG_OFFSET UNITYSDK_OFFSET(0x154DB050)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_CONTINUELEVELINBATTLEPHASE_OFFSET UNITYSDK_OFFSET(0x154DB890)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_CREATEFAKE_OFFSET UNITYSDK_OFFSET(0x154DA810)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_CREATE_OFFSET UNITYSDK_OFFSET(0x154DA3C0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GETFINDREWARDSUBTITLE_OFFSET UNITYSDK_OFFSET(0x154DAD20)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GETFINDREWARDTITLE_OFFSET UNITYSDK_OFFSET(0x154DAFA0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GETNOEMPTYBOXDATA_OFFSET UNITYSDK_OFFSET(0x154DB2C0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GETTITLE_OFFSET UNITYSDK_OFFSET(0x154DAA20)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GETUPWAVEDATA_OFFSET UNITYSDK_OFFSET(0x154DB800)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_COINICON_OFFSET UNITYSDK_OFFSET(0x154DF520)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_COINNUM_OFFSET UNITYSDK_OFFSET(0x154DEE70)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_CONFIRMTEXT_OFFSET UNITYSDK_OFFSET(0x154DEEB0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_HASLASTFINISHNOTIFY_OFFSET UNITYSDK_OFFSET(0x154DEFB0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_ISEXTRAREWARD_OFFSET UNITYSDK_OFFSET(0x154DF090)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_ISINTUTORIALSTAGE_OFFSET UNITYSDK_OFFSET(0x154DF0F0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_RANDOMGEARSDATA_OFFSET UNITYSDK_OFFSET(0x154DEE50)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_UIANIMENDTUTORIALUNLOCKID_OFFSET UNITYSDK_OFFSET(0x154DF1B0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_UPWAVEDATA_OFFSET UNITYSDK_OFFSET(0x154DEE90)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET__ISEXTRAREWARD_OFFSET UNITYSDK_OFFSET(0x154DB150)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET__MODULE_OFFSET UNITYSDK_OFFSET(0x154DACA0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_PLAYANIMATIONFROMEVENTBEGIN_OFFSET UNITYSDK_OFFSET(0x154DB600)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_SET_COINNUM_OFFSET UNITYSDK_OFFSET(0x154DEE80)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_SET_RANDOMGEARSDATA_OFFSET UNITYSDK_OFFSET(0x154DEE60)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_SET_UPWAVEDATA_OFFSET UNITYSDK_OFFSET(0x154DEEA0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX_TRYOPENPHASERESULTDIALOG_OFFSET UNITYSDK_OFFSET(0x154DB1A0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__ADDTOWAVEDATABYGEARID_OFFSET UNITYSDK_OFFSET(0x154DCB50)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__ADDTOWAVEDATA_OFFSET UNITYSDK_OFFSET(0x154DC890)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__CCTOR_OFFSET UNITYSDK_OFFSET(0x154DF600)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__COMPAREBOXGEARDATA_OFFSET UNITYSDK_OFFSET(0x154DE930)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__CREATEANDLINKMIXUPDATA_OFFSET UNITYSDK_OFFSET(0x154DE1B0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__CREATEANDLINKUPDATA_1_OFFSET UNITYSDK_OFFSET(0x154DE310)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__CREATEANDLINKUPDATA_OFFSET UNITYSDK_OFFSET(0x154DE0D0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__CREATEFROMSOLUTIONS_OFFSET UNITYSDK_OFFSET(0x154DA6B0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x154DA5B0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__ENSURECOINDATA_OFFSET UNITYSDK_OFFSET(0x154DB3E0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__GETFIRSTWAVEDATA_OFFSET UNITYSDK_OFFSET(0x154DC4F0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__GETINDEXRANDOMGEARS_OFFSET UNITYSDK_OFFSET(0x154DEB90)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__GETNEXTEFFECTGEARTYPE_OFFSET UNITYSDK_OFFSET(0x154DCE10)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__GETULTRAFORGEORDUELFORGEWEAPONID_OFFSET UNITYSDK_OFFSET(0x154DC790)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__INITFROMSOLUTIONS_OFFSET UNITYSDK_OFFSET(0x154DB950)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__LINKDUELFORGEDATA_OFFSET UNITYSDK_OFFSET(0x154DDED0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__LINKFORGEDATA_OFFSET UNITYSDK_OFFSET(0x154DE040)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__LINKGEARDATA_OFFSET UNITYSDK_OFFSET(0x154DBF30)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__LINKULTRAFORGEDATA_OFFSET UNITYSDK_OFFSET(0x154DDD50)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__REFRESHNEXTWAVEDATA_OFFSET UNITYSDK_OFFSET(0x154DD1B0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__REFRESHRANDOMGEARDATA_OFFSET UNITYSDK_OFFSET(0x154DC2A0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__REFRESHUPWAVEDATA_OFFSET UNITYSDK_OFFSET(0x154DC0F0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__TRYGETGEARLEVEL_OFFSET UNITYSDK_OFFSET(0x154DC3F0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX__TRYREFRESHNEXTWAVEDATA_OFFSET UNITYSDK_OFFSET(0x154DC6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildRewardBox_TypeDefinitionIndex = 51099;

	class EvolveBuildRewardBox : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::GameCore::EvolveGearType>** StaticGet__ExtraEffectGearType()
		{
			return (::Il2CppArray<::RPG::GameCore::EvolveGearType>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildRewardBox_TypeDefinitionIndex)->GetStaticField(0x62BC0);
		}
		static ::Il2CppArray<::RPG::GameCore::EvolveGearType>** StaticGet__GearTypeSort()
		{
			return (::Il2CppArray<::RPG::GameCore::EvolveGearType>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildRewardBox_TypeDefinitionIndex)->GetStaticField(0x62BC8);
		}
		// static const ::System::String* _CustomCoinIconPath; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCollectionGearDisplayData*>* _GearsDisplayData; // 0x10
		::RPG::Client::EvolveBuildGearsDetail* _GearsDetail; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::IEvolveBuildCollectionGear*>* _BoxData; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::EvolveBuildRewardBoxGear*>* _LevelUpData; // 0x28
		::RPG::Client::EvolveBuildCoinData* _CointData; // 0x30
		::RPG::GameCore::EvolveBuildGearManager* _Manager; // 0x38
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>*>* _UpWaveData_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::IEvolveBuildCollectionGear*>*>* _RandomGearsData_k__BackingField; // 0x48
		::RPG::GameCore::EvolveBuildTreasureType _TreasureType; // 0x50
		::System::UInt32 _CoinNum_k__BackingField; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::EvolveBuildRewardBox* Create(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildTreasureSolution*>* a1, ::System::UInt32 a2, ::RPG::GameCore::EvolveBuildTreasureType a3)
		{
			return ((::RPG::GameCore::EvolveBuildRewardBox*(*)(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildTreasureSolution*>*, ::System::UInt32, ::RPG::GameCore::EvolveBuildTreasureType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::EvolveBuildRewardBox* CreateFake(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::RPG::GameCore::EvolveBuildRewardBox*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_CREATEFAKE_OFFSET))(a1);
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

		static ::System::Void PlayAnimationFromEventBegin(::UnityEngine::Animation* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_PLAYANIMATIONFROMEVENTBEGIN_OFFSET))(a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>* GetUpWaveData(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GETUPWAVEDATA_OFFSET))(this, a1);
		}

		::System::Void ContinueLevelInBattlePhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_CONTINUELEVELINBATTLEPHASE_OFFSET))(this);
		}

		::System::Void _CreateFromSolutions(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildTreasureSolution*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildTreasureSolution*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__CREATEFROMSOLUTIONS_OFFSET))(this, a1);
		}

		::System::Void _InitFromSolutions(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildTreasureSolution*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildTreasureSolution*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__INITFROMSOLUTIONS_OFFSET))(this, a1);
		}

		::System::Void _RefreshUpWaveData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__REFRESHUPWAVEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>* _GetFirstWaveData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__GETFIRSTWAVEDATA_OFFSET))(this);
		}

		::System::UInt32 _GetUltraForgeOrDuelForgeWeaponID(::RPG::GameCore::EvolveBuildRewardBoxGear* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__GETULTRAFORGEORDUELFORGEWEAPONID_OFFSET))(this, a1);
		}

		::System::Boolean _AddToWaveData(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>* a1, ::RPG::GameCore::EvolveBuildRewardBoxGear* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>*, ::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__ADDTOWAVEDATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean _AddToWaveDataByGearID(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__ADDTOWAVEDATABYGEARID_OFFSET))(this, a1, a2);
		}

		::System::Boolean _TryRefreshNextWaveData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__TRYREFRESHNEXTWAVEDATA_OFFSET))(this);
		}

		::System::Void _RefreshNextWaveData(::RPG::GameCore::EvolveGearType a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveGearType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__REFRESHNEXTWAVEDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _GetNextEffectGearType(::RPG::GameCore::EvolveGearType& a1, ::System::Boolean& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveGearType&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__GETNEXTEFFECTGEARTYPE_OFFSET))(this, a1, a2);
		}

		::System::Void _LinkGearData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__LINKGEARDATA_OFFSET))(this);
		}

		::System::Void _LinkDuelForgeData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__LINKDUELFORGEDATA_OFFSET))(this, a1);
		}

		::System::Void _LinkUltraForgeData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__LINKULTRAFORGEDATA_OFFSET))(this, a1);
		}

		::System::Void _LinkForgeData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__LINKFORGEDATA_OFFSET))(this, a1);
		}

		::System::Void _CreateAndLinkUpData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__CREATEANDLINKUPDATA_OFFSET))(this, a1, a2);
		}

		::System::Void _CreateAndLinkMixUpData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__CREATEANDLINKMIXUPDATA_OFFSET))(this, a1, a2);
		}

		::System::Void _CreateAndLinkUpData_1(::System::UInt32 a1, ::RPG::GameCore::EvolveBuildRewardBoxGear* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__CREATEANDLINKUPDATA_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 _CompareBoxGearData(::RPG::Client::EvolveBuildCollectionGearDisplayData* a1, ::RPG::Client::EvolveBuildCollectionGearDisplayData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildCollectionGearDisplayData*, ::RPG::Client::EvolveBuildCollectionGearDisplayData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__COMPAREBOXGEARDATA_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _TryGetGearLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__TRYGETGEARLEVEL_OFFSET))(this, a1);
		}

		::System::Void _RefreshRandomGearData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__REFRESHRANDOMGEARDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IEvolveBuildCollectionGear*>* _GetIndexRandomGears(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IEvolveBuildCollectionGear*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__GETINDEXRANDOMGEARS_OFFSET))(this, a1);
		}

		::RPG::Client::EvolveBuildCoinData* _EnsureCoinData()
		{
			return ((::RPG::Client::EvolveBuildCoinData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX__ENSURECOINDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::IEvolveBuildCollectionGear*>*>* get_RandomGearsData()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::IEvolveBuildCollectionGear*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_RANDOMGEARSDATA_OFFSET))(this);
		}

		::System::Void set_RandomGearsData(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::IEvolveBuildCollectionGear*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::IEvolveBuildCollectionGear*>*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_SET_RANDOMGEARSDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_CoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_COINNUM_OFFSET))(this);
		}

		::System::Void set_CoinNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_SET_COINNUM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>*>* get_UpWaveData()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_GET_UPWAVEDATA_OFFSET))(this);
		}

		::System::Void set_UpWaveData(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*>*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX_SET_UPWAVEDATA_OFFSET))(this, a1);
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
