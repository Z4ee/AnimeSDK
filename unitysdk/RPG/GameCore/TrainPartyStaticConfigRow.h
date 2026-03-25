#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyStaticType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYSTATICCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178B0430)
#define RPG_GAMECORE_TRAINPARTYSTATICCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178B0690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyStaticConfigRow_TypeDefinitionIndex = 14075;

	class TrainPartyStaticConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* SlotList; // 0x18
		::System::UInt32 AreaID; // 0x20
		::System::Boolean UseLowLight; // 0x24
		::System::UInt32 ID; // 0x28
		::RPG::GameCore::TrainPartyStaticType Type; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSTATICCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrainPartyStaticConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyStaticConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSTATICCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
