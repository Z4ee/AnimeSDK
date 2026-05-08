#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3A3A95CA33F5CFBC;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_TARGETVALUEMODULEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x14257B50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int TargetValueModuleBase_TypeDefinitionIndex = 48099;

	class TargetValueModuleBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TARGETVALUEMODULEBASE__CTOR_OFFSET))(this);
		}
	};
}
