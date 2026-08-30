#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Subway/AirlineSubwayWay_DoorSide.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Airship_AirshipEffectConfig; }
namespace RPG::Client { class Stage; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B45FC10)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_METHOD_5_AF01F8739A3CF255_OFFSET UNITYSDK_OFFSET(0x1B460AA0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_METHOD_5_F5C0805039071E2D_OFFSET UNITYSDK_OFFSET(0x1B460BE0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B45FDC0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_RELEASEARTMODEL_OFFSET UNITYSDK_OFFSET(0x1B460090)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETDOORSTATE_OFFSET UNITYSDK_OFFSET(0x1B460570)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETMOVESTATE_OFFSET UNITYSDK_OFFSET(0x1B4607A0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETTIMESCALE_OFFSET UNITYSDK_OFFSET(0x1B460870)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETUP_OFFSET UNITYSDK_OFFSET(0x1B460290)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_TRIGGERARRIVEDEFFECTS_OFFSET UNITYSDK_OFFSET(0x1B460940)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_TRIGGERSTARTUPEFFECT_OFFSET UNITYSDK_OFFSET(0x1B4609F0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B460D60)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B460D00)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__SETUP_B__17_0_OFFSET UNITYSDK_OFFSET(0x1B460DC0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__SETUP_B__17_1_OFFSET UNITYSDK_OFFSET(0x1B460DD0)

namespace RPG::Client::Subway
{
	inline static constexpr unsigned int AirshipSubway_TypeDefinitionIndex = 80819;

	class AirshipSubway : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_KLDIJBMOGPC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AirshipSubway_TypeDefinitionIndex)->GetStaticField(0xE010);
		}
		static ::System::Int32* StaticGet_NPDNEEPHEKN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AirshipSubway_TypeDefinitionIndex)->GetStaticField(0xE014);
		}
		static ::System::Int32* StaticGet_LCOJCBNILNL()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AirshipSubway_TypeDefinitionIndex)->GetStaticField(0xE018);
		}
		::System::String* prefabPath; // 0x18
		::UnityEngine::Vector3 prefabPositionOffset; // 0x20
		::UnityEngine::Vector3 prefabRotationOffset; // 0x2C
		::Il2CppArray<::RPG::Client::Airship_AirshipEffectConfig*>* initEffectConfigs; // 0x38
		::Il2CppArray<::RPG::Client::Airship_AirshipEffectConfig*>* startupEffectConfigs; // 0x40
		::Il2CppArray<::RPG::Client::Airship_AirshipEffectConfig*>* arrivedEffectConfigs; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Animator*>* OKDDLBMAMDJ; // 0x50
		::UnityEngine::GameObject* GKNBCPMJHMN; // 0x58
		::RPG::Client::OpenWorld::StreamingItemData* AMHMBBBIEIM; // 0x60
		::RPG::Client::Stage* PKLNPNKEJOO; // 0x68
		::System::Boolean CLDFKDDMFOC; // 0x70
		::RPG::Client::Subway::AirlineSubwayWay_DoorSide LGLGGNNGDBM; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_ONDESTROY_OFFSET))(this);
		}

		::System::Void Setup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETUP_OFFSET))(this);
		}

		::System::Void ReleaseArtModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_RELEASEARTMODEL_OFFSET))(this);
		}

		::System::Void SetDoorState(::System::Boolean a1, ::RPG::Client::Subway::AirlineSubwayWay_DoorSide a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::Subway::AirlineSubwayWay_DoorSide))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETDOORSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void SetMoveState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETMOVESTATE_OFFSET))(this, a1);
		}

		::System::Void SetTimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETTIMESCALE_OFFSET))(this, a1);
		}

		::System::Void TriggerArrivedEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_TRIGGERARRIVEDEFFECTS_OFFSET))(this);
		}

		::System::Void TriggerStartupEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_TRIGGERSTARTUPEFFECT_OFFSET))(this);
		}

		::System::Void Method_5_AF01F8739A3CF255(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_METHOD_5_AF01F8739A3CF255_OFFSET))(this, a1);
		}

		::System::Void Method_5_F5C0805039071E2D(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_METHOD_5_F5C0805039071E2D_OFFSET))(this, a1, a2);
		}

		::System::Void _Setup_b__17_0(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__SETUP_B__17_0_OFFSET))(this, a1, a2);
		}

		::System::Void _Setup_b__17_1(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__SETUP_B__17_1_OFFSET))(this, a1, a2, a3);
		}
	};
}
