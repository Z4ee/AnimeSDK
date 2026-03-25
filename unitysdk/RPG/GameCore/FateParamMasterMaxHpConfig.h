#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMMASTERMAXHPCONFIG_METHOD_6_052EACEF838C36F7_OFFSET UNITYSDK_OFFSET(0x171CAFB0)
#define RPG_GAMECORE_FATEPARAMMASTERMAXHPCONFIG_METHOD_6_44AB9F122567A29B_OFFSET UNITYSDK_OFFSET(0x171CADF0)
#define RPG_GAMECORE_FATEPARAMMASTERMAXHPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171CAEF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamMasterMaxHpConfig_TypeDefinitionIndex = 15239;

	class FateParamMasterMaxHpConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMASTERMAXHPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_44AB9F122567A29B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamMasterMaxHpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamMasterMaxHpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMASTERMAXHPCONFIG_METHOD_6_44AB9F122567A29B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_052EACEF838C36F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamMasterMaxHpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamMasterMaxHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMASTERMAXHPCONFIG_METHOD_6_052EACEF838C36F7_OFFSET))(a1, a2);
		}
	};
}
