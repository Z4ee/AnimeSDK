#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTROLEGAMEREFCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3B5030)
#define RPG_GAMECORE_GRIDFIGHTROLEGAMEREFCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B51C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleGameRefConfigRow_TypeDefinitionIndex = 13442;

	class GridFightRoleGameRefConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 RoleID; // 0x10
		::System::Int32 RoleInGameRefScore; // 0x14
		::System::UInt32 SeasonID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEGAMEREFCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightRoleGameRefConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleGameRefConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEGAMEREFCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
