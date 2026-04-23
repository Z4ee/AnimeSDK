#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/CakeRaceRegionTag.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CAKERACEEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18770770)
#define RPG_GAMECORE_CAKERACEEFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18770BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceEffectRow_TypeDefinitionIndex = 10519;

	class CakeRaceEffectRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AllowSectionIndex; // 0x10
		::Il2CppArray<::RPG::GameCore::CakeRaceRegionTag>* AllowRegionTagList; // 0x18
		::Il2CppArray<::RPG::GameCore::CakeRaceRegionTag>* NotAllowRegionTagList; // 0x20
		::System::String* EffectIcon; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x30
		::System::String* AbilityJson; // 0x38
		::RPG::Client::TextID EffectName; // 0x40
		::RPG::Client::TextID EffectDesc; // 0x50
		::System::UInt32 EffectID; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEEFFECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::CakeRaceEffectRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceEffectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEEFFECTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
