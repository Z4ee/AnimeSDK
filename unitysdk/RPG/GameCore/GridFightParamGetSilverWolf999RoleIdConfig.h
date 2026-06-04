#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETSILVERWOLF999ROLEIDCONFIG_METHOD_6_824EE85730A4A320_OFFSET UNITYSDK_OFFSET(0x197FBE90)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETSILVERWOLF999ROLEIDCONFIG_METHOD_6_B0B0514E735954B6_OFFSET UNITYSDK_OFFSET(0x197FC140)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETSILVERWOLF999ROLEIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197FC010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetSilverWolf999RoleIdConfig_TypeDefinitionIndex = 18531;

	class GridFightParamGetSilverWolf999RoleIdConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETSILVERWOLF999ROLEIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_824EE85730A4A320(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetSilverWolf999RoleIdConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetSilverWolf999RoleIdConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETSILVERWOLF999ROLEIDCONFIG_METHOD_6_824EE85730A4A320_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_B0B0514E735954B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetSilverWolf999RoleIdConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetSilverWolf999RoleIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETSILVERWOLF999ROLEIDCONFIG_METHOD_6_B0B0514E735954B6_OFFSET))(a1, a2);
		}
	};
}
