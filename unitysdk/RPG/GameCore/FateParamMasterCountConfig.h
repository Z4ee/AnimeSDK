#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMMASTERCOUNTCONFIG_METHOD_6_0777DBFC85FAFE76_OFFSET UNITYSDK_OFFSET(0x1BA74E20)
#define RPG_GAMECORE_FATEPARAMMASTERCOUNTCONFIG_METHOD_6_7E138D724A80F51A_OFFSET UNITYSDK_OFFSET(0x1BA74DD0)
#define RPG_GAMECORE_FATEPARAMMASTERCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA74E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamMasterCountConfig_TypeDefinitionIndex = 15985;

	class FateParamMasterCountConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMASTERCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_7E138D724A80F51A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamMasterCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamMasterCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMASTERCOUNTCONFIG_METHOD_6_7E138D724A80F51A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_0777DBFC85FAFE76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamMasterCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamMasterCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMASTERCOUNTCONFIG_METHOD_6_0777DBFC85FAFE76_OFFSET))(a1, a2);
		}
	};
}
