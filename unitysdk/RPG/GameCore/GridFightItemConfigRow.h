#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTITEMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x197E70A0)
#define RPG_GAMECORE_GRIDFIGHTITEMCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x197E7300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightItemConfigRow_TypeDefinitionIndex = 12809;

	class GridFightItemConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* SmallIconPath; // 0x18
		::System::UInt32 ID; // 0x20
		::System::Int32 ItemPriority; // 0x24
		::RPG::Client::TextID ItemName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTITEMCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightItemConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightItemConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTITEMCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
