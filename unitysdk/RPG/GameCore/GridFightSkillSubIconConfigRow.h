#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightRoleSkillComeFrom.h"
#include "unitysdk/RPG/GameCore/GridFightSkillSubIconType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTSKILLSUBICONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7431F0)
#define RPG_GAMECORE_GRIDFIGHTSKILLSUBICONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D743380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSkillSubIconConfigRow_TypeDefinitionIndex = 13540;

	class GridFightSkillSubIconConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightRoleSkillComeFrom SkillComeFrom; // 0x10
		::RPG::GameCore::GridFightSkillSubIconType SubIconType; // 0x14
		::System::UInt32 SkillID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSKILLSUBICONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightSkillSubIconConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightSkillSubIconConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSKILLSUBICONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
