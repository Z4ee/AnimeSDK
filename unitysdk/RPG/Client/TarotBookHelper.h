#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class Booklet; }
namespace RPG::Client { class BookletLuaPanelParam; }
namespace RPG::Client { class IBookletView; }
namespace RPG::Client { class UIController; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_TAROTBOOKHELPER_DESTROYVIEW_OFFSET UNITYSDK_OFFSET(0xE16DF60)
#define RPG_CLIENT_TAROTBOOKHELPER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xE16DC20)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookHelper_TypeDefinitionIndex = 72387;

	class TarotBookHelper : public ::System::Object
	{
	public:
		static ::System::Void InitView(::RPG::Client::UIController* a1, ::RPG::Client::IBookletView* a2, ::RPG::Client::Booklet* a3, ::System::Action_1<::System::Int32>* a4, ::System::Action_1<::RPG::Client::BookletLuaPanelParam*>* a5, ::System::Action_1<::System::UInt32>* a6)
		{
			return ((::System::Void(*)(::RPG::Client::UIController*, ::RPG::Client::IBookletView*, ::RPG::Client::Booklet*, ::System::Action_1<::System::Int32>*, ::System::Action_1<::RPG::Client::BookletLuaPanelParam*>*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKHELPER_INITVIEW_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void DestroyView(::RPG::Client::IBookletView* a1)
		{
			return ((::System::Void(*)(::RPG::Client::IBookletView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKHELPER_DESTROYVIEW_OFFSET))(a1);
		}
	};
}
