#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEFORMULACONFIG_METHOD_6_3D22BBB66A15B50C_OFFSET UNITYSDK_OFFSET(0x18CC3360)
#define RPG_GAMECORE_ROGUEACTGETROGUEFORMULACONFIG_METHOD_6_D0AA81CFDA708491_OFFSET UNITYSDK_OFFSET(0x18CC3140)
#define RPG_GAMECORE_ROGUEACTGETROGUEFORMULACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC3280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueFormulaConfig_TypeDefinitionIndex = 18655;

	class RogueActGetRogueFormulaConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEFORMULACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_D0AA81CFDA708491(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueFormulaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueFormulaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEFORMULACONFIG_METHOD_6_D0AA81CFDA708491_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_3D22BBB66A15B50C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueFormulaConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEFORMULACONFIG_METHOD_6_3D22BBB66A15B50C_OFFSET))(a1, a2);
		}
	};
}
