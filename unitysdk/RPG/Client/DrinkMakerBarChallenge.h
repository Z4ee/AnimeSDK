#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DrinkMakerBarDrink; }
namespace RPG::GameCore { class DrinkMakerChallengeRow; }

#define RPG_CLIENT_DRINKMAKERBARCHALLENGE_CREATE_OFFSET UNITYSDK_OFFSET(0x1B8E41F0)
#define RPG_CLIENT_DRINKMAKERBARCHALLENGE_GET_DRINK_OFFSET UNITYSDK_OFFSET(0x1B8E4910)
#define RPG_CLIENT_DRINKMAKERBARCHALLENGE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B8E48F0)
#define RPG_CLIENT_DRINKMAKERBARCHALLENGE_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1B8E4930)
#define RPG_CLIENT_DRINKMAKERBARCHALLENGE_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1B8E4950)
#define RPG_CLIENT_DRINKMAKERBARCHALLENGE_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1B8E4360)
#define RPG_CLIENT_DRINKMAKERBARCHALLENGE_SET_DRINK_OFFSET UNITYSDK_OFFSET(0x1B8E4920)
#define RPG_CLIENT_DRINKMAKERBARCHALLENGE_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B8E4900)
#define RPG_CLIENT_DRINKMAKERBARCHALLENGE_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1B8E4940)
#define RPG_CLIENT_DRINKMAKERBARCHALLENGE_UPDATEFINISHSTATE_OFFSET UNITYSDK_OFFSET(0x1B8E44E0)
#define RPG_CLIENT_DRINKMAKERBARCHALLENGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8E4350)
#define RPG_CLIENT_DRINKMAKERBARCHALLENGE__ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1B8E4530)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBarChallenge_TypeDefinitionIndex = 63651;

	class DrinkMakerBarChallenge : public ::System::Object
	{
	public:
		::RPG::Client::DrinkMakerBarDrink* _Drink_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18
		::System::Boolean _IsFinish_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARCHALLENGE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DrinkMakerBarChallenge* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerBarChallenge*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARCHALLENGE_CREATE_OFFSET))(a1);
		}

		::System::Void UpdateFinishState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARCHALLENGE_UPDATEFINISHSTATE_OFFSET))(this, a1);
		}

		::System::Boolean _IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARCHALLENGE__ISUNLOCK_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARCHALLENGE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARCHALLENGE_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerBarDrink* get_Drink()
		{
			return ((::RPG::Client::DrinkMakerBarDrink*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARCHALLENGE_GET_DRINK_OFFSET))(this);
		}

		::System::Void set_Drink(::RPG::Client::DrinkMakerBarDrink* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBarDrink*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARCHALLENGE_SET_DRINK_OFFSET))(this, a1);
		}

		::RPG::GameCore::DrinkMakerChallengeRow* get_Row()
		{
			return ((::RPG::GameCore::DrinkMakerChallengeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARCHALLENGE_GET_ROW_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARCHALLENGE_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARCHALLENGE_SET_ISFINISH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARCHALLENGE_GET_ISUNLOCK_OFFSET))(this);
		}
	};
}
