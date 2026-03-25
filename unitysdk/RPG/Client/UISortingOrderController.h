#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Canvas; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UISORTINGORDERCONTROLLER_SETSORTINGORDEROFFSET_OFFSET UNITYSDK_OFFSET(0xA7320B0)
#define RPG_CLIENT_UISORTINGORDERCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xA731FB0)
#define RPG_CLIENT_UISORTINGORDERCONTROLLER__CHANGESORTINGORDER_1_OFFSET UNITYSDK_OFFSET(0xA732460)
#define RPG_CLIENT_UISORTINGORDERCONTROLLER__CHANGESORTINGORDER_OFFSET UNITYSDK_OFFSET(0xA7323E0)
#define RPG_CLIENT_UISORTINGORDERCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA732B90)
#define RPG_CLIENT_UISORTINGORDERCONTROLLER__GETBASEORDER_OFFSET UNITYSDK_OFFSET(0xA7322F0)
#define RPG_CLIENT_UISORTINGORDERCONTROLLER__GETUILAYERROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA7324E0)
#define RPG_CLIENT_UISORTINGORDERCONTROLLER__SETLAYER_OFFSET UNITYSDK_OFFSET(0xA732100)
#define RPG_CLIENT_UISORTINGORDERCONTROLLER__START_B__0_0_OFFSET UNITYSDK_OFFSET(0xA732BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int UISortingOrderController_TypeDefinitionIndex = 59888;

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

		::System::Void SetSortingOrderOffset(::System::Int32 sortingOrderOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISORTINGORDERCONTROLLER_SETSORTINGORDEROFFSET_OFFSET))(this, sortingOrderOffset);
		}

		::System::Void _SetLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISORTINGORDERCONTROLLER__SETLAYER_OFFSET))(this);
		}

		::System::Int32 _GetBaseOrder(::System::Boolean& getBaseOrderSuccess)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISORTINGORDERCONTROLLER__GETBASEORDER_OFFSET))(this, getBaseOrderSuccess);
		}

		::UnityEngine::Transform* _GetUILayerRootTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISORTINGORDERCONTROLLER__GETUILAYERROOTTRANSFORM_OFFSET))(this);
		}

		::System::Void _ChangeSortingOrder(::UnityEngine::Canvas* canvas, ::System::Int32 sortingOrder)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Canvas*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISORTINGORDERCONTROLLER__CHANGESORTINGORDER_OFFSET))(this, canvas, sortingOrder);
		}

		::System::Void _ChangeSortingOrder_1(::UnityEngine::ParticleSystemRenderer* particle, ::System::Int32 sortingOrder)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemRenderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISORTINGORDERCONTROLLER__CHANGESORTINGORDER_1_OFFSET))(this, particle, sortingOrder);
		}

		::System::Void _Start_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISORTINGORDERCONTROLLER__START_B__0_0_OFFSET))(this);
		}
	};
}
