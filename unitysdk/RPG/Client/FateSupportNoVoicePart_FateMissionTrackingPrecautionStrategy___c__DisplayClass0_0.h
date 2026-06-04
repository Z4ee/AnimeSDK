#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_FATESUPPORTNOVOICEPART_FATEMISSIONTRACKINGPRECAUTIONSTRATEGY___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB9B5F40)
#define RPG_CLIENT_FATESUPPORTNOVOICEPART_FATEMISSIONTRACKINGPRECAUTIONSTRATEGY___C__DISPLAYCLASS0_0__TRYCHECK_B__0_OFFSET UNITYSDK_OFFSET(0xB9B5F50)

namespace RPG::Client
{
	inline static constexpr unsigned int FateSupportNoVoicePart_FateMissionTrackingPrecautionStrategy___c__DisplayClass0_0_TypeDefinitionIndex = 59959;

	class FateSupportNoVoicePart_FateMissionTrackingPrecautionStrategy___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Action* onApprove; // 0x10
		::System::Action* onReject; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART_FATEMISSIONTRACKINGPRECAUTIONSTRATEGY___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryCheck_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART_FATEMISSIONTRACKINGPRECAUTIONSTRATEGY___C__DISPLAYCLASS0_0__TRYCHECK_B__0_OFFSET))(this, a1);
		}
	};
}
