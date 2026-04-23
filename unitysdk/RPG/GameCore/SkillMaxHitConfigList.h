#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SkillMaxHitConfig; }

#define RPG_GAMECORE_SKILLMAXHITCONFIGLIST_METHOD_2_81B05799EBA81F98_OFFSET UNITYSDK_OFFSET(0x18E72910)
#define RPG_GAMECORE_SKILLMAXHITCONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x18E729E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillMaxHitConfigList_TypeDefinitionIndex = 15650;

	class SkillMaxHitConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SkillMaxHitConfig*>* SkillMaxHitList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLMAXHITCONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_81B05799EBA81F98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkillMaxHitConfigList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkillMaxHitConfigList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLMAXHITCONFIGLIST_METHOD_2_81B05799EBA81F98_OFFSET))(a1, a2);
		}
	};
}
