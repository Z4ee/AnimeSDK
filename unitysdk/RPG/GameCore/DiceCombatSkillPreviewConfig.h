#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatTaskConfig; }

#define RPG_GAMECORE_DICECOMBATSKILLPREVIEWCONFIG_METHOD_2_0659C8FE1CFF7AE3_OFFSET UNITYSDK_OFFSET(0x17167DE0)
#define RPG_GAMECORE_DICECOMBATSKILLPREVIEWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17167EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatSkillPreviewConfig_TypeDefinitionIndex = 14803;

	class DiceCombatSkillPreviewConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnStart; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATSKILLPREVIEWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0659C8FE1CFF7AE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatSkillPreviewConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatSkillPreviewConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATSKILLPREVIEWCONFIG_METHOD_2_0659C8FE1CFF7AE3_OFFSET))(a1, a2);
		}
	};
}
