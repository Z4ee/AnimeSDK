#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTGAMEPLAYRESCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE6A8D0)
#define RPG_GAMECORE_GRIDFIGHTGAMEPLAYRESCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6AA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightGamePlayResConfigRow_TypeDefinitionIndex = 13350;

	class GridFightGamePlayResConfigRow : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::String* Desc; // 0x18
		::System::String* IconPath; // 0x20
		::System::UInt32 ID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGAMEPLAYRESCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightGamePlayResConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightGamePlayResConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGAMEPLAYRESCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
