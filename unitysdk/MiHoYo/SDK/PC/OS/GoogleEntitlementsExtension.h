#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class PurchaseData; }

#define MIHOYO_SDK_PC_OS_GOOGLEENTITLEMENTSEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA0C940)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int GoogleEntitlementsExtension_TypeDefinitionIndex = 8477;

	class GoogleEntitlementsExtension : public ::System::Object
	{
	public:
		::Il2CppArray<::MiHoYo::SDK::PC::OS::PurchaseData*>* purchases; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_GOOGLEENTITLEMENTSEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
