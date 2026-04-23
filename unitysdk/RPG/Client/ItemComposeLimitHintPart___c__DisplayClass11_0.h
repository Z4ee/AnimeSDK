#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class PrefHashSet_1; }

#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA656A60)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART___C__DISPLAYCLASS11_0___AREHINTSDATACORRUPTED_B__0_OFFSET UNITYSDK_OFFSET(0xA657780)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemComposeLimitHintPart___c__DisplayClass11_0_TypeDefinitionIndex = 60530;

	class ItemComposeLimitHintPart___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::RPG::Client::PrefHashSet_1<::System::UInt32>* hintsToSee; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __AreHintsDataCorrupted_b__0(::System::UInt32 composeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART___C__DISPLAYCLASS11_0___AREHINTSDATACORRUPTED_B__0_OFFSET))(this, composeID);
		}
	};
}
