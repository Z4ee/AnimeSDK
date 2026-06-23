#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class CrowdConditionBase; }
namespace NPCCrowd::AI { class NPCIDItemRuntime; }
namespace NPCCrowd::AI { class NPCPoolConfigSO; }
namespace NPCCrowd::AI { class NPCPopulationConfigSO; }
namespace NPCCrowd::AI { class PopulationConfig; }
namespace NPCCrowd::AI { class PopulationTicketPool; }
namespace NPCCrowd::AI { class PopulationTimeConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_POPULATIONRUNTIME_ADDAVATARID_OFFSET UNITYSDK_OFFSET(0xE00AF80)
#define NPCCROWD_AI_POPULATIONRUNTIME_ADDTAG_OFFSET UNITYSDK_OFFSET(0xE00AC50)
#define NPCCROWD_AI_POPULATIONRUNTIME_CHECKPOOLCONDITION_OFFSET UNITYSDK_OFFSET(0xE008E10)
#define NPCCROWD_AI_POPULATIONRUNTIME_CLEARPOPULATIONRUNTIMES_OFFSET UNITYSDK_OFFSET(0xE008CA0)
#define NPCCROWD_AI_POPULATIONRUNTIME_GETAVATARIDBYTAGID_OFFSET UNITYSDK_OFFSET(0xE00B130)
#define NPCCROWD_AI_POPULATIONRUNTIME_GETDEBUGAVAILABLECOUNTMAP_OFFSET UNITYSDK_OFFSET(0xE00BC30)
#define NPCCROWD_AI_POPULATIONRUNTIME_GETITEMBYID_OFFSET UNITYSDK_OFFSET(0xE00B490)
#define NPCCROWD_AI_POPULATIONRUNTIME_GET_CURRENTTIMECONFIG_OFFSET UNITYSDK_OFFSET(0xE00B2A0)
#define NPCCROWD_AI_POPULATIONRUNTIME_GET_POPULATIONID_OFFSET UNITYSDK_OFFSET(0xE00B250)
#define NPCCROWD_AI_POPULATIONRUNTIME_GLOBALADDAVATARID_OFFSET UNITYSDK_OFFSET(0xE00AD10)
#define NPCCROWD_AI_POPULATIONRUNTIME_GLOBALADDTAG_OFFSET UNITYSDK_OFFSET(0xE00AAC0)
#define NPCCROWD_AI_POPULATIONRUNTIME_GLOBALREMOVEAVATARID_OFFSET UNITYSDK_OFFSET(0xE00A710)
#define NPCCROWD_AI_POPULATIONRUNTIME_GLOBALREMOVETAG_OFFSET UNITYSDK_OFFSET(0xE00A4C0)
#define NPCCROWD_AI_POPULATIONRUNTIME_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE009310)
#define NPCCROWD_AI_POPULATIONRUNTIME_INNERREMOVEAVATARID_OFFSET UNITYSDK_OFFSET(0xE00B2C0)
#define NPCCROWD_AI_POPULATIONRUNTIME_ISVALID_OFFSET UNITYSDK_OFFSET(0xE00B6C0)
#define NPCCROWD_AI_POPULATIONRUNTIME_LEGACYRANDOMGETID_OFFSET UNITYSDK_OFFSET(0xE00B860)
#define NPCCROWD_AI_POPULATIONRUNTIME_LOADRESOURCE_OFFSET UNITYSDK_OFFSET(0xE008700)
#define NPCCROWD_AI_POPULATIONRUNTIME_ONNPCDESPAWN_OFFSET UNITYSDK_OFFSET(0xE00BF10)
#define NPCCROWD_AI_POPULATIONRUNTIME_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xE008960)
#define NPCCROWD_AI_POPULATIONRUNTIME_ONRANDOMSYSTEMSWITCHED_OFFSET UNITYSDK_OFFSET(0xE0085A0)
#define NPCCROWD_AI_POPULATIONRUNTIME_RANDOMGETID_OFFSET UNITYSDK_OFFSET(0xE00B720)
#define NPCCROWD_AI_POPULATIONRUNTIME_REFRESHALLPOPULATIONDATA_OFFSET UNITYSDK_OFFSET(0xE00A280)
#define NPCCROWD_AI_POPULATIONRUNTIME_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0xE00A470)
#define NPCCROWD_AI_POPULATIONRUNTIME_REGISTERPOPULATIONRUNTIME_OFFSET UNITYSDK_OFFSET(0xE008B60)
#define NPCCROWD_AI_POPULATIONRUNTIME_REMOVEAVATARID_OFFSET UNITYSDK_OFFSET(0xE00A980)
#define NPCCROWD_AI_POPULATIONRUNTIME_REMOVETAG_OFFSET UNITYSDK_OFFSET(0xE00A650)
#define NPCCROWD_AI_POPULATIONRUNTIME_RESOLVEMOVEMENTSTYLE_OFFSET UNITYSDK_OFFSET(0xE00B600)
#define NPCCROWD_AI_POPULATIONRUNTIME_SETUSETICKETPOOLSYSTEM_OFFSET UNITYSDK_OFFSET(0xE008400)
#define NPCCROWD_AI_POPULATIONRUNTIME_SET_CURRENTTIMECONFIG_OFFSET UNITYSDK_OFFSET(0xE00B2B0)
#define NPCCROWD_AI_POPULATIONRUNTIME_TRYGETPOPULATIONRUNTIME_OFFSET UNITYSDK_OFFSET(0xE008FA0)
#define NPCCROWD_AI_POPULATIONRUNTIME_UNLOADRESOURCE_OFFSET UNITYSDK_OFFSET(0xE008840)
#define NPCCROWD_AI_POPULATIONRUNTIME__CCTOR_OFFSET UNITYSDK_OFFSET(0xE00C080)
#define NPCCROWD_AI_POPULATIONRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xE0090D0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PopulationRuntime_TypeDefinitionIndex = 46720;

