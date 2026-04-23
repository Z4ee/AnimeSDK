#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightFrontSpecialSPDisplayType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTFRONTSPECIALSPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189AE8B0)
#define RPG_GAMECORE_GRIDFIGHTFRONTSPECIALSPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189AEAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightFrontSpecialSPConfigRow_TypeDefinitionIndex = 12814;

	class GridFightFrontSpecialSPConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 InitialSpecialSP; // 0x10
		::RPG::GameCore::GridFightFrontSpecialSPDisplayType SpecialSPType; // 0x14
		::System::UInt32 Star; // 0x18
		::System::UInt32 MaxSpecialSP; // 0x1C
		::System::UInt32 RoleID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTFRONTSPECIALSPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightFrontSpecialSPConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightFrontSpecialSPConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTFRONTSPECIALSPCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
