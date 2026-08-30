#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGachaGroupData.h"

namespace RPG::Client { class BaseGachaPoolData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_COLLABORATIONGACHAGROUPDATA_GETSORTEDAVATARGACHAPOOLS_OFFSET UNITYSDK_OFFSET(0x1A276710)
#define RPG_CLIENT_COLLABORATIONGACHAGROUPDATA_GETSORTEDWEAPONGACHAPOOLS_OFFSET UNITYSDK_OFFSET(0x1A276960)
#define RPG_CLIENT_COLLABORATIONGACHAGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A276690)

namespace RPG::Client
{
	inline static constexpr unsigned int CollaborationGachaGroupData_TypeDefinitionIndex = 64374;

	class CollaborationGachaGroupData : public ::RPG::Client::BaseGachaGroupData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLABORATIONGACHAGROUPDATA__CTOR_OFFSET))(this, a1);
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
