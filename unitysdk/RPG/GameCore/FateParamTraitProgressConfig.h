#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMTRAITPROGRESSCONFIG_METHOD_6_1CFA89FCE4FB4314_OFFSET UNITYSDK_OFFSET(0x1BA75230)
#define RPG_GAMECORE_FATEPARAMTRAITPROGRESSCONFIG_METHOD_6_7CBC53D4665D0410_OFFSET UNITYSDK_OFFSET(0x1BA75280)
#define RPG_GAMECORE_FATEPARAMTRAITPROGRESSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA75270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamTraitProgressConfig_TypeDefinitionIndex = 15984;

	class FateParamTraitProgressConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMTRAITPROGRESSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_1CFA89FCE4FB4314(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamTraitProgressConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamTraitProgressConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMTRAITPROGRESSCONFIG_METHOD_6_1CFA89FCE4FB4314_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_7CBC53D4665D0410(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamTraitProgressConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamTraitProgressConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMTRAITPROGRESSCONFIG_METHOD_6_7CBC53D4665D0410_OFFSET))(a1, a2);
		}
	};
}
