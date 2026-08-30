#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class ChimeraArrangementModelInstance; }
namespace RPG::Client::Prop { class ChimeraArrangementModelInstance_MotionConfig; }
namespace RPG::Client::Prop { class ChimeraArrangementSlot_MotionData; }
namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_AWAKE_OFFSET UNITYSDK_OFFSET(0xDBFF040)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_DEACTIVATECHILDREN_OFFSET UNITYSDK_OFFSET(0xDBFF3B0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_GET_BILLBOARDANCHOR_OFFSET UNITYSDK_OFFSET(0xDBFF030)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_GET_MODELANCHOR_OFFSET UNITYSDK_OFFSET(0xDBFF020)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_NOTIFYPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xDBFF530)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_NOTIFYPOINTERENTER_OFFSET UNITYSDK_OFFSET(0xDBFF470)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_NOTIFYPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0xDBFF4D0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_PLACEINSTANCEWITHMOTION_OFFSET UNITYSDK_OFFSET(0xDBFF660)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_PLACEINSTANCE_OFFSET UNITYSDK_OFFSET(0xDBFF590)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_UPDATE_OFFSET UNITYSDK_OFFSET(0xDBFF100)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0xDBFF9D0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT__FINISHBILLBOARDANCHORMOTION_OFFSET UNITYSDK_OFFSET(0xDBFF840)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT__STARTBILLBOARDANCHORMOTION_OFFSET UNITYSDK_OFFSET(0xDBFF8E0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT__TICKBILLBOARDANCHORMOTION_OFFSET UNITYSDK_OFFSET(0xDBFF150)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraArrangementSlot_TypeDefinitionIndex = 77993;

	class ChimeraArrangementSlot : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* _BillboardAnchor; // 0x18
		::System::Action* OnPointerEnter; // 0x20
		::System::Action* OnPointerExit; // 0x28
		::System::Action* OnPointerDown; // 0x30
		::UnityEngine::Vector3 _OriginalBillboardAnchorPosition; // 0x38
		::UnityEngine::Quaternion _OriginalBillboardAnchorRotation; // 0x44
		::RPG::Client::Prop::ChimeraArrangementSlot_MotionData* _BillboardAnchorMotion; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_ModelAnchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_GET_MODELANCHOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_BillboardAnchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_GET_BILLBOARDANCHOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_UPDATE_OFFSET))(this);
		}

		::System::Void DeactivateChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_DEACTIVATECHILDREN_OFFSET))(this);
		}

		::System::Void NotifyPointerEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_NOTIFYPOINTERENTER_OFFSET))(this);
		}

		::System::Void NotifyPointerExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_NOTIFYPOINTEREXIT_OFFSET))(this);
		}

		::System::Void NotifyPointerDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_NOTIFYPOINTERDOWN_OFFSET))(this);
		}

		::System::Void PlaceInstance(::RPG::Client::Prop::ChimeraArrangementModelInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraArrangementModelInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_PLACEINSTANCE_OFFSET))(this, a1);
		}

		::System::Void PlaceInstanceWithMotion(::RPG::Client::Prop::ChimeraArrangementModelInstance* a1, ::RPG::Client::Prop::ChimeraArrangementSlot* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraArrangementModelInstance*, ::RPG::Client::Prop::ChimeraArrangementSlot*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_PLACEINSTANCEWITHMOTION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _StartBillboardAnchorMotion(::RPG::Client::Prop::ChimeraArrangementSlot* a1, ::RPG::Client::Prop::ChimeraArrangementModelInstance_MotionConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraArrangementSlot*, ::RPG::Client::Prop::ChimeraArrangementModelInstance_MotionConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT__STARTBILLBOARDANCHORMOTION_OFFSET))(this, a1, a2);
		}

		::System::Void _FinishBillboardAnchorMotion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT__FINISHBILLBOARDANCHORMOTION_OFFSET))(this);
		}

		::System::Void _TickBillboardAnchorMotion(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT__TICKBILLBOARDANCHORMOTION_OFFSET))(this, a1);
		}
	};
}
