#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SOTASKCONFIG_METHOD_3_5FE05F69D94CF677_OFFSET UNITYSDK_OFFSET(0x18DDF140)
#define RPG_GAMECORE_SOTASKCONFIG_METHOD_3_F23728469566E01A_OFFSET UNITYSDK_OFFSET(0x18DE0AA0)
#define RPG_GAMECORE_SOTASKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDF010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SOTaskConfig_TypeDefinitionIndex = 18975;

	class SOTaskConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOTASKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5FE05F69D94CF677(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SOTaskConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SOTaskConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOTASKCONFIG_METHOD_3_5FE05F69D94CF677_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F23728469566E01A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SOTaskConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SOTaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOTASKCONFIG_METHOD_3_F23728469566E01A_OFFSET))(a1, a2);
		}
	};
}
