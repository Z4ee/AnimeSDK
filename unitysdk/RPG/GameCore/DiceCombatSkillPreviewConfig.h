#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatTaskConfig; }

#define RPG_GAMECORE_DICECOMBATSKILLPREVIEWCONFIG_METHOD_2_CB8F89EE05AB0EEE_OFFSET UNITYSDK_OFFSET(0x1C117430)
#define RPG_GAMECORE_DICECOMBATSKILLPREVIEWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C117520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatSkillPreviewConfig_TypeDefinitionIndex = 15513;

	class DiceCombatSkillPreviewConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnStart; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATSKILLPREVIEWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CB8F89EE05AB0EEE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatSkillPreviewConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatSkillPreviewConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATSKILLPREVIEWCONFIG_METHOD_2_CB8F89EE05AB0EEE_OFFSET))(a1, a2);
		}
	};
}
