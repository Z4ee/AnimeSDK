#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TarotBookClue_IServerAgent; }
namespace RPG::GameCore { class TarotBookClueRow; }
namespace System { class String; }

#define RPG_CLIENT_TAROTBOOKCLUE_CREATE_OFFSET UNITYSDK_OFFSET(0xA54E380)
#define RPG_CLIENT_TAROTBOOKCLUE_GETSDFFONTASSETPATH_OFFSET UNITYSDK_OFFSET(0xA54E4A0)
#define RPG_CLIENT_TAROTBOOKCLUE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xA54E2D0)
#define RPG_CLIENT_TAROTBOOKCLUE_GET_ID_OFFSET UNITYSDK_OFFSET(0xA54E2B0)
#define RPG_CLIENT_TAROTBOOKCLUE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA54E330)
#define RPG_CLIENT_TAROTBOOKCLUE_GET_STYLE_OFFSET UNITYSDK_OFFSET(0xA54E360)
#define RPG_CLIENT_TAROTBOOKCLUE__CTOR_OFFSET UNITYSDK_OFFSET(0xA54E490)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookClue_TypeDefinitionIndex = 55547;

	class TarotBookClue : public ::System::Object
	{
	public:
		::RPG::Client::TarotBookClue_IServerAgent* _ServerAgent; // 0x10
		::RPG::GameCore::TarotBookClueRow* _Meta; // 0x18

		::System::Void _ctor(::RPG::GameCore::TarotBookClueRow* meta, ::RPG::Client::TarotBookClue_IServerAgent* serverAgent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TarotBookClueRow*, ::RPG::Client::TarotBookClue_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCLUE__CTOR_OFFSET))(this, meta, serverAgent);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCLUE_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCLUE_GET_COUNT_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCLUE_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_Style()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCLUE_GET_STYLE_OFFSET))(this);
		}

		static ::RPG::Client::TarotBookClue* Create(::System::UInt32 id, ::RPG::Client::TarotBookClue_IServerAgent* serverAgent)
		{
			return ((::RPG::Client::TarotBookClue*(*)(::System::UInt32, ::RPG::Client::TarotBookClue_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCLUE_CREATE_OFFSET))(id, serverAgent);
		}

		::System::String* GetSDFFontAssetPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCLUE_GETSDFFONTASSETPATH_OFFSET))(this);
		}
	};
}
