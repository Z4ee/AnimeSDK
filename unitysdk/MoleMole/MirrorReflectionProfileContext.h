#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MirrorReflectionQuality.h"

#define MOLEMOLE_MIRRORREFLECTIONPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19DCE380)

namespace MoleMole
{
	inline static constexpr unsigned int MirrorReflectionProfileContext_TypeDefinitionIndex = 58765;

	class MirrorReflectionProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::System::Int32 SSRDownScale; // 0x18
		::UnityEngine::NAPRenderPipeline0::MirrorReflectionQuality MirrorReflectionSetting; // 0x1C
		::System::Single SSRMinSmoothness; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MIRRORREFLECTIONPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
