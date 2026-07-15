#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MarbleBattleSealData; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MARBLEBATTLESTARTACTIONAGAINNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A87D5E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBattleStartActionAgainNotify_TypeDefinitionIndex = 62891;

	class MarbleBattleStartActionAgainNotify : public ::System::Object
	{
	public:
		::System::Action* Callback; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::MarbleBattleSealData*>* BattleSeals; // 0x18

		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLESTARTACTIONAGAINNOTIFY__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
