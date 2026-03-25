#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ELFWAVECONFIG_METHOD_2_0680375E610F94B8_OFFSET UNITYSDK_OFFSET(0x17192840)
#define RPG_GAMECORE_ELFWAVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17192A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfWaveConfig_TypeDefinitionIndex = 16951;

	class ElfWaveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Duration; // 0x10
		::System::Single MultipleRatio; // 0x14
		::System::Single AddRatio; // 0x18
		::System::Single NextWaveGapDuration; // 0x1C
		::System::String* NextWaveTip; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFWAVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0680375E610F94B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfWaveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfWaveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFWAVECONFIG_METHOD_2_0680375E610F94B8_OFFSET))(a1, a2);
		}
	};
}
