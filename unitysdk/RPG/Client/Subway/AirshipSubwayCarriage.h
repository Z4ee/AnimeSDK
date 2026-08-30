#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Subway/AirshipSubwayCarriage_AnchorsAnimGroupMap.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1B460DE0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_METHOD_5_1B9EFB8F22728CB8_OFFSET UNITYSDK_OFFSET(0x1B462C80)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_METHOD_5_21FBC382EA5ECE99_1_OFFSET UNITYSDK_OFFSET(0x1B462BA0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_METHOD_5_21FBC382EA5ECE99_OFFSET UNITYSDK_OFFSET(0x1B462AC0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_METHOD_5_44AC3F3C85C7CAA3_OFFSET UNITYSDK_OFFSET(0x1B461F00)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_METHOD_5_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x1B460F20)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_METHOD_5_660474B0F8C5FECE_OFFSET UNITYSDK_OFFSET(0x1B462DD0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_METHOD_5_B69A6865F8BEDF36_OFFSET UNITYSDK_OFFSET(0x1B4631B0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_METHOD_5_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0x1B460FA0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_METHOD_5_C0342BA270C91EF6_OFFSET UNITYSDK_OFFSET(0x1B4625D0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_METHOD_5_F59E20BA9BC23BFE_OFFSET UNITYSDK_OFFSET(0x1B4626B0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_METHOD_5_FDDF7B7E329390B7_OFFSET UNITYSDK_OFFSET(0x1B462150)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B463000)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B462FC0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1B463040)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4636F0)

namespace RPG::Client::Subway
{
	inline static constexpr unsigned int AirshipSubwayCarriage_TypeDefinitionIndex = 80820;

	class AirshipSubwayCarriage : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* MemberAttachPointName; // 0x18
		::Il2CppArray<::RPG::Client::Subway::AirshipSubwayCarriage_AnchorsAnimGroupMap>* AnchorsAnimGroupMaps; // 0x20
		::Il2CppArray<::System::Single>* MemberQualityPercents; // 0x28
		::Il2CppArray<::UnityEngine::Transform*>* IncludeAreas; // 0x30
		::Il2CppArray<::UnityEngine::Transform*>* ExcludeAreas; // 0x38
		::UnityEngine::GameObject* SpawnPrefab; // 0x40
		::System::Int32 SpawnCount; // 0x48
		::System::Single MinDistanceBetweenPoints; // 0x4C
		::System::Int32 AttemptsPerFrame; // 0x50
		::System::Int32 WarningAfterFailures; // 0x54
		::UnityEngine::Coroutine* JCCMFKNPCHF; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_METHOD_5_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_5_BE4EBC8FF4054312()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_METHOD_5_BE4EBC8FF4054312_OFFSET))(this);
		}

		::System::Void Method_5_44AC3F3C85C7CAA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_METHOD_5_44AC3F3C85C7CAA3_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_5_627C7524E98F4AC5()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_METHOD_5_627C7524E98F4AC5_OFFSET))(this);
		}

		::UnityEngine::Transform* Method_5_C0342BA270C91EF6(::Il2CppArray<::UnityEngine::Transform*>* a1, ::Il2CppArray<::System::Single>* a2, ::System::Single a3)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::Il2CppArray<::UnityEngine::Transform*>*, ::Il2CppArray<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_METHOD_5_C0342BA270C91EF6_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 Method_5_F59E20BA9BC23BFE(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_METHOD_5_F59E20BA9BC23BFE_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_21FBC382EA5ECE99(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_METHOD_5_21FBC382EA5ECE99_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_21FBC382EA5ECE99_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_METHOD_5_21FBC382EA5ECE99_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_FDDF7B7E329390B7(::UnityEngine::Vector3 a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_METHOD_5_FDDF7B7E329390B7_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_5_1B9EFB8F22728CB8(::UnityEngine::Vector3 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_METHOD_5_1B9EFB8F22728CB8_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_660474B0F8C5FECE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_METHOD_5_660474B0F8C5FECE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void Method_5_B69A6865F8BEDF36(::UnityEngine::Transform* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_METHOD_5_B69A6865F8BEDF36_OFFSET))(this, a1, a2);
		}
	};
}
