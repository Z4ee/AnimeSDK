#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARUSEMATERIALDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B2E1210)
#define RPG_GAMECORE_AVATARUSEMATERIALDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2E14D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarUseMaterialDataRow_TypeDefinitionIndex = 12677;

	class AvatarUseMaterialDataRow : public ::System::Object
	{
	public:
		::System::UInt32 AvatarID; // 0x10
		::System::UInt32 WorldMaterialLarge; // 0x14
		::System::UInt32 WorldMaterialMedium; // 0x18
		::System::UInt32 BossMaterial; // 0x1C
		::System::UInt32 PromotionMaterial; // 0x20
		::System::UInt32 SkillMaterialLarge; // 0x24
		::System::UInt32 WorldMaterialSmall; // 0x28
		::System::UInt32 SkillMaterialMedium; // 0x2C
		::System::UInt32 SkillMaterialSmall; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARUSEMATERIALDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarUseMaterialDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarUseMaterialDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARUSEMATERIALDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
