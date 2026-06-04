#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICCONDTRUECONFIG_METHOD_7_7BBEC5C8FD0532D2_OFFSET UNITYSDK_OFFSET(0x19B43930)
#define RPG_GAMECORE_ROGUEMAGICCONDTRUECONFIG_METHOD_7_7C301402A1EA8B7C_OFFSET UNITYSDK_OFFSET(0x19B215A0)
#define RPG_GAMECORE_ROGUEMAGICCONDTRUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B21470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicCondTrueConfig_TypeDefinitionIndex = 18550;

	class RogueMagicCondTrueConfig : public ::RPG::GameCore::RogueMagicConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDTRUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_7BBEC5C8FD0532D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondTrueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondTrueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDTRUECONFIG_METHOD_7_7BBEC5C8FD0532D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_7C301402A1EA8B7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondTrueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondTrueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDTRUECONFIG_METHOD_7_7C301402A1EA8B7C_OFFSET))(a1, a2);
		}
	};
}
