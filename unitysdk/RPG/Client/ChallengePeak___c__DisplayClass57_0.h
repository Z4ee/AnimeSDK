#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeakTarget; }

#define RPG_CLIENT_CHALLENGEPEAK___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD4E650)
#define RPG_CLIENT_CHALLENGEPEAK___C__DISPLAYCLASS57_0__GETTARGETINDEXBYID_B__0_OFFSET UNITYSDK_OFFSET(0x1AD4F470)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeak___c__DisplayClass57_0_TypeDefinitionIndex = 63221;

	class ChallengePeak___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::System::UInt32 targetID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTargetIndexByID_b__0(::RPG::Client::ChallengePeakTarget* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeakTarget*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK___C__DISPLAYCLASS57_0__GETTARGETINDEXBYID_B__0_OFFSET))(this, a1);
		}
	};
}
