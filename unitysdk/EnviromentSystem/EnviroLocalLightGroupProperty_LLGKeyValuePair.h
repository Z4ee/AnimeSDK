#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_LLGKEYVALUEPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x135A7DE0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroLocalLightGroupProperty_LLGKeyValuePair_TypeDefinitionIndex = 46785;

	class EnviroLocalLightGroupProperty_LLGKeyValuePair : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::System::Single value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_LLGKEYVALUEPAIR__CTOR_OFFSET))(this);
		}
	};
}
