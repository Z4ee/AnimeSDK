#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropSoundAttenuation; }
namespace System { class String; }

#define RPG_GAMECORE_PROPSOUNDCONFIGOVERRIDECONFIG_METHOD_2_947DD06BF9FCD388_OFFSET UNITYSDK_OFFSET(0x1D1858D0)
#define RPG_GAMECORE_PROPSOUNDCONFIGOVERRIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D185A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSoundConfigOverrideConfig_TypeDefinitionIndex = 17348;

	class PropSoundConfigOverrideConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::String* Description; // 0x18
		::RPG::GameCore::PropSoundAttenuation* SoundAttenuationConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSOUNDCONFIGOVERRIDECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_947DD06BF9FCD388(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSoundConfigOverrideConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSoundConfigOverrideConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSOUNDCONFIGOVERRIDECONFIG_METHOD_2_947DD06BF9FCD388_OFFSET))(a1, a2);
		}
	};
}
