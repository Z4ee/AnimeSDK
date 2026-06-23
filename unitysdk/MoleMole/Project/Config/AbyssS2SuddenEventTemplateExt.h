#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/AbyssS2SuddenEventTemplate.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_356.h"

class Class_0_16E4307DCC419505_7;

#define MOLEMOLE_PROJECT_CONFIG_ABYSSS2SUDDENEVENTTEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x185673C0)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int AbyssS2SuddenEventTemplateExt_TypeDefinitionIndex = 13780;

	class AbyssS2SuddenEventTemplateExt : public ::MoleMole::FlatBuffers::Config::AbyssS2SuddenEventTemplate
	{
	public:
		::System::Void _ctor(::Struct_2_3E75877A2888D88A_356 data, ::Class_0_16E4307DCC419505_7* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_356, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_ABYSSS2SUDDENEVENTTEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}
	};
}
