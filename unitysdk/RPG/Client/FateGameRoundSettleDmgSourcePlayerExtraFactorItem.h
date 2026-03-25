#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPLAYEREXTRAFACTORITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0x968BBC0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPLAYEREXTRAFACTORITEM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x968BA40)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPLAYEREXTRAFACTORITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x968BA30)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameRoundSettleDmgSourcePlayerExtraFactorItem_TypeDefinitionIndex = 51974;

	class FateGameRoundSettleDmgSourcePlayerExtraFactorItem : public ::System::Object
	{
	public:
		::System::Double _ExtraFactor; // 0x10

		::System::Void _ctor(::System::Double extraFactor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPLAYEREXTRAFACTORITEM__CTOR_OFFSET))(this, extraFactor);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPLAYEREXTRAFACTORITEM_GET_VALUE_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEDMGSOURCEPLAYEREXTRAFACTORITEM_GET_DESC_OFFSET))(this);
		}
	};
}
