#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ITEMCOMPOSETAGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172C65B0)
#define RPG_GAMECORE_ITEMCOMPOSETAGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172C6BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemComposeTagRow_TypeDefinitionIndex = 12648;

	class ItemComposeTagRow : public ::System::Object
	{
	public:
		::System::String* TagTextmapID; // 0x10
		::System::UInt32 BelongTypeID; // 0x18
		::System::UInt32 ItemComposeTagID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ItemComposeTagRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemComposeTagRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
