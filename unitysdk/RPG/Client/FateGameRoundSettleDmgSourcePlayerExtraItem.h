#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPLAYEREXTRAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB99BF20)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPLAYEREXTRAITEM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xB99BDB0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPLAYEREXTRAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB99BDA0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameRoundSettleDmgSourcePlayerExtraItem_TypeDefinitionIndex = 59854;

	class FateGameRoundSettleDmgSourcePlayerExtraItem : public ::System::Object
	{
	public:
		::System::Int32 _ExtraDmg; // 0x10

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPLAYEREXTRAITEM__CTOR_OFFSET))(this, a1);
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
