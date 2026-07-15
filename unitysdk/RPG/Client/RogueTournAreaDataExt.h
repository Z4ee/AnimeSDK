#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournAreaDataItem; }

#define RPG_CLIENT_ROGUETOURNAREADATAEXT_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x198425F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournAreaDataExt_TypeDefinitionIndex = 64497;

	class RogueTournAreaDataExt : public ::System::Object
	{
	public:
		static ::System::Boolean IsInProgress(::RPG::Client::RogueTournAreaDataItem* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournAreaDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAEXT_ISINPROGRESS_OFFSET))(a1);
		}
	};
}
