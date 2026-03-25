#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FREESTYLEOBSOLETEMOTIONCONFIG_METHOD_2_BB0767FE64D78528_OFFSET UNITYSDK_OFFSET(0x172205D0)
#define RPG_GAMECORE_FREESTYLEOBSOLETEMOTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17220610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleObsoleteMotionConfig_TypeDefinitionIndex = 14935;

	class FreeStyleObsoleteMotionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEOBSOLETEMOTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BB0767FE64D78528(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleObsoleteMotionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleObsoleteMotionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEOBSOLETEMOTIONCONFIG_METHOD_2_BB0767FE64D78528_OFFSET))(a1, a2);
		}
	};
}
