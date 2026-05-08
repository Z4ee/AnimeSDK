#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/NapRenderEventProxy.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Projector; }

#define COUNTDOWNNUMBERCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18FE1300)
#define COUNTDOWNNUMBERCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18FE11A0)
#define COUNTDOWNNUMBERCONTROLLER_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x18FE1500)
#define COUNTDOWNNUMBERCONTROLLER_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x18FE1560)
#define COUNTDOWNNUMBERCONTROLLER_ONPRERENDER_OFFSET UNITYSDK_OFFSET(0x18FE2A80)
#define COUNTDOWNNUMBERCONTROLLER_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x18FE1480)
#define COUNTDOWNNUMBERCONTROLLER_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x18FE1260)
#define COUNTDOWNNUMBERCONTROLLER_SETRENDERSTATE_OFFSET UNITYSDK_OFFSET(0x18FE1610)
#define COUNTDOWNNUMBERCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18FE2AD0)

inline static constexpr unsigned int CountDownNumberController_TypeDefinitionIndex = 29498;

class CountDownNumberController : public ::UnityEngine::Rendering::Universal::Internal::NapRenderEventProxy
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* controlledRenderList; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Light*>* controlledLights; // 0x20
	::UnityEngine::Projector* m_Projector; // 0x28
	::UnityEngine::MaterialPropertyBlock* m_MaterialPropertyBlock; // 0x30
	::Il2CppArray<::UnityEngine::Vector4>* _LocalLightPositions; // 0x38
	::Il2CppArray<::UnityEngine::Vector4>* _LocalLightColor; // 0x40
	::Il2CppArray<::UnityEngine::Vector4>* _LocalLightAttenuation; // 0x48
	::System::Int32 _LocalLightCount; // 0x50
	::UnityEngine::MeshRenderer* currentVisibleRender; // 0x58
	::System::Single OverrideAspectRatio; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTDOWNNUMBERCONTROLLER__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTDOWNNUMBERCONTROLLER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTDOWNNUMBERCONTROLLER_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnLightweightActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTDOWNNUMBERCONTROLLER_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
	}

	::System::Void OnLightweightDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTDOWNNUMBERCONTROLLER_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::System::Void OnRealEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTDOWNNUMBERCONTROLLER_ONREALENABLE_OFFSET))(this);
	}

	::System::Void OnRealDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTDOWNNUMBERCONTROLLER_ONREALDISABLE_OFFSET))(this);
	}

	::System::Void SetRenderState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTDOWNNUMBERCONTROLLER_SETRENDERSTATE_OFFSET))(this);
	}

	::System::Void OnPreRender()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTDOWNNUMBERCONTROLLER_ONPRERENDER_OFFSET))(this);
	}
};
