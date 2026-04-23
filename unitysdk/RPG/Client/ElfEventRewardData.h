#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantSuperEventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RestaurantEventRewardRow; }
namespace System { class String; }

#define RPG_CLIENT_ELFEVENTREWARDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA223EC0)
#define RPG_CLIENT_ELFEVENTREWARDDATA_GET_BUFFNAME_OFFSET UNITYSDK_OFFSET(0xA224130)
#define RPG_CLIENT_ELFEVENTREWARDDATA_GET_DYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0xA2241A0)
#define RPG_CLIENT_ELFEVENTREWARDDATA_GET_EVENTDESC_OFFSET UNITYSDK_OFFSET(0xA223F70)
#define RPG_CLIENT_ELFEVENTREWARDDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA223F50)
#define RPG_CLIENT_ELFEVENTREWARDDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xA224050)
#define RPG_CLIENT_ELFEVENTREWARDDATA_GET_SUPEREVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA2240C0)
#define RPG_CLIENT_ELFEVENTREWARDDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA223FF0)
#define RPG_CLIENT_ELFEVENTREWARDDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xA223F60)
#define RPG_CLIENT_ELFEVENTREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA223F40)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfEventRewardData_TypeDefinitionIndex = 58662;

	class ElfEventRewardData : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTREWARDDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfEventRewardData* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::ElfEventRewardData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTREWARDDATA_CREATE_OFFSET))(id);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTREWARDDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTREWARDDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_EventDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTREWARDDATA_GET_EVENTDESC_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTREWARDDATA_GET_REWARDID_OFFSET))(this);
		}

		::RPG::GameCore::RestaurantSuperEventType get_SuperEventType()
		{
			return ((::RPG::GameCore::RestaurantSuperEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTREWARDDATA_GET_SUPEREVENTTYPE_OFFSET))(this);
		}

		::System::String* get_BuffName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTREWARDDATA_GET_BUFFNAME_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* get_DynamicValues()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTREWARDDATA_GET_DYNAMICVALUES_OFFSET))(this);
		}

		::RPG::GameCore::RestaurantEventRewardRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantEventRewardRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTREWARDDATA_GET__ROW_OFFSET))(this);
		}
	};
}
