#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALCAMPCONFIG_METHOD_3_5AB518F1F3FB33DF_OFFSET UNITYSDK_OFFSET(0x1D15AB90)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALCAMPCONFIG_METHOD_3_7FF6C319D46813E3_OFFSET UNITYSDK_OFFSET(0x1D15ABE0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALCAMPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15ABD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetTutorialCampConfig_TypeDefinitionIndex = 19214;

	class GridFightModifierSetTutorialCampConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALCAMPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5AB518F1F3FB33DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetTutorialCampConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetTutorialCampConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALCAMPCONFIG_METHOD_3_5AB518F1F3FB33DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7FF6C319D46813E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetTutorialCampConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetTutorialCampConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALCAMPCONFIG_METHOD_3_7FF6C319D46813E3_OFFSET))(a1, a2);
		}
	};
}
