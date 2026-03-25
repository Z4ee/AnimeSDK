#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityTagData; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ACTIVITYTAGDATAEXT_CONTAINSTAG_OFFSET UNITYSDK_OFFSET(0x8FC4AD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTagDataExt_TypeDefinitionIndex = 50065;

	class ActivityTagDataExt : public ::System::Object
	{
	public:
		static ::System::Boolean ContainsTag(::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityTagData*>* tags, ::System::UInt32 tagID)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityTagData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTAGDATAEXT_CONTAINSTAG_OFFSET))(tags, tagID);
		}
	};
}
