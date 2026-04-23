#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_716;
namespace RPG::Client { class GridFightAssistantMessage; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTASSISTANT_BOUGHTEXP_OFFSET UNITYSDK_OFFSET(0xA443090)
#define RPG_CLIENT_GRIDFIGHTASSISTANT_GETALLMESSAGE_OFFSET UNITYSDK_OFFSET(0xA443590)
#define RPG_CLIENT_GRIDFIGHTASSISTANT_INIT_OFFSET UNITYSDK_OFFSET(0xA4432F0)
#define RPG_CLIENT_GRIDFIGHTASSISTANT_TICKROUND_OFFSET UNITYSDK_OFFSET(0xA443460)
#define RPG_CLIENT_GRIDFIGHTASSISTANT_USEDEQUIP_OFFSET UNITYSDK_OFFSET(0xA4431C0)
#define RPG_CLIENT_GRIDFIGHTASSISTANT_USEDORB_OFFSET UNITYSDK_OFFSET(0xA442F60)
#define RPG_CLIENT_GRIDFIGHTASSISTANT__CTOR_OFFSET UNITYSDK_OFFSET(0xA444120)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAssistant_TypeDefinitionIndex = 59220;

	class GridFightAssistant : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_716*>* _Assistants; // 0x10
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
