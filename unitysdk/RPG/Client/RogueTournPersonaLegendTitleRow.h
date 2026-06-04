#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaLegendRowType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNPERSONALEGENDTITLEROW_CREATE_OFFSET UNITYSDK_OFFSET(0xC846FF0)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDTITLEROW_GET_COLORSTATE_OFFSET UNITYSDK_OFFSET(0xC846FD0)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDTITLEROW_GET_ROWTYPE_OFFSET UNITYSDK_OFFSET(0xC846FA0)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDTITLEROW_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xC846FB0)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDTITLEROW_SET_COLORSTATE_OFFSET UNITYSDK_OFFSET(0xC846FE0)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDTITLEROW_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xC846FC0)
#define RPG_CLIENT_ROGUETOURNPERSONALEGENDTITLEROW__CTOR_OFFSET UNITYSDK_OFFSET(0xC847080)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaLegendTitleRow_TypeDefinitionIndex = 68101;

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

		::System::Void set_Title(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDTITLEROW_SET_TITLE_OFFSET))(this, a1);
		}

		::System::String* get_ColorState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDTITLEROW_GET_COLORSTATE_OFFSET))(this);
		}

		::System::Void set_ColorState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDTITLEROW_SET_COLORSTATE_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueTournPersonaLegendTitleRow* Create(::RPG::Client::TextID a1, ::System::String* a2)
		{
			return ((::RPG::Client::RogueTournPersonaLegendTitleRow*(*)(::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONALEGENDTITLEROW_CREATE_OFFSET))(a1, a2);
		}
	};
}
