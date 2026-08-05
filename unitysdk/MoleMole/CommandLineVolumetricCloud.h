#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumetricFogQuality.h"

namespace MoleMole { class VolumetricCloudProfileContext; }

#define MOLEMOLE_COMMANDLINEVOLUMETRICCLOUD_METHOD_2_3EB198A92CD33CB5_OFFSET UNITYSDK_OFFSET(0x1484A740)
#define MOLEMOLE_COMMANDLINEVOLUMETRICCLOUD_METHOD_2_EE1E6C2EB9760399_OFFSET UNITYSDK_OFFSET(0x1484A630)
#define MOLEMOLE_COMMANDLINEVOLUMETRICCLOUD__CTOR_OFFSET UNITYSDK_OFFSET(0x1484A700)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineVolumetricCloud_TypeDefinitionIndex = 50075;

	class CommandLineVolumetricCloud : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::VolumetricCloudProfileContext*, ::MoleMole::CommandLineVolumetricCloud*>
	{
	public:
		::System::Nullable_1<::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality> VolumetricCloudSetting; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEVOLUMETRICCLOUD__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineVolumetricCloud* Method_2_EE1E6C2EB9760399(::MoleMole::VolumetricCloudProfileContext* a1)
		{
			return ((::MoleMole::CommandLineVolumetricCloud*(*)(::PVOID, ::MoleMole::VolumetricCloudProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEVOLUMETRICCLOUD_METHOD_2_EE1E6C2EB9760399_OFFSET))(this, a1);
		}

		::MoleMole::VolumetricCloudProfileContext* Method_2_3EB198A92CD33CB5(::MoleMole::VolumetricCloudProfileContext* a1)
		{
			return ((::MoleMole::VolumetricCloudProfileContext*(*)(::PVOID, ::MoleMole::VolumetricCloudProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEVOLUMETRICCLOUD_METHOD_2_3EB198A92CD33CB5_OFFSET))(this, a1);
		}
	};
}
