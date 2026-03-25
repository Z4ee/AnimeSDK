#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCOREROLEINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172566C0)
#define RPG_GAMECORE_GRIDFIGHTCOREROLEINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172568C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCoreRoleInfoRow_TypeDefinitionIndex = 12523;

	class GridFightCoreRoleInfoRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID ChooseDesc; // 0x10
		::System::UInt32 RoleID; // 0x20
		::System::UInt32 SubTraitID; // 0x24
		::System::UInt32 TraitID; // 0x28

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
