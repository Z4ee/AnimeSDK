#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightBonusResultData; }
namespace RPG::Client { class GridFightShopSpecialGood; }

#define RPG_CLIENT_GRIDFIGHTCYRENEBONUSEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A632B70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightCyreneBonusEvent_TypeDefinitionIndex = 62297;

	class GridFightCyreneBonusEvent : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusResultData* BonusData; // 0x10
		::RPG::Client::GridFightShopSpecialGood* ShopGood; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCYRENEBONUSEVENT__CTOR_OFFSET))(this);
		}
	};
}
