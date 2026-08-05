#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class OverlayOutlineConfig; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_OVERLAYOUTLINECONFIGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF6320)

namespace MoleMole::Config
{
	inline static constexpr unsigned int OverlayOutlineConfigEntry_TypeDefinitionIndex = 73486;

	class OverlayOutlineConfigEntry : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10
		::MoleMole::Config::OverlayOutlineConfig* Config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERLAYOUTLINECONFIGENTRY__CTOR_OFFSET))(this);
		}
	};
}
