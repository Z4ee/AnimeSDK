#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ItemList; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class RogueAeonData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FINISHAEONDIALOGUERESULT_CREATE_OFFSET UNITYSDK_OFFSET(0x18401910)
#define RPG_CLIENT_FINISHAEONDIALOGUERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x184019C0)

namespace RPG::Client
{
	inline static constexpr unsigned int FinishAeonDialogueResult_TypeDefinitionIndex = 64469;

	class FinishAeonDialogueResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* RewardItemList; // 0x10
		::RPG::Client::RogueAeonData* AeonData; // 0x18
		::System::UInt32 OldExp; // 0x20
		::System::UInt32 OldLevel; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINISHAEONDIALOGUERESULT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FinishAeonDialogueResult* Create(::RPG::Client::RogueAeonData* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::Proto::ItemList* a4)
		{
			return ((::RPG::Client::FinishAeonDialogueResult*(*)(::RPG::Client::RogueAeonData*, ::System::UInt32, ::System::UInt32, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINISHAEONDIALOGUERESULT_CREATE_OFFSET))(a1, a2, a3, a4);
		}
	};
}
