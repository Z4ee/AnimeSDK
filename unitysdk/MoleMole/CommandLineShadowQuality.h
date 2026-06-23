#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SSAOQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ShadowQuality.h"

namespace MoleMole { class ShadowQualityProfileContext; }

#define MOLEMOLE_COMMANDLINESHADOWQUALITY_METHOD_2_09CC5CFB5A176F85_OFFSET UNITYSDK_OFFSET(0x1108AA00)
#define MOLEMOLE_COMMANDLINESHADOWQUALITY_METHOD_2_DB62B2DB9386321E_OFFSET UNITYSDK_OFFSET(0x1108AB30)
#define MOLEMOLE_COMMANDLINESHADOWQUALITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1108AAF0)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineShadowQuality_TypeDefinitionIndex = 50662;

	class CommandLineShadowQuality : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::ShadowQualityProfileContext*, ::MoleMole::CommandLineShadowQuality*>
	{
	public:
		::System::Nullable_1<::UnityEngine::NAPRenderPipeline0::ShadowQuality> ShadowQualitySetting; // 0x18
		::System::Nullable_1<::UnityEngine::NAPRenderPipeline0::SSAOQuality> SSAOMaxQuality; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINESHADOWQUALITY__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineShadowQuality* Method_2_09CC5CFB5A176F85(::MoleMole::ShadowQualityProfileContext* a1)
		{
			return ((::MoleMole::CommandLineShadowQuality*(*)(::PVOID, ::MoleMole::ShadowQualityProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINESHADOWQUALITY_METHOD_2_09CC5CFB5A176F85_OFFSET))(this, a1);
		}

		::MoleMole::ShadowQualityProfileContext* Method_2_DB62B2DB9386321E(::MoleMole::ShadowQualityProfileContext* a1)
		{
			return ((::MoleMole::ShadowQualityProfileContext*(*)(::PVOID, ::MoleMole::ShadowQualityProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINESHADOWQUALITY_METHOD_2_DB62B2DB9386321E_OFFSET))(this, a1);
		}
	};
}
