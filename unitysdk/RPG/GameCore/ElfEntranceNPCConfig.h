#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELFENTRANCENPCCONFIG_METHOD_2_118409708306B4F4_OFFSET UNITYSDK_OFFSET(0x196DA0A0)
#define RPG_GAMECORE_ELFENTRANCENPCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x196DA1C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfEntranceNPCConfig_TypeDefinitionIndex = 15418;

	class ElfEntranceNPCConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 ConfigID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFENTRANCENPCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_118409708306B4F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfEntranceNPCConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfEntranceNPCConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFENTRANCENPCCONFIG_METHOD_2_118409708306B4F4_OFFSET))(a1, a2);
		}
	};
}
