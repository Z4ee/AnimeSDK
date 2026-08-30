#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AUDIOSTATECONFIG_METHOD_2_A5E8B6BC63C679D8_OFFSET UNITYSDK_OFFSET(0x1CE32850)
#define RPG_GAMECORE_AUDIOSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE33350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AudioStateConfig_TypeDefinitionIndex = 16210;

	class AudioStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* GroupName; // 0x10
		::System::String* StateName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOSTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A5E8B6BC63C679D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AudioStateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AudioStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOSTATECONFIG_METHOD_2_A5E8B6BC63C679D8_OFFSET))(a1, a2);
		}
	};
}
