#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECTMATERIALGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0x1929D2A0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECTMATERIALGROUP_RESET_OFFSET UNITYSDK_OFFSET(0x1929D380)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECTMATERIALGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1929D390)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int AvatarEffectInfo_EffectMaterialGroup_TypeDefinitionIndex = 36899;

	class AvatarEffectInfo_EffectMaterialGroup : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* passIDs; // 0x10
		::UnityEngine::Material* mat; // 0x18
		::System::Boolean afterTransparent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECTMATERIALGROUP__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECTMATERIALGROUP_RESET_OFFSET))(this);
		}

		static ::RPG::CustomRP::AvatarEffectInfo_EffectMaterialGroup* Create(::UnityEngine::Material* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Boolean a3)
		{
			return ((::RPG::CustomRP::AvatarEffectInfo_EffectMaterialGroup*(*)(::UnityEngine::Material*, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECTMATERIALGROUP_CREATE_OFFSET))(a1, a2, a3);
		}
	};
}
