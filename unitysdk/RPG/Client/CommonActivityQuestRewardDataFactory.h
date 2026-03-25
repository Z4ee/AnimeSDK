#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_535;
class Class_0_16E4307DCC419505_536;
namespace RPG::Client { class IActivityQuestRewardData; }

#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATAFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x940BA50)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATAFACTORY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x940B9A0)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATAFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x940B920)

namespace RPG::Client
{
	inline static constexpr unsigned int CommonActivityQuestRewardDataFactory_TypeDefinitionIndex = 50092;

	class CommonActivityQuestRewardDataFactory : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_535* _TabGroupInfoFactory; // 0x10

		::System::Void _ctor(::Class_0_16E4307DCC419505_535* tabGroupInfoFactory)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_535*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATAFACTORY__CTOR_OFFSET))(this, tabGroupInfoFactory);
		}

		::System::Void _ctor_1(::Class_0_16E4307DCC419505_536* tabInfoFactory)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_536*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATAFACTORY__CTOR_1_OFFSET))(this, tabInfoFactory);
		}

		::RPG::Client::IActivityQuestRewardData* Create(::System::UInt32 activityRewardID)
		{
			return ((::RPG::Client::IActivityQuestRewardData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATAFACTORY_CREATE_OFFSET))(this, activityRewardID);
		}
	};
}
