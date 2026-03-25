#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPLAYEREXTRAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0x968BE10)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPLAYEREXTRAITEM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x968BC90)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPLAYEREXTRAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x968BC80)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameRoundSettleDmgSourcePlayerExtraItem_TypeDefinitionIndex = 51975;

	class FateGameRoundSettleDmgSourcePlayerExtraItem : public ::System::Object
	{
	public:
		::System::Int32 _ExtraDmg; // 0x10

		::System::Void _ctor(::System::Int32 extraDmg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPLAYEREXTRAITEM__CTOR_OFFSET))(this, extraDmg);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPLAYEREXTRAITEM_GET_VALUE_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPLAYEREXTRAITEM_GET_DESC_OFFSET))(this);
		}
	};
}
