#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGENCHANTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x170853B0)
#define RPG_GAMECORE_CHENLINGENCHANTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x170855F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingEnchantRow_TypeDefinitionIndex = 10361;

	class ChenLingEnchantRow : public ::System::Object
	{
	public:
		::System::String* SmallIconPath; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::UInt32 ID; // 0x28
		::RPG::Client::TextID Desc; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGENCHANTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChenLingEnchantRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingEnchantRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGENCHANTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
