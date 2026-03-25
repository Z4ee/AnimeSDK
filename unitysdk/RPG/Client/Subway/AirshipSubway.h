#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Subway/AirlineSubwayWay_DoorSide.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Airship_AirshipEffectConfig; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_AWAKE_OFFSET UNITYSDK_OFFSET(0xA4F2B30)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_METHOD_5_1CF3C4FE612DFED7_OFFSET UNITYSDK_OFFSET(0xA4F3830)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_METHOD_5_F5C0805039071E2D_OFFSET UNITYSDK_OFFSET(0xA4F3980)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA4F2CE0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_RELEASEARTMODEL_OFFSET UNITYSDK_OFFSET(0xA4F2F40)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETDOORSTATE_OFFSET UNITYSDK_OFFSET(0xA4F3330)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETMOVESTATE_OFFSET UNITYSDK_OFFSET(0xA4F3520)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETTIMESCALE_OFFSET UNITYSDK_OFFSET(0xA4F3600)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETUP_OFFSET UNITYSDK_OFFSET(0xA4F3120)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_TRIGGERARRIVEDEFFECTS_OFFSET UNITYSDK_OFFSET(0xA4F36B0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_TRIGGERSTARTUPEFFECT_OFFSET UNITYSDK_OFFSET(0xA4F3770)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4F3B20)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__CTOR_OFFSET UNITYSDK_OFFSET(0xA4F3AC0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__SETUP_B__16_0_OFFSET UNITYSDK_OFFSET(0xA4F3B80)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__SETUP_B__16_1_OFFSET UNITYSDK_OFFSET(0xA4F3B90)

namespace RPG::Client::Subway
{
	inline static constexpr unsigned int AirshipSubway_TypeDefinitionIndex = 64519;

	class AirshipSubway : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AirshipSubway_TypeDefinitionIndex)->GetStaticField(0xD3D0);
		}
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AirshipSubway_TypeDefinitionIndex)->GetStaticField(0xD3D4);
		}
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AirshipSubway_TypeDefinitionIndex)->GetStaticField(0xD3D8);
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
		::System::Boolean Field_5_12; // 0x68
		::RPG::Client::Subway::AirlineSubwayWay_DoorSide Field_5_13; // 0x6C

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

		::System::Void Method_5_1CF3C4FE612DFED7(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_METHOD_5_1CF3C4FE612DFED7_OFFSET))(this, a1);
		}

		::System::Void Method_5_F5C0805039071E2D(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_METHOD_5_F5C0805039071E2D_OFFSET))(this, a1, a2);
		}

		::System::Void _Setup_b__16_0(::UnityEngine::GameObject* go, ::RPG::Client::OpenWorld::StreamingItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__SETUP_B__16_0_OFFSET))(this, go, data);
		}

		::System::Void _Setup_b__16_1(::UnityEngine::GameObject* last, ::UnityEngine::GameObject* now, ::RPG::Client::OpenWorld::StreamingItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__SETUP_B__16_1_OFFSET))(this, last, now, data);
		}
	};
}
