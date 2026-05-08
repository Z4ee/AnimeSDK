#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StoneBridgeController_EAxis.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_DFD5D1FDB9D2A4AC;
namespace System { class EventArgs; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }

#define STONEBRIDGECONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18EBB540)
#define STONEBRIDGECONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18EBB210)
#define STONEBRIDGECONTROLLER_ONLOCALAVATARCHANGE_OFFSET UNITYSDK_OFFSET(0x18EBBA30)
#define STONEBRIDGECONTROLLER_SUBSCRIBEAVATARCHANGE_OFFSET UNITYSDK_OFFSET(0x18EBB8A0)
#define STONEBRIDGECONTROLLER_UNSUBSCRIBEAVATARCHANGE_OFFSET UNITYSDK_OFFSET(0x18EBB710)
#define STONEBRIDGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18EBBB60)
#define STONEBRIDGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EBC0D0)

inline static constexpr unsigned int StoneBridgeController_TypeDefinitionIndex = 47684;

class StoneBridgeController : public ::UnityEngine::MonoBehaviour
{
public:
	::StoneBridgeController_EAxis processAxis; // 0x18
	::System::Single activationTime; // 0x1C
	::System::Single blendTime; // 0x20
	::System::Int32 segmentCount; // 0x24
	::System::Int32 fixedEndSegmentCount; // 0x28
	::System::Boolean enableDebug; // 0x2C
	::UnityEngine::Transform* testPoint; // 0x30
	::System::Single yOffset; // 0x38
	::UnityEngine::Vector3 debugBoxSize; // 0x3C
	::UnityEngine::Color currentCellColor; // 0x48
	::UnityEngine::Color neighborCellColor; // 0x58
	::UnityEngine::Color normalColor; // 0x68
	::Il2CppArray<::UnityEngine::MeshRenderer*>* meshRenderers; // 0x78
	::UnityEngine::Vector3 boundsSize; // 0x80
	::System::Single progress; // 0x8C
	::System::Int32 stableActiveIndex; // 0x90
	::System::Int32 lastCandidateIndex; // 0x94
	::System::Single candidateElapsed; // 0x98
	::System::Single timeStamp; // 0x9C
	::UnityEngine::MaterialPropertyBlock* mpb; // 0xA0
	::System::Int32 previousActiveIndex; // 0xA8
	::System::Int32 activeIndexToUse; // 0xAC
	::System::Boolean isForward; // 0xB0
	::UnityEngine::Vector3 checkPosition; // 0xB4
	::Class_3_DFD5D1FDB9D2A4AC* charModelComp; // 0xC0
	::System::Boolean subscribed; // 0xC8
	::System::Int32 _SegmentCount; // 0xCC
	::System::Int32 _BlendTime; // 0xD0
	::System::Int32 _ActiveCellIndex; // 0xD4
	::System::Int32 _Direction; // 0xD8
	::System::Int32 _TimeStamp; // 0xDC
	::System::Int32 _EndSegmentCount; // 0xE0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STONEBRIDGECONTROLLER__CTOR_OFFSET))(this);
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
