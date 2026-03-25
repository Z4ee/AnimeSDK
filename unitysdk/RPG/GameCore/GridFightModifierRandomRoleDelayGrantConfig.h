#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMROLEDELAYGRANTCONFIG_METHOD_3_031C0B351F275A1F_OFFSET UNITYSDK_OFFSET(0x1726BA40)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMROLEDELAYGRANTCONFIG_METHOD_3_BC7A90225175AF36_OFFSET UNITYSDK_OFFSET(0x172688A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMROLEDELAYGRANTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17268850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierRandomRoleDelayGrantConfig_TypeDefinitionIndex = 17867;

	class GridFightModifierRandomRoleDelayGrantConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMROLEDELAYGRANTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_031C0B351F275A1F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierRandomRoleDelayGrantConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierRandomRoleDelayGrantConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMROLEDELAYGRANTCONFIG_METHOD_3_031C0B351F275A1F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BC7A90225175AF36(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierRandomRoleDelayGrantConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierRandomRoleDelayGrantConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMROLEDELAYGRANTCONFIG_METHOD_3_BC7A90225175AF36_OFFSET))(a1, a2);
		}
	};
}
