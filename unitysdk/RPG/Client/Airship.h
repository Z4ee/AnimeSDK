#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAirshipWorkingState.h"
#include "unitysdk/RPG/Client/Airship_AirshipChildConfig.h"
#include "unitysdk/RPG/Client/Airship_AirshipDissolveConfig.h"
#include "unitysdk/RPG/Client/EAirshipType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AirShipRandomFloating;
class CommonShipEngineController;
class SceneProp_SpringBone;
namespace RPG::Client { class Airship_AirshipEffectConfig; }
namespace RPG::Client { class Stage; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AIRSHIP_ADD_SAILANCHORCHANGED_OFFSET UNITYSDK_OFFSET(0x19C53FA0)
#define RPG_CLIENT_AIRSHIP_AWAKE_OFFSET UNITYSDK_OFFSET(0x19C54260)
#define RPG_CLIENT_AIRSHIP_GET_ENGINECONTROLLER_OFFSET UNITYSDK_OFFSET(0x19C53EE0)
#define RPG_CLIENT_AIRSHIP_GET_RANDOMFLOATING_OFFSET UNITYSDK_OFFSET(0x19C53F20)
#define RPG_CLIENT_AIRSHIP_GET_SAILANCHORDEFAULTROTATION_OFFSET UNITYSDK_OFFSET(0x19C53F80)
#define RPG_CLIENT_AIRSHIP_GET_SAILANCHOR_OFFSET UNITYSDK_OFFSET(0x19C53F40)
#define RPG_CLIENT_AIRSHIP_GET_SPRINGBONE_OFFSET UNITYSDK_OFFSET(0x19C53F00)
#define RPG_CLIENT_AIRSHIP_GET_TRANSITIONSAILANCHOR_OFFSET UNITYSDK_OFFSET(0x19C53F60)
#define RPG_CLIENT_AIRSHIP_GET_WATERSURFACEEFFECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x19C54080)
#define RPG_CLIENT_AIRSHIP_INITGLOBALWIND_OFFSET UNITYSDK_OFFSET(0x19C53DF0)
#define RPG_CLIENT_AIRSHIP_LOADMODEL_OFFSET UNITYSDK_OFFSET(0x19C54DB0)
#define RPG_CLIENT_AIRSHIP_MARKWORKINGSTATE_OFFSET UNITYSDK_OFFSET(0x19C540A0)
#define RPG_CLIENT_AIRSHIP_METHOD_5_02CB6D0248D623C5_OFFSET UNITYSDK_OFFSET(0x19C55920)
#define RPG_CLIENT_AIRSHIP_METHOD_5_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x19C56AA0)
#define RPG_CLIENT_AIRSHIP_METHOD_5_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x19C558C0)
#define RPG_CLIENT_AIRSHIP_METHOD_5_2ED6C3773AA1E488_OFFSET UNITYSDK_OFFSET(0x19C569F0)
#define RPG_CLIENT_AIRSHIP_METHOD_5_4846405D2A66F7A9_OFFSET UNITYSDK_OFFSET(0x19C56490)
#define RPG_CLIENT_AIRSHIP_METHOD_5_4C0A4475F9E3DD79_OFFSET UNITYSDK_OFFSET(0x19C568E0)
#define RPG_CLIENT_AIRSHIP_METHOD_5_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x19C565B0)
#define RPG_CLIENT_AIRSHIP_METHOD_5_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0x19C54540)
#define RPG_CLIENT_AIRSHIP_METHOD_5_BABAF73CC3BAA3B1_OFFSET UNITYSDK_OFFSET(0x19C54600)
#define RPG_CLIENT_AIRSHIP_METHOD_5_C42C779B41D8413A_OFFSET UNITYSDK_OFFSET(0x19C567E0)
#define RPG_CLIENT_AIRSHIP_METHOD_5_E857BF303D293A2B_OFFSET UNITYSDK_OFFSET(0x19C56BB0)
#define RPG_CLIENT_AIRSHIP_METHOD_5_F2068F7BA20EA4DF_OFFSET UNITYSDK_OFFSET(0x19C56720)
#define RPG_CLIENT_AIRSHIP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19C56ED0)
#define RPG_CLIENT_AIRSHIP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19C545B0)
#define RPG_CLIENT_AIRSHIP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19C544B0)
#define RPG_CLIENT_AIRSHIP_RELEASEARTMODEL_OFFSET UNITYSDK_OFFSET(0x19C55410)
#define RPG_CLIENT_AIRSHIP_REMOVE_SAILANCHORCHANGED_OFFSET UNITYSDK_OFFSET(0x19C54010)
#define RPG_CLIENT_AIRSHIP_SETSCALE_OFFSET UNITYSDK_OFFSET(0x19C56E30)
#define RPG_CLIENT_AIRSHIP_SET_ENGINECONTROLLER_OFFSET UNITYSDK_OFFSET(0x19C53EF0)
#define RPG_CLIENT_AIRSHIP_SET_RANDOMFLOATING_OFFSET UNITYSDK_OFFSET(0x19C53F30)
#define RPG_CLIENT_AIRSHIP_SET_SAILANCHORDEFAULTROTATION_OFFSET UNITYSDK_OFFSET(0x19C53F90)
#define RPG_CLIENT_AIRSHIP_SET_SAILANCHOR_OFFSET UNITYSDK_OFFSET(0x19C53F50)
#define RPG_CLIENT_AIRSHIP_SET_SPRINGBONE_OFFSET UNITYSDK_OFFSET(0x19C53F10)
#define RPG_CLIENT_AIRSHIP_SET_TRANSITIONSAILANCHOR_OFFSET UNITYSDK_OFFSET(0x19C53F70)
#define RPG_CLIENT_AIRSHIP_SET_WATERSURFACEEFFECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x19C54090)
#define RPG_CLIENT_AIRSHIP_SYNCLOADMODEL_OFFSET UNITYSDK_OFFSET(0x19C576A0)
#define RPG_CLIENT_AIRSHIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C57E80)
#define RPG_CLIENT_AIRSHIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19C57B50)
#define RPG_CLIENT_AIRSHIP__LOADMODEL_B__98_0_OFFSET UNITYSDK_OFFSET(0x19C57EE0)
#define RPG_CLIENT_AIRSHIP__LOADMODEL_B__98_1_OFFSET UNITYSDK_OFFSET(0x19C57EF0)
#define RPG_CLIENT_AIRSHIP__LOADMODEL_B__98_2_OFFSET UNITYSDK_OFFSET(0x19C57F00)

namespace RPG::Client
{
	inline static constexpr unsigned int Airship_TypeDefinitionIndex = 59922;

