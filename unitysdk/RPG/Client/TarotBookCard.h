#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TarotBookCard_IServerAgent; }
namespace RPG::GameCore { class TarotBookCardRow; }
namespace System { class String; }

#define RPG_CLIENT_TAROTBOOKCARD_CREATE_OFFSET UNITYSDK_OFFSET(0xC9D8640)
#define RPG_CLIENT_TAROTBOOKCARD_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xC9D8040)
#define RPG_CLIENT_TAROTBOOKCARD_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xC9D7FE0)
#define RPG_CLIENT_TAROTBOOKCARD_GET_DESC_OFFSET UNITYSDK_OFFSET(0xC9D8060)
#define RPG_CLIENT_TAROTBOOKCARD_GET_ID_OFFSET UNITYSDK_OFFSET(0xC9D7FC0)
#define RPG_CLIENT_TAROTBOOKCARD_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xC9D8220)
#define RPG_CLIENT_TAROTBOOKCARD_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC9D83D0)
#define RPG_CLIENT_TAROTBOOKCARD_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xC9D8540)
#define RPG_CLIENT_TAROTBOOKCARD__CTOR_OFFSET UNITYSDK_OFFSET(0xC9D8750)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookCard_TypeDefinitionIndex = 63669;

	class TarotBookCard : public ::System::Object
	{
	public:
		::RPG::Client::TarotBookCard_IServerAgent* _ServerAgent; // 0x10
		::RPG::GameCore::TarotBookCardRow* _Meta; // 0x18

		::System::Void _ctor(::RPG::GameCore::TarotBookCardRow* a1, ::RPG::Client::TarotBookCard_IServerAgent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TarotBookCardRow*, ::RPG::Client::TarotBookCard_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCARD__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCARD_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCARD_GET_COUNT_OFFSET))(this);
		}

		::System::UInt32 get_CharacterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCARD_GET_CHARACTERID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCARD_GET_DESC_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCARD_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCARD_GET_LEVEL_OFFSET))(this);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCARD_GET_PREFABPATH_OFFSET))(this);
		}

		static ::RPG::Client::TarotBookCard* Create(::System::UInt32 a1, ::RPG::Client::TarotBookCard_IServerAgent* a2)
		{
			return ((::RPG::Client::TarotBookCard*(*)(::System::UInt32, ::RPG::Client::TarotBookCard_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCARD_CREATE_OFFSET))(a1, a2);
		}
	};
}
