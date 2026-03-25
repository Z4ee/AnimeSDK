#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DrinkMakerBarDrink; }
namespace RPG::GameCore { class DrinkMakerChallengeRow; }

#define RPG_CLIENT_DRINKMAKERBARCHALLENGE_CREATE_OFFSET UNITYSDK_OFFSET(0x94A7FF0)
#define RPG_CLIENT_DRINKMAKERBARCHALLENGE_GET_DRINK_OFFSET UNITYSDK_OFFSET(0x94A86D0)
#define RPG_CLIENT_DRINKMAKERBARCHALLENGE_GET_ID_OFFSET UNITYSDK_OFFSET(0x94A86B0)
#define RPG_CLIENT_DRINKMAKERBARCHALLENGE_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x94A86F0)
#define RPG_CLIENT_DRINKMAKERBARCHALLENGE_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x94A8710)
#define RPG_CLIENT_DRINKMAKERBARCHALLENGE_GET_ROW_OFFSET UNITYSDK_OFFSET(0x94A8170)
#define RPG_CLIENT_DRINKMAKERBARCHALLENGE_SET_DRINK_OFFSET UNITYSDK_OFFSET(0x94A86E0)
#define RPG_CLIENT_DRINKMAKERBARCHALLENGE_SET_ID_OFFSET UNITYSDK_OFFSET(0x94A86C0)
#define RPG_CLIENT_DRINKMAKERBARCHALLENGE_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x94A8700)
#define RPG_CLIENT_DRINKMAKERBARCHALLENGE_UPDATEFINISHSTATE_OFFSET UNITYSDK_OFFSET(0x94A82F0)
#define RPG_CLIENT_DRINKMAKERBARCHALLENGE__CTOR_OFFSET UNITYSDK_OFFSET(0x94A8160)
#define RPG_CLIENT_DRINKMAKERBARCHALLENGE__ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x94A8340)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBarChallenge_TypeDefinitionIndex = 51636;

	class DrinkMakerBarChallenge : public ::System::Object
	{
	public:
		::RPG::Client::DrinkMakerBarDrink* _Drink_k__BackingField; // 0x10
		::System::Boolean _IsFinish_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARCHALLENGE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DrinkMakerBarChallenge* Create(::System::UInt32 challengID)
		{
			return ((::RPG::Client::DrinkMakerBarChallenge*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARCHALLENGE_CREATE_OFFSET))(challengID);
		}

		::System::Void UpdateFinishState(::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARCHALLENGE_UPDATEFINISHSTATE_OFFSET))(this, isFinish);
		}

		::System::Boolean _IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARCHALLENGE__ISUNLOCK_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARCHALLENGE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARCHALLENGE_SET_ID_OFFSET))(this, value);
		}

		::RPG::Client::DrinkMakerBarDrink* get_Drink()
		{
			return ((::RPG::Client::DrinkMakerBarDrink*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARCHALLENGE_GET_DRINK_OFFSET))(this);
		}

		::System::Void set_Drink(::RPG::Client::DrinkMakerBarDrink* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBarDrink*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARCHALLENGE_SET_DRINK_OFFSET))(this, value);
		}

		::RPG::GameCore::DrinkMakerChallengeRow* get_Row()
		{
			return ((::RPG::GameCore::DrinkMakerChallengeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARCHALLENGE_GET_ROW_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARCHALLENGE_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARCHALLENGE_SET_ISFINISH_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARCHALLENGE_GET_ISUNLOCK_OFFSET))(this);
		}
	};
}
