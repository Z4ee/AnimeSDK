#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASAUGMENTCONFIG_METHOD_6_8D40048F9CAE07E7_OFFSET UNITYSDK_OFFSET(0x17254780)
#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASAUGMENTCONFIG_METHOD_6_D28B78D76521C04B_OFFSET UNITYSDK_OFFSET(0x17254940)
#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASAUGMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17254880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondCheckHasAugmentConfig_TypeDefinitionIndex = 17753;

	class GridFightCondCheckHasAugmentConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASAUGMENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_8D40048F9CAE07E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondCheckHasAugmentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondCheckHasAugmentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASAUGMENTCONFIG_METHOD_6_8D40048F9CAE07E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_D28B78D76521C04B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondCheckHasAugmentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondCheckHasAugmentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASAUGMENTCONFIG_METHOD_6_D28B78D76521C04B_OFFSET))(a1, a2);
		}
	};
}
