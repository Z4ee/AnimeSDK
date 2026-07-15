#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDMASTERHPCONFIG_METHOD_6_5F5327D544AA61E1_OFFSET UNITYSDK_OFFSET(0x1C0733F0)
#define RPG_GAMECORE_FATEACTADDMASTERHPCONFIG_METHOD_6_BF319DFEE74F5945_OFFSET UNITYSDK_OFFSET(0x1C073440)
#define RPG_GAMECORE_FATEACTADDMASTERHPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C073430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddMasterHpConfig_TypeDefinitionIndex = 18473;

	class FateActAddMasterHpConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERHPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_5F5327D544AA61E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddMasterHpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddMasterHpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERHPCONFIG_METHOD_6_5F5327D544AA61E1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_BF319DFEE74F5945(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddMasterHpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddMasterHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERHPCONFIG_METHOD_6_BF319DFEE74F5945_OFFSET))(a1, a2);
		}
	};
}
