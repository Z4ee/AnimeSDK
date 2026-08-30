#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_LineRendererSkinning_CullingMode.h"
#include "unitysdk/RPG/Client/Effect_LineRendererSkinning_Struct_2_F7C243F317D8E44A_2.h"
#include "unitysdk/RPG/Client/Effect_LineRendererSkinning_WeightCurveMode.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Effect_LineRendererSkinning_BoneData; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x15E7A570)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_GETDERIVATIVEWEIGHT_OFFSET UNITYSDK_OFFSET(0x15E7B0D0)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_METHOD_5_02A2D800521F7143_OFFSET UNITYSDK_OFFSET(0x15E7A9C0)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_METHOD_5_0F30679B05E70FC1_OFFSET UNITYSDK_OFFSET(0x15E7B650)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_METHOD_5_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15E7A060)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_METHOD_5_218124418542E081_OFFSET UNITYSDK_OFFSET(0x15E7A0F0)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_METHOD_5_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x15E79D30)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_METHOD_5_7432254BE2E104AA_OFFSET UNITYSDK_OFFSET(0x15E7A7F0)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_METHOD_5_89FADE33F34E4AE0_1_OFFSET UNITYSDK_OFFSET(0x15E7B340)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_METHOD_5_89FADE33F34E4AE0_2_OFFSET UNITYSDK_OFFSET(0x15E7B3E0)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_METHOD_5_89FADE33F34E4AE0_OFFSET UNITYSDK_OFFSET(0x15E7B2A0)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_METHOD_5_8A2AC7CD7EA66CAC_OFFSET UNITYSDK_OFFSET(0x15E7B4A0)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_METHOD_5_DA5757BC97DEA931_OFFSET UNITYSDK_OFFSET(0x15E7A660)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_METHOD_5_DAC9219D09D338F5_OFFSET UNITYSDK_OFFSET(0x15E7B960)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15E79E70)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15E79C90)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_UPDATE_OFFSET UNITYSDK_OFFSET(0x15E79F90)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E7BB80)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING__CTOR_OFFSET UNITYSDK_OFFSET(0x15E7BAD0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_LineRendererSkinning_TypeDefinitionIndex = 70469;

	class Effect_LineRendererSkinning : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::UnityEngine::Plane>** StaticGet_GACDMFGMLLG()
		{
			return (::Il2CppArray<::UnityEngine::Plane>**)Il2CppClass::FromTypeDefinitionIndex(Effect_LineRendererSkinning_TypeDefinitionIndex)->GetStaticField(0x60CE0);
		}
		::System::Int32 LineLength; // 0x18
		::Il2CppArray<::RPG::Client::Effect_LineRendererSkinning_BoneData*>* AdjustBoneArray; // 0x20
		::UnityEngine::Vector3 BaseLineOffset; // 0x28
		::System::Single FirstBoneWeightScale; // 0x34
		::RPG::Client::Effect_LineRendererSkinning_WeightCurveMode CurveMode; // 0x38
		::System::Single WeightCurveOffset; // 0x3C
		::System::Boolean UseTransScale; // 0x40
		::System::Single OriWidthMultiplier; // 0x44
		::UnityEngine::Transform* CamOffsetSimSpace; // 0x48
		::System::Boolean XYPlane; // 0x50
		::System::Boolean YZPlane; // 0x51
		::System::Boolean ZXPlane; // 0x52
		::System::Single OffsetDistance; // 0x54
		::System::Single CameraOffsetLength; // 0x58
		::System::Single CameraMaxValue; // 0x5C
		::System::Single ScaleOffset; // 0x60
		::System::Boolean EditorPreview; // 0x64
		::RPG::Client::Effect_LineRendererSkinning_CullingMode LineRenderCullingMode; // 0x68
		::System::Boolean VisableState; // 0x6C
		::System::Boolean UpdatePointInLateTick; // 0x6D
		::UnityEngine::Vector2 WeightFunctionsRange; // 0x70
		::System::Single WeightFunctionsScale; // 0x78
		::UnityEngine::LineRenderer* KGGEHOGPAOJ; // 0x80
		::Il2CppArray<::UnityEngine::Vector3>* KKOKJFBOPLI; // 0x88
		::UnityEngine::Camera* MJKHFGJGNKE; // 0x90
		::UnityEngine::Vector3 AHMPFJIABIC; // 0x98
		::Il2CppArray<::UnityEngine::Matrix4x4>* EKNIBMCNJID; // 0xA8
		::UnityEngine::Bounds LEMEEBPKBJB; // 0xB0
		::System::Boolean DNALBLMLCHM; // 0xC8
		::Il2CppArray<::RPG::Client::Effect_LineRendererSkinning_Struct_2_F7C243F317D8E44A_2>* ABDCDHABJLH; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_UPDATE_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void Method_5_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_METHOD_5_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void Method_5_218124418542E081()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_METHOD_5_218124418542E081_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::Effect_LineRendererSkinning_Struct_2_F7C243F317D8E44A_2>* Method_5_7432254BE2E104AA(::System::Single a1)
		{
			return ((::Il2CppArray<::RPG::Client::Effect_LineRendererSkinning_Struct_2_F7C243F317D8E44A_2>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_METHOD_5_7432254BE2E104AA_OFFSET))(this, a1);
		}

		::System::Single GetDerivativeWeight(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_GETDERIVATIVEWEIGHT_OFFSET))(this, a1);
		}

		::System::Single Method_5_89FADE33F34E4AE0(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_METHOD_5_89FADE33F34E4AE0_OFFSET))(this, a1);
		}

		::System::Single Method_5_89FADE33F34E4AE0_1(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_METHOD_5_89FADE33F34E4AE0_1_OFFSET))(this, a1);
		}

		::System::Single Method_5_89FADE33F34E4AE0_2(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_METHOD_5_89FADE33F34E4AE0_2_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_METHOD_5_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Single Method_5_DAC9219D09D338F5()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_METHOD_5_DAC9219D09D338F5_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* Method_5_02A2D800521F7143(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Single a2)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_METHOD_5_02A2D800521F7143_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::UnityEngine::Matrix4x4>* Method_5_DA5757BC97DEA931()
		{
			return ((::Il2CppArray<::UnityEngine::Matrix4x4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_METHOD_5_DA5757BC97DEA931_OFFSET))(this);
		}

		::System::Boolean Method_5_0F30679B05E70FC1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_METHOD_5_0F30679B05E70FC1_OFFSET))(this);
		}

		::System::Boolean Method_5_8A2AC7CD7EA66CAC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_METHOD_5_8A2AC7CD7EA66CAC_OFFSET))(this);
		}
	};
}
