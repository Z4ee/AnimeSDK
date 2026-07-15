#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_SDKPLATFORM___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19F2AFE0)
#define RPG_CLIENT_SDKPLATFORM___C__DISPLAYCLASS7_0__SHOWPSEMPTYSTOREDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x19F2B050)

namespace RPG::Client
{
	inline static constexpr unsigned int SDKPlatform___c__DisplayClass7_0_TypeDefinitionIndex = 57312;

	class SDKPlatform___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKPLATFORM___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowPSEmptyStoreDialog_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKPLATFORM___C__DISPLAYCLASS7_0__SHOWPSEMPTYSTOREDIALOG_B__0_OFFSET))(this, a1);
		}
	};
}