	class Airship : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet_ABLCIDHJJKK()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(Airship_TypeDefinitionIndex)->GetStaticField(0x54F50);
		}
		static ::UnityEngine::Vector3* StaticGet_GlobalWindDirection()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Airship_TypeDefinitionIndex)->GetStaticField(0x116F0);
		}
		static ::System::Boolean* StaticGet_JBLKCFFKCNB()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Airship_TypeDefinitionIndex)->GetStaticField(0x116FC);
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
		::System::String* sailAnchorName; // 0x100
		::UnityEngine::Vector3 sailAnchorDefaultLocalEuler; // 0x108
		::System::Single sailboatMaxHeel; // 0x114
		::System::Single sailboatMaxSailOffset; // 0x118
		::System::Single sailboatMaxSailAngle; // 0x11C
		::UnityEngine::Vector3 sailboatFacingLocalAxis; // 0x120
		::System::Single sailboatForwardForbiddenArc; // 0x12C
		::System::Single sailboatWindSpeed; // 0x130
		::System::Single sailboatSailLookAheadDistance; // 0x134
		::System::Single sailboatBodyLookAheadDistance; // 0x138
		::System::Single springBoneEnableDistance; // 0x13C
		::UnityEngine::AnimationCurve* waterEffectScaleCurve; // 0x140
		::CommonShipEngineController* _EngineController_k__BackingField; // 0x148
		::SceneProp_SpringBone* _SpringBone_k__BackingField; // 0x150
		::AirShipRandomFloating* _RandomFloating_k__BackingField; // 0x158
		::UnityEngine::Transform* _SailAnchor_k__BackingField; // 0x160
		::UnityEngine::Transform* _TransitionSailAnchor_k__BackingField; // 0x168
		::UnityEngine::Quaternion _SailAnchorDefaultRotation_k__BackingField; // 0x170
		::System::Action* SailAnchorChanged; // 0x180
		::UnityEngine::Transform* _WaterSurfaceEffectTransform_k__BackingField; // 0x188
		::UnityEngine::Vector3 EHOIDNKOPEJ; // 0x190
		::System::String* HHPLCPIFDML; // 0x1A0
		::System::String* GFGDDPLDJJK; // 0x1A8
		::RPG::Client::OpenWorld::StreamingItemData* BFGJGFLPMBM; // 0x1B0
		::RPG::Client::OpenWorld::StreamingItemData* IHFPKNLIENK; // 0x1B8
		::RPG::Client::Stage* PKLNPNKEJOO; // 0x1C0
		::UnityEngine::GameObject* EHHCPMFKNKP; // 0x1C8
		::UnityEngine::GameObject* GBLOMLKFHGP; // 0x1D0
		::System::Boolean LONAJCCLMOH; // 0x1D8
		::System::Collections::Generic::List_1<::System::Single>* subwayCarriageOffsets; // 0x1E0
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* subwayCarriages; // 0x1E8
		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Renderer*>*>* CarriageRenderers; // 0x1F0
		::Il2CppArray<::UnityEngine::Renderer*>* airshipRenderers; // 0x1F8
		::Il2CppArray<::System::Boolean>* airshipRendererVisible; // 0x200

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP__CCTOR_OFFSET))();
		}

		static ::System::Void InitGlobalWind()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_INITGLOBALWIND_OFFSET))();
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

		::UnityEngine::Transform* get_SailAnchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_GET_SAILANCHOR_OFFSET))(this);
		}

		::System::Void set_SailAnchor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_SET_SAILANCHOR_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_TransitionSailAnchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_GET_TRANSITIONSAILANCHOR_OFFSET))(this);
		}

		::System::Void set_TransitionSailAnchor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_SET_TRANSITIONSAILANCHOR_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_SailAnchorDefaultRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_GET_SAILANCHORDEFAULTROTATION_OFFSET))(this);
		}

		::System::Void set_SailAnchorDefaultRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_SET_SAILANCHORDEFAULTROTATION_OFFSET))(this, a1);
		}

		::System::Void add_SailAnchorChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_ADD_SAILANCHORCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_SailAnchorChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_REMOVE_SAILANCHORCHANGED_OFFSET))(this, a1);
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

		::System::Void Method_5_652F3820D8B242FF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_METHOD_5_652F3820D8B242FF_OFFSET))(this);
		}

		::System::Void Method_5_BABAF73CC3BAA3B1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_METHOD_5_BABAF73CC3BAA3B1_OFFSET))(this, a1);
		}

		::System::Void LoadModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_LOADMODEL_OFFSET))(this);
		}

		::System::Boolean Method_5_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_METHOD_5_1808E1CF7A125519_OFFSET))(this);
		}

		::System::Void Method_5_02CB6D0248D623C5(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_METHOD_5_02CB6D0248D623C5_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_F2068F7BA20EA4DF(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_METHOD_5_F2068F7BA20EA4DF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_4846405D2A66F7A9(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_METHOD_5_4846405D2A66F7A9_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Transform* Method_5_C42C779B41D8413A(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_METHOD_5_C42C779B41D8413A_OFFSET))(this, a1);
		}

		::System::Void Method_5_4C0A4475F9E3DD79(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_METHOD_5_4C0A4475F9E3DD79_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_2ED6C3773AA1E488()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_METHOD_5_2ED6C3773AA1E488_OFFSET))(this);
		}

		::System::Void Method_5_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_METHOD_5_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_5_E857BF303D293A2B(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP_METHOD_5_E857BF303D293A2B_OFFSET))(this, a1);
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

		::System::Void _LoadModel_b__98_0(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP__LOADMODEL_B__98_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _LoadModel_b__98_1(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP__LOADMODEL_B__98_1_OFFSET))(this, a1, a2);
		}

		::System::Void _LoadModel_b__98_2(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIP__LOADMODEL_B__98_2_OFFSET))(this, a1, a2, a3);
		}
	};
}
