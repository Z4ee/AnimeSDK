#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AbyssS2_DefaultMapGenerator.h"
#include "unitysdk/MoleMole/AbyssS2_GenConfigMeta.h"

namespace MoleMole { class AbyssS2_GenRouteMapConfig; }

#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2_PROCESS_NORMALPARTFIXGEN_3_OFFSET UNITYSDK_OFFSET(0x162334B0)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2_PROCESS_NORMALPARTGEN_1_OFFSET UNITYSDK_OFFSET(0x12925AD0)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2_PROCESS_NORMALPARTREDUCEGEN_2_OFFSET UNITYSDK_OFFSET(0x16232960)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2_PROCESS_STARTPOINTS_0_OFFSET UNITYSDK_OFFSET(0x12925A60)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2__CTOR_OFFSET UNITYSDK_OFFSET(0x12925A50)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2___BASE_PROCESS_NORMALPARTFIXGEN_3_OFFSET UNITYSDK_OFFSET(0x16233520)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2___BASE_PROCESS_NORMALPARTGEN_1_OFFSET UNITYSDK_OFFSET(0x16233550)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2___BASE_PROCESS_NORMALPARTREDUCEGEN_2_OFFSET UNITYSDK_OFFSET(0x16233580)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2___BASE_PROCESS_STARTPOINTS_0_OFFSET UNITYSDK_OFFSET(0x162335B0)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_DefaultMapGeneratorV2_TypeDefinitionIndex = 87623;

	class AbyssS2_DefaultMapGeneratorV2 : public ::MoleMole::AbyssS2_DefaultMapGenerator
	{
	public:
		::System::Void _ctor(::MoleMole::AbyssS2_GenRouteMapConfig* inConfig)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AbyssS2_GenRouteMapConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2__CTOR_OFFSET))(this, inConfig);
		}

		::System::Boolean Process_StartPoints_0(::MoleMole::AbyssS2_GenConfigMeta meta)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2_PROCESS_STARTPOINTS_0_OFFSET))(this, meta);
		}

		::System::Boolean Process_NormalPartGen_1(::MoleMole::AbyssS2_GenConfigMeta meta)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2_PROCESS_NORMALPARTGEN_1_OFFSET))(this, meta);
		}

		::System::Boolean Process_NormalPartReduceGen_2(::MoleMole::AbyssS2_GenConfigMeta meta)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2_PROCESS_NORMALPARTREDUCEGEN_2_OFFSET))(this, meta);
		}

		::System::Boolean Process_NormalPartFixGen_3(::MoleMole::AbyssS2_GenConfigMeta meta)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2_PROCESS_NORMALPARTFIXGEN_3_OFFSET))(this, meta);
		}

		::System::Boolean __base_Process_NormalPartFixGen_3(::MoleMole::AbyssS2_GenConfigMeta P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2___BASE_PROCESS_NORMALPARTFIXGEN_3_OFFSET))(this, P0);
		}

		::System::Boolean __base_Process_NormalPartGen_1(::MoleMole::AbyssS2_GenConfigMeta P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2___BASE_PROCESS_NORMALPARTGEN_1_OFFSET))(this, P0);
		}

		::System::Boolean __base_Process_NormalPartReduceGen_2(::MoleMole::AbyssS2_GenConfigMeta P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2___BASE_PROCESS_NORMALPARTREDUCEGEN_2_OFFSET))(this, P0);
		}

		::System::Boolean __base_Process_StartPoints_0(::MoleMole::AbyssS2_GenConfigMeta P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2___BASE_PROCESS_STARTPOINTS_0_OFFSET))(this, P0);
		}
	};
}
