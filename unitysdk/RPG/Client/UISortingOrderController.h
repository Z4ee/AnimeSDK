#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Canvas; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UISORTINGORDERCONTROLLER_SETSORTINGORDEROFFSET_OFFSET UNITYSDK_OFFSET(0xE3F9370)
#define RPG_CLIENT_UISORTINGORDERCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xE3F92D0)
#define RPG_CLIENT_UISORTINGORDERCONTROLLER__CHANGESORTINGORDER_1_OFFSET UNITYSDK_OFFSET(0xE3F9710)
#define RPG_CLIENT_UISORTINGORDERCONTROLLER__CHANGESORTINGORDER_OFFSET UNITYSDK_OFFSET(0xE3F9690)
#define RPG_CLIENT_UISORTINGORDERCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xE3F9F80)
#define RPG_CLIENT_UISORTINGORDERCONTROLLER__GETBASEORDER_OFFSET UNITYSDK_OFFSET(0xE3F95B0)
#define RPG_CLIENT_UISORTINGORDERCONTROLLER__GETUILAYERROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE3F9790)
#define RPG_CLIENT_UISORTINGORDERCONTROLLER__SETLAYER_OFFSET UNITYSDK_OFFSET(0xE3F93C0)
#define RPG_CLIENT_UISORTINGORDERCONTROLLER__START_B__0_0_OFFSET UNITYSDK_OFFSET(0xE3F9F90)

namespace RPG::Client
{
	inline static constexpr unsigned int UISortingOrderController_TypeDefinitionIndex = 73076;

	class UISortingOrderController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 _SortingOrderOffset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISORTINGORDERCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISORTINGORDERCONTROLLER_START_OFFSET))(this);
		}

		::System::Void SetSortingOrderOffset(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISORTINGORDERCONTROLLER_SETSORTINGORDEROFFSET_OFFSET))(this, a1);
		}

		::System::Void _SetLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISORTINGORDERCONTROLLER__SETLAYER_OFFSET))(this);
		}

		::System::Int32 _GetBaseOrder(::System::Boolean& a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISORTINGORDERCONTROLLER__GETBASEORDER_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* _GetUILayerRootTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISORTINGORDERCONTROLLER__GETUILAYERROOTTRANSFORM_OFFSET))(this);
		}

		::System::Void _ChangeSortingOrder(::UnityEngine::Canvas* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Canvas*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISORTINGORDERCONTROLLER__CHANGESORTINGORDER_OFFSET))(this, a1, a2);
		}

		::System::Void _ChangeSortingOrder_1(::UnityEngine::ParticleSystemRenderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemRenderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISORTINGORDERCONTROLLER__CHANGESORTINGORDER_1_OFFSET))(this, a1, a2);
		}

		::System::Void _Start_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISORTINGORDERCONTROLLER__START_B__0_0_OFFSET))(this);
		}
	};
}
