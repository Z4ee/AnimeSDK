#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeak; }

#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_CREATE_OFFSET UNITYSDK_OFFSET(0x191E8B50)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_CHALLENGE_OFFSET UNITYSDK_OFFSET(0x191F8A40)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_ISOVERRIDE_OFFSET UNITYSDK_OFFSET(0x191F8AD0)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_NEWCOUNTOFFINISHEDTARGET_OFFSET UNITYSDK_OFFSET(0x191F8AB0)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_NEWUSEDTURN_OFFSET UNITYSDK_OFFSET(0x191F8A90)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_OLDCOUNTOFFINISHEDTARGET_OFFSET UNITYSDK_OFFSET(0x191F8A70)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_OLDUSEDTURN_OFFSET UNITYSDK_OFFSET(0x191F8A50)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_LOADOLDDATA_OFFSET UNITYSDK_OFFSET(0x191F8B00)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SETCONFIRMRESULT_OFFSET UNITYSDK_OFFSET(0x191F8B70)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SETNEWDATA_OFFSET UNITYSDK_OFFSET(0x191E8BE0)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SET_ISOVERRIDE_OFFSET UNITYSDK_OFFSET(0x191F8AE0)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SET_NEWCOUNTOFFINISHEDTARGET_OFFSET UNITYSDK_OFFSET(0x191F8AC0)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SET_NEWUSEDTURN_OFFSET UNITYSDK_OFFSET(0x191F8AA0)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SET_OLDCOUNTOFFINISHEDTARGET_OFFSET UNITYSDK_OFFSET(0x191F8A80)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SET_OLDUSEDTURN_OFFSET UNITYSDK_OFFSET(0x191F8A60)
#define RPG_CLIENT_CHALLENGESETTLECONFIRMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x191F8AF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeSettleConfirmation_TypeDefinitionIndex = 60415;

	class ChallengeSettleConfirmation : public ::System::Object
	{
	public:
		::RPG::Client::ChallengePeak* _Challenge_k__BackingField; // 0x10
		::System::UInt32 _OldUsedTurn_k__BackingField; // 0x18
		::System::Int32 _OldCountOfFinishedTarget_k__BackingField; // 0x1C
		::System::Boolean _IsOverride_k__BackingField; // 0x20
		::System::UInt32 _NewUsedTurn_k__BackingField; // 0x24
		::System::Int32 _NewCountOfFinishedTarget_k__BackingField; // 0x28

		::System::Void _ctor(::RPG::Client::ChallengePeak* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeak* get_Challenge()
		{
			return ((::RPG::Client::ChallengePeak*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_CHALLENGE_OFFSET))(this);
		}

		::System::UInt32 get_OldUsedTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_OLDUSEDTURN_OFFSET))(this);
		}

		::System::Void set_OldUsedTurn(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SET_OLDUSEDTURN_OFFSET))(this, a1);
		}

		::System::Int32 get_OldCountOfFinishedTarget()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_OLDCOUNTOFFINISHEDTARGET_OFFSET))(this);
		}

		::System::Void set_OldCountOfFinishedTarget(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SET_OLDCOUNTOFFINISHEDTARGET_OFFSET))(this, a1);
		}

		::System::UInt32 get_NewUsedTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_NEWUSEDTURN_OFFSET))(this);
		}

		::System::Void set_NewUsedTurn(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SET_NEWUSEDTURN_OFFSET))(this, a1);
		}

		::System::Int32 get_NewCountOfFinishedTarget()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_NEWCOUNTOFFINISHEDTARGET_OFFSET))(this);
		}

		::System::Void set_NewCountOfFinishedTarget(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SET_NEWCOUNTOFFINISHEDTARGET_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_GET_ISOVERRIDE_OFFSET))(this);
		}

		::System::Void set_IsOverride(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SET_ISOVERRIDE_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChallengeSettleConfirmation* Create(::RPG::Client::ChallengePeak* a1)
		{
			return ((::RPG::Client::ChallengeSettleConfirmation*(*)(::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_CREATE_OFFSET))(a1);
		}

		::System::Void SetNewData(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SETNEWDATA_OFFSET))(this, a1, a2);
		}

		::System::Void LoadOldData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_LOADOLDDATA_OFFSET))(this);
		}

		::System::Void SetConfirmResult(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESETTLECONFIRMATION_SETCONFIRMRESULT_OFFSET))(this, a1);
		}
	};
}
