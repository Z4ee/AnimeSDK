#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGachaGroupData; }

#define RPG_CLIENT_GACHAGROUPDATAEXT_ISSINGLEPOOLGACHAGROUP_OFFSET UNITYSDK_OFFSET(0xBAAAD60)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaGroupDataExt_TypeDefinitionIndex = 60109;

	class GachaGroupDataExt : public ::System::Object
	{
	public:
		static ::System::Boolean IsSinglePoolGachaGroup(::RPG::Client::BaseGachaGroupData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::BaseGachaGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAGROUPDATAEXT_ISSINGLEPOOLGACHAGROUP_OFFSET))(a1);
		}
	};
}
