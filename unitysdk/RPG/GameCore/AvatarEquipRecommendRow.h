#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATAREQUIPRECOMMENDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A076D70)
#define RPG_GAMECORE_AVATAREQUIPRECOMMENDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A076EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarEquipRecommendRow_TypeDefinitionIndex = 12284;

	class AvatarEquipRecommendRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EquipmentList; // 0x10
		::System::UInt32 AvatarID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREQUIPRECOMMENDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarEquipRecommendRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarEquipRecommendRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREQUIPRECOMMENDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
