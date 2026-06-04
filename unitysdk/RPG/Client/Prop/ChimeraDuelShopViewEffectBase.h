#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWEFFECTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xC51D700)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelShopViewEffectBase_TypeDefinitionIndex = 72881;

	class ChimeraDuelShopViewEffectBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWEFFECTBASE__CTOR_OFFSET))(this);
		}
	};
}
