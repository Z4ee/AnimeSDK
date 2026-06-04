#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCOREROLEINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x197DE240)
#define RPG_GAMECORE_GRIDFIGHTCOREROLEINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x197DE440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCoreRoleInfoRow_TypeDefinitionIndex = 13040;

	class GridFightCoreRoleInfoRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID ChooseDesc; // 0x10
		::System::UInt32 SubTraitID; // 0x20
		::System::UInt32 TraitID; // 0x24
		::System::UInt32 RoleID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCOREROLEINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCoreRoleInfoRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCoreRoleInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCOREROLEINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
