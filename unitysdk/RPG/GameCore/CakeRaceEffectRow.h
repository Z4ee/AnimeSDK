#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/CakeRaceRegionTag.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CAKERACEEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CF74C80)
#define RPG_GAMECORE_CAKERACEEFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF75050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceEffectRow_TypeDefinitionIndex = 10983;

	class CakeRaceEffectRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::Il2CppArray<::RPG::GameCore::CakeRaceRegionTag>* NotAllowRegionTagList; // 0x18
		::System::String* AbilityJson; // 0x20
		::System::String* EffectIcon; // 0x28
		::Il2CppArray<::System::UInt32>* AllowSectionIndex; // 0x30
		::Il2CppArray<::RPG::GameCore::CakeRaceRegionTag>* AllowRegionTagList; // 0x38
		::System::UInt32 EffectID; // 0x40
		::RPG::Client::TextID EffectDesc; // 0x48
		::RPG::Client::TextID EffectName; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEEFFECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceEffectRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceEffectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEEFFECTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
