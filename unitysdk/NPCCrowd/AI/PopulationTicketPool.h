#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class NPCIDItemRuntime; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_POPULATIONTICKETPOOL_ADDWEIGHT_OFFSET UNITYSDK_OFFSET(0xD5AC850)
#define NPCCROWD_AI_POPULATIONTICKETPOOL_BUILDNONWHITEROUNDORDER_OFFSET UNITYSDK_OFFSET(0xD5AD9E0)
#define NPCCROWD_AI_POPULATIONTICKETPOOL_BUILDWHITETICKETS_OFFSET UNITYSDK_OFFSET(0xD5AE020)
#define NPCCROWD_AI_POPULATIONTICKETPOOL_DISABLEAVATARID_OFFSET UNITYSDK_OFFSET(0xD5ACA60)
#define NPCCROWD_AI_POPULATIONTICKETPOOL_DRAWNEXT_OFFSET UNITYSDK_OFFSET(0xD5ACB40)
#define NPCCROWD_AI_POPULATIONTICKETPOOL_DRAWNONWHITE_OFFSET UNITYSDK_OFFSET(0xD5AD060)
#define NPCCROWD_AI_POPULATIONTICKETPOOL_DRAWWHITE_OFFSET UNITYSDK_OFFSET(0xD5AD270)
#define NPCCROWD_AI_POPULATIONTICKETPOOL_ENABLEAVATARID_OFFSET UNITYSDK_OFFSET(0xD5ACAD0)
#define NPCCROWD_AI_POPULATIONTICKETPOOL_GETAVAILABLENONWHITECOUNT_OFFSET UNITYSDK_OFFSET(0xD5ACCD0)
#define NPCCROWD_AI_POPULATIONTICKETPOOL_GETAVAILABLETICKETCOUNT_OFFSET UNITYSDK_OFFSET(0xD5ACC60)
#define NPCCROWD_AI_POPULATIONTICKETPOOL_GETAVAILABLEWHITETICKETCOUNT_OFFSET UNITYSDK_OFFSET(0xD5ACEC0)
#define NPCCROWD_AI_POPULATIONTICKETPOOL_GETDEBUGAVAILABLECOUNTMAP_OFFSET UNITYSDK_OFFSET(0xD5AD470)
#define NPCCROWD_AI_POPULATIONTICKETPOOL_GETWEIGHTCONTRIBUTION_OFFSET UNITYSDK_OFFSET(0xD5AC6F0)
#define NPCCROWD_AI_POPULATIONTICKETPOOL_ISBLOCKED_OFFSET UNITYSDK_OFFSET(0xD5AD950)
#define NPCCROWD_AI_POPULATIONTICKETPOOL_REBUILDFROMPOPULATIONITEMS_OFFSET UNITYSDK_OFFSET(0xD5AC3F0)
#define NPCCROWD_AI_POPULATIONTICKETPOOL_RESETROUND_OFFSET UNITYSDK_OFFSET(0xD5AC910)
#define NPCCROWD_AI_POPULATIONTICKETPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0xD5AE510)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PopulationTicketPool_TypeDefinitionIndex = 77888;

	class PopulationTicketPool : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* _consumedNonWhite; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* _baseNonWhiteWeights; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* _baseWhiteWeights; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* _nonWhiteOrder; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _whiteRemainingTickets; // 0x30
		::System::Collections::Generic::HashSet_1<::System::Int32>* _disabledAvatarIDs; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTICKETPOOL__CTOR_OFFSET))(this);
		}

		::System::Void RebuildFromPopulationItems(::System::Collections::Generic::List_1<::NPCCrowd::AI::NPCIDItemRuntime*>* allNPCIDs, ::System::Collections::Generic::HashSet_1<::System::Int32>* whiteListAvatarIDs, ::System::Int32 maxCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::AI::NPCIDItemRuntime*>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTICKETPOOL_REBUILDFROMPOPULATIONITEMS_OFFSET))(this, allNPCIDs, whiteListAvatarIDs, maxCount);
		}

		::System::Void DisableAvatarID(::System::Int32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTICKETPOOL_DISABLEAVATARID_OFFSET))(this, avatarID);
		}

		::System::Void EnableAvatarID(::System::Int32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTICKETPOOL_ENABLEAVATARID_OFFSET))(this, avatarID);
		}

		::System::Int32 DrawNext(::System::Collections::Generic::HashSet_1<::System::Int32>* globalUsedAvatarIDs)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTICKETPOOL_DRAWNEXT_OFFSET))(this, globalUsedAvatarIDs);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GetDebugAvailableCountMap(::System::Collections::Generic::HashSet_1<::System::Int32>* globalUsedAvatarIDs)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTICKETPOOL_GETDEBUGAVAILABLECOUNTMAP_OFFSET))(this, globalUsedAvatarIDs);
		}

		static ::System::Void AddWeight(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* dict, ::System::Int32 id, ::System::Single weight)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTICKETPOOL_ADDWEIGHT_OFFSET))(dict, id, weight);
		}

		static ::System::Single GetWeightContribution(::NPCCrowd::AI::NPCIDItemRuntime* item)
		{
			return ((::System::Single(*)(::NPCCrowd::AI::NPCIDItemRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTICKETPOOL_GETWEIGHTCONTRIBUTION_OFFSET))(item);
		}

		::System::Void ResetRound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTICKETPOOL_RESETROUND_OFFSET))(this);
		}

		::System::Void BuildNonWhiteRoundOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTICKETPOOL_BUILDNONWHITEROUNDORDER_OFFSET))(this);
		}

		::System::Void BuildWhiteTickets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTICKETPOOL_BUILDWHITETICKETS_OFFSET))(this);
		}

		::System::Int32 GetAvailableTicketCount(::System::Collections::Generic::HashSet_1<::System::Int32>* globalUsedAvatarIDs)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTICKETPOOL_GETAVAILABLETICKETCOUNT_OFFSET))(this, globalUsedAvatarIDs);
		}

		::System::Int32 GetAvailableNonWhiteCount(::System::Collections::Generic::HashSet_1<::System::Int32>* globalUsedAvatarIDs)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTICKETPOOL_GETAVAILABLENONWHITECOUNT_OFFSET))(this, globalUsedAvatarIDs);
		}

		::System::Int32 GetAvailableWhiteTicketCount(::System::Collections::Generic::HashSet_1<::System::Int32>* globalUsedAvatarIDs)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTICKETPOOL_GETAVAILABLEWHITETICKETCOUNT_OFFSET))(this, globalUsedAvatarIDs);
		}

		::System::Int32 DrawNonWhite(::System::Collections::Generic::HashSet_1<::System::Int32>* globalUsedAvatarIDs)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTICKETPOOL_DRAWNONWHITE_OFFSET))(this, globalUsedAvatarIDs);
		}

		::System::Int32 DrawWhite(::System::Collections::Generic::HashSet_1<::System::Int32>* globalUsedAvatarIDs)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTICKETPOOL_DRAWWHITE_OFFSET))(this, globalUsedAvatarIDs);
		}

		::System::Boolean IsBlocked(::System::Int32 avatarID, ::System::Collections::Generic::HashSet_1<::System::Int32>* globalUsedAvatarIDs)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTICKETPOOL_ISBLOCKED_OFFSET))(this, avatarID, globalUsedAvatarIDs);
		}
	};
}
