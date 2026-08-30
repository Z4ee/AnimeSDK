#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IFateGameAffixItemPanelData; }

#define RPG_CLIENT_FATEGAMEAFFIXITEMPANELDATAEXT_ISAFFIX_OFFSET UNITYSDK_OFFSET(0x1C17CEA0)
#define RPG_CLIENT_FATEGAMEAFFIXITEMPANELDATAEXT_ISREIJUAFFIX_OFFSET UNITYSDK_OFFSET(0x1C17CF40)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameAffixItemPanelDataExt_TypeDefinitionIndex = 64159;

	class FateGameAffixItemPanelDataExt : public ::System::Object
	{
	public:
		static ::System::Boolean IsAffix(::RPG::Client::IFateGameAffixItemPanelData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IFateGameAffixItemPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEAFFIXITEMPANELDATAEXT_ISAFFIX_OFFSET))(a1);
		}

		static ::System::Boolean IsReijuAffix(::RPG::Client::IFateGameAffixItemPanelData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IFateGameAffixItemPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEAFFIXITEMPANELDATAEXT_ISREIJUAFFIX_OFFSET))(a1);
		}
	};
}
