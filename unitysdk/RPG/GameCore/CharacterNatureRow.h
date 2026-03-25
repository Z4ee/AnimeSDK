#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterNatureType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERNATUREROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1706E780)
#define RPG_GAMECORE_CHARACTERNATUREROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1706ED20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterNatureRow_TypeDefinitionIndex = 11850;

	class CharacterNatureRow : public ::System::Object
	{
	public:
		::System::String* SpritePath; // 0x10
		::RPG::GameCore::CharacterNatureType NatureType; // 0x18
		::System::UInt32 NatureID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::CharacterNatureRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterNatureRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
