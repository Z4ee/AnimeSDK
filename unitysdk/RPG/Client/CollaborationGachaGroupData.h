#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGachaGroupData.h"

namespace RPG::Client { class BaseGachaPoolData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_COLLABORATIONGACHAGROUPDATA_GETSORTEDAVATARGACHAPOOLS_OFFSET UNITYSDK_OFFSET(0x9402B10)
#define RPG_CLIENT_COLLABORATIONGACHAGROUPDATA_GETSORTEDWEAPONGACHAPOOLS_OFFSET UNITYSDK_OFFSET(0x9402CB0)
#define RPG_CLIENT_COLLABORATIONGACHAGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9402A90)

namespace RPG::Client
{
	inline static constexpr unsigned int CollaborationGachaGroupData_TypeDefinitionIndex = 52221;

	class CollaborationGachaGroupData : public ::RPG::Client::BaseGachaGroupData
	{
	public:
		::System::Void _ctor(::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLABORATIONGACHAGROUPDATA__CTOR_OFFSET))(this, groupID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>* GetSortedAvatarGachaPools()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLABORATIONGACHAGROUPDATA_GETSORTEDAVATARGACHAPOOLS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>* GetSortedWeaponGachaPools()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLABORATIONGACHAGROUPDATA_GETSORTEDWEAPONGACHAPOOLS_OFFSET))(this);
		}
	};
}
