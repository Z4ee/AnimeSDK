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

#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_AWAKE_OFFSET UNITYSDK_OFFSET(0xC93F1B0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_METHOD_5_AF01F8739A3CF255_OFFSET UNITYSDK_OFFSET(0xC93FF00)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_METHOD_5_F5C0805039071E2D_OFFSET UNITYSDK_OFFSET(0xC940040)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC93F330)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_RELEASEARTMODEL_OFFSET UNITYSDK_OFFSET(0xC93F550)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETDOORSTATE_OFFSET UNITYSDK_OFFSET(0xC93F9D0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETMOVESTATE_OFFSET UNITYSDK_OFFSET(0xC93FC00)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETTIMESCALE_OFFSET UNITYSDK_OFFSET(0xC93FCD0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETUP_OFFSET UNITYSDK_OFFSET(0xC93F6F0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_TRIGGERARRIVEDEFFECTS_OFFSET UNITYSDK_OFFSET(0xC93FDA0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_TRIGGERSTARTUPEFFECT_OFFSET UNITYSDK_OFFSET(0xC93FE50)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__CCTOR_OFFSET UNITYSDK_OFFSET(0xC9401C0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__CTOR_OFFSET UNITYSDK_OFFSET(0xC940160)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__SETUP_B__17_0_OFFSET UNITYSDK_OFFSET(0xC940220)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__SETUP_B__17_1_OFFSET UNITYSDK_OFFSET(0xC940230)

namespace RPG::Client::Subway
{
	inline static constexpr unsigned int AirshipSubway_TypeDefinitionIndex = 74389;

	class AirshipSubway : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AirshipSubway_TypeDefinitionIndex)->GetStaticField(0xE550);
		}
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AirshipSubway_TypeDefinitionIndex)->GetStaticField(0xE554);
		}
		static ::System::Int32* StaticGet_Field_5_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AirshipSubway_TypeDefinitionIndex)->GetStaticField(0xE558);
		}
		::System::String* prefabPath; // 0x18
		::UnityEngine::Vector3 prefabPositionOffset; // 0x20
		::UnityEngine::Vector3 prefabRotationOffset; // 0x2C
		::Il2CppArray<::RPG::Client::Airship_AirshipEffectConfig*>* initEffectConfigs; // 0x38
		::Il2CppArray<::RPG::Client::Airship_AirshipEffectConfig*>* startupEffectConfigs; // 0x40
		::Il2CppArray<::RPG::Client::Airship_AirshipEffectConfig*>* arrivedEffectConfigs; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Animator*>* Field_5_9; // 0x50
		::UnityEngine::GameObject* Field_5_10; // 0x58
		::RPG::Client::OpenWorld::StreamingItemData* Field_5_11; // 0x60
		::RPG::Client::Stage* Field_5_12; // 0x68
		::System::Boolean Field_5_13; // 0x70
		::RPG::Client::Subway::AirlineSubwayWay_DoorSide Field_5_14; // 0x74

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
