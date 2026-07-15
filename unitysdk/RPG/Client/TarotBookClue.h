#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TarotBookClue_IServerAgent; }
namespace RPG::GameCore { class TarotBookClueRow; }
namespace System { class String; }

#define RPG_CLIENT_TAROTBOOKCLUE_CREATE_OFFSET UNITYSDK_OFFSET(0x197746E0)
#define RPG_CLIENT_TAROTBOOKCLUE_GETSDFFONTASSETPATH_OFFSET UNITYSDK_OFFSET(0x19774800)
#define RPG_CLIENT_TAROTBOOKCLUE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19774580)
#define RPG_CLIENT_TAROTBOOKCLUE_GET_ID_OFFSET UNITYSDK_OFFSET(0x19774530)
#define RPG_CLIENT_TAROTBOOKCLUE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19774620)
#define RPG_CLIENT_TAROTBOOKCLUE_GET_STYLE_OFFSET UNITYSDK_OFFSET(0x19774690)
#define RPG_CLIENT_TAROTBOOKCLUE__CTOR_OFFSET UNITYSDK_OFFSET(0x197747F0)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookClue_TypeDefinitionIndex = 65043;

	class TarotBookClue : public ::System::Object
	{
	public:
		::RPG::GameCore::TarotBookClueRow* _Meta; // 0x10
		::RPG::Client::TarotBookClue_IServerAgent* _ServerAgent; // 0x18

		::System::Void _ctor(::RPG::GameCore::TarotBookClueRow* a1, ::RPG::Client::TarotBookClue_IServerAgent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TarotBookClueRow*, ::RPG::Client::TarotBookClue_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCLUE__CTOR_OFFSET))(this, a1, a2);
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

		static ::RPG::Client::TarotBookClue* Create(::System::UInt32 a1, ::RPG::Client::TarotBookClue_IServerAgent* a2)
		{
			return ((::RPG::Client::TarotBookClue*(*)(::System::UInt32, ::RPG::Client::TarotBookClue_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCLUE_CREATE_OFFSET))(a1, a2);
		}

		::System::String* GetSDFFontAssetPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCLUE_GETSDFFONTASSETPATH_OFFSET))(this);
		}
	};
}
