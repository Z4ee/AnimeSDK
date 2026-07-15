#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightTraitSrcType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTROLECHOOSEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D072570)
#define RPG_GAMECORE_GRIDFIGHTROLECHOOSEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0727B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleChooseRow_TypeDefinitionIndex = 13193;

	class GridFightRoleChooseRow : public ::System::Object
	{
	public:
		::System::UInt32 Parameter; // 0x10
		::System::UInt32 SubTraitID; // 0x14
		::RPG::Client::TextID ChooseDesc; // 0x18
		::System::UInt32 TraitID; // 0x28
		::RPG::GameCore::GridFightTraitSrcType Type; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLECHOOSEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightRoleChooseRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleChooseRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLECHOOSEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
