#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlayerReturnExtraHcoinItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERRETURNEXTRAHCOINDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1AE11EC0)
#define RPG_CLIENT_PLAYERRETURNEXTRAHCOINDATA_GETUIPROGRESS_OFFSET UNITYSDK_OFFSET(0x1AE12330)
#define RPG_CLIENT_PLAYERRETURNEXTRAHCOINDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1AE12660)
#define RPG_CLIENT_PLAYERRETURNEXTRAHCOINDATA_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1AE12670)
#define RPG_CLIENT_PLAYERRETURNEXTRAHCOINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE11F50)
#define RPG_CLIENT_PLAYERRETURNEXTRAHCOINDATA__GETTOTALUIRATIOCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE12470)
#define RPG_CLIENT_PLAYERRETURNEXTRAHCOINDATA__INIT_OFFSET UNITYSDK_OFFSET(0x1AE11F90)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerReturnExtraHcoinData_TypeDefinitionIndex = 61963;

	class PlayerReturnExtraHcoinData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PlayerReturnExtraHcoinItemData*>* PlayerReturnExtraHcoinItemDataList; // 0x10
		::System::UInt32 _ConfigID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNEXTRAHCOINDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlayerReturnExtraHcoinData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::PlayerReturnExtraHcoinData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNEXTRAHCOINDATA_CREATE_OFFSET))(a1);
		}

		::System::Single GetUIProgress(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNEXTRAHCOINDATA_GETUIPROGRESS_OFFSET))(this, a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNEXTRAHCOINDATA__INIT_OFFSET))(this);
		}

		::System::Single _GetTotalUIRatioCount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNEXTRAHCOINDATA__GETTOTALUIRATIOCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNEXTRAHCOINDATA_GET_CONFIGID_OFFSET))(this);
		}

		::System::Void set_ConfigID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNEXTRAHCOINDATA_SET_CONFIGID_OFFSET))(this, a1);
		}
	};
}
