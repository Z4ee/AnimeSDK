#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCERIVALEXTRAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB99C3C0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCERIVALEXTRAITEM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xB99C250)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCERIVALEXTRAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB99C240)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameRoundSettleDmgSourceRivalExtraItem_TypeDefinitionIndex = 59856;

	class FateGameRoundSettleDmgSourceRivalExtraItem : public ::System::Object
	{
	public:
		::System::Int32 _ExtraDmg; // 0x10

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCERIVALEXTRAITEM__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCERIVALEXTRAITEM_GET_VALUE_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCERIVALEXTRAITEM_GET_DESC_OFFSET))(this);
		}
	};
}
