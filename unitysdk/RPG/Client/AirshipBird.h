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

#define RPG_CLIENT_AIRSHIPBIRD_AWAKE_OFFSET UNITYSDK_OFFSET(0xC64B2C0)
#define RPG_CLIENT_AIRSHIPBIRD_DISSOLVE_OFFSET UNITYSDK_OFFSET(0xC64A5C0)
#define RPG_CLIENT_AIRSHIPBIRD_LOADCARGO_OFFSET UNITYSDK_OFFSET(0xC64A660)
#define RPG_CLIENT_AIRSHIPBIRD_LOADMODEL_OFFSET UNITYSDK_OFFSET(0xC64ACF0)
#define RPG_CLIENT_AIRSHIPBIRD_METHOD_5_5713B8A224D0D751_OFFSET UNITYSDK_OFFSET(0xC64B950)
#define RPG_CLIENT_AIRSHIPBIRD_METHOD_5_5D4A30CB3BFFB6E6_OFFSET UNITYSDK_OFFSET(0xC64C120)
#define RPG_CLIENT_AIRSHIPBIRD_METHOD_5_A8B662A2CC4B2F7D_OFFSET UNITYSDK_OFFSET(0xC64B3E0)
#define RPG_CLIENT_AIRSHIPBIRD_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC64C530)
#define RPG_CLIENT_AIRSHIPBIRD_METHOD_5_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xC64C010)
#define RPG_CLIENT_AIRSHIPBIRD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC64B390)
#define RPG_CLIENT_AIRSHIPBIRD_PLAYSTOPANIM_OFFSET UNITYSDK_OFFSET(0xC64AC30)
#define RPG_CLIENT_AIRSHIPBIRD_RELEASEARTMODEL_OFFSET UNITYSDK_OFFSET(0xC64AFC0)
#define RPG_CLIENT_AIRSHIPBIRD_SETTIMESCALE_OFFSET UNITYSDK_OFFSET(0xC64B230)
#define RPG_CLIENT_AIRSHIPBIRD_TICK_OFFSET UNITYSDK_OFFSET(0xC64A560)
#define RPG_CLIENT_AIRSHIPBIRD_UNLOADCARGO_OFFSET UNITYSDK_OFFSET(0xC64A8E0)
#define RPG_CLIENT_AIRSHIPBIRD__CCTOR_OFFSET UNITYSDK_OFFSET(0xC64C600)
#define RPG_CLIENT_AIRSHIPBIRD__CTOR_OFFSET UNITYSDK_OFFSET(0xC64C580)
#define RPG_CLIENT_AIRSHIPBIRD__LOADCARGO_B__31_0_OFFSET UNITYSDK_OFFSET(0xC64C640)
#define RPG_CLIENT_AIRSHIPBIRD__LOADCARGO_B__31_1_OFFSET UNITYSDK_OFFSET(0xC64C650)
#define RPG_CLIENT_AIRSHIPBIRD__LOADMODEL_B__34_0_OFFSET UNITYSDK_OFFSET(0xC64C6A0)
#define RPG_CLIENT_AIRSHIPBIRD__LOADMODEL_B__34_1_OFFSET UNITYSDK_OFFSET(0xC64C6B0)
#define RPG_CLIENT_AIRSHIPBIRD__LOADMODEL_B__34_2_OFFSET UNITYSDK_OFFSET(0xC64C6C0)

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipBird_TypeDefinitionIndex = 59799;

	class AirshipBird : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet_ABLCIDHJJKK()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(AirshipBird_TypeDefinitionIndex)->GetStaticField(0x51800);
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
		::RPG::Client::AirshipBirdAudio* HJJMJLCIFNC; // 0x98
		::RPG::Client::BaseShaderPropertyTransition* KNBIKJLEHMH; // 0xA0
		::UnityEngine::GameObject* PGKENBMKDKA; // 0xA8
		::UnityEngine::Animator* APPGGMLEPLN; // 0xB0
		::System::Single ALLMMMCIHNO; // 0xB8
		::UnityEngine::GameObject* GGGEGGMNIGL; // 0xC0
		::System::Single AGCLGPJHEJB; // 0xC8
		::System::Single OBJJIELNFLP; // 0xCC
		::System::Boolean IOGNJIGJDOB; // 0xD0
		::RPG::Client::OpenWorld::StreamingItemData* ILPCBBGKDHM; // 0xD8
		::RPG::Client::OpenWorld::StreamingItemData* JNEGBKLBOAH; // 0xE0
		::RPG::Client::Stage* PKLNPNKEJOO; // 0xE8

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

		::System::Void Method_5_A8B662A2CC4B2F7D(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_METHOD_5_A8B662A2CC4B2F7D_OFFSET))(this, a1);
		}

		::System::Void Method_5_5713B8A224D0D751(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_METHOD_5_5713B8A224D0D751_OFFSET))(this, a1);
		}

		::System::Void Method_5_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_METHOD_5_E3DE31A03057E055_OFFSET))(this);
		}

		::System::Void Method_5_5D4A30CB3BFFB6E6(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_METHOD_5_5D4A30CB3BFFB6E6_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void _LoadCargo_b__31_0(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD__LOADCARGO_B__31_0_OFFSET))(this, a1, a2);
		}

		::System::Void _LoadCargo_b__31_1(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD__LOADCARGO_B__31_1_OFFSET))(this, a1, a2);
		}

		::System::Void _LoadModel_b__34_0(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD__LOADMODEL_B__34_0_OFFSET))(this, a1, a2);
		}

		::System::Void _LoadModel_b__34_1(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD__LOADMODEL_B__34_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _LoadModel_b__34_2(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD__LOADMODEL_B__34_2_OFFSET))(this, a1, a2);
		}
	};
}
