#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCERIVALEXTRAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA34BD20)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCERIVALEXTRAITEM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA34BBA0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCERIVALEXTRAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA34BB90)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameRoundSettleDmgSourceRivalExtraItem_TypeDefinitionIndex = 58926;

	class FateGameRoundSettleDmgSourceRivalExtraItem : public ::System::Object
	{
	public:
		::System::Int32 _ExtraDmg; // 0x10

		::System::Void _ctor(::System::Int32 extraDmg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCERIVALEXTRAITEM__CTOR_OFFSET))(this, extraDmg);
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
