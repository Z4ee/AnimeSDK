#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARCOBRANDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186B9320)
#define RPG_GAMECORE_AVATARCOBRANDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186B9500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarCobrandConfigRow_TypeDefinitionIndex = 12001;

	class AvatarCobrandConfigRow : public ::System::Object
	{
	public:
		::System::String* StateGroupName; // 0x10
		::System::String* AudioLanguage; // 0x18
		::System::String* OffStateName; // 0x20
		::System::String* OnStateName; // 0x28
		::System::UInt32 ID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARCOBRANDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarCobrandConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarCobrandConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARCOBRANDCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
