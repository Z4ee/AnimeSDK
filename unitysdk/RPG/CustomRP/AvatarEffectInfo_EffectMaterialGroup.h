#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECTMATERIALGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0x16A5F6C0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECTMATERIALGROUP_RESET_OFFSET UNITYSDK_OFFSET(0x16A5F7A0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECTMATERIALGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x16A5F7B0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int AvatarEffectInfo_EffectMaterialGroup_TypeDefinitionIndex = 29204;

	class AvatarEffectInfo_EffectMaterialGroup : public ::System::Object
	{
	public:
		::UnityEngine::Material* mat; // 0x10
		::Il2CppArray<::System::Int32>* passIDs; // 0x18
		::System::Boolean afterTransparent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECTMATERIALGROUP__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECTMATERIALGROUP_RESET_OFFSET))(this);
		}

		static ::RPG::CustomRP::AvatarEffectInfo_EffectMaterialGroup* Create(::UnityEngine::Material* mat, ::Il2CppArray<::System::Int32>* overridePassIDs, ::System::Boolean afterTransparent)
		{
			return ((::RPG::CustomRP::AvatarEffectInfo_EffectMaterialGroup*(*)(::UnityEngine::Material*, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECTMATERIALGROUP_CREATE_OFFSET))(mat, overridePassIDs, afterTransparent);
		}
	};
}
