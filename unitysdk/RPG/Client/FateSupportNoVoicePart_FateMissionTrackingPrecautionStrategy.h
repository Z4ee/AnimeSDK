#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_FATESUPPORTNOVOICEPART_FATEMISSIONTRACKINGPRECAUTIONSTRATEGY_TRYCHECK_OFFSET UNITYSDK_OFFSET(0xD03BCD0)
#define RPG_CLIENT_FATESUPPORTNOVOICEPART_FATEMISSIONTRACKINGPRECAUTIONSTRATEGY__CTOR_OFFSET UNITYSDK_OFFSET(0xD03B6F0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateSupportNoVoicePart_FateMissionTrackingPrecautionStrategy_TypeDefinitionIndex = 64224;

	class FateSupportNoVoicePart_FateMissionTrackingPrecautionStrategy : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART_FATEMISSIONTRACKINGPRECAUTIONSTRATEGY__CTOR_OFFSET))(this);
		}

		::System::Boolean TryCheck(::System::UInt32 a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART_FATEMISSIONTRACKINGPRECAUTIONSTRATEGY_TRYCHECK_OFFSET))(this, a1, a2, a3);
		}
	};
}
