#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class Booklet; }
namespace RPG::Client { class BookletLuaPanelParam; }
namespace RPG::Client { class IBookletView; }
namespace RPG::Client { class UIController; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_TAROTBOOKHELPER_DESTROYVIEW_OFFSET UNITYSDK_OFFSET(0xA54F8B0)
#define RPG_CLIENT_TAROTBOOKHELPER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xA54F5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookHelper_TypeDefinitionIndex = 59367;

	class TarotBookHelper : public ::System::Object
	{
	public:
		static ::System::Void InitView(::RPG::Client::UIController* controller, ::RPG::Client::IBookletView* view, ::RPG::Client::Booklet* context, ::System::Action_1<::System::Int32>* messageReceiver, ::System::Action_1<::RPG::Client::BookletLuaPanelParam*>* panelCreator, ::System::Action_1<::System::UInt32>* panelDestroyer)
		{
			return ((::System::Void(*)(::RPG::Client::UIController*, ::RPG::Client::IBookletView*, ::RPG::Client::Booklet*, ::System::Action_1<::System::Int32>*, ::System::Action_1<::RPG::Client::BookletLuaPanelParam*>*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKHELPER_INITVIEW_OFFSET))(controller, view, context, messageReceiver, panelCreator, panelDestroyer);
		}

		static ::System::Void DestroyView(::RPG::Client::IBookletView* view)
		{
			return ((::System::Void(*)(::RPG::Client::IBookletView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKHELPER_DESTROYVIEW_OFFSET))(view);
		}
	};
}
