#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightMonsterStageData.h"

class Class_1_B3697E288C342A7B;
namespace RPG::Client { class GridFightBonusDropData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTMONSTERBATTLESTAGEDATA_GET_BONUSDROPLIST_OFFSET UNITYSDK_OFFSET(0xA50E9B0)
#define RPG_CLIENT_GRIDFIGHTMONSTERBATTLESTAGEDATA_GET_EXTRADIFFICULTY_OFFSET UNITYSDK_OFFSET(0xA50E9F0)
#define RPG_CLIENT_GRIDFIGHTMONSTERBATTLESTAGEDATA_GET_OPTIONID_OFFSET UNITYSDK_OFFSET(0xA50E9D0)
#define RPG_CLIENT_GRIDFIGHTMONSTERBATTLESTAGEDATA_SET_BONUSDROPLIST_OFFSET UNITYSDK_OFFSET(0xA50E9C0)
#define RPG_CLIENT_GRIDFIGHTMONSTERBATTLESTAGEDATA_SET_OPTIONID_OFFSET UNITYSDK_OFFSET(0xA50E9E0)
#define RPG_CLIENT_GRIDFIGHTMONSTERBATTLESTAGEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA50D2A0)
#define RPG_CLIENT_GRIDFIGHTMONSTERBATTLESTAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA50EA00)
#define RPG_CLIENT_GRIDFIGHTMONSTERBATTLESTAGEDATA__GETEXTRADIFFICULTY_OFFSET UNITYSDK_OFFSET(0xA50E730)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMonsterBattleStageData_TypeDefinitionIndex = 59899;

	class GridFightMonsterBattleStageData : public ::RPG::Client::GridFightMonsterStageData
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>* _BonusDropList_k__BackingField; // 0x30
		::System::UInt32 _OptionID_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERBATTLESTAGEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_B3697E288C342A7B* info, ::System::UInt32 monsterLevel, ::System::UInt32 campID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B3697E288C342A7B*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERBATTLESTAGEDATA_SYNC_OFFSET))(this, info, monsterLevel, campID);
		}

		::System::UInt32 _GetExtraDifficulty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERBATTLESTAGEDATA__GETEXTRADIFFICULTY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>* get_BonusDropList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERBATTLESTAGEDATA_GET_BONUSDROPLIST_OFFSET))(this);
		}

		::System::Void set_BonusDropList(::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERBATTLESTAGEDATA_SET_BONUSDROPLIST_OFFSET))(this, value);
		}

		::System::UInt32 get_OptionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERBATTLESTAGEDATA_GET_OPTIONID_OFFSET))(this);
		}

		::System::Void set_OptionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERBATTLESTAGEDATA_SET_OPTIONID_OFFSET))(this, value);
		}

		::System::UInt32 get_ExtraDifficulty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERBATTLESTAGEDATA_GET_EXTRADIFFICULTY_OFFSET))(this);
		}
	};
}
