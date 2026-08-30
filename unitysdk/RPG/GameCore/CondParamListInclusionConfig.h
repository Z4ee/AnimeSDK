#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONDPARAMLISTINCLUSIONCONFIG_METHOD_4_0E1BBF545D0D70E9_OFFSET UNITYSDK_OFFSET(0x1D9AE9B0)
#define RPG_GAMECORE_CONDPARAMLISTINCLUSIONCONFIG_METHOD_4_68643450F1E12565_OFFSET UNITYSDK_OFFSET(0x1D9AE960)
#define RPG_GAMECORE_CONDPARAMLISTINCLUSIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AE9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CondParamListInclusionConfig_TypeDefinitionIndex = 16883;

	class CondParamListInclusionConfig : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDPARAMLISTINCLUSIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_68643450F1E12565(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondParamListInclusionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondParamListInclusionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDPARAMLISTINCLUSIONCONFIG_METHOD_4_68643450F1E12565_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0E1BBF545D0D70E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondParamListInclusionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondParamListInclusionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDPARAMLISTINCLUSIONCONFIG_METHOD_4_0E1BBF545D0D70E9_OFFSET))(a1, a2);
		}
	};
}
