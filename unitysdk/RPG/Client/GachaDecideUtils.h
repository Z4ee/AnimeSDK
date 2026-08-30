#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GachaItemType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGachaDecideData; }

#define RPG_CLIENT_GACHADECIDEUTILS_CREATEDECIDEDATA_OFFSET UNITYSDK_OFFSET(0xD0F1650)
#define RPG_CLIENT_GACHADECIDEUTILS_ISFEATUREOPEN_OFFSET UNITYSDK_OFFSET(0xD0F16B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaDecideUtils_TypeDefinitionIndex = 64356;

	class GachaDecideUtils : public ::System::Object
	{
	public:
		static ::RPG::Client::BaseGachaDecideData* CreateDecideData(::RPG::GameCore::GachaItemType a1)
		{
			return ((::RPG::Client::BaseGachaDecideData*(*)(::RPG::GameCore::GachaItemType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEUTILS_CREATEDECIDEDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsFeatureOpen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEUTILS_ISFEATUREOPEN_OFFSET))();
		}
	};
}
