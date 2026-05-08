#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_HOLLOWNPCTEXTURECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17545260)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowNpcTextureConfig_TypeDefinitionIndex = 54965;

	class HollowNpcTextureConfig : public ::System::Object
	{
	public:
		::System::String* textureSheet; // 0x10
		::System::String* refTextureSheet; // 0x18
		::System::String* uv1; // 0x20
		::System::String* uv2; // 0x28
		::System::String* behaviorKey; // 0x30
		::System::Int32 soundID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWNPCTEXTURECONFIG__CTOR_OFFSET))(this);
		}
	};
}
