#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateHouguSelectBgType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateHouguDataItem; }
namespace RPG::GameCore { class BattleSelectHouguDialogInitParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_CONFIRMHOUGUSELECTION_OFFSET UNITYSDK_OFFSET(0xA351F60)
#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA351EF0)
#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_GET_BGTYPE_OFFSET UNITYSDK_OFFSET(0xA352180)
#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_GET_ISINBATTLE_OFFSET UNITYSDK_OFFSET(0xA352170)
#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_GET_SELECTHOUGUDATA_OFFSET UNITYSDK_OFFSET(0xA352150)
#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_SET_SELECTHOUGUDATA_OFFSET UNITYSDK_OFFSET(0xA352160)
#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA351BE0)
#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION__GENERATEBGTYPE_OFFSET UNITYSDK_OFFSET(0xA351E50)
#define RPG_CLIENT_FATEHOUGUBATTLESELECTACTION__INITSELECTHOUGULIST_OFFSET UNITYSDK_OFFSET(0xA351C40)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHouguBattleSelectAction_TypeDefinitionIndex = 58951;

	class FateHouguBattleSelectAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>* _SelectHouguData_k__BackingField; // 0x10
		::RPG::Client::FateHouguSelectBgType _BgType; // 0x18

		::System::Void _ctor(::RPG::GameCore::BattleSelectHouguDialogInitParam* initParam)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleSelectHouguDialogInitParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUBATTLESELECTACTION__CTOR_OFFSET))(this, initParam);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_DISPOSE_OFFSET))(this);
		}

		::System::Void ConfirmHouguSelection(::System::UInt32 houguID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_CONFIRMHOUGUSELECTION_OFFSET))(this, houguID);
		}

		::System::Void _InitSelectHouguList(::System::Collections::Generic::List_1<::System::UInt32>* houguIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUBATTLESELECTACTION__INITSELECTHOUGULIST_OFFSET))(this, houguIDList);
		}

		::System::Void _GenerateBgType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUBATTLESELECTACTION__GENERATEBGTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>* get_SelectHouguData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_GET_SELECTHOUGUDATA_OFFSET))(this);
		}

		::System::Void set_SelectHouguData(::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUBATTLESELECTACTION_SET_SELECTHOUGUDATA_OFFSET))(this, value);
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
