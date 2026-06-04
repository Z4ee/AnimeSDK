#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAirshipWorkingState.h"
#include "unitysdk/RPG/Client/Airship_AirshipChildConfig.h"
#include "unitysdk/RPG/Client/Airship_AirshipDissolveConfig.h"
#include "unitysdk/RPG/Client/EAirshipType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AirShipRandomFloating;
class CommonShipEngineController;
class SceneProp_SpringBone;
namespace RPG::Client { class Airship_AirshipEffectConfig; }
namespace RPG::Client { class Stage; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AIRSHIP_AWAKE_OFFSET UNITYSDK_OFFSET(0xB2DA390)
#define RPG_CLIENT_AIRSHIP_GET_ENGINECONTROLLER_OFFSET UNITYSDK_OFFSET(0xB2DA020)
#define RPG_CLIENT_AIRSHIP_GET_RANDOMFLOATING_OFFSET UNITYSDK_OFFSET(0xB2DA060)
#define RPG_CLIENT_AIRSHIP_GET_SPRINGBONE_OFFSET UNITYSDK_OFFSET(0xB2DA040)
#define RPG_CLIENT_AIRSHIP_GET_WATERSURFACEEFFECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB2DA080)
#define RPG_CLIENT_AIRSHIP_LOADMODEL_OFFSET UNITYSDK_OFFSET(0xB2DAFD0)
#define RPG_CLIENT_AIRSHIP_MARKWORKINGSTATE_OFFSET UNITYSDK_OFFSET(0xB2DA0A0)
#define RPG_CLIENT_AIRSHIP_METHOD_5_3EABCBB793AFDAE2_OFFSET UNITYSDK_OFFSET(0xB2DC010)
#define RPG_CLIENT_AIRSHIP_METHOD_5_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xB2DBE70)
#define RPG_CLIENT_AIRSHIP_METHOD_5_E857BF303D293A2B_OFFSET UNITYSDK_OFFSET(0xB2DB500)
#define RPG_CLIENT_AIRSHIP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB2DC360)
#define RPG_CLIENT_AIRSHIP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB2DABD0)
#define RPG_CLIENT_AIRSHIP_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB2DA6D0)
#define RPG_CLIENT_AIRSHIP_RELEASEARTMODEL_OFFSET UNITYSDK_OFFSET(0xB2DB360)
#define RPG_CLIENT_AIRSHIP_SETSCALE_OFFSET UNITYSDK_OFFSET(0xB2DC2C0)
#define RPG_CLIENT_AIRSHIP_SET_ENGINECONTROLLER_OFFSET UNITYSDK_OFFSET(0xB2DA030)
#define RPG_CLIENT_AIRSHIP_SET_RANDOMFLOATING_OFFSET UNITYSDK_OFFSET(0xB2DA070)
#define RPG_CLIENT_AIRSHIP_SET_SPRINGBONE_OFFSET UNITYSDK_OFFSET(0xB2DA050)
#define RPG_CLIENT_AIRSHIP_SET_WATERSURFACEEFFECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB2DA090)
#define RPG_CLIENT_AIRSHIP_SYNCLOADMODEL_OFFSET UNITYSDK_OFFSET(0xB2DCA80)
#define RPG_CLIENT_AIRSHIP__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2DD240)
#define RPG_CLIENT_AIRSHIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB2DCF30)
#define RPG_CLIENT_AIRSHIP__LOADMODEL_B__67_0_OFFSET UNITYSDK_OFFSET(0xB2DD280)
#define RPG_CLIENT_AIRSHIP__LOADMODEL_B__67_1_OFFSET UNITYSDK_OFFSET(0xB2DD290)
#define RPG_CLIENT_AIRSHIP__LOADMODEL_B__67_2_OFFSET UNITYSDK_OFFSET(0xB2DD2A0)
#define RPG_CLIENT_AIRSHIP__LOADMODEL_B__67_3_OFFSET UNITYSDK_OFFSET(0xB2DD2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int Airship_TypeDefinitionIndex = 55885;

