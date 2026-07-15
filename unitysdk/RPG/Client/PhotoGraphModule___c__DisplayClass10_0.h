#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PhotoGraphLogoConfig; }
namespace System { class String; }

#define RPG_CLIENT_PHOTOGRAPHMODULE___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17F601C0)
#define RPG_CLIENT_PHOTOGRAPHMODULE___C__DISPLAYCLASS10_0__GETLOGOCONFIG_B__0_OFFSET UNITYSDK_OFFSET(0x17F60E20)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphModule___c__DisplayClass10_0_TypeDefinitionIndex = 63506;

	class PhotoGraphModule___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::String* curTextLanguageKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetLogoConfig_b__0(::RPG::GameCore::PhotoGraphLogoConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PhotoGraphLogoConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE___C__DISPLAYCLASS10_0__GETLOGOCONFIG_B__0_OFFSET))(this, a1);
		}
	};
}
