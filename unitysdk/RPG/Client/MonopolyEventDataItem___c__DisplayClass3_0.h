#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonopolyEventOptionDataItem; }

#define RPG_CLIENT_MONOPOLYEVENTDATAITEM___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAA9CE10)
#define RPG_CLIENT_MONOPOLYEVENTDATAITEM___C__DISPLAYCLASS3_0__GETOPTIONDATAITEM_B__0_OFFSET UNITYSDK_OFFSET(0xAA9D560)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyEventDataItem___c__DisplayClass3_0_TypeDefinitionIndex = 61006;

	class MonopolyEventDataItem___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 optionID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTDATAITEM___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetOptionDataItem_b__0(::RPG::Client::MonopolyEventOptionDataItem* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonopolyEventOptionDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTDATAITEM___C__DISPLAYCLASS3_0__GETOPTIONDATAITEM_B__0_OFFSET))(this, data);
		}
	};
}
