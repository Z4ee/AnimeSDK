#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONADDMAXINTERESTCONFIG_METHOD_6_173609D5DE0AC380_OFFSET UNITYSDK_OFFSET(0x1724DDF0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDMAXINTERESTCONFIG_METHOD_6_30EACC56E30EFCAB_OFFSET UNITYSDK_OFFSET(0x1724DF60)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDMAXINTERESTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1724DEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddMaxInterestConfig_TypeDefinitionIndex = 17725;

	class GridFightActionAddMaxInterestConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDMAXINTERESTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_173609D5DE0AC380(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddMaxInterestConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddMaxInterestConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDMAXINTERESTCONFIG_METHOD_6_173609D5DE0AC380_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_30EACC56E30EFCAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddMaxInterestConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddMaxInterestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDMAXINTERESTCONFIG_METHOD_6_30EACC56E30EFCAB_OFFSET))(a1, a2);
		}
	};
}
