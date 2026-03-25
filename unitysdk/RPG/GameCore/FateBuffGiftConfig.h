#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEBUFFGIFTCONFIG_METHOD_2_8BE17946D68D8F3B_OFFSET UNITYSDK_OFFSET(0x171C4270)
#define RPG_GAMECORE_FATEBUFFGIFTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171C42B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateBuffGiftConfig_TypeDefinitionIndex = 17678;

	class FateBuffGiftConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBUFFGIFTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8BE17946D68D8F3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateBuffGiftConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateBuffGiftConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBUFFGIFTCONFIG_METHOD_2_8BE17946D68D8F3B_OFFSET))(a1, a2);
		}
	};
}
