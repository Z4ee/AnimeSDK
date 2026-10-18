#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGachaPoolData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_COLLABORATIONGACHAMERGESUBGROUPDATA_GET_AVATARGACHAPOOLS_OFFSET UNITYSDK_OFFSET(0xCB93E90)
#define RPG_CLIENT_COLLABORATIONGACHAMERGESUBGROUPDATA_GET_WEAPONGACHAPOOLS_OFFSET UNITYSDK_OFFSET(0xCB93EB0)
#define RPG_CLIENT_COLLABORATIONGACHAMERGESUBGROUPDATA_SET_AVATARGACHAPOOLS_OFFSET UNITYSDK_OFFSET(0xCB93EA0)
#define RPG_CLIENT_COLLABORATIONGACHAMERGESUBGROUPDATA_SET_WEAPONGACHAPOOLS_OFFSET UNITYSDK_OFFSET(0xCB93EC0)
#define RPG_CLIENT_COLLABORATIONGACHAMERGESUBGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCB93E80)

namespace RPG::Client
{
	inline static constexpr unsigned int CollaborationGachaMergeSubGroupData_TypeDefinitionIndex = 64317;

	class CollaborationGachaMergeSubGroupData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>* _WeaponGachaPools_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>* _AvatarGachaPools_k__BackingField; // 0x18

		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>*, ::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLABORATIONGACHAMERGESUBGROUPDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>* get_AvatarGachaPools()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLABORATIONGACHAMERGESUBGROUPDATA_GET_AVATARGACHAPOOLS_OFFSET))(this);
		}

		::System::Void set_AvatarGachaPools(::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLABORATIONGACHAMERGESUBGROUPDATA_SET_AVATARGACHAPOOLS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>* get_WeaponGachaPools()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLABORATIONGACHAMERGESUBGROUPDATA_GET_WEAPONGACHAPOOLS_OFFSET))(this);
		}

		::System::Void set_WeaponGachaPools(::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLABORATIONGACHAMERGESUBGROUPDATA_SET_WEAPONGACHAPOOLS_OFFSET))(this, a1);
		}
	};
}
