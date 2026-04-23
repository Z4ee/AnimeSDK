#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IFateGameAffixItemPanelData; }

#define RPG_CLIENT_FATEGAMEAFFIXITEMPANELDATAEXT_ISAFFIX_OFFSET UNITYSDK_OFFSET(0xA33A770)
#define RPG_CLIENT_FATEGAMEAFFIXITEMPANELDATAEXT_ISREIJUAFFIX_OFFSET UNITYSDK_OFFSET(0xA33A810)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameAffixItemPanelDataExt_TypeDefinitionIndex = 58963;

	class FateGameAffixItemPanelDataExt : public ::System::Object
	{
	public:
		static ::System::Boolean IsAffix(::RPG::Client::IFateGameAffixItemPanelData* data)
		{
			return ((::System::Boolean(*)(::RPG::Client::IFateGameAffixItemPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEAFFIXITEMPANELDATAEXT_ISAFFIX_OFFSET))(data);
		}

		static ::System::Boolean IsReijuAffix(::RPG::Client::IFateGameAffixItemPanelData* data)
		{
			return ((::System::Boolean(*)(::RPG::Client::IFateGameAffixItemPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEAFFIXITEMPANELDATAEXT_ISREIJUAFFIX_OFFSET))(data);
		}
	};
}
