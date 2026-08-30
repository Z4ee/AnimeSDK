#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_17.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattlePassRewardPointData; }
namespace RPG::GameCore { class BattlePassLevelRewardRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLEPASSLEVELREWARDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x19F72190)
#define RPG_CLIENT_BATTLEPASSLEVELREWARDDATA_GETREWARDIDS_OFFSET UNITYSDK_OFFSET(0x19F71930)
#define RPG_CLIENT_BATTLEPASSLEVELREWARDDATA_HASAVAILABLE_OFFSET UNITYSDK_OFFSET(0x19F716C0)
#define RPG_CLIENT_BATTLEPASSLEVELREWARDDATA_TRYGETOPTIONPOINT_OFFSET UNITYSDK_OFFSET(0x19F71C50)
#define RPG_CLIENT_BATTLEPASSLEVELREWARDDATA_UPDATEREWARDSTATUS_OFFSET UNITYSDK_OFFSET(0x19F71DF0)
#define RPG_CLIENT_BATTLEPASSLEVELREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19F725D0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattlePassLevelRewardData_TypeDefinitionIndex = 62958;

	class BattlePassLevelRewardData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BattlePassRewardPointData*>* PaidRewardPoints; // 0x10
		::RPG::Client::BattlePassRewardPointData* FreeRewardPoint; // 0x18
		::System::UInt32 Level; // 0x20
		::System::Boolean IsSpecial; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSLEVELREWARDDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean HasAvailable(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSLEVELREWARDDATA_HASAVAILABLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetRewardIDs(::Enum_3_DB663931210BBC27_17 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::Enum_3_DB663931210BBC27_17))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSLEVELREWARDDATA_GETREWARDIDS_OFFSET))(this, a1);
		}

		::System::Boolean TryGetOptionPoint(::RPG::Client::BattlePassRewardPointData*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BattlePassRewardPointData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSLEVELREWARDDATA_TRYGETOPTIONPOINT_OFFSET))(this, a1);
		}

		::System::Void UpdateRewardStatus(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSLEVELREWARDDATA_UPDATEREWARDSTATUS_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::Client::BattlePassLevelRewardData* Create(::RPG::GameCore::BattlePassLevelRewardRow* a1)
		{
			return ((::RPG::Client::BattlePassLevelRewardData*(*)(::RPG::GameCore::BattlePassLevelRewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSLEVELREWARDDATA_CREATE_OFFSET))(a1);
		}
	};
}
