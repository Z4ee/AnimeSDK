#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDCOMPARENODEIDCONFIG_METHOD_6_384C69610D96CA5E_OFFSET UNITYSDK_OFFSET(0x1C5C51A0)
#define RPG_GAMECORE_GRIDFIGHTCONDCOMPARENODEIDCONFIG_METHOD_6_92E8C04E82AAB79A_OFFSET UNITYSDK_OFFSET(0x1C5C51F0)
#define RPG_GAMECORE_GRIDFIGHTCONDCOMPARENODEIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C51E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondCompareNodeIdConfig_TypeDefinitionIndex = 18581;

	class GridFightCondCompareNodeIdConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCOMPARENODEIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_384C69610D96CA5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondCompareNodeIdConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondCompareNodeIdConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCOMPARENODEIDCONFIG_METHOD_6_384C69610D96CA5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_92E8C04E82AAB79A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondCompareNodeIdConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondCompareNodeIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCOMPARENODEIDCONFIG_METHOD_6_92E8C04E82AAB79A_OFFSET))(a1, a2);
		}
	};
}
