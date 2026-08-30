#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectDisplayEnum.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MONOPOLYEFFECTDISPLAYDATAITEM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C2A18D0)
#define RPG_CLIENT_MONOPOLYEFFECTDISPLAYDATAITEM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C2A18F0)
#define RPG_CLIENT_MONOPOLYEFFECTDISPLAYDATAITEM_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C2A18E0)
#define RPG_CLIENT_MONOPOLYEFFECTDISPLAYDATAITEM_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C2A1900)
#define RPG_CLIENT_MONOPOLYEFFECTDISPLAYDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A18C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyEffectDisplayDataItem_TypeDefinitionIndex = 66270;

	class MonopolyEffectDisplayDataItem : public ::System::Object
	{
	public:
		::System::UInt32 _Value_k__BackingField; // 0x10
		::RPG::Client::MonopolyEffectDisplayEnum _Type_k__BackingField; // 0x14

		::System::Void _ctor(::RPG::Client::MonopolyEffectDisplayEnum a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonopolyEffectDisplayEnum, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEFFECTDISPLAYDATAITEM__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MonopolyEffectDisplayEnum get_Type()
		{
			return ((::RPG::Client::MonopolyEffectDisplayEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEFFECTDISPLAYDATAITEM_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::MonopolyEffectDisplayEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonopolyEffectDisplayEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEFFECTDISPLAYDATAITEM_SET_TYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Value()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEFFECTDISPLAYDATAITEM_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEFFECTDISPLAYDATAITEM_SET_VALUE_OFFSET))(this, a1);
		}
	};
}
