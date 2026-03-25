#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TarotWikiSubTitle; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TAROTWIKITIMELINE_ISNEW_OFFSET UNITYSDK_OFFSET(0xA560140)
#define RPG_CLIENT_TAROTWIKITIMELINE_MARKALLSEEN_OFFSET UNITYSDK_OFFSET(0xA55EF30)
#define RPG_CLIENT_TAROTWIKITIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0xA55EAF0)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotWikiTimeLine_TypeDefinitionIndex = 55568;

	class TarotWikiTimeLine : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TarotWikiSubTitle*>* SubTitleList; // 0x10
		::System::Single Progress; // 0x18
		::System::UInt32 SpecialType; // 0x1C
		::RPG::Client::TextID TitleTextID; // 0x20
		::System::UInt32 ID; // 0x30

		::System::Void _ctor(::System::UInt32 timeLineID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKITIMELINE__CTOR_OFFSET))(this, timeLineID);
		}

		::System::Boolean IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKITIMELINE_ISNEW_OFFSET))(this);
		}

		::System::Void MarkAllSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKITIMELINE_MARKALLSEEN_OFFSET))(this);
		}
	};
}
