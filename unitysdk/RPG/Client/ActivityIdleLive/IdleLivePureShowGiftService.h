#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEPURESHOWGIFTSERVICE_HAVENEWINTERACTION_OFFSET UNITYSDK_OFFSET(0x9B6DBA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEPURESHOWGIFTSERVICE_POPINTERACTIONID_OFFSET UNITYSDK_OFFSET(0x9B6DC00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEPURESHOWGIFTSERVICE_SETENABLE_OFFSET UNITYSDK_OFFSET(0x9B6DD70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEPURESHOWGIFTSERVICE_UPDATEINTERACTIONS_OFFSET UNITYSDK_OFFSET(0x9B6DD10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEPURESHOWGIFTSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x9B5CDD0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLivePureShowGiftService_TypeDefinitionIndex = 69364;

	class IdleLivePureShowGiftService : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _GiftsWaitingToShow; // 0x10
		::System::Boolean _IsEnable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEPURESHOWGIFTSERVICE__CTOR_OFFSET))(this);
		}

		::System::Boolean HaveNewInteraction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEPURESHOWGIFTSERVICE_HAVENEWINTERACTION_OFFSET))(this);
		}

		::System::UInt32 PopInteractionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEPURESHOWGIFTSERVICE_POPINTERACTIONID_OFFSET))(this);
		}

		::System::Void UpdateInteractions(::System::UInt32 interactionId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEPURESHOWGIFTSERVICE_UPDATEINTERACTIONS_OFFSET))(this, interactionId);
		}

		::System::Void SetEnable(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEPURESHOWGIFTSERVICE_SETENABLE_OFFSET))(this, isEnable);
		}
	};
}
