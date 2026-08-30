#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESQUESTREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0xDB708C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesQuestReward_TypeDefinitionIndex = 66655;

	class PlanetFesQuestReward : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* Items; // 0x10
		::System::UInt32 QuestID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTREWARD__CTOR_OFFSET))(this);
		}
	};
}
