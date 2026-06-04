#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARABILITYSTATISTICSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1948E4C0)
#define RPG_GAMECORE_AVATARABILITYSTATISTICSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1948E5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarAbilityStatisticsRow_TypeDefinitionIndex = 12233;

	class AvatarAbilityStatisticsRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ExtractionAbilityList; // 0x10
		::System::UInt32 AvatarID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARABILITYSTATISTICSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarAbilityStatisticsRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarAbilityStatisticsRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARABILITYSTATISTICSROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
