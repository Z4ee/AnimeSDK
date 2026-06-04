#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEADDITIONALPROPERTYCONFIG_METHOD_3_A6FEA2F646093703_OFFSET UNITYSDK_OFFSET(0x197E8FC0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEADDITIONALPROPERTYCONFIG_METHOD_3_B1B11D5097703B4A_OFFSET UNITYSDK_OFFSET(0x197E8EF0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEADDITIONALPROPERTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197E8F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddRoleAdditionalPropertyConfig_TypeDefinitionIndex = 18381;

	class GridFightModifierAddRoleAdditionalPropertyConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEADDITIONALPROPERTYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B1B11D5097703B4A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddRoleAdditionalPropertyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddRoleAdditionalPropertyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEADDITIONALPROPERTYCONFIG_METHOD_3_B1B11D5097703B4A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A6FEA2F646093703(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddRoleAdditionalPropertyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddRoleAdditionalPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEADDITIONALPROPERTYCONFIG_METHOD_3_A6FEA2F646093703_OFFSET))(a1, a2);
		}
	};
}
