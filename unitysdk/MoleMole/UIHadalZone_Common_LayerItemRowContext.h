#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHADALZONE_COMMON_LAYERITEMROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x151D20F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_Common_LayerItemRowContext_TypeDefinitionIndex = 54850;

	class UIHadalZone_Common_LayerItemRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 selectTargetLayerIndex; // 0x28
		::System::Boolean IsSpecialLayer; // 0x2C
		::System::Int32 maxUnlockLayerIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_COMMON_LAYERITEMROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
