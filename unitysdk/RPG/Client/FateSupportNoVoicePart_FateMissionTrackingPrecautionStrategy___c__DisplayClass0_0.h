#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_FATESUPPORTNOVOICEPART_FATEMISSIONTRACKINGPRECAUTIONSTRATEGY___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA361F60)
#define RPG_CLIENT_FATESUPPORTNOVOICEPART_FATEMISSIONTRACKINGPRECAUTIONSTRATEGY___C__DISPLAYCLASS0_0__TRYCHECK_B__0_OFFSET UNITYSDK_OFFSET(0xA361F70)

namespace RPG::Client
{
	inline static constexpr unsigned int FateSupportNoVoicePart_FateMissionTrackingPrecautionStrategy___c__DisplayClass0_0_TypeDefinitionIndex = 59029;

	class FateSupportNoVoicePart_FateMissionTrackingPrecautionStrategy___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Action* onApprove; // 0x10
		::System::Action* onReject; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART_FATEMISSIONTRACKINGPRECAUTIONSTRATEGY___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryCheck_b__0(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART_FATEMISSIONTRACKINGPRECAUTIONSTRATEGY___C__DISPLAYCLASS0_0__TRYCHECK_B__0_OFFSET))(this, isOk);
		}
	};
}
