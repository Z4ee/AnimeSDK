#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYSUBSCRIPTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD67E4C0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYSUBSCRIPTION__CTOR_OFFSET UNITYSDK_OFFSET(0xD67E460)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftDiySubscription_TypeDefinitionIndex = 79623;

	class MechCraftDiySubscription : public ::System::Object
	{
	public:
		::System::Action* _Dispose; // 0x10

		::System::Void _ctor(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYSUBSCRIPTION__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYSUBSCRIPTION_DISPOSE_OFFSET))(this);
		}
	};
}
