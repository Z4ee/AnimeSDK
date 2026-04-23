#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElfPhaseItem; }

#define RPG_GAMECORE_ELFPHASECONFIG_METHOD_2_A0DAC3D4B2BD9EEB_OFFSET UNITYSDK_OFFSET(0x1889D510)
#define RPG_GAMECORE_ELFPHASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1889D610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfPhaseConfig_TypeDefinitionIndex = 17525;

	class ElfPhaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ElfPhaseItem*>* PhaseConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFPHASECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A0DAC3D4B2BD9EEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfPhaseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfPhaseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFPHASECONFIG_METHOD_2_A0DAC3D4B2BD9EEB_OFFSET))(a1, a2);
		}
	};
}
