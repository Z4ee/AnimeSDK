#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9A6C0545772F4974.h"
#include "unitysdk/MoleMole/BaseInputActionEventConfig.h"
#include "unitysdk/MoleMole/LogicAxis3DInputType.h"

#define MOLEMOLE_THREEAXISACTIONEVENTCONFIG_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x1304B860)
#define MOLEMOLE_THREEAXISACTIONEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1304B870)

namespace MoleMole
{
	inline static constexpr unsigned int ThreeAxisActionEventConfig_TypeDefinitionIndex = 77989;

	class ThreeAxisActionEventConfig : public ::MoleMole::BaseInputActionEventConfig
	{
	public:
		::Il2CppArray<::MoleMole::LogicAxis3DInputType>* logicAxis3DInputTypes; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_THREEAXISACTIONEVENTCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_9A6C0545772F4974 get_dataType()
		{
			return ((::Enum_3_9A6C0545772F4974(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_THREEAXISACTIONEVENTCONFIG_GET_DATATYPE_OFFSET))(this);
		}
	};
}
