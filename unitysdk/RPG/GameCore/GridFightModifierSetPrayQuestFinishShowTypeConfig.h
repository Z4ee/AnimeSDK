#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETPRAYQUESTFINISHSHOWTYPECONFIG_METHOD_3_05B66746295DE3B2_OFFSET UNITYSDK_OFFSET(0x1D15AA10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETPRAYQUESTFINISHSHOWTYPECONFIG_METHOD_3_0E0E2832A412A7CE_OFFSET UNITYSDK_OFFSET(0x1D15AA60)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETPRAYQUESTFINISHSHOWTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15AA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetPrayQuestFinishShowTypeConfig_TypeDefinitionIndex = 19270;

	class GridFightModifierSetPrayQuestFinishShowTypeConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETPRAYQUESTFINISHSHOWTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_05B66746295DE3B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetPrayQuestFinishShowTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetPrayQuestFinishShowTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETPRAYQUESTFINISHSHOWTYPECONFIG_METHOD_3_05B66746295DE3B2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0E0E2832A412A7CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetPrayQuestFinishShowTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetPrayQuestFinishShowTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETPRAYQUESTFINISHSHOWTYPECONFIG_METHOD_3_0E0E2832A412A7CE_OFFSET))(a1, a2);
		}
	};
}
