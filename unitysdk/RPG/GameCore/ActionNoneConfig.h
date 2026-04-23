#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIONNONECONFIG_METHOD_4_572F81432C5B49D0_OFFSET UNITYSDK_OFFSET(0x185FB5F0)
#define RPG_GAMECORE_ACTIONNONECONFIG_METHOD_4_EA682DFB392A3C5E_OFFSET UNITYSDK_OFFSET(0x185FB450)
#define RPG_GAMECORE_ACTIONNONECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x185FB5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionNoneConfig_TypeDefinitionIndex = 16133;

	class ActionNoneConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONNONECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EA682DFB392A3C5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionNoneConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionNoneConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONNONECONFIG_METHOD_4_EA682DFB392A3C5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_572F81432C5B49D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionNoneConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionNoneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONNONECONFIG_METHOD_4_572F81432C5B49D0_OFFSET))(a1, a2);
		}
	};
}
