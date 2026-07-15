#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERICEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BB21CC0)
#define RPG_GAMECORE_DRINKMAKERICEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB21F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerIceRow_TypeDefinitionIndex = 12675;

	class DrinkMakerIceRow : public ::System::Object
	{
	public:
		::System::String* CupAnchoPath; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* AudioEvent; // 0x20
		::Il2CppArray<::System::UInt32>* IncludeTagList; // 0x28
		::System::String* PrefabPath; // 0x30
		::RPG::Client::TextID IceName; // 0x38
		::System::UInt32 ID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERICEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DrinkMakerIceRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerIceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERICEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
