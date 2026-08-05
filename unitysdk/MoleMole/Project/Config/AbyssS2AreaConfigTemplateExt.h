#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/AbyssS2AreaConfigTemplate.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_27.h"

class Class_0_16E4307DCC419505_7;
class Class_1_5DA2E7556103D5A3_4;

#define MOLEMOLE_PROJECT_CONFIG_ABYSSS2AREACONFIGTEMPLATEEXT_GETMETATYPECONFIG_OFFSET UNITYSDK_OFFSET(0x1BBD42C0)
#define MOLEMOLE_PROJECT_CONFIG_ABYSSS2AREACONFIGTEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD42B0)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int AbyssS2AreaConfigTemplateExt_TypeDefinitionIndex = 11585;

	class AbyssS2AreaConfigTemplateExt : public ::MoleMole::FlatBuffers::Config::AbyssS2AreaConfigTemplate
	{
	public:
		::System::Void _ctor(::Struct_2_58DF5669875F2C66_27 data, ::Class_0_16E4307DCC419505_7* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_27, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_ABYSSS2AREACONFIGTEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}

		::Class_1_5DA2E7556103D5A3_4* GetMetaTypeConfig()
		{
			return ((::Class_1_5DA2E7556103D5A3_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_ABYSSS2AREACONFIGTEMPLATEEXT_GETMETATYPECONFIG_OFFSET))(this);
		}
	};
}
