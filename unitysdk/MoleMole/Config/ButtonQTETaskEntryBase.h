#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/ButtonQTETaskInputType.h"
#include "unitysdk/MoleMole/Config/RealtimeQTETaskEntryBase.h"
#include "unitysdk/MoleMole/RealtimeQTEButtonUIWidgetType.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_BUTTONQTETASKENTRYBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x186A9830)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ButtonQTETaskEntryBase_TypeDefinitionIndex = 72922;

	class ButtonQTETaskEntryBase : public ::MoleMole::Config::RealtimeQTETaskEntryBase
	{
	public:
		::MoleMole::ButtonQTETaskInputType InputType; // 0x60
		::System::Boolean WrongInputFail; // 0x64
		::MoleMole::RealtimeQTEButtonUIWidgetType ButtonUIWidgetType; // 0x68
		::Foundation::AssetPath ButtonIconPath; // 0x70
		::Foundation::AssetPath ButtonIconMaterialPath; // 0x80
		::System::String* ButtonUIStyleKey; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUTTONQTETASKENTRYBASE__CTOR_OFFSET))(this);
		}
	};
}
