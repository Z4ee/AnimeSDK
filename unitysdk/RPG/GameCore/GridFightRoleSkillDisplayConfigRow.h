#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/RPG/GameCore/GridFightRoleSkillTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTROLESKILLDISPLAYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D0743E0)
#define RPG_GAMECORE_GRIDFIGHTROLESKILLDISPLAYCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D074650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleSkillDisplayConfigRow_TypeDefinitionIndex = 13025;

	class GridFightRoleSkillDisplayConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::RPG::GameCore::GridFightRoleSkillTag>* CategoryTagList; // 0x18
		::RPG::Client::TextID Name; // 0x20
		::RPG::GameCore::GridFightPreset FrontBackType; // 0x30
		::System::UInt32 RoleID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLESKILLDISPLAYCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightRoleSkillDisplayConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleSkillDisplayConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLESKILLDISPLAYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
