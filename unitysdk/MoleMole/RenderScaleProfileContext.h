#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"

#define MOLEMOLE_RENDERSCALEPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12BDF280)

namespace MoleMole
{
	inline static constexpr unsigned int RenderScaleProfileContext_TypeDefinitionIndex = 83101;

	class RenderScaleProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::System::Single RenderScaleValue; // 0x18
		::System::Single RenderTargetFactor; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RENDERSCALEPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
