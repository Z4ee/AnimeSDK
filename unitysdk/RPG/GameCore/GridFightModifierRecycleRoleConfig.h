#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERRECYCLEROLECONFIG_METHOD_3_05A05683AE6166E4_OFFSET UNITYSDK_OFFSET(0x197F3270)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERRECYCLEROLECONFIG_METHOD_3_1FD5DF28DB93975D_OFFSET UNITYSDK_OFFSET(0x197EE790)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERRECYCLEROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197EE740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierRecycleRoleConfig_TypeDefinitionIndex = 18450;

	class GridFightModifierRecycleRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRECYCLEROLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_05A05683AE6166E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierRecycleRoleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierRecycleRoleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRECYCLEROLECONFIG_METHOD_3_05A05683AE6166E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1FD5DF28DB93975D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierRecycleRoleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierRecycleRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRECYCLEROLECONFIG_METHOD_3_1FD5DF28DB93975D_OFFSET))(a1, a2);
		}
	};
}
