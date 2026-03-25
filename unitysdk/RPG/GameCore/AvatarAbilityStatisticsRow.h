#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARABILITYSTATISTICSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F93570)
#define RPG_GAMECORE_AVATARABILITYSTATISTICSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F93690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarAbilityStatisticsRow_TypeDefinitionIndex = 11731;

	class AvatarAbilityStatisticsRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ExtractionAbilityList; // 0x10
		::System::UInt32 AvatarID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARABILITYSTATISTICSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarAbilityStatisticsRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarAbilityStatisticsRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARABILITYSTATISTICSROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
