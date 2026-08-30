#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMMASTERMAXHPCONFIG_METHOD_6_052EACEF838C36F7_OFFSET UNITYSDK_OFFSET(0x1E0CED70)
#define RPG_GAMECORE_FATEPARAMMASTERMAXHPCONFIG_METHOD_6_86469B95E6C5D4B3_OFFSET UNITYSDK_OFFSET(0x1E0CED20)
#define RPG_GAMECORE_FATEPARAMMASTERMAXHPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CED60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamMasterMaxHpConfig_TypeDefinitionIndex = 16458;

	class FateParamMasterMaxHpConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMASTERMAXHPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_86469B95E6C5D4B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamMasterMaxHpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamMasterMaxHpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMASTERMAXHPCONFIG_METHOD_6_86469B95E6C5D4B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_052EACEF838C36F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamMasterMaxHpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamMasterMaxHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMASTERMAXHPCONFIG_METHOD_6_052EACEF838C36F7_OFFSET))(a1, a2);
		}
	};
}
