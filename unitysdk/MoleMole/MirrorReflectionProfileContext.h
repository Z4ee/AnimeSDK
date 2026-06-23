#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MirrorReflectionQuality.h"

#define MOLEMOLE_MIRRORREFLECTIONPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19139860)

namespace MoleMole
{
	inline static constexpr unsigned int MirrorReflectionProfileContext_TypeDefinitionIndex = 78539;

	class MirrorReflectionProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::UnityEngine::NAPRenderPipeline0::MirrorReflectionQuality MirrorReflectionSetting; // 0x18
		::System::Single SSRMinSmoothness; // 0x1C
		::System::Int32 SSRDownScale; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MIRRORREFLECTIONPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
