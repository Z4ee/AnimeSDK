#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALREMOVEEQUIPTRACKPARAM_METHOD_2_EA8BC63940A74CC6_OFFSET UNITYSDK_OFFSET(0x1D1602D0)
#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALREMOVEEQUIPTRACKPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1603A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPrepTutorialRemoveEquipTrackParam_TypeDefinitionIndex = 19740;

	class GridFightPrepTutorialRemoveEquipTrackParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 RoleID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALREMOVEEQUIPTRACKPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EA8BC63940A74CC6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightPrepTutorialRemoveEquipTrackParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightPrepTutorialRemoveEquipTrackParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALREMOVEEQUIPTRACKPARAM_METHOD_2_EA8BC63940A74CC6_OFFSET))(a1, a2);
		}
	};
}
