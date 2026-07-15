#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EFFECTUSAGEJSONCONFIG_METHOD_2_C307653B38E0D62C_OFFSET UNITYSDK_OFFSET(0x1BB328B0)
#define RPG_GAMECORE_EFFECTUSAGEJSONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB329A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectUsageJsonConfig_TypeDefinitionIndex = 15846;

	class EffectUsageJsonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* APMMonoEffectUsageList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTUSAGEJSONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C307653B38E0D62C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EffectUsageJsonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EffectUsageJsonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTUSAGEJSONCONFIG_METHOD_2_C307653B38E0D62C_OFFSET))(a1, a2);
		}
	};
}
