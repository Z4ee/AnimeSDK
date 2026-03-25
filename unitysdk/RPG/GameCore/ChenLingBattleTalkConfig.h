#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingAbilityConfig; }

#define RPG_GAMECORE_CHENLINGBATTLETALKCONFIG_METHOD_2_5F489AB94C737957_OFFSET UNITYSDK_OFFSET(0x17081200)
#define RPG_GAMECORE_CHENLINGBATTLETALKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170812B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTalkConfig_TypeDefinitionIndex = 14507;

	class ChenLingBattleTalkConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChenLingAbilityConfig* Composite; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETALKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5F489AB94C737957(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTalkConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTalkConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETALKCONFIG_METHOD_2_5F489AB94C737957_OFFSET))(a1, a2);
		}
	};
}
