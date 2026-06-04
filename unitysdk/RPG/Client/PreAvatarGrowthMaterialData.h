#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_15;

#define RPG_CLIENT_PREAVATARGROWTHMATERIALDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC4B2F80)
#define RPG_CLIENT_PREAVATARGROWTHMATERIALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC4B3040)

namespace RPG::Client
{
	inline static constexpr unsigned int PreAvatarGrowthMaterialData_TypeDefinitionIndex = 61380;

	class PreAvatarGrowthMaterialData : public ::System::Object
	{
	public:
		::System::UInt32 SkillMaterialMedium; // 0x10
		::System::UInt32 WorldMaterialMedium; // 0x14
		::System::UInt32 SkillMaterialSmall; // 0x18
		::System::UInt32 BossMaterial; // 0x1C
		::System::UInt32 PromotionMaterial; // 0x20
		::System::UInt32 SkillMaterialLarge; // 0x24
		::System::UInt32 WorldMaterialSmall; // 0x28
		::System::UInt32 WorldMaterialLarge; // 0x2C
		::System::UInt32 AvatarTemplateID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREAVATARGROWTHMATERIALDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PreAvatarGrowthMaterialData* Create(::Class_1_21DCD4640D389503_15* a1)
		{
			return ((::RPG::Client::PreAvatarGrowthMaterialData*(*)(::Class_1_21DCD4640D389503_15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREAVATARGROWTHMATERIALDATA_CREATE_OFFSET))(a1);
		}
	};
}
