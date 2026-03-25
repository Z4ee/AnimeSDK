#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICCONDTRUECONFIG_METHOD_7_6FB3D9E2FD9269D8_OFFSET UNITYSDK_OFFSET(0x176124E0)
#define RPG_GAMECORE_ROGUEMAGICCONDTRUECONFIG_METHOD_7_7C301402A1EA8B7C_OFFSET UNITYSDK_OFFSET(0x176126A0)
#define RPG_GAMECORE_ROGUEMAGICCONDTRUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x176125E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicCondTrueConfig_TypeDefinitionIndex = 17937;

	class RogueMagicCondTrueConfig : public ::RPG::GameCore::RogueMagicConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDTRUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_6FB3D9E2FD9269D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondTrueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondTrueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDTRUECONFIG_METHOD_7_6FB3D9E2FD9269D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_7C301402A1EA8B7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondTrueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondTrueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDTRUECONFIG_METHOD_7_7C301402A1EA8B7C_OFFSET))(a1, a2);
		}
	};
}
