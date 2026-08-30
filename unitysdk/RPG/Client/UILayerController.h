#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class UILayerController_LayerInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class ParticleSystemRenderer; }

#define RPG_CLIENT_UILAYERCONTROLLER_GET_BASELAYER_OFFSET UNITYSDK_OFFSET(0xE365F10)
#define RPG_CLIENT_UILAYERCONTROLLER_METHOD_5_800DF0C3AC70E80C_OFFSET UNITYSDK_OFFSET(0xE365E20)
#define RPG_CLIENT_UILAYERCONTROLLER_METHOD_5_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0xE365B50)
#define RPG_CLIENT_UILAYERCONTROLLER_METHOD_5_9D031EBD3A927318_OFFSET UNITYSDK_OFFSET(0xE365CC0)
#define RPG_CLIENT_UILAYERCONTROLLER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xE365C70)
#define RPG_CLIENT_UILAYERCONTROLLER_SET_BASELAYER_OFFSET UNITYSDK_OFFSET(0xE365F50)
#define RPG_CLIENT_UILAYERCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xE365B00)
#define RPG_CLIENT_UILAYERCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xE365FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int UILayerController_TypeDefinitionIndex = 72978;

	class UILayerController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 MaxLayer; // 0x18
		::System::Int32 _BaseLayer; // 0x1C
		::System::Collections::Generic::List_1<::RPG::Client::UILayerController_LayerInfo*>* _LayerInfos; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILAYERCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILAYERCONTROLLER_START_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILAYERCONTROLLER_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Method_5_8CA88D55ECEFAD59()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILAYERCONTROLLER_METHOD_5_8CA88D55ECEFAD59_OFFSET))(this);
		}

		::System::Void Method_5_9D031EBD3A927318(::System::Collections::Generic::List_1<::UnityEngine::Canvas*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Canvas*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILAYERCONTROLLER_METHOD_5_9D031EBD3A927318_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_800DF0C3AC70E80C(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemRenderer*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemRenderer*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILAYERCONTROLLER_METHOD_5_800DF0C3AC70E80C_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_BaseLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILAYERCONTROLLER_GET_BASELAYER_OFFSET))(this);
		}

		::System::Void set_BaseLayer(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILAYERCONTROLLER_SET_BASELAYER_OFFSET))(this, a1);
		}
	};
}
