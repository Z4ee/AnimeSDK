#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NAPShaderQuality.h"

namespace MoleMole { class ShadingQualityProfileContext; }

#define MOLEMOLE_COMMANDLINESHADINGQUALITY_METHOD_2_01E1005A437FAB49_OFFSET UNITYSDK_OFFSET(0x1869D130)
#define MOLEMOLE_COMMANDLINESHADINGQUALITY_METHOD_2_9A4A515103E89443_OFFSET UNITYSDK_OFFSET(0x1869D240)
#define MOLEMOLE_COMMANDLINESHADINGQUALITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1869D200)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineShadingQuality_TypeDefinitionIndex = 43877;

	class CommandLineShadingQuality : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::ShadingQualityProfileContext*, ::MoleMole::CommandLineShadingQuality*>
	{
	public:
		::System::Nullable_1<::UnityEngine::NAPRenderPipeline0::NAPShaderQuality> Quality; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINESHADINGQUALITY__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineShadingQuality* Method_2_01E1005A437FAB49(::MoleMole::ShadingQualityProfileContext* a1)
		{
			return ((::MoleMole::CommandLineShadingQuality*(*)(::PVOID, ::MoleMole::ShadingQualityProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINESHADINGQUALITY_METHOD_2_01E1005A437FAB49_OFFSET))(this, a1);
		}

		::MoleMole::ShadingQualityProfileContext* Method_2_9A4A515103E89443(::MoleMole::ShadingQualityProfileContext* a1)
		{
			return ((::MoleMole::ShadingQualityProfileContext*(*)(::PVOID, ::MoleMole::ShadingQualityProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINESHADINGQUALITY_METHOD_2_9A4A515103E89443_OFFSET))(this, a1);
		}
	};
}
