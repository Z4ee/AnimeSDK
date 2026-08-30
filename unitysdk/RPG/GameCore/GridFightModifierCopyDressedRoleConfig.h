#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERCOPYDRESSEDROLECONFIG_METHOD_3_56969E351162EAA1_OFFSET UNITYSDK_OFFSET(0x1D158A40)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCOPYDRESSEDROLECONFIG_METHOD_3_7C0AC0DE5DB99C05_OFFSET UNITYSDK_OFFSET(0x1D158A90)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCOPYDRESSEDROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D158A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierCopyDressedRoleConfig_TypeDefinitionIndex = 19260;

	class GridFightModifierCopyDressedRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCOPYDRESSEDROLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_56969E351162EAA1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierCopyDressedRoleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierCopyDressedRoleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCOPYDRESSEDROLECONFIG_METHOD_3_56969E351162EAA1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7C0AC0DE5DB99C05(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierCopyDressedRoleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierCopyDressedRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCOPYDRESSEDROLECONFIG_METHOD_3_7C0AC0DE5DB99C05_OFFSET))(a1, a2);
		}
	};
}
