#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_952;
namespace RPG::Client { class GridFightAssistantMessage; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTASSISTANT_BOUGHTEXP_OFFSET UNITYSDK_OFFSET(0xD0CB360)
#define RPG_CLIENT_GRIDFIGHTASSISTANT_GETALLMESSAGE_OFFSET UNITYSDK_OFFSET(0xD0CBAC0)
#define RPG_CLIENT_GRIDFIGHTASSISTANT_INIT_OFFSET UNITYSDK_OFFSET(0xD0CB6E0)
#define RPG_CLIENT_GRIDFIGHTASSISTANT_TICKROUND_OFFSET UNITYSDK_OFFSET(0xD0CB900)
#define RPG_CLIENT_GRIDFIGHTASSISTANT_USEDEQUIP_OFFSET UNITYSDK_OFFSET(0xD0CB520)
#define RPG_CLIENT_GRIDFIGHTASSISTANT_USEDORB_OFFSET UNITYSDK_OFFSET(0xD0CB1A0)
#define RPG_CLIENT_GRIDFIGHTASSISTANT__CTOR_OFFSET UNITYSDK_OFFSET(0xD0CCB70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAssistant_TypeDefinitionIndex = 64365;

	class GridFightAssistant : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_952*>* _Assistants; // 0x10
		::System::UInt32 AssistantTimeInMs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT__CTOR_OFFSET))(this);
		}

		::System::Void UsedOrb()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT_USEDORB_OFFSET))(this);
		}

		::System::Void BoughtExp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT_BOUGHTEXP_OFFSET))(this);
		}

		::System::Void UsedEquip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT_USEDEQUIP_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT_INIT_OFFSET))(this);
		}

		::System::Void TickRound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT_TICKROUND_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightAssistantMessage*>* GetAllMessage()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightAssistantMessage*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT_GETALLMESSAGE_OFFSET))(this);
		}
	};
}
