#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALBASICCONFIG_METHOD_3_3B94EAE6DF04057A_OFFSET UNITYSDK_OFFSET(0x1D15AB30)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALBASICCONFIG_METHOD_3_8575E009F8F6CDD6_OFFSET UNITYSDK_OFFSET(0x1D15AB80)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALBASICCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15AB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetTutorialBasicConfig_TypeDefinitionIndex = 19208;

	class GridFightModifierSetTutorialBasicConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALBASICCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3B94EAE6DF04057A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetTutorialBasicConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetTutorialBasicConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALBASICCONFIG_METHOD_3_3B94EAE6DF04057A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8575E009F8F6CDD6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetTutorialBasicConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetTutorialBasicConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALBASICCONFIG_METHOD_3_8575E009F8F6CDD6_OFFSET))(a1, a2);
		}
	};
}
