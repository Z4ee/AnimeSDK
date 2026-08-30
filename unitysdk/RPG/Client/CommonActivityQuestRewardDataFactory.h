#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_721;
class Class_0_16E4307DCC419505_722;
namespace RPG::Client { class IActivityQuestRewardData; }

#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATAFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x1A280220)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATAFACTORY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A280170)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATAFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2800F0)

namespace RPG::Client
{
	inline static constexpr unsigned int CommonActivityQuestRewardDataFactory_TypeDefinitionIndex = 61824;

	class CommonActivityQuestRewardDataFactory : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_721* _TabGroupInfoFactory; // 0x10

		::System::Void _ctor(::Class_0_16E4307DCC419505_721* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_721*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATAFACTORY__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Class_0_16E4307DCC419505_722* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATAFACTORY__CTOR_1_OFFSET))(this, a1);
		}

		::RPG::Client::IActivityQuestRewardData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::IActivityQuestRewardData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATAFACTORY_CREATE_OFFSET))(this, a1);
		}
	};
}
