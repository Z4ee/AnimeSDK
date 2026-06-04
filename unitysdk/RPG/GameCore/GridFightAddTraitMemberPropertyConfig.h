#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTADDTRAITMEMBERPROPERTYCONFIG_METHOD_2_194EE315D652A916_OFFSET UNITYSDK_OFFSET(0x197D9390)
#define RPG_GAMECORE_GRIDFIGHTADDTRAITMEMBERPROPERTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197D93D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightAddTraitMemberPropertyConfig_TypeDefinitionIndex = 18469;

	class GridFightAddTraitMemberPropertyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTADDTRAITMEMBERPROPERTYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_194EE315D652A916(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightAddTraitMemberPropertyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightAddTraitMemberPropertyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTADDTRAITMEMBERPROPERTYCONFIG_METHOD_2_194EE315D652A916_OFFSET))(a1, a2);
		}
	};
}
