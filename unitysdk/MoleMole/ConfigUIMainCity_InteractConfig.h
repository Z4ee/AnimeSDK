#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIGUIMAINCITY_INTERACTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B568E0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIMainCity_InteractConfig_TypeDefinitionIndex = 46897;

	class ConfigUIMainCity_InteractConfig : public ::System::Object
	{
	public:
		::System::Single CombineMaxWait; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINCITY_INTERACTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
