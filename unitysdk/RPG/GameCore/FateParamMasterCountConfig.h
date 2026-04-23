#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMMASTERCOUNTCONFIG_METHOD_6_0777DBFC85FAFE76_OFFSET UNITYSDK_OFFSET(0x188D85B0)
#define RPG_GAMECORE_FATEPARAMMASTERCOUNTCONFIG_METHOD_6_5E4C48505FCD60CA_OFFSET UNITYSDK_OFFSET(0x188D83F0)
#define RPG_GAMECORE_FATEPARAMMASTERCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188D84F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamMasterCountConfig_TypeDefinitionIndex = 15756;

	class FateParamMasterCountConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMASTERCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_5E4C48505FCD60CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamMasterCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamMasterCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMASTERCOUNTCONFIG_METHOD_6_5E4C48505FCD60CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_0777DBFC85FAFE76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamMasterCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamMasterCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMASTERCOUNTCONFIG_METHOD_6_0777DBFC85FAFE76_OFFSET))(a1, a2);
		}
	};
}
