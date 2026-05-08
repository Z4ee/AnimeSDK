#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGTARGETSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x183CEBD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTargetSelector_TypeDefinitionIndex = 44452;

	class ConfigTargetSelector : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTARGETSELECTOR__CTOR_OFFSET))(this);
		}
	};
}
