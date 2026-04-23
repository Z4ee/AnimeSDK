#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeak; }

#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_CREATE_OFFSET UNITYSDK_OFFSET(0x9F5F9B0)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_CHALLENGE_OFFSET UNITYSDK_OFFSET(0x9F5F900)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_ISOVERRIDE_OFFSET UNITYSDK_OFFSET(0x9F5F990)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_NEWCOUNTOFFINISHEDTARGET_OFFSET UNITYSDK_OFFSET(0x9F5F970)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_NEWUSEDTURN_OFFSET UNITYSDK_OFFSET(0x9F5F950)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_OLDCOUNTOFFINISHEDTARGET_OFFSET UNITYSDK_OFFSET(0x9F5F930)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_OLDUSEDTURN_OFFSET UNITYSDK_OFFSET(0x9F5F910)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_LOADOLDDATA_OFFSET UNITYSDK_OFFSET(0x9F5FAB0)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SETCONFIRMRESULT_OFFSET UNITYSDK_OFFSET(0x9F5FB20)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SETNEWDATA_OFFSET UNITYSDK_OFFSET(0x9F5FA50)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SET_ISOVERRIDE_OFFSET UNITYSDK_OFFSET(0x9F5F9A0)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SET_NEWCOUNTOFFINISHEDTARGET_OFFSET UNITYSDK_OFFSET(0x9F5F980)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SET_NEWUSEDTURN_OFFSET UNITYSDK_OFFSET(0x9F5F960)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SET_OLDCOUNTOFFINISHEDTARGET_OFFSET UNITYSDK_OFFSET(0x9F5F940)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SET_OLDUSEDTURN_OFFSET UNITYSDK_OFFSET(0x9F5F920)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x9F5FA40)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeSettleConfirmation_TypeDefinitionIndex = 58214;

	class ChallengeSettleConfirmation : public ::System::Object
	{
	public:
		::RPG::Client::ChallengePeak* _Challenge_k__BackingField; // 0x10
		::System::UInt32 _OldUsedTurn_k__BackingField; // 0x18
		::System::Int32 _NewCountOfFinishedTarget_k__BackingField; // 0x1C
		::System::Int32 _OldCountOfFinishedTarget_k__BackingField; // 0x20
		::System::Boolean _IsOverride_k__BackingField; // 0x24
		::System::UInt32 _NewUsedTurn_k__BackingField; // 0x28

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
