#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMPHASEIDCONFIG_METHOD_6_175FD5CE6ED90897_OFFSET UNITYSDK_OFFSET(0x19715370)
#define RPG_GAMECORE_FATEPARAMPHASEIDCONFIG_METHOD_6_7668AB5C9C9EF9D0_OFFSET UNITYSDK_OFFSET(0x197155C0)
#define RPG_GAMECORE_FATEPARAMPHASEIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19715500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamPhaseIDConfig_TypeDefinitionIndex = 15818;

	class FateParamPhaseIDConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMPHASEIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_175FD5CE6ED90897(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamPhaseIDConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamPhaseIDConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMPHASEIDCONFIG_METHOD_6_175FD5CE6ED90897_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_7668AB5C9C9EF9D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamPhaseIDConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamPhaseIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMPHASEIDCONFIG_METHOD_6_7668AB5C9C9EF9D0_OFFSET))(a1, a2);
		}
	};
}
