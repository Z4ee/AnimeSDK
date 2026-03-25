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
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AIRSHIP_AWAKE_OFFSET UNITYSDK_OFFSET(0x908E050)
#define RPG_CLIENT_AIRSHIP_GET_ENGINECONTROLLER_OFFSET UNITYSDK_OFFSET(0x908DDE0)
#define RPG_CLIENT_AIRSHIP_GET_RANDOMFLOATING_OFFSET UNITYSDK_OFFSET(0x908DE20)
#define RPG_CLIENT_AIRSHIP_GET_SPRINGBONE_OFFSET UNITYSDK_OFFSET(0x908DE00)
#define RPG_CLIENT_AIRSHIP_GET_WATERSURFACEEFFECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x908DE40)
#define RPG_CLIENT_AIRSHIP_LOADMODEL_OFFSET UNITYSDK_OFFSET(0x908E640)
#define RPG_CLIENT_AIRSHIP_MARKWORKINGSTATE_OFFSET UNITYSDK_OFFSET(0x908DE60)
#define RPG_CLIENT_AIRSHIP_METHOD_5_09AB7406BC1E05C6_OFFSET UNITYSDK_OFFSET(0x908F510)
#define RPG_CLIENT_AIRSHIP_METHOD_5_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x908F3A0)
#define RPG_CLIENT_AIRSHIP_METHOD_5_6F3ED48AF05D074C_OFFSET UNITYSDK_OFFSET(0x908EB20)
#define RPG_CLIENT_AIRSHIP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x908F860)
#define RPG_CLIENT_AIRSHIP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x908E500)
#define RPG_CLIENT_AIRSHIP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x908E3A0)
#define RPG_CLIENT_AIRSHIP_RELEASEARTMODEL_OFFSET UNITYSDK_OFFSET(0x908E950)
#define RPG_CLIENT_AIRSHIP_SETSCALE_OFFSET UNITYSDK_OFFSET(0x908F7C0)
#define RPG_CLIENT_AIRSHIP_SET_ENGINECONTROLLER_OFFSET UNITYSDK_OFFSET(0x908DDF0)
#define RPG_CLIENT_AIRSHIP_SET_RANDOMFLOATING_OFFSET UNITYSDK_OFFSET(0x908DE30)
#define RPG_CLIENT_AIRSHIP_SET_SPRINGBONE_OFFSET UNITYSDK_OFFSET(0x908DE10)
#define RPG_CLIENT_AIRSHIP_SET_WATERSURFACEEFFECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x908DE50)
#define RPG_CLIENT_AIRSHIP_SYNCLOADMODEL_OFFSET UNITYSDK_OFFSET(0x908FC30)
#define RPG_CLIENT_AIRSHIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x9090400)
#define RPG_CLIENT_AIRSHIP__CTOR_OFFSET UNITYSDK_OFFSET(0x90900E0)
#define RPG_CLIENT_AIRSHIP__LOADMODEL_B__66_0_OFFSET UNITYSDK_OFFSET(0x9090440)
#define RPG_CLIENT_AIRSHIP__LOADMODEL_B__66_1_OFFSET UNITYSDK_OFFSET(0x9090450)
#define RPG_CLIENT_AIRSHIP__LOADMODEL_B__66_2_OFFSET UNITYSDK_OFFSET(0x9090460)
#define RPG_CLIENT_AIRSHIP__LOADMODEL_B__66_3_OFFSET UNITYSDK_OFFSET(0x9090470)

namespace RPG::Client
{
	inline static constexpr unsigned int Airship_TypeDefinitionIndex = 48403;

	class Airship : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet_Field_5_0()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(Airship_TypeDefinitionIndex)->GetStaticField(0x32120);
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
		::UnityEngine::GameObject* Field_5_40; // 0x160
		::UnityEngine::GameObject* Field_5_41; // 0x168
		::System::Collections::Generic::List_1<::System::Single>* subwayCarriageOffsets; // 0x170
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* subwayCarriages; // 0x178
		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Renderer*>*>* CarriageRenderers; // 0x180
		::Il2CppArray<::UnityEngine::Renderer*>* airshipRenderers; // 0x188
		::Il2CppArray<::System::Boolean>* airshipRendererVisible; // 0x190

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

		::System::Void set_EngineController(::CommonShipEngineController* value)
		{
			return ((::System::Void(*)(::PVOID, ::CommonShipEngineController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_SET_ENGINECONTROLLER_OFFSET))(this, value);
		}

		::SceneProp_SpringBone* get_SpringBone()
		{
			return ((::SceneProp_SpringBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_GET_SPRINGBONE_OFFSET))(this);
		}

		::System::Void set_SpringBone(::SceneProp_SpringBone* value)
		{
			return ((::System::Void(*)(::PVOID, ::SceneProp_SpringBone*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_SET_SPRINGBONE_OFFSET))(this, value);
		}

		::AirShipRandomFloating* get_RandomFloating()
		{
			return ((::AirShipRandomFloating*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_GET_RANDOMFLOATING_OFFSET))(this);
		}

		::System::Void set_RandomFloating(::AirShipRandomFloating* value)
		{
			return ((::System::Void(*)(::PVOID, ::AirShipRandomFloating*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_SET_RANDOMFLOATING_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_WaterSurfaceEffectTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_GET_WATERSURFACEEFFECTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_WaterSurfaceEffectTransform(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_SET_WATERSURFACEEFFECTTRANSFORM_OFFSET))(this, value);
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

		::System::Void Method_5_6F3ED48AF05D074C(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_METHOD_5_6F3ED48AF05D074C_OFFSET))(this, a1);
		}

		::System::Void Method_5_09AB7406BC1E05C6(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_METHOD_5_09AB7406BC1E05C6_OFFSET))(this, a1);
		}

		::System::Void SetScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_SETSCALE_OFFSET))(this, a1);
		}

		::System::Void Method_5_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_METHOD_5_51CFFE2AF748ECD7_OFFSET))(this);
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

		::System::Void _LoadModel_b__66_0(::UnityEngine::GameObject* go, ::RPG::Client::OpenWorld::StreamingItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP__LOADMODEL_B__66_0_OFFSET))(this, go, data);
		}

		::System::Void _LoadModel_b__66_1(::UnityEngine::GameObject* last, ::UnityEngine::GameObject* now, ::RPG::Client::OpenWorld::StreamingItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP__LOADMODEL_B__66_1_OFFSET))(this, last, now, data);
		}

		::System::Void _LoadModel_b__66_2(::UnityEngine::GameObject* go, ::RPG::Client::OpenWorld::StreamingItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP__LOADMODEL_B__66_2_OFFSET))(this, go, data);
		}

		::System::Void _LoadModel_b__66_3(::UnityEngine::GameObject* last, ::UnityEngine::GameObject* now, ::RPG::Client::OpenWorld::StreamingItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP__LOADMODEL_B__66_3_OFFSET))(this, last, now, data);
		}
	};
}
