#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEGIFTLISTCONFIG_METHOD_2_E70819CFDB013A22_OFFSET UNITYSDK_OFFSET(0x171C54A0)
#define RPG_GAMECORE_FATEGIFTLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171C54E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateGiftListConfig_TypeDefinitionIndex = 17679;

	class FateGiftListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEGIFTLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E70819CFDB013A22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateGiftListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateGiftListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEGIFTLISTCONFIG_METHOD_2_E70819CFDB013A22_OFFSET))(a1, a2);
		}
	};
}
