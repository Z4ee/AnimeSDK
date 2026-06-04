#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElfWaveConfig; }

#define RPG_GAMECORE_ELFWAVECUSTOMERCONFIG_METHOD_2_730091410F0D9438_OFFSET UNITYSDK_OFFSET(0x196DC8B0)
#define RPG_GAMECORE_ELFWAVECUSTOMERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x196DE8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfWaveCustomerConfig_TypeDefinitionIndex = 17570;

	class ElfWaveCustomerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single PrepareTime; // 0x10
		::System::Single WaveGapDuration; // 0x14
		::System::Single NormalGapDuration; // 0x18
		::System::Single ConnectGapDuration; // 0x1C
		::Il2CppArray<::RPG::GameCore::ElfWaveConfig*>* Waves; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFWAVECUSTOMERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_730091410F0D9438(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfWaveCustomerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfWaveCustomerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFWAVECUSTOMERCONFIG_METHOD_2_730091410F0D9438_OFFSET))(a1, a2);
		}
	};
}
