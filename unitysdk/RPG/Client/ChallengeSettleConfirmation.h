#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeak; }

#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_CREATE_OFFSET UNITYSDK_OFFSET(0x92F4DD0)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_CHALLENGE_OFFSET UNITYSDK_OFFSET(0x92F4D20)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_ISOVERRIDE_OFFSET UNITYSDK_OFFSET(0x92F4DB0)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_NEWCOUNTOFFINISHEDTARGET_OFFSET UNITYSDK_OFFSET(0x92F4D90)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_NEWUSEDTURN_OFFSET UNITYSDK_OFFSET(0x92F4D70)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_OLDCOUNTOFFINISHEDTARGET_OFFSET UNITYSDK_OFFSET(0x92F4D50)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_OLDUSEDTURN_OFFSET UNITYSDK_OFFSET(0x92F4D30)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_LOADOLDDATA_OFFSET UNITYSDK_OFFSET(0x92F4ED0)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SETCONFIRMRESULT_OFFSET UNITYSDK_OFFSET(0x92F4F40)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SETNEWDATA_OFFSET UNITYSDK_OFFSET(0x92F4E70)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SET_ISOVERRIDE_OFFSET UNITYSDK_OFFSET(0x92F4DC0)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SET_NEWCOUNTOFFINISHEDTARGET_OFFSET UNITYSDK_OFFSET(0x92F4DA0)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SET_NEWUSEDTURN_OFFSET UNITYSDK_OFFSET(0x92F4D80)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SET_OLDCOUNTOFFINISHEDTARGET_OFFSET UNITYSDK_OFFSET(0x92F4D60)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SET_OLDUSEDTURN_OFFSET UNITYSDK_OFFSET(0x92F4D40)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x92F4E60)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeSettleConfirmation_TypeDefinitionIndex = 51290;

	class ChallengeSettleConfirmation : public ::System::Object
	{
	public:
		::RPG::Client::ChallengePeak* _Challenge_k__BackingField; // 0x10
		::System::Boolean _IsOverride_k__BackingField; // 0x18
		::System::UInt32 _NewUsedTurn_k__BackingField; // 0x1C
		::System::Int32 _NewCountOfFinishedTarget_k__BackingField; // 0x20
		::System::Int32 _OldCountOfFinishedTarget_k__BackingField; // 0x24
		::System::UInt32 _OldUsedTurn_k__BackingField; // 0x28

		::System::Void _ctor(::RPG::Client::ChallengePeak* challenge)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION__CTOR_OFFSET))(this, challenge);
		}

		::RPG::Client::ChallengePeak* get_Challenge()
		{
			return ((::RPG::Client::ChallengePeak*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_CHALLENGE_OFFSET))(this);
		}

		::System::UInt32 get_OldUsedTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_OLDUSEDTURN_OFFSET))(this);
		}

		::System::Void set_OldUsedTurn(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SET_OLDUSEDTURN_OFFSET))(this, value);
		}

		::System::Int32 get_OldCountOfFinishedTarget()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_OLDCOUNTOFFINISHEDTARGET_OFFSET))(this);
		}

		::System::Void set_OldCountOfFinishedTarget(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SET_OLDCOUNTOFFINISHEDTARGET_OFFSET))(this, value);
		}

		::System::UInt32 get_NewUsedTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_NEWUSEDTURN_OFFSET))(this);
		}

		::System::Void set_NewUsedTurn(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SET_NEWUSEDTURN_OFFSET))(this, value);
		}

		::System::Int32 get_NewCountOfFinishedTarget()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_NEWCOUNTOFFINISHEDTARGET_OFFSET))(this);
		}

		::System::Void set_NewCountOfFinishedTarget(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SET_NEWCOUNTOFFINISHEDTARGET_OFFSET))(this, value);
		}

		::System::Boolean get_IsOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_ISOVERRIDE_OFFSET))(this);
		}

		::System::Void set_IsOverride(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SET_ISOVERRIDE_OFFSET))(this, value);
		}

		static ::RPG::Client::ChallengeSettleConfirmation* Create(::RPG::Client::ChallengePeak* challenge)
		{
			return ((::RPG::Client::ChallengeSettleConfirmation*(*)(::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_CREATE_OFFSET))(challenge);
		}

		::System::Void SetNewData(::System::UInt32 usedTurn, ::System::Int32 countOfFinishedTarget)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SETNEWDATA_OFFSET))(this, usedTurn, countOfFinishedTarget);
		}

		::System::Void LoadOldData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_LOADOLDDATA_OFFSET))(this);
		}

		::System::Void SetConfirmResult(::System::Boolean isOverride)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SETCONFIRMRESULT_OFFSET))(this, isOverride);
		}
	};
}
