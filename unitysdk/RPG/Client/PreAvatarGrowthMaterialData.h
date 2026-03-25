#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EBB10EC01CCC4716_13;

#define RPG_CLIENT_PREAVATARGROWTHMATERIALDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9FF5100)
#define RPG_CLIENT_PREAVATARGROWTHMATERIALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FF51C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PreAvatarGrowthMaterialData_TypeDefinitionIndex = 53312;

	class PreAvatarGrowthMaterialData : public ::System::Object
	{
	public:
		::System::UInt32 WorldMaterialSmall; // 0x10
		::System::UInt32 SkillMaterialLarge; // 0x14
		::System::UInt32 SkillMaterialSmall; // 0x18
		::System::UInt32 WorldMaterialLarge; // 0x1C
		::System::UInt32 BossMaterial; // 0x20
		::System::UInt32 SkillMaterialMedium; // 0x24
		::System::UInt32 AvatarTemplateID; // 0x28
		::System::UInt32 PromotionMaterial; // 0x2C
		::System::UInt32 WorldMaterialMedium; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREAVATARGROWTHMATERIALDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PreAvatarGrowthMaterialData* Create(::Class_1_EBB10EC01CCC4716_13* rsp)
		{
			return ((::RPG::Client::PreAvatarGrowthMaterialData*(*)(::Class_1_EBB10EC01CCC4716_13*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREAVATARGROWTHMATERIALDATA_CREATE_OFFSET))(rsp);
		}
	};
}
