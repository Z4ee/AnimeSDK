#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetGenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLAYEROUTFITDETAILROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C288A0)
#define RPG_GAMECORE_PLAYEROUTFITDETAILROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C289F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerOutfitDetailRow_TypeDefinitionIndex = 13712;

	class PlayerOutfitDetailRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::System::UInt32 OutfitID; // 0x18
		::RPG::GameCore::TargetGenderType TargetGenderType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYEROUTFITDETAILROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlayerOutfitDetailRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerOutfitDetailRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYEROUTFITDETAILROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
