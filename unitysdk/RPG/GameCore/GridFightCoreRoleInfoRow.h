#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCOREROLEINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189A61A0)
#define RPG_GAMECORE_GRIDFIGHTCOREROLEINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189A63A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCoreRoleInfoRow_TypeDefinitionIndex = 12956;

	class GridFightCoreRoleInfoRow : public ::System::Object
	{
	public:
		::System::UInt32 TraitID; // 0x10
		::System::UInt32 RoleID; // 0x14
		::System::UInt32 SubTraitID; // 0x18
		::RPG::Client::TextID ChooseDesc; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCOREROLEINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightCoreRoleInfoRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCoreRoleInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCOREROLEINFOROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
