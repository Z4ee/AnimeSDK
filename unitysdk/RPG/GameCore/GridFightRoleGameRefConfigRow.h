#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTROLEGAMEREFCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1727EAA0)
#define RPG_GAMECORE_GRIDFIGHTROLEGAMEREFCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1727EC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleGameRefConfigRow_TypeDefinitionIndex = 12383;

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

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightRoleGameRefConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleGameRefConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEGAMEREFCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
