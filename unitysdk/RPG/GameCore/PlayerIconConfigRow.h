#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLAYERICONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C26B10)
#define RPG_GAMECORE_PLAYERICONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C27210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerIconConfigRow_TypeDefinitionIndex = 13696;

	class PlayerIconConfigRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::UInt32 SortType; // 0x18
		::System::UInt32 AvatarID; // 0x1C
		::System::Boolean IsVisible; // 0x20
		::System::UInt32 ID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERICONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlayerIconConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerIconConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERICONCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
