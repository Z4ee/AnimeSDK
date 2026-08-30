#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtSkillExtraConfigBase.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTSKILLPROPERTYCONFIG_METHOD_3_3B17BC4F83EB7980_OFFSET UNITYSDK_OFFSET(0x1CCEE250)
#define RPG_GAMECORE_RTSKILLPROPERTYCONFIG_METHOD_3_DB3E9E46882A0D7C_OFFSET UNITYSDK_OFFSET(0x1CCEDDB0)
#define RPG_GAMECORE_RTSKILLPROPERTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEDDA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillPropertyConfig_TypeDefinitionIndex = 17458;

	class RtSkillPropertyConfig : public ::RPG::GameCore::RtSkillExtraConfigBase
	{
	public:
		::RPG::GameCore::RtSkillPropertyType Type; // 0x10
		::RPG::GameCore::FixPoint Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLPROPERTYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3B17BC4F83EB7980(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSkillPropertyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSkillPropertyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLPROPERTYCONFIG_METHOD_3_3B17BC4F83EB7980_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DB3E9E46882A0D7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSkillPropertyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSkillPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLPROPERTYCONFIG_METHOD_3_DB3E9E46882A0D7C_OFFSET))(a1, a2);
		}
	};
}
