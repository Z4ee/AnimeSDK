#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_25.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class ActivityNewbiePromoteRow; }

#define RPG_CLIENT_NOVICEQUESTSINGLEDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xD9D9240)
#define RPG_CLIENT_NOVICEQUESTSINGLEDATA_GET__QUESTDATA_OFFSET UNITYSDK_OFFSET(0xD9D92F0)
#define RPG_CLIENT_NOVICEQUESTSINGLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD9D9070)

namespace RPG::Client
{
	inline static constexpr unsigned int NoviceQuestSingleData_TypeDefinitionIndex = 61738;

	class NoviceQuestSingleData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityNewbiePromoteRow* Row; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVICEQUESTSINGLEDATA__CTOR_OFFSET))(this);
		}

		::Enum_3_4608E37A1B3D374A_25 get_Status()
		{
			return ((::Enum_3_4608E37A1B3D374A_25(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVICEQUESTSINGLEDATA_GET_STATUS_OFFSET))(this);
		}

		::RPG::Client::QuestData* get__QuestData()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVICEQUESTSINGLEDATA_GET__QUESTDATA_OFFSET))(this);
		}
	};
}
