#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateHouguSelectBgType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateHouguDataItem; }
namespace RPG::GameCore { class BattleSelectHouguDialogInitParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_CONFIRMHOUGUSELECTION_OFFSET UNITYSDK_OFFSET(0xB9A4190)
#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9A4100)
#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_GET_BGTYPE_OFFSET UNITYSDK_OFFSET(0xB9A43C0)
#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_GET_ISINBATTLE_OFFSET UNITYSDK_OFFSET(0xB9A43B0)
#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_GET_SELECTHOUGUDATA_OFFSET UNITYSDK_OFFSET(0xB9A4390)
#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_SET_SELECTHOUGUDATA_OFFSET UNITYSDK_OFFSET(0xB9A43A0)
#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB9A3DB0)
#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION__GENERATEBGTYPE_OFFSET UNITYSDK_OFFSET(0xB9A4070)
#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION__INITSELECTHOUGULIST_OFFSET UNITYSDK_OFFSET(0xB9A3E10)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHouguBattleSelectAction_TypeDefinitionIndex = 59881;

	class FateHouguBattleSelectAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>* _SelectHouguData_k__BackingField; // 0x10
		::RPG::Client::FateHouguSelectBgType _BgType; // 0x18

		::System::Void _ctor(::RPG::GameCore::BattleSelectHouguDialogInitParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleSelectHouguDialogInitParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUBATTLESELECTACTION__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_DISPOSE_OFFSET))(this);
		}

		::System::Void ConfirmHouguSelection(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_CONFIRMHOUGUSELECTION_OFFSET))(this, a1);
		}

		::System::Void _InitSelectHouguList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUBATTLESELECTACTION__INITSELECTHOUGULIST_OFFSET))(this, a1);
		}

		::System::Void _GenerateBgType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUBATTLESELECTACTION__GENERATEBGTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>* get_SelectHouguData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_GET_SELECTHOUGUDATA_OFFSET))(this);
		}

		::System::Void set_SelectHouguData(::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_SET_SELECTHOUGUDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_GET_ISINBATTLE_OFFSET))(this);
		}

		::RPG::Client::FateHouguSelectBgType get_BgType()
		{
			return ((::RPG::Client::FateHouguSelectBgType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_GET_BGTYPE_OFFSET))(this);
		}
	};
}
