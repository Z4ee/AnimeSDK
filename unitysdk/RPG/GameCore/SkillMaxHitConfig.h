#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SKILLMAXHITCONFIG_METHOD_2_E7ACBC7C313B3ADB_OFFSET UNITYSDK_OFFSET(0x1770EC80)
#define RPG_GAMECORE_SKILLMAXHITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1770EDA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillMaxHitConfig_TypeDefinitionIndex = 15139;

	class SkillMaxHitConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SkillName; // 0x10
		::System::Int32 MaxHitCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLMAXHITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E7ACBC7C313B3ADB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkillMaxHitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkillMaxHitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLMAXHITCONFIG_METHOD_2_E7ACBC7C313B3ADB_OFFSET))(a1, a2);
		}
	};
}
