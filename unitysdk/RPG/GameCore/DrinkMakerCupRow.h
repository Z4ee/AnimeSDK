#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerCupType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17178540)
#define RPG_GAMECORE_DRINKMAKERCUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17178910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCupRow_TypeDefinitionIndex = 12011;

	class DrinkMakerCupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* IceCount; // 0x10
		::Il2CppArray<::System::UInt32>* IncludeTagList; // 0x18
		::Il2CppArray<::System::Single>* PerLayerHeight; // 0x20
		::System::String* IconPath; // 0x28
		::System::String* PrefabPath; // 0x30
		::System::String* AudioEvent; // 0x38
		::RPG::GameCore::DrinkMakerCupType Type; // 0x40
		::System::UInt32 Capacity; // 0x44
		::System::UInt32 CupID; // 0x48
		::RPG::Client::TextID CupName; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DrinkMakerCupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerCupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
