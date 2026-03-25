#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMTRAITPROGRESSCONFIG_METHOD_6_6E6FC368C2146494_OFFSET UNITYSDK_OFFSET(0x171CBFE0)
#define RPG_GAMECORE_FATEPARAMTRAITPROGRESSCONFIG_METHOD_6_7CBC53D4665D0410_OFFSET UNITYSDK_OFFSET(0x171CC1A0)
#define RPG_GAMECORE_FATEPARAMTRAITPROGRESSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171CC0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamTraitProgressConfig_TypeDefinitionIndex = 15241;

	class FateParamTraitProgressConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMTRAITPROGRESSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_6E6FC368C2146494(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamTraitProgressConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamTraitProgressConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMTRAITPROGRESSCONFIG_METHOD_6_6E6FC368C2146494_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_7CBC53D4665D0410(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamTraitProgressConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamTraitProgressConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMTRAITPROGRESSCONFIG_METHOD_6_7CBC53D4665D0410_OFFSET))(a1, a2);
		}
	};
}
