#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaLegendRowType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNPERSONALEGENDTITLEROW_CREATE_OFFSET UNITYSDK_OFFSET(0xA3BE100)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDTITLEROW_GET_COLORSTATE_OFFSET UNITYSDK_OFFSET(0xA3BE0E0)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDTITLEROW_GET_ROWTYPE_OFFSET UNITYSDK_OFFSET(0xA3BE0B0)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDTITLEROW_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xA3BE0C0)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDTITLEROW_SET_COLORSTATE_OFFSET UNITYSDK_OFFSET(0xA3BE0F0)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDTITLEROW_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xA3BE0D0)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDTITLEROW__CTOR_OFFSET UNITYSDK_OFFSET(0xA3BE190)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaLegendTitleRow_TypeDefinitionIndex = 59762;

	class RogueTournPersonaLegendTitleRow : public ::System::Object
	{
	public:
		::System::String* _ColorState_k__BackingField; // 0x10
		::RPG::Client::TextID _Title_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDTITLEROW__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaLegendRowType get_RowType()
		{
			return ((::RPG::Client::RogueTournPersonaLegendRowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDTITLEROW_GET_ROWTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDTITLEROW_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDTITLEROW_SET_TITLE_OFFSET))(this, value);
		}

		::System::String* get_ColorState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDTITLEROW_GET_COLORSTATE_OFFSET))(this);
		}

		::System::Void set_ColorState(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDTITLEROW_SET_COLORSTATE_OFFSET))(this, value);
		}

		static ::RPG::Client::RogueTournPersonaLegendTitleRow* Create(::RPG::Client::TextID title, ::System::String* colorState)
		{
			return ((::RPG::Client::RogueTournPersonaLegendTitleRow*(*)(::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDTITLEROW_CREATE_OFFSET))(title, colorState);
		}
	};
}
