#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x17F8C5A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFoodTruckMenuPageController_Order_TypeDefinitionIndex = 63720;

	class UIFoodTruckMenuPageController_Order : public ::System::Object
	{
	public:
		::System::String* CorrectKey; // 0x10
		::System::String* RolePath; // 0x18
		::System::String* InfoKey; // 0x20
		::System::String* ErrorKey; // 0x28
		::System::Int32 CorrectId; // 0x30
		::System::Int32 OrderId; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ORDER__CTOR_OFFSET))(this);
		}
	};
}
