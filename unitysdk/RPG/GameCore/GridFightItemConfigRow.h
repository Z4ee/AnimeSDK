#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTITEMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1725F030)
#define RPG_GAMECORE_GRIDFIGHTITEMCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1725F290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightItemConfigRow_TypeDefinitionIndex = 12288;

	class GridFightItemConfigRow : public ::System::Object
	{
	public:
		::System::String* SmallIconPath; // 0x10
		::System::String* IconPath; // 0x18
		::RPG::Client::TextID ItemName; // 0x20
		::System::Int32 ItemPriority; // 0x30
		::System::UInt32 ID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTITEMCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightItemConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightItemConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTITEMCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
