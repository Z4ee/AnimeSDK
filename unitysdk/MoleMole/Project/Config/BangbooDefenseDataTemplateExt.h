#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/BangbooDefenseDataTemplate.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_545.h"

class Class_0_16E4307DCC419505_7;

#define MOLEMOLE_PROJECT_CONFIG_BANGBOODEFENSEDATATEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC1DC20)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int BangbooDefenseDataTemplateExt_TypeDefinitionIndex = 10917;

	class BangbooDefenseDataTemplateExt : public ::MoleMole::FlatBuffers::Config::BangbooDefenseDataTemplate
	{
	public:
		::System::Void _ctor(::Struct_2_3E75877A2888D88A_545 data, ::Class_0_16E4307DCC419505_7* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_545, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_BANGBOODEFENSEDATATEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}
	};
}
