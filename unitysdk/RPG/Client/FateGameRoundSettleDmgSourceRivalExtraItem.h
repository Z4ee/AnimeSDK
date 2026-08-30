#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCERIVALEXTRAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1C18FC10)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCERIVALEXTRAITEM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C18FAA0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCERIVALEXTRAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C18FA90)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameRoundSettleDmgSourceRivalExtraItem_TypeDefinitionIndex = 64122;

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
