#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALCAMPCONFIG_METHOD_3_55F414D6782BF82A_OFFSET UNITYSDK_OFFSET(0x1726C240)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALCAMPCONFIG_METHOD_3_7FF6C319D46813E3_OFFSET UNITYSDK_OFFSET(0x172696A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALCAMPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17269650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetTutorialCampConfig_TypeDefinitionIndex = 17847;

	class GridFightModifierSetTutorialCampConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALCAMPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_55F414D6782BF82A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetTutorialCampConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetTutorialCampConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALCAMPCONFIG_METHOD_3_55F414D6782BF82A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7FF6C319D46813E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetTutorialCampConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetTutorialCampConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALCAMPCONFIG_METHOD_3_7FF6C319D46813E3_OFFSET))(a1, a2);
		}
	};
}
