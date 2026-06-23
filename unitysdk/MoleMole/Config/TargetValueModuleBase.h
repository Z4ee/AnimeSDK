#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_B8F2A25A5ADF5CEE;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_TARGETVALUEMODULEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x115E9830)

namespace MoleMole::Config
{
	inline static constexpr unsigned int TargetValueModuleBase_TypeDefinitionIndex = 61329;

	class TargetValueModuleBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TARGETVALUEMODULEBASE__CTOR_OFFSET))(this);
		}
	};
}
