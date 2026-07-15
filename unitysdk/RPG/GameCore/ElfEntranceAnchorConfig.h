#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELFENTRANCEANCHORCONFIG_METHOD_2_D1872123B98FB2F0_OFFSET UNITYSDK_OFFSET(0x1BB36600)
#define RPG_GAMECORE_ELFENTRANCEANCHORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB36720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfEntranceAnchorConfig_TypeDefinitionIndex = 15581;

	class ElfEntranceAnchorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 ConfigID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFENTRANCEANCHORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D1872123B98FB2F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfEntranceAnchorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfEntranceAnchorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFENTRANCEANCHORCONFIG_METHOD_2_D1872123B98FB2F0_OFFSET))(a1, a2);
		}
	};
}
