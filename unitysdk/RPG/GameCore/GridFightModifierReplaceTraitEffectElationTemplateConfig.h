#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACETRAITEFFECTELATIONTEMPLATECONFIG_METHOD_3_2C365C99F445CD4F_OFFSET UNITYSDK_OFFSET(0x1D15A770)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACETRAITEFFECTELATIONTEMPLATECONFIG_METHOD_3_C82CC9B4719FA613_OFFSET UNITYSDK_OFFSET(0x1D15A7C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACETRAITEFFECTELATIONTEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15A7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierReplaceTraitEffectElationTemplateConfig_TypeDefinitionIndex = 19259;

	class GridFightModifierReplaceTraitEffectElationTemplateConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACETRAITEFFECTELATIONTEMPLATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2C365C99F445CD4F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierReplaceTraitEffectElationTemplateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierReplaceTraitEffectElationTemplateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACETRAITEFFECTELATIONTEMPLATECONFIG_METHOD_3_2C365C99F445CD4F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C82CC9B4719FA613(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierReplaceTraitEffectElationTemplateConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierReplaceTraitEffectElationTemplateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACETRAITEFFECTELATIONTEMPLATECONFIG_METHOD_3_C82CC9B4719FA613_OFFSET))(a1, a2);
		}
	};
}
