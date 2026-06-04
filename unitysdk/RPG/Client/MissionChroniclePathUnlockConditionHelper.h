#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_811;
namespace RPG::Client { class IMissionChroniclePathUnlockConditionData; }
namespace RPG::Client { class MissionChronicleBasePathData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONHELPER_COLLECTUNLOCKCONDITIONS_OFFSET UNITYSDK_OFFSET(0xC0056A0)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONHELPER_GETLOCATIONTEXT_OFFSET UNITYSDK_OFFSET(0xC003590)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONHELPER__INITUNLOCKCONDITIONCOLLECTORS_OFFSET UNITYSDK_OFFSET(0xC005EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionChroniclePathUnlockConditionHelper_TypeDefinitionIndex = 61825;

	class MissionChroniclePathUnlockConditionHelper : public ::System::Object
	{
	public:
		static ::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>*>* CollectUnlockConditions(::RPG::Client::MissionChronicleBasePathData* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>*>*(*)(::RPG::Client::MissionChronicleBasePathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONHELPER_COLLECTUNLOCKCONDITIONS_OFFSET))(a1);
		}

		static ::System::Void _InitUnlockConditionCollectors(::RPG::Client::MissionChronicleBasePathData* a1, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_811*>* a2)
		{
			return ((::System::Void(*)(::RPG::Client::MissionChronicleBasePathData*, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_811*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONHELPER__INITUNLOCKCONDITIONCOLLECTORS_OFFSET))(a1, a2);
		}

		static ::System::String* GetLocationText(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONHELPER_GETLOCATIONTEXT_OFFSET))(a1);
		}
	};
}
