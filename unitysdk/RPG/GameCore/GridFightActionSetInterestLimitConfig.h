#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONSETINTERESTLIMITCONFIG_METHOD_6_364A99C7DCD7C087_OFFSET UNITYSDK_OFFSET(0x1D6F7400)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETINTERESTLIMITCONFIG_METHOD_6_80875DE39CEB642B_OFFSET UNITYSDK_OFFSET(0x1D6F6FC0)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETINTERESTLIMITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F6FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionSetInterestLimitConfig_TypeDefinitionIndex = 19300;

	class GridFightActionSetInterestLimitConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETINTERESTLIMITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_364A99C7DCD7C087(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionSetInterestLimitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionSetInterestLimitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETINTERESTLIMITCONFIG_METHOD_6_364A99C7DCD7C087_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_80875DE39CEB642B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionSetInterestLimitConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionSetInterestLimitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETINTERESTLIMITCONFIG_METHOD_6_80875DE39CEB642B_OFFSET))(a1, a2);
		}
	};
}
