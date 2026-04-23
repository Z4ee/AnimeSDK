#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_VIEW_DIRECTDELIVERYAVATARREWARDTOASTWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB888F10)
#define RPG_VIEW_DIRECTDELIVERYAVATARREWARDTOASTWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB888F50)

namespace RPG::View
{
	inline static constexpr unsigned int DirectDeliveryAvatarRewardToastWindow___c_TypeDefinitionIndex = 47909;

	class DirectDeliveryAvatarRewardToastWindow___c : public ::System::Object
	{
	public:
		static ::RPG::View::DirectDeliveryAvatarRewardToastWindow___c** StaticGet___9()
		{
			return (::RPG::View::DirectDeliveryAvatarRewardToastWindow___c**)Il2CppClass::FromTypeDefinitionIndex(DirectDeliveryAvatarRewardToastWindow___c_TypeDefinitionIndex)->GetStaticField(0x672C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_VIEW_DIRECTDELIVERYAVATARREWARDTOASTWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VIEW_DIRECTDELIVERYAVATARREWARDTOASTWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
