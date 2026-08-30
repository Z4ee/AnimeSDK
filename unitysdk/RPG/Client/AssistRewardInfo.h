#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E5C370BBC5B5E897_2;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class SupportData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ASSISTREWARDINFO_GET_SUPPORTDATALIST_OFFSET UNITYSDK_OFFSET(0xC781F30)
#define RPG_CLIENT_ASSISTREWARDINFO_GET_TOTALREWARD_OFFSET UNITYSDK_OFFSET(0xC781F50)
#define RPG_CLIENT_ASSISTREWARDINFO_SET_SUPPORTDATALIST_OFFSET UNITYSDK_OFFSET(0xC781F40)
#define RPG_CLIENT_ASSISTREWARDINFO_SET_TOTALREWARD_OFFSET UNITYSDK_OFFSET(0xC781F60)
#define RPG_CLIENT_ASSISTREWARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC781D00)

namespace RPG::Client
{
	inline static constexpr unsigned int AssistRewardInfo_TypeDefinitionIndex = 64318;

	class AssistRewardInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SupportData*>* _SupportDataList_k__BackingField; // 0x10
		::RPG::Client::ItemDisplayData* _TotalReward_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_E5C370BBC5B5E897_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E5C370BBC5B5E897_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTREWARDINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SupportData*>* get_SupportDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SupportData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTREWARDINFO_GET_SUPPORTDATALIST_OFFSET))(this);
		}

		::System::Void set_SupportDataList(::System::Collections::Generic::List_1<::RPG::Client::SupportData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SupportData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTREWARDINFO_SET_SUPPORTDATALIST_OFFSET))(this, a1);
		}

		::RPG::Client::ItemDisplayData* get_TotalReward()
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTREWARDINFO_GET_TOTALREWARD_OFFSET))(this);
		}

		::System::Void set_TotalReward(::RPG::Client::ItemDisplayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTREWARDINFO_SET_TOTALREWARD_OFFSET))(this, a1);
		}
	};
}
