#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATECONDTRUECONFIG_METHOD_6_9CB46396511F268C_OFFSET UNITYSDK_OFFSET(0x188D2290)
#define RPG_GAMECORE_FATECONDTRUECONFIG_METHOD_6_B66367AF9B939BA8_OFFSET UNITYSDK_OFFSET(0x188D2450)
#define RPG_GAMECORE_FATECONDTRUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188D2390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateCondTrueConfig_TypeDefinitionIndex = 18286;

	class FateCondTrueConfig : public ::RPG::GameCore::FateConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDTRUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_9CB46396511F268C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateCondTrueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateCondTrueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDTRUECONFIG_METHOD_6_9CB46396511F268C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_B66367AF9B939BA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateCondTrueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateCondTrueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDTRUECONFIG_METHOD_6_B66367AF9B939BA8_OFFSET))(a1, a2);
		}
	};
}
