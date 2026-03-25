#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8EC6DE90C67864D2;
namespace RPG::Client { class SkillTreeGrowthGuideItem; }
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System { class String; }

#define CLASS_1_8EC6DE90C67864D2___C__DISPLAYCLASS2_0__CREATEITEM_B__0_OFFSET UNITYSDK_OFFSET(0x10C31150)
#define CLASS_1_8EC6DE90C67864D2___C__DISPLAYCLASS2_0__CREATEITEM_B__1_OFFSET UNITYSDK_OFFSET(0x10C31240)
#define CLASS_1_8EC6DE90C67864D2___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10C30D30)

inline static constexpr unsigned int Class_1_8EC6DE90C67864D2___c__DisplayClass2_0_TypeDefinitionIndex = 53266;

class Class_1_8EC6DE90C67864D2___c__DisplayClass2_0 : public ::System::Object
{
public:
	::RPG::Client::SkillTreeGrowthGuideItem* item; // 0x10
	::Class_1_8EC6DE90C67864D2* __4__this; // 0x18
	::RPG::GameCore::ICharacterSkillRowData* skillData; // 0x20
	::RPG::GameCore::AvatarSkillTreeRow* skillTreeRow; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EC6DE90C67864D2___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::String* _CreateItem_b__0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EC6DE90C67864D2___C__DISPLAYCLASS2_0__CREATEITEM_B__0_OFFSET))(this);
	}

	::System::String* _CreateItem_b__1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EC6DE90C67864D2___C__DISPLAYCLASS2_0__CREATEITEM_B__1_OFFSET))(this);
	}
};
