#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightRoleSkillComeFrom.h"
#include "unitysdk/RPG/GameCore/GridFightSkillSubIconType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTSKILLSUBICONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189D8780)
#define RPG_GAMECORE_GRIDFIGHTSKILLSUBICONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189D8910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSkillSubIconConfigRow_TypeDefinitionIndex = 12807;

	class GridFightSkillSubIconConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 SkillID; // 0x10
		::RPG::GameCore::GridFightSkillSubIconType SubIconType; // 0x14
		::RPG::GameCore::GridFightRoleSkillComeFrom SkillComeFrom; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSKILLSUBICONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightSkillSubIconConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightSkillSubIconConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSKILLSUBICONCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
