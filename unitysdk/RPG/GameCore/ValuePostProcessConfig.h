#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VALUEPOSTPROCESSCONFIG_METHOD_2_0ACC4AC96C3EFE2D_OFFSET UNITYSDK_OFFSET(0x19E4A510)
#define RPG_GAMECORE_VALUEPOSTPROCESSCONFIG_METHOD_2_662503251A839B8B_OFFSET UNITYSDK_OFFSET(0x19E4A570)
#define RPG_GAMECORE_VALUEPOSTPROCESSCONFIG_METHOD_2_AD9F627D77468A29_OFFSET UNITYSDK_OFFSET(0x19E4AC40)
#define RPG_GAMECORE_VALUEPOSTPROCESSCONFIG_METHOD_2_BC56F9321F1A2BDF_OFFSET UNITYSDK_OFFSET(0x19E49CD0)
#define RPG_GAMECORE_VALUEPOSTPROCESSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19E46C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ValuePostProcessConfig_TypeDefinitionIndex = 22714;

	class ValuePostProcessConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEPOSTPROCESSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BC56F9321F1A2BDF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ValuePostProcessConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ValuePostProcessConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEPOSTPROCESSCONFIG_METHOD_2_BC56F9321F1A2BDF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_0ACC4AC96C3EFE2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ValuePostProcessConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ValuePostProcessConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEPOSTPROCESSCONFIG_METHOD_2_0ACC4AC96C3EFE2D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_662503251A839B8B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ValuePostProcessConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ValuePostProcessConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEPOSTPROCESSCONFIG_METHOD_2_662503251A839B8B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_AD9F627D77468A29(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ValuePostProcessConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ValuePostProcessConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEPOSTPROCESSCONFIG_METHOD_2_AD9F627D77468A29_OFFSET))(a1, a2);
		}
	};
}
