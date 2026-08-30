#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DIRECTDELIVERYNOTICE_ACTIVITYAVATARINFOCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8DCE10)
#define RPG_CLIENT_DIRECTDELIVERYNOTICE_ACTIVITYAVATARINFOCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8DCE50)

namespace RPG::Client::DirectDeliveryNotice
{
	inline static constexpr unsigned int ActivityAvatarInfoControl___c_TypeDefinitionIndex = 79913;

	class ActivityAvatarInfoControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::DirectDeliveryNotice::ActivityAvatarInfoControl___c** StaticGet___9()
		{
			return (::RPG::Client::DirectDeliveryNotice::ActivityAvatarInfoControl___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityAvatarInfoControl___c_TypeDefinitionIndex)->GetStaticField(0x5B8F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICE_ACTIVITYAVATARINFOCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICE_ACTIVITYAVATARINFOCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
