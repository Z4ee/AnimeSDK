#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightRoleSkillTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTROLETAGINFOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3B7660)
#define RPG_GAMECORE_GRIDFIGHTROLETAGINFOCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B77E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleTagInfoConfigRow_TypeDefinitionIndex = 13418;

	class GridFightRoleTagInfoConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightRoleSkillTag ID; // 0x10
		::RPG::Client::TextID TagDesc; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLETAGINFOCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightRoleTagInfoConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleTagInfoConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLETAGINFOCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
