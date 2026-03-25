#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMBUFFCATEGORYCOUNTCONFIG_METHOD_6_365493FCE94318C7_OFFSET UNITYSDK_OFFSET(0x1764AB60)
#define RPG_GAMECORE_ROGUEPARAMBUFFCATEGORYCOUNTCONFIG_METHOD_6_82FD797355ED2791_OFFSET UNITYSDK_OFFSET(0x1764A8B0)
#define RPG_GAMECORE_ROGUEPARAMBUFFCATEGORYCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1764AA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamBuffCategoryCountConfig_TypeDefinitionIndex = 18164;

	class RogueParamBuffCategoryCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMBUFFCATEGORYCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_82FD797355ED2791(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamBuffCategoryCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamBuffCategoryCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMBUFFCATEGORYCOUNTCONFIG_METHOD_6_82FD797355ED2791_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_365493FCE94318C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamBuffCategoryCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamBuffCategoryCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMBUFFCATEGORYCOUNTCONFIG_METHOD_6_365493FCE94318C7_OFFSET))(a1, a2);
		}
	};
}
