#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITROLECONFIG_METHOD_3_374CFDC973185AD6_OFFSET UNITYSDK_OFFSET(0x17260DC0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITROLECONFIG_METHOD_3_EA97CDCBB561BC0F_OFFSET UNITYSDK_OFFSET(0x17260E90)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17260E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddTraitRoleConfig_TypeDefinitionIndex = 17836;

	class GridFightModifierAddTraitRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITROLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_374CFDC973185AD6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddTraitRoleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddTraitRoleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITROLECONFIG_METHOD_3_374CFDC973185AD6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EA97CDCBB561BC0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddTraitRoleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddTraitRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITROLECONFIG_METHOD_3_EA97CDCBB561BC0F_OFFSET))(a1, a2);
		}
	};
}