	class Airship : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet_Field_5_0()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(Airship_TypeDefinitionIndex)->GetStaticField(0x60700);
		}
		::System::String* prefabPath; // 0x18
		::UnityEngine::Vector3 prefabPositionOffset; // 0x20
		::UnityEngine::Vector3 prefabRotationOffset; // 0x2C
		::UnityEngine::Vector3 CargoPositionOffset; // 0x38
		::UnityEngine::Vector3 CargoRotationOffset; // 0x44
		::Il2CppArray<::System::String*>* randomCargoList; // 0x50
		::RPG::Client::EAirshipType type; // 0x58
		::System::Single maxMoveSpeed; // 0x5C
		::System::Single maxAcceleration; // 0x60
		::System::Single maxDeceleration; // 0x64
		::UnityEngine::AnimationCurve* decelerationCurve; // 0x68
		::System::Single maxRotationSpeed; // 0x70
		::UnityEngine::Vector2 verticalTiltRange; // 0x74
		::UnityEngine::Vector2 horizontalTiltRange; // 0x7C
		::UnityEngine::AnimationCurve* horizontalTiltCurve; // 0x88
		::UnityEngine::Vector3 colliderCenter; // 0x90
		::System::Single colliderRadius; // 0x9C
		::System::Single colliderHeight; // 0xA0
		::System::Single effectLodDistance; // 0xA4
		::RPG::Client::Airship_AirshipEffectConfig* workingEffectConfig; // 0xA8
		::RPG::Client::Airship_AirshipDissolveConfig airshipDissolveConfig; // 0xB0
		::RPG::Client::Airship_AirshipEffectConfig* moveEffectConfig; // 0xC8
		::RPG::Client::Airship_AirshipEffectConfig* accelerateEffectConfig; // 0xD0
		::RPG::Client::Airship_AirshipEffectConfig* decelerateEffectConfig; // 0xD8
		::RPG::Client::Airship_AirshipEffectConfig* mooringUpEffectConfig; // 0xE0
		::RPG::Client::Airship_AirshipEffectConfig* mooringDownEffectConfig; // 0xE8
		::System::Single childCostTime; // 0xF0
		::System::Collections::Generic::List_1<::RPG::Client::Airship_AirshipChildConfig>* childConfigs; // 0xF8
		::System::Single springBoneEnableDistance; // 0x100
		::UnityEngine::AnimationCurve* waterEffectScaleCurve; // 0x108
		::CommonShipEngineController* _EngineController_k__BackingField; // 0x110
		::SceneProp_SpringBone* _SpringBone_k__BackingField; // 0x118
		::AirShipRandomFloating* _RandomFloating_k__BackingField; // 0x120
		::UnityEngine::Transform* _WaterSurfaceEffectTransform_k__BackingField; // 0x128
		::UnityEngine::Vector3 Field_5_35; // 0x130
		::System::String* Field_5_36; // 0x140
		::System::String* Field_5_37; // 0x148
		::RPG::Client::OpenWorld::StreamingItemData* Field_5_38; // 0x150
		::RPG::Client::OpenWorld::StreamingItemData* Field_5_39; // 0x158
		::RPG::Client::Stage* Field_5_40; // 0x160
		::UnityEngine::GameObject* Field_5_41; // 0x168
		::UnityEngine::GameObject* Field_5_42; // 0x170
		::System::Collections::Generic::List_1<::System::Single>* subwayCarriageOffsets; // 0x178
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* subwayCarriages; // 0x180
		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Renderer*>*>* CarriageRenderers; // 0x188
		::Il2CppArray<::UnityEngine::Renderer*>* airshipRenderers; // 0x190
		::Il2CppArray<::System::Boolean>* airshipRendererVisible; // 0x198

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP__CCTOR_OFFSET))();
		}

		::CommonShipEngineController* get_EngineController()
		{
			return ((::CommonShipEngineController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_GET_ENGINECONTROLLER_OFFSET))(this);
		}

		::System::Void set_EngineController(::CommonShipEngineController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CommonShipEngineController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_SET_ENGINECONTROLLER_OFFSET))(this, a1);
		}

		::SceneProp_SpringBone* get_SpringBone()
		{
			return ((::SceneProp_SpringBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_GET_SPRINGBONE_OFFSET))(this);
		}

		::System::Void set_SpringBone(::SceneProp_SpringBone* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SceneProp_SpringBone*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_SET_SPRINGBONE_OFFSET))(this, a1);
		}

		::AirShipRandomFloating* get_RandomFloating()
		{
			return ((::AirShipRandomFloating*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_GET_RANDOMFLOATING_OFFSET))(this);
		}

		::System::Void set_RandomFloating(::AirShipRandomFloating* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AirShipRandomFloating*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_SET_RANDOMFLOATING_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_WaterSurfaceEffectTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_GET_WATERSURFACEEFFECTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_WaterSurfaceEffectTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_SET_WATERSURFACEEFFECTTRANSFORM_OFFSET))(this, a1);
		}

		::System::Void MarkWorkingState(::EAirshipWorkingState a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::EAirshipWorkingState, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_MARKWORKINGSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_ONDISABLE_OFFSET))(this);
		}

		::System::Void LoadModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_LOADMODEL_OFFSET))(this);
		}

		::System::Void Method_5_E857BF303D293A2B(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_METHOD_5_E857BF303D293A2B_OFFSET))(this, a1);
		}

		::System::Void Method_5_3EABCBB793AFDAE2(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_METHOD_5_3EABCBB793AFDAE2_OFFSET))(this, a1);
		}

		::System::Void SetScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_SETSCALE_OFFSET))(this, a1);
		}

		::System::Void Method_5_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_METHOD_5_508D4DD02D3DB74E_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_ONDESTROY_OFFSET))(this);
		}

		::System::Void ReleaseArtModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_RELEASEARTMODEL_OFFSET))(this);
		}

		::System::Void SyncLoadModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_SYNCLOADMODEL_OFFSET))(this);
		}

		::System::Void _LoadModel_b__67_0(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP__LOADMODEL_B__67_0_OFFSET))(this, a1, a2);
		}

		::System::Void _LoadModel_b__67_1(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP__LOADMODEL_B__67_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _LoadModel_b__67_2(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP__LOADMODEL_B__67_2_OFFSET))(this, a1, a2);
		}

		::System::Void _LoadModel_b__67_3(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP__LOADMODEL_B__67_3_OFFSET))(this, a1, a2, a3);
		}
	};
}
