#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class OverlayOutlineConfig_AnimParams; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_OVERLAYOUTLINECONFIG_ANIMPARAMSENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C472400)

namespace MoleMole::Config
{
	inline static constexpr unsigned int OverlayOutlineConfig_AnimParamsEntry_TypeDefinitionIndex = 54298;

	class OverlayOutlineConfig_AnimParamsEntry : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10
		::MoleMole::Config::OverlayOutlineConfig_AnimParams* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERLAYOUTLINECONFIG_ANIMPARAMSENTRY__CTOR_OFFSET))(this);
		}
	};
}
