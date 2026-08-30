#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DIRECTDELIVERYNOTICE_DIRECTDELIVERYAVATARREWARDTOASTWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8DDCD0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICE_DIRECTDELIVERYAVATARREWARDTOASTWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8DDD10)

namespace RPG::Client::DirectDeliveryNotice
{
	inline static constexpr unsigned int DirectDeliveryAvatarRewardToastWindow___c_TypeDefinitionIndex = 79915;

	class DirectDeliveryAvatarRewardToastWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::DirectDeliveryNotice::DirectDeliveryAvatarRewardToastWindow___c** StaticGet___9()
		{
			return (::RPG::Client::DirectDeliveryNotice::DirectDeliveryAvatarRewardToastWindow___c**)Il2CppClass::FromTypeDefinitionIndex(DirectDeliveryAvatarRewardToastWindow___c_TypeDefinitionIndex)->GetStaticField(0x5B9A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICE_DIRECTDELIVERYAVATARREWARDTOASTWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICE_DIRECTDELIVERYAVATARREWARDTOASTWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
