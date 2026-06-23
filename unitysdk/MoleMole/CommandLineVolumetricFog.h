#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumetricFogQuality.h"

namespace MoleMole { class VolumetricFogProfileContext; }

#define MOLEMOLE_COMMANDLINEVOLUMETRICFOG_METHOD_2_4FEEEA56B286E7CE_OFFSET UNITYSDK_OFFSET(0x12C58760)
#define MOLEMOLE_COMMANDLINEVOLUMETRICFOG_METHOD_2_5A641E4B57BEEA2D_OFFSET UNITYSDK_OFFSET(0x12C58650)
#define MOLEMOLE_COMMANDLINEVOLUMETRICFOG__CTOR_OFFSET UNITYSDK_OFFSET(0x12C58720)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineVolumetricFog_TypeDefinitionIndex = 65011;

	class CommandLineVolumetricFog : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::VolumetricFogProfileContext*, ::MoleMole::CommandLineVolumetricFog*>
	{
	public:
		::System::Nullable_1<::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality> VolumetricFogSetting; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEVOLUMETRICFOG__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineVolumetricFog* Method_2_5A641E4B57BEEA2D(::MoleMole::VolumetricFogProfileContext* a1)
		{
			return ((::MoleMole::CommandLineVolumetricFog*(*)(::PVOID, ::MoleMole::VolumetricFogProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEVOLUMETRICFOG_METHOD_2_5A641E4B57BEEA2D_OFFSET))(this, a1);
		}

		::MoleMole::VolumetricFogProfileContext* Method_2_4FEEEA56B286E7CE(::MoleMole::VolumetricFogProfileContext* a1)
		{
			return ((::MoleMole::VolumetricFogProfileContext*(*)(::PVOID, ::MoleMole::VolumetricFogProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEVOLUMETRICFOG_METHOD_2_4FEEEA56B286E7CE_OFFSET))(this, a1);
		}
	};
}
