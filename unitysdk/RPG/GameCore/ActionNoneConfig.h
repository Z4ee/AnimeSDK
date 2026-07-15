#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIONNONECONFIG_METHOD_4_0807D1EA703D1604_OFFSET UNITYSDK_OFFSET(0x1B9FF9D0)
#define RPG_GAMECORE_ACTIONNONECONFIG_METHOD_4_572F81432C5B49D0_OFFSET UNITYSDK_OFFSET(0x1B9FFAB0)
#define RPG_GAMECORE_ACTIONNONECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9FFAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionNoneConfig_TypeDefinitionIndex = 16366;

	class ActionNoneConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONNONECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0807D1EA703D1604(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionNoneConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionNoneConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONNONECONFIG_METHOD_4_0807D1EA703D1604_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_572F81432C5B49D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionNoneConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionNoneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONNONECONFIG_METHOD_4_572F81432C5B49D0_OFFSET))(a1, a2);
		}
	};
}
