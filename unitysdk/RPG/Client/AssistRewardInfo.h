#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8789FE9A7EA728A4_3;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class SupportData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ASSISTREWARDINFO_GET_SUPPORTDATALIST_OFFSET UNITYSDK_OFFSET(0x9D3F9F0)
#define RPG_CLIENT_ASSISTREWARDINFO_GET_TOTALREWARD_OFFSET UNITYSDK_OFFSET(0x9D3FA10)
#define RPG_CLIENT_ASSISTREWARDINFO_SET_SUPPORTDATALIST_OFFSET UNITYSDK_OFFSET(0x9D3FA00)
#define RPG_CLIENT_ASSISTREWARDINFO_SET_TOTALREWARD_OFFSET UNITYSDK_OFFSET(0x9D3FA20)
#define RPG_CLIENT_ASSISTREWARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9D3F8A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AssistRewardInfo_TypeDefinitionIndex = 59122;

	class AssistRewardInfo : public ::System::Object
	{
	public:
		::RPG::Client::ItemDisplayData* _TotalReward_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::SupportData*>* _SupportDataList_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_8789FE9A7EA728A4_3* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8789FE9A7EA728A4_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTREWARDINFO__CTOR_OFFSET))(this, serverInfo);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SupportData*>* get_SupportDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SupportData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTREWARDINFO_GET_SUPPORTDATALIST_OFFSET))(this);
		}

		::System::Void set_SupportDataList(::System::Collections::Generic::List_1<::RPG::Client::SupportData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SupportData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTREWARDINFO_SET_SUPPORTDATALIST_OFFSET))(this, value);
		}

		::RPG::Client::ItemDisplayData* get_TotalReward()
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTREWARDINFO_GET_TOTALREWARD_OFFSET))(this);
		}

		::System::Void set_TotalReward(::RPG::Client::ItemDisplayData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTREWARDINFO_SET_TOTALREWARD_OFFSET))(this, value);
		}
	};
}
