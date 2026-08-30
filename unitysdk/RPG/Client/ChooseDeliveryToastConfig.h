#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_CHOOSEDELIVERYTOASTCONFIG_GET_FUNCNAME_OFFSET UNITYSDK_OFFSET(0x1BBFBC50)
#define RPG_CLIENT_CHOOSEDELIVERYTOASTCONFIG_TRYDELAYTOAST_OFFSET UNITYSDK_OFFSET(0x1BBFBCC0)
#define RPG_CLIENT_CHOOSEDELIVERYTOASTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBFBD00)

namespace RPG::Client
{
	inline static constexpr unsigned int ChooseDeliveryToastConfig_TypeDefinitionIndex = 63590;

	class ChooseDeliveryToastConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYTOASTCONFIG__CTOR_OFFSET))(this);
		}

		::System::String* get_FuncName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYTOASTCONFIG_GET_FUNCNAME_OFFSET))(this);
		}

		::System::Boolean TryDelayToast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYTOASTCONFIG_TRYDELAYTOAST_OFFSET))(this);
		}
	};
}
