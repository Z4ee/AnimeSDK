#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SKILLRANGECONFIG_METHOD_2_18AA0045BCF85DFE_OFFSET UNITYSDK_OFFSET(0x1770F290)
#define RPG_GAMECORE_SKILLRANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1770F3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillRangeConfig_TypeDefinitionIndex = 16085;

	class SkillRangeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Radius; // 0x10
		::System::Single Angle; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLRANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_18AA0045BCF85DFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkillRangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkillRangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLRANGECONFIG_METHOD_2_18AA0045BCF85DFE_OFFSET))(a1, a2);
		}
	};
}
