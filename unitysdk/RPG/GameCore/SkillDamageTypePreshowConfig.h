#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SKILLDAMAGETYPEPRESHOWCONFIG_METHOD_2_F1AA97BC5F2D9469_OFFSET UNITYSDK_OFFSET(0x19C8DD30)
#define RPG_GAMECORE_SKILLDAMAGETYPEPRESHOWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19C8DEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillDamageTypePreshowConfig_TypeDefinitionIndex = 16245;

	class SkillDamageTypePreshowConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint StanceBreakActionSpeedChangeRatio; // 0x10
		::RPG::GameCore::FixPoint StanceBreakActionDelayChangeRatio; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDAMAGETYPEPRESHOWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F1AA97BC5F2D9469(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkillDamageTypePreshowConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkillDamageTypePreshowConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDAMAGETYPEPRESHOWCONFIG_METHOD_2_F1AA97BC5F2D9469_OFFSET))(a1, a2);
		}
	};
}
