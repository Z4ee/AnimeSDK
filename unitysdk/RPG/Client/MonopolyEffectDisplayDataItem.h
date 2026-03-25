#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectDisplayEnum.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MONOPOLYEFFECTDISPLAYDATAITEM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9D56250)
#define RPG_CLIENT_MONOPOLYEFFECTDISPLAYDATAITEM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9D56270)
#define RPG_CLIENT_MONOPOLYEFFECTDISPLAYDATAITEM_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x9D56260)
#define RPG_CLIENT_MONOPOLYEFFECTDISPLAYDATAITEM_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9D56280)
#define RPG_CLIENT_MONOPOLYEFFECTDISPLAYDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9D56240)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyEffectDisplayDataItem_TypeDefinitionIndex = 53842;

	class MonopolyEffectDisplayDataItem : public ::System::Object
	{
	public:
		::System::UInt32 _Value_k__BackingField; // 0x10
		::RPG::Client::MonopolyEffectDisplayEnum _Type_k__BackingField; // 0x14

		::System::Void _ctor(::RPG::Client::MonopolyEffectDisplayEnum type, ::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonopolyEffectDisplayEnum, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEFFECTDISPLAYDATAITEM__CTOR_OFFSET))(this, type, value);
		}

		::RPG::Client::MonopolyEffectDisplayEnum get_Type()
		{
			return ((::RPG::Client::MonopolyEffectDisplayEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEFFECTDISPLAYDATAITEM_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::MonopolyEffectDisplayEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonopolyEffectDisplayEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEFFECTDISPLAYDATAITEM_SET_TYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_Value()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEFFECTDISPLAYDATAITEM_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEFFECTDISPLAYDATAITEM_SET_VALUE_OFFSET))(this, value);
		}
	};
}
