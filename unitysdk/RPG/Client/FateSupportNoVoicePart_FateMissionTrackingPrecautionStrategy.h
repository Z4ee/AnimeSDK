#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_FATESUPPORTNOVOICEPART_FATEMISSIONTRACKINGPRECAUTIONSTRATEGY_TRYCHECK_OFFSET UNITYSDK_OFFSET(0xA361E50)
#define RPG_CLIENT_FATESUPPORTNOVOICEPART_FATEMISSIONTRACKINGPRECAUTIONSTRATEGY__CTOR_OFFSET UNITYSDK_OFFSET(0xA361870)

namespace RPG::Client
{
	inline static constexpr unsigned int FateSupportNoVoicePart_FateMissionTrackingPrecautionStrategy_TypeDefinitionIndex = 59028;

	class FateSupportNoVoicePart_FateMissionTrackingPrecautionStrategy : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART_FATEMISSIONTRACKINGPRECAUTIONSTRATEGY__CTOR_OFFSET))(this);
		}

		::System::Boolean TryCheck(::System::UInt32 missionID, ::System::Action* onApprove, ::System::Action* onReject)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART_FATEMISSIONTRACKINGPRECAUTIONSTRATEGY_TRYCHECK_OFFSET))(this, missionID, onApprove, onReject);
		}
	};
}
