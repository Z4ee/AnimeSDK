#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class LayerOrderAdjustCanvasItem; }
namespace RPG::Client { class LayerOrderAdjustParticleItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Canvas; }

#define RPG_CLIENT_MONOUILAYERORDERADJUSTER_AWAKE_OFFSET UNITYSDK_OFFSET(0xAA0F160)
#define RPG_CLIENT_MONOUILAYERORDERADJUSTER_SETBASECANVASORDER_OFFSET UNITYSDK_OFFSET(0xAA0F0F0)
#define RPG_CLIENT_MONOUILAYERORDERADJUSTER_SETBASECANVAS_OFFSET UNITYSDK_OFFSET(0xAA0EE00)
#define RPG_CLIENT_MONOUILAYERORDERADJUSTER_SETORDER_OFFSET UNITYSDK_OFFSET(0xAA0EE50)
#define RPG_CLIENT_MONOUILAYERORDERADJUSTER_START_OFFSET UNITYSDK_OFFSET(0xAA0F310)
#define RPG_CLIENT_MONOUILAYERORDERADJUSTER_UPDATE_OFFSET UNITYSDK_OFFSET(0xAA0F440)
#define RPG_CLIENT_MONOUILAYERORDERADJUSTER__CHECKBASECANVASORDERCHANGED_OFFSET UNITYSDK_OFFSET(0xAA0F4E0)
#define RPG_CLIENT_MONOUILAYERORDERADJUSTER__CTOR_OFFSET UNITYSDK_OFFSET(0xAA0F540)
#define RPG_CLIENT_MONOUILAYERORDERADJUSTER__FINDPARENTCANVAS_OFFSET UNITYSDK_OFFSET(0xAA0F200)
#define RPG_CLIENT_MONOUILAYERORDERADJUSTER__START_B__8_0_OFFSET UNITYSDK_OFFSET(0xAA0F550)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUILayerOrderAdjuster_TypeDefinitionIndex = 67285;

	class MonoUILayerOrderAdjuster : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Canvas* BaseCanvas; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::LayerOrderAdjustCanvasItem*>* CanvasItems; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::LayerOrderAdjustParticleItem*>* ParticleItems; // 0x28
		::System::Boolean AutoFindParentCanvas; // 0x30
		::System::Int32 _BaseCanvasCachedOrder; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUILAYERORDERADJUSTER__CTOR_OFFSET))(this);
		}

		::System::Void SetBaseCanvas(::UnityEngine::Canvas* canvas)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUILAYERORDERADJUSTER_SETBASECANVAS_OFFSET))(this, canvas);
		}

		::System::Void SetBaseCanvasOrder(::System::Int32 order)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUILAYERORDERADJUSTER_SETBASECANVASORDER_OFFSET))(this, order);
		}

		::System::Boolean SetOrder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUILAYERORDERADJUSTER_SETORDER_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUILAYERORDERADJUSTER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUILAYERORDERADJUSTER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUILAYERORDERADJUSTER_UPDATE_OFFSET))(this);
		}

		::UnityEngine::Canvas* _FindParentCanvas()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUILAYERORDERADJUSTER__FINDPARENTCANVAS_OFFSET))(this);
		}

		::System::Boolean _CheckBaseCanvasOrderChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUILAYERORDERADJUSTER__CHECKBASECANVASORDERCHANGED_OFFSET))(this);
		}

		::System::Void _Start_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUILAYERORDERADJUSTER__START_B__8_0_OFFSET))(this);
		}
	};
}