	class PopulationRuntime : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_GlobalUsedAvatarParamIDs()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PopulationRuntime_TypeDefinitionIndex)->GetStaticField(0x3C5E0);
		}
		static ::Foundation::AssetRequestHandle* StaticGet__populationHandle()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(PopulationRuntime_TypeDefinitionIndex)->GetStaticField(0x3C5E8);
		}
		static ::Foundation::AssetRequestHandle* StaticGet__poolHandle()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(PopulationRuntime_TypeDefinitionIndex)->GetStaticField(0x3C608);
		}
		static ::NPCCrowd::AI::NPCPopulationConfigSO** StaticGet__populationSo()
		{
			return (::NPCCrowd::AI::NPCPopulationConfigSO**)Il2CppClass::FromTypeDefinitionIndex(PopulationRuntime_TypeDefinitionIndex)->GetStaticField(0x3C628);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_GlobalWhiteListedAvatarParamIDs()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PopulationRuntime_TypeDefinitionIndex)->GetStaticField(0x3C630);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::PopulationRuntime*>** StaticGet_GlobalPopulationRuntimes()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::PopulationRuntime*>**)Il2CppClass::FromTypeDefinitionIndex(PopulationRuntime_TypeDefinitionIndex)->GetStaticField(0x3C638);
		}
		static ::NPCCrowd::AI::NPCPoolConfigSO** StaticGet__poolSo()
		{
			return (::NPCCrowd::AI::NPCPoolConfigSO**)Il2CppClass::FromTypeDefinitionIndex(PopulationRuntime_TypeDefinitionIndex)->GetStaticField(0x3C640);
		}
		static ::System::Boolean* StaticGet_UseTicketPoolSystem()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PopulationRuntime_TypeDefinitionIndex)->GetStaticField(0xED30);
		}
		static ::System::Single* StaticGet_GlobalPopulationRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PopulationRuntime_TypeDefinitionIndex)->GetStaticField(0xED34);
		}
		::System::Collections::Generic::List_1<::System::Int32>* curSpawnedIDs; // 0x10
		::NPCCrowd::AI::PopulationConfig* Config; // 0x18
		::NPCCrowd::AI::NPCPoolConfigSO* NpcPoolConfigSo; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* spawndIDsCache; // 0x28
		::System::Collections::Generic::List_1<::NPCCrowd::AI::NPCIDItemRuntime*>* disabledNPCIDs; // 0x30
		::NPCCrowd::AI::PopulationTimeConfig* _CurrentTimeConfig_k__BackingField; // 0x38
		::NPCCrowd::AI::PopulationTicketPool* _ticketPool; // 0x40
		::System::Collections::Generic::List_1<::NPCCrowd::AI::NPCIDItemRuntime*>* allNPCIDs; // 0x48
		::System::Collections::Generic::List_1<::NPCCrowd::AI::NPCIDItemRuntime*>* validIDList; // 0x50
		::System::Single curValidWeight; // 0x58
		::System::Int32 maxCount; // 0x5C
		::System::Int32 configMaxCount; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME__CCTOR_OFFSET))();
		}

		static ::System::Void SetUseTicketPoolSystem(::System::Boolean useTicketPool)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_SETUSETICKETPOOLSYSTEM_OFFSET))(useTicketPool);
		}

		static ::System::Void LoadResource()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_LOADRESOURCE_OFFSET))();
		}

		static ::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_ONPRELOADFINISHED_OFFSET))();
		}

		static ::System::Void UnLoadResource()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_UNLOADRESOURCE_OFFSET))();
		}

		static ::System::Boolean CheckPoolCondition(::System::Collections::Generic::List_1<::NPCCrowd::AI::CrowdConditionBase*>* poolConditions)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::NPCCrowd::AI::CrowdConditionBase*>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_CHECKPOOLCONDITION_OFFSET))(poolConditions);
		}

		static ::NPCCrowd::AI::PopulationRuntime* TryGetPopulationRuntime(::System::Int32 populationID)
		{
			return ((::NPCCrowd::AI::PopulationRuntime*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_TRYGETPOPULATIONRUNTIME_OFFSET))(populationID);
		}

		static ::System::Void RegisterPopulationRuntime(::NPCCrowd::AI::PopulationConfig* config, ::NPCCrowd::AI::NPCPoolConfigSO* npcPoolConfigSo)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::PopulationConfig*, ::NPCCrowd::AI::NPCPoolConfigSO*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_REGISTERPOPULATIONRUNTIME_OFFSET))(config, npcPoolConfigSo);
		}

		static ::System::Void RefreshAllPopulationData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_REFRESHALLPOPULATIONDATA_OFFSET))();
		}

		static ::System::Void ClearPopulationRuntimes()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_CLEARPOPULATIONRUNTIMES_OFFSET))();
		}

		static ::System::Void GlobalRemoveTag(::System::Int32 tag)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_GLOBALREMOVETAG_OFFSET))(tag);
		}

		static ::System::Void GlobalRemoveAvatarID(::System::Int32 avatarID)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_GLOBALREMOVEAVATARID_OFFSET))(avatarID);
		}

		static ::System::Void GlobalAddTag(::System::Int32 tag)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_GLOBALADDTAG_OFFSET))(tag);
		}

		static ::System::Void GlobalAddAvatarID(::System::Int32 avatarID)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_GLOBALADDAVATARID_OFFSET))(avatarID);
		}

		static ::System::Boolean GetAvatarIDByTagID(::System::Int32 tag, ::System::Int32& avatarID)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_GETAVATARIDBYTAGID_OFFSET))(tag, avatarID);
		}

		::System::Int32 get_populationID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_GET_POPULATIONID_OFFSET))(this);
		}

		::NPCCrowd::AI::PopulationTimeConfig* get_CurrentTimeConfig()
		{
			return ((::NPCCrowd::AI::PopulationTimeConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_GET_CURRENTTIMECONFIG_OFFSET))(this);
		}

		::System::Void set_CurrentTimeConfig(::NPCCrowd::AI::PopulationTimeConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::PopulationTimeConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_SET_CURRENTTIMECONFIG_OFFSET))(this, value);
		}

		::System::Void RemoveTag(::System::Int32 tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_REMOVETAG_OFFSET))(this, tag);
		}

		::System::Void RemoveAvatarID(::System::Int32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_REMOVEAVATARID_OFFSET))(this, avatarID);
		}

		::System::Boolean GetItemByID(::System::Collections::Generic::List_1<::NPCCrowd::AI::NPCIDItemRuntime*>* items, ::System::Int32 avatarID, ::NPCCrowd::AI::NPCIDItemRuntime*& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::AI::NPCIDItemRuntime*>*, ::System::Int32, ::NPCCrowd::AI::NPCIDItemRuntime*&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_GETITEMBYID_OFFSET))(this, items, avatarID, result);
		}

		::System::Void InnerRemoveAvatarID(::System::Int32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_INNERREMOVEAVATARID_OFFSET))(this, avatarID);
		}

		::System::Void AddTag(::System::Int32 tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_ADDTAG_OFFSET))(this, tag);
		}

		::System::Void AddAvatarID(::System::Int32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_ADDAVATARID_OFFSET))(this, avatarID);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_REFRESHDATA_OFFSET))(this);
		}

		::System::Void OnRandomSystemSwitched()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_ONRANDOMSYSTEMSWITCHED_OFFSET))(this);
		}

		::System::String* ResolveMovementStyle(::System::String* movementStyle, ::System::Boolean& overriddenByPopulation)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_RESOLVEMOVEMENTSTYLE_OFFSET))(this, movementStyle, overriddenByPopulation);
		}

		::System::Void Initialize(::NPCCrowd::AI::PopulationConfig* config, ::NPCCrowd::AI::NPCPoolConfigSO* npcPoolConfigSo)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::PopulationConfig*, ::NPCCrowd::AI::NPCPoolConfigSO*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_INITIALIZE_OFFSET))(this, config, npcPoolConfigSo);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_ISVALID_OFFSET))(this);
		}

		::System::Int32 RandomGetID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_RANDOMGETID_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GetDebugAvailableCountMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_GETDEBUGAVAILABLECOUNTMAP_OFFSET))(this);
		}

		::System::Int32 LegacyRandomGetID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_LEGACYRANDOMGETID_OFFSET))(this);
		}

		::System::Void OnNPCDespawn(::System::Int32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONRUNTIME_ONNPCDESPAWN_OFFSET))(this, avatarID);
		}
	};
}
