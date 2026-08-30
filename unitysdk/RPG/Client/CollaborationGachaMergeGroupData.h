#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGachaGroupData.h"

namespace RPG::Client { class CollaborationGachaMergeSubGroupData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_COLLABORATIONGACHAMERGEGROUPDATA_GETSORTEDGACHAPOOLGROUPS_OFFSET UNITYSDK_OFFSET(0x1A276C30)
#define RPG_CLIENT_COLLABORATIONGACHAMERGEGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A276BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int CollaborationGachaMergeGroupData_TypeDefinitionIndex = 64375;

	class CollaborationGachaMergeGroupData : public ::RPG::Client::BaseGachaGroupData
	{
	public:
		// static const ::System::Int32 GachaPoolCountPerGroup = 0x4; // 0x0
		// static const ::System::Int32 MergeGroupCount = 0x2; // 0x0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLABORATIONGACHAMERGEGROUPDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CollaborationGachaMergeSubGroupData*>* GetSortedGachaPoolGroups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CollaborationGachaMergeSubGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLABORATIONGACHAMERGEGROUPDATA_GETSORTEDGACHAPOOLGROUPS_OFFSET))(this);
		}
	};
}
