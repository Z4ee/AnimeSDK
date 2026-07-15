#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillSlotState.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ADVSETSKILLSLOTDATAITEM_METHOD_2_B6C147AB05405B9D_OFFSET UNITYSDK_OFFSET(0x1BE2E830)
#define RPG_GAMECORE_ADVSETSKILLSLOTDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE2EAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetSkillSlotDataItem_TypeDefinitionIndex = 19421;

	class AdvSetSkillSlotDataItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AdventureSkillType Slot; // 0x10
		::RPG::GameCore::AdventureSkillSlotState State; // 0x14
		::System::Int32 BindSkillIndex; // 0x18
		::System::String* SkillBtnPrefab; // 0x20
		::System::String* SkillBtnEffect; // 0x28
		::System::Boolean TaskInputOnly; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETSKILLSLOTDATAITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B6C147AB05405B9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetSkillSlotDataItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetSkillSlotDataItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETSKILLSLOTDATAITEM_METHOD_2_B6C147AB05405B9D_OFFSET))(a1, a2);
		}
	};
}
