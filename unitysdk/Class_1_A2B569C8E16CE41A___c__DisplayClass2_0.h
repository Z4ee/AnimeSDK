#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A2B569C8E16CE41A;
namespace RPG::Client { class SkillTreeGrowthGuideItem; }
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System { class String; }

#define CLASS_1_A2B569C8E16CE41A___C__DISPLAYCLASS2_0__CREATEITEM_B__0_OFFSET UNITYSDK_OFFSET(0x188271F0)
#define CLASS_1_A2B569C8E16CE41A___C__DISPLAYCLASS2_0__CREATEITEM_B__1_OFFSET UNITYSDK_OFFSET(0x18827330)
#define CLASS_1_A2B569C8E16CE41A___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18826DF0)

inline static constexpr unsigned int Class_1_A2B569C8E16CE41A___c__DisplayClass2_0_TypeDefinitionIndex = 65655;

class Class_1_A2B569C8E16CE41A___c__DisplayClass2_0 : public ::System::Object
{
public:
	::Class_1_A2B569C8E16CE41A* __4__this; // 0x10
	::RPG::GameCore::ICharacterSkillRowData* skillData; // 0x18
	::RPG::GameCore::AvatarSkillTreeRow* skillTreeRow; // 0x20
	::RPG::Client::SkillTreeGrowthGuideItem* item; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B569C8E16CE41A___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::String* _CreateItem_b__0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B569C8E16CE41A___C__DISPLAYCLASS2_0__CREATEITEM_B__0_OFFSET))(this);
	}

	::System::String* _CreateItem_b__1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B569C8E16CE41A___C__DISPLAYCLASS2_0__CREATEITEM_B__1_OFFSET))(this);
	}
};
