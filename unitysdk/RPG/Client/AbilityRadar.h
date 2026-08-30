#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_ABILITYRADAR_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0xC49CF50)
#define RPG_CLIENT_ABILITYRADAR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC49E050)
#define RPG_CLIENT_ABILITYRADAR_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0xC49E0E0)
#define RPG_CLIENT_ABILITYRADAR_SETABILITYVALUE_OFFSET UNITYSDK_OFFSET(0xC49D8A0)
#define RPG_CLIENT_ABILITYRADAR_START_OFFSET UNITYSDK_OFFSET(0xC49E130)
#define RPG_CLIENT_ABILITYRADAR_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0xC49D9A0)
#define RPG_CLIENT_ABILITYRADAR__CTOR_OFFSET UNITYSDK_OFFSET(0xC49E180)
#define RPG_CLIENT_ABILITYRADAR__INIT_OFFSET UNITYSDK_OFFSET(0xC49D000)
#define RPG_CLIENT_ABILITYRADAR__REFRESHMATERIALPROPERTIES_OFFSET UNITYSDK_OFFSET(0xC49D9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int AbilityRadar_TypeDefinitionIndex = 72422;

	class AbilityRadar : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		// static const ::System::Int32 _VERTEX_COUNT = 0x7; // 0x0
		::System::Single _InnerRadiusPortion; // 0xF0
		::Il2CppArray<::System::Single>* _AbilityValues; // 0xF8
		::Il2CppArray<::System::Single>* _ValueUVX; // 0x100
		::Il2CppArray<::System::Single>* _ValueUVY; // 0x108
		::System::Single _TotalDist; // 0x110
		::System::Single _StartDist; // 0x114
		::Il2CppArray<::System::Single>* _SinList; // 0x118
		::Il2CppArray<::System::Single>* _CosList; // 0x120
		::UnityEngine::Material* m_MaterialInstance; // 0x128
		::System::Int32 _ValueUVXId; // 0x130
		::System::Int32 _ValueUVYId; // 0x134
		::System::Int32 _InnerUVXId; // 0x138
		::System::Int32 _InnerUVYId; // 0x13C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABILITYRADAR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Material* get_materialForRendering()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABILITYRADAR_GET_MATERIALFORRENDERING_OFFSET))(this);
		}

		::System::Void SetAbilityValue(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABILITYRADAR_SETABILITYVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABILITYRADAR_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABILITYRADAR_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABILITYRADAR_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABILITYRADAR_START_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABILITYRADAR__INIT_OFFSET))(this);
		}

		::System::Void _RefreshMaterialProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABILITYRADAR__REFRESHMATERIALPROPERTIES_OFFSET))(this);
		}
	};
}
