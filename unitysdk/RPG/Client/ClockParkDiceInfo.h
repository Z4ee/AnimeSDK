#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ClockParkDiceItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_64C1E63642C4A2DF;

#define RPG_CLIENT_CLOCKPARKDICEINFO_ADDDICEANDGET_OFFSET UNITYSDK_OFFSET(0x1BC0DD50)
#define RPG_CLIENT_CLOCKPARKDICEINFO_ADDDICE_OFFSET UNITYSDK_OFFSET(0x1BC0DDE0)
#define RPG_CLIENT_CLOCKPARKDICEINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BC0DBD0)
#define RPG_CLIENT_CLOCKPARKDICEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BC0D930)
#define RPG_CLIENT_CLOCKPARKDICEINFO_GET_DICEITEMLIST_OFFSET UNITYSDK_OFFSET(0x1BC0DF00)
#define RPG_CLIENT_CLOCKPARKDICEINFO_ISALLDICEINSLOT_OFFSET UNITYSDK_OFFSET(0x1BC0D9E0)
#define RPG_CLIENT_CLOCKPARKDICEINFO_SET_DICEITEMLIST_OFFSET UNITYSDK_OFFSET(0x1BC0DF10)
#define RPG_CLIENT_CLOCKPARKDICEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC0DF20)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkDiceInfo_TypeDefinitionIndex = 61584;

	class ClockParkDiceInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ClockParkDiceItem*>* _DiceItemList_k__BackingField; // 0x10
		::Class_1_64C1E63642C4A2DF<::RPG::Client::ClockParkDiceItem*>* _DiceItemPool; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKDICEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKDICEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsAllDiceInSlot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKDICEINFO_ISALLDICEINSLOT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKDICEINFO_CLEAR_OFFSET))(this);
		}

		::RPG::Client::ClockParkDiceItem* AddDiceAndGet(::System::UInt32 a1)
		{
			return ((::RPG::Client::ClockParkDiceItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKDICEINFO_ADDDICEANDGET_OFFSET))(this, a1);
		}

		::System::Void AddDice(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKDICEINFO_ADDDICE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ClockParkDiceItem*>* get_DiceItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ClockParkDiceItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKDICEINFO_GET_DICEITEMLIST_OFFSET))(this);
		}

		::System::Void set_DiceItemList(::System::Collections::Generic::List_1<::RPG::Client::ClockParkDiceItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkDiceItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKDICEINFO_SET_DICEITEMLIST_OFFSET))(this, a1);
		}
	};
}
