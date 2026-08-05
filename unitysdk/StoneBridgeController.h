#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StoneBridgeController_EAxis.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_C93CC3D2C2AC4067;
namespace System { class EventArgs; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }

#define STONEBRIDGECONTROLLER_BTNPRINTMESHBOUNDS_OFFSET UNITYSDK_OFFSET(0x1D33E8A0)
#define STONEBRIDGECONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D33F570)
#define STONEBRIDGECONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D33F240)
#define STONEBRIDGECONTROLLER_ONLOCALAVATARCHANGE_OFFSET UNITYSDK_OFFSET(0x1D33FA60)
#define STONEBRIDGECONTROLLER_SUBSCRIBEAVATARCHANGE_OFFSET UNITYSDK_OFFSET(0x1D33F8D0)
#define STONEBRIDGECONTROLLER_UNSUBSCRIBEAVATARCHANGE_OFFSET UNITYSDK_OFFSET(0x1D33F740)
#define STONEBRIDGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D33FBA0)
#define STONEBRIDGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D340110)

inline static constexpr unsigned int StoneBridgeController_TypeDefinitionIndex = 78858;

class StoneBridgeController : public ::UnityEngine::MonoBehaviour
{
public:
	::StoneBridgeController_EAxis processAxis; // 0x18
	::System::Single activationTime; // 0x1C
	::System::Single blendTime; // 0x20
	::System::Int32 segmentCount; // 0x24
	::System::Int32 fixedEndSegmentCount; // 0x28
	::UnityEngine::Transform* testPoint; // 0x30
	::System::Boolean enablePerSegMode; // 0x38
	::System::Boolean enableDebug; // 0x39
	::System::Single yOffset; // 0x3C
	::UnityEngine::Vector3 debugBoxSize; // 0x40
	::UnityEngine::Color currentCellColor; // 0x4C
	::UnityEngine::Color neighborCellColor; // 0x5C
	::UnityEngine::Color normalColor; // 0x6C
	::Il2CppArray<::UnityEngine::MeshRenderer*>* meshRenderers; // 0x80
	::UnityEngine::Vector3 boundsSize; // 0x88
	::System::Single progress; // 0x94
	::System::Int32 stableActiveIndex; // 0x98
	::System::Int32 lastCandidateIndex; // 0x9C
	::System::Single candidateElapsed; // 0xA0
	::System::Single timeStamp; // 0xA4
	::UnityEngine::MaterialPropertyBlock* mpb; // 0xA8
	::System::Int32 previousActiveIndex; // 0xB0
	::System::Int32 activeIndexToUse; // 0xB4
	::System::Boolean isForward; // 0xB8
	::UnityEngine::Vector3 checkPosition; // 0xBC
	::Class_3_C93CC3D2C2AC4067* charModelComp; // 0xC8
	::System::Boolean subscribed; // 0xD0
	::System::Int32 _SegmentCount; // 0xD4
	::System::Int32 _BlendTime; // 0xD8
	::System::Int32 _ActiveCellIndex; // 0xDC
	::System::Int32 _Direction; // 0xE0
	::System::Int32 _TimeStamp; // 0xE4
	::System::Int32 _EndSegmentCount; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STONEBRIDGECONTROLLER__CTOR_OFFSET))(this);
	}

	::System::Void BtnPrintMeshBounds()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STONEBRIDGECONTROLLER_BTNPRINTMESHBOUNDS_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STONEBRIDGECONTROLLER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STONEBRIDGECONTROLLER_ONDISABLE_OFFSET))(this);
	}

	::System::Void SubscribeAvatarChange()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STONEBRIDGECONTROLLER_SUBSCRIBEAVATARCHANGE_OFFSET))(this);
	}

	::System::Void UnsubscribeAvatarChange()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STONEBRIDGECONTROLLER_UNSUBSCRIBEAVATARCHANGE_OFFSET))(this);
	}

	::System::Void OnLocalAvatarChange(::System::EventArgs* args)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + STONEBRIDGECONTROLLER_ONLOCALAVATARCHANGE_OFFSET))(this, args);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STONEBRIDGECONTROLLER_UPDATE_OFFSET))(this);
	}
};
