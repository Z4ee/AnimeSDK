#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AirshipBirdAudio; }
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::Client { class Stage; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_AIRSHIPBIRD_AWAKE_OFFSET UNITYSDK_OFFSET(0x9CEEA60)
#define RPG_CLIENT_AIRSHIPBIRD_DISSOLVE_OFFSET UNITYSDK_OFFSET(0x9CEE050)
#define RPG_CLIENT_AIRSHIPBIRD_LOADCARGO_OFFSET UNITYSDK_OFFSET(0x9CEE0F0)
#define RPG_CLIENT_AIRSHIPBIRD_LOADMODEL_OFFSET UNITYSDK_OFFSET(0x9CEE680)
#define RPG_CLIENT_AIRSHIPBIRD_METHOD_5_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x9CEF720)
#define RPG_CLIENT_AIRSHIPBIRD_METHOD_5_5713B8A224D0D751_OFFSET UNITYSDK_OFFSET(0x9CEF0A0)
#define RPG_CLIENT_AIRSHIPBIRD_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9CEFC00)
#define RPG_CLIENT_AIRSHIPBIRD_METHOD_5_F0AAE28678936203_OFFSET UNITYSDK_OFFSET(0x9CEF7D0)
#define RPG_CLIENT_AIRSHIPBIRD_METHOD_5_F1847A5673A1221F_OFFSET UNITYSDK_OFFSET(0x9CEEB80)
#define RPG_CLIENT_AIRSHIPBIRD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9CEEB30)
#define RPG_CLIENT_AIRSHIPBIRD_PLAYSTOPANIM_OFFSET UNITYSDK_OFFSET(0x9CEE5C0)
#define RPG_CLIENT_AIRSHIPBIRD_RELEASEARTMODEL_OFFSET UNITYSDK_OFFSET(0x9CEE8B0)
#define RPG_CLIENT_AIRSHIPBIRD_SETTIMESCALE_OFFSET UNITYSDK_OFFSET(0x9CEE9D0)
#define RPG_CLIENT_AIRSHIPBIRD_TICK_OFFSET UNITYSDK_OFFSET(0x9CEDFF0)
#define RPG_CLIENT_AIRSHIPBIRD_UNLOADCARGO_OFFSET UNITYSDK_OFFSET(0x9CEE2E0)
#define RPG_CLIENT_AIRSHIPBIRD__CCTOR_OFFSET UNITYSDK_OFFSET(0x9CEFCD0)
#define RPG_CLIENT_AIRSHIPBIRD__CTOR_OFFSET UNITYSDK_OFFSET(0x9CEFC50)
#define RPG_CLIENT_AIRSHIPBIRD__LOADCARGO_B__31_0_OFFSET UNITYSDK_OFFSET(0x9CEFD30)
#define RPG_CLIENT_AIRSHIPBIRD__LOADCARGO_B__31_1_OFFSET UNITYSDK_OFFSET(0x9CEFD40)
#define RPG_CLIENT_AIRSHIPBIRD__LOADMODEL_B__34_0_OFFSET UNITYSDK_OFFSET(0x9CEFD90)
#define RPG_CLIENT_AIRSHIPBIRD__LOADMODEL_B__34_1_OFFSET UNITYSDK_OFFSET(0x9CEFDA0)
#define RPG_CLIENT_AIRSHIPBIRD__LOADMODEL_B__34_2_OFFSET UNITYSDK_OFFSET(0x9CEFDB0)

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipBird_TypeDefinitionIndex = 55165;

	class AirshipBird : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet_Field_5_0()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(AirshipBird_TypeDefinitionIndex)->GetStaticField(0x29170);
		}
		::System::String* prefabPath; // 0x18
		::UnityEngine::Vector3 prefabPositionOffset; // 0x20
		::UnityEngine::Vector3 prefabRotationOffset; // 0x2C
		::System::String* cargoPrefabPath; // 0x38
		::UnityEngine::Vector3 cargoPositionOffset; // 0x40
		::UnityEngine::Vector3 cargoRotationOffset; // 0x4C
		::System::String* cargoEffectPath; // 0x58
		::System::Single flyStopDistance; // 0x60
		::System::String* flyStopAnimName; // 0x68
		::System::Single dissolveTime; // 0x70
		::System::Single dissolveWaitTime; // 0x74
		::System::Single maxMoveSpeed; // 0x78
		::System::Single maxAcceleration; // 0x7C
		::System::Single maxDeceleration; // 0x80
		::System::Single maxRotationSpeed; // 0x84
		::UnityEngine::Vector3 colliderCenter; // 0x88
		::RPG::Client::AirshipBirdAudio* Field_5_17; // 0x98
		::RPG::Client::BaseShaderPropertyTransition* Field_5_18; // 0xA0
		::UnityEngine::GameObject* Field_5_19; // 0xA8
		::UnityEngine::Animator* Field_5_20; // 0xB0
		::System::Single Field_5_21; // 0xB8
		::UnityEngine::GameObject* Field_5_22; // 0xC0
		::System::Single Field_5_23; // 0xC8
		::System::Single Field_5_24; // 0xCC
		::System::Boolean Field_5_25; // 0xD0
		::RPG::Client::OpenWorld::StreamingItemData* Field_5_26; // 0xD8
		::RPG::Client::OpenWorld::StreamingItemData* Field_5_27; // 0xE0
		::RPG::Client::Stage* Field_5_28; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD__CCTOR_OFFSET))();
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_TICK_OFFSET))(this, a1);
		}

		::System::Void Dissolve(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_DISSOLVE_OFFSET))(this, a1);
		}

		::System::Void LoadCargo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_LOADCARGO_OFFSET))(this);
		}

		::System::Void UnloadCargo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_UNLOADCARGO_OFFSET))(this);
		}

		::System::Void PlayStopAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_PLAYSTOPANIM_OFFSET))(this);
		}

		::System::Void LoadModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_LOADMODEL_OFFSET))(this);
		}

		::System::Void ReleaseArtModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_RELEASEARTMODEL_OFFSET))(this);
		}

		::System::Void SetTimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_SETTIMESCALE_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_F1847A5673A1221F(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_METHOD_5_F1847A5673A1221F_OFFSET))(this, a1);
		}

		::System::Void Method_5_5713B8A224D0D751(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_METHOD_5_5713B8A224D0D751_OFFSET))(this, a1);
		}

		::System::Void Method_5_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_METHOD_5_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_5_F0AAE28678936203(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_METHOD_5_F0AAE28678936203_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void _LoadCargo_b__31_0(::UnityEngine::GameObject* go, ::RPG::Client::OpenWorld::StreamingItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD__LOADCARGO_B__31_0_OFFSET))(this, go, data);
		}

		::System::Void _LoadCargo_b__31_1(::UnityEngine::GameObject* go, ::RPG::Client::OpenWorld::StreamingItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD__LOADCARGO_B__31_1_OFFSET))(this, go, data);
		}

		::System::Void _LoadModel_b__34_0(::UnityEngine::GameObject* go, ::RPG::Client::OpenWorld::StreamingItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD__LOADMODEL_B__34_0_OFFSET))(this, go, data);
		}

		::System::Void _LoadModel_b__34_1(::UnityEngine::GameObject* last, ::UnityEngine::GameObject* now, ::RPG::Client::OpenWorld::StreamingItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD__LOADMODEL_B__34_1_OFFSET))(this, last, now, data);
		}

		::System::Void _LoadModel_b__34_2(::UnityEngine::GameObject* go, ::RPG::Client::OpenWorld::StreamingItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD__LOADMODEL_B__34_2_OFFSET))(this, go, data);
		}
	};
}
