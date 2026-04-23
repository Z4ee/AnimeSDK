#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITMEMBERPROPERTYCONFIG_METHOD_3_4F219E302CA35450_OFFSET UNITYSDK_OFFSET(0x189B18B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITMEMBERPROPERTYCONFIG_METHOD_3_B928AFB9648BC6F9_OFFSET UNITYSDK_OFFSET(0x189B17E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITMEMBERPROPERTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189B1860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddTraitMemberPropertyConfig_TypeDefinitionIndex = 18498;

	class GridFightModifierAddTraitMemberPropertyConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITMEMBERPROPERTYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B928AFB9648BC6F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddTraitMemberPropertyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddTraitMemberPropertyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITMEMBERPROPERTYCONFIG_METHOD_3_B928AFB9648BC6F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4F219E302CA35450(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddTraitMemberPropertyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddTraitMemberPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITMEMBERPROPERTYCONFIG_METHOD_3_4F219E302CA35450_OFFSET))(a1, a2);
		}
	};
}
