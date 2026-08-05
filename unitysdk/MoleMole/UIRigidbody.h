#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening { class Tweener; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class BoxCollider2D; }
namespace UnityEngine { class FixedJoint2D; }
namespace UnityEngine { class Rigidbody2D; }
namespace UnityEngine { class TargetJoint2D; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIRIGIDBODY_ADDFORCE_OFFSET UNITYSDK_OFFSET(0x179B5A70)
#define MOLEMOLE_UIRIGIDBODY_AWAKE_OFFSET UNITYSDK_OFFSET(0x179B9240)
#define MOLEMOLE_UIRIGIDBODY_BEGINDRAGLOGIC_OFFSET UNITYSDK_OFFSET(0x179B6860)
#define MOLEMOLE_UIRIGIDBODY_DRAGLOGIC_OFFSET UNITYSDK_OFFSET(0x179B8500)
#define MOLEMOLE_UIRIGIDBODY_ENDDRAGLOGIC_OFFSET UNITYSDK_OFFSET(0x179B6060)
#define MOLEMOLE_UIRIGIDBODY_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x179B9D40)
#define MOLEMOLE_UIRIGIDBODY_GETMASS_OFFSET UNITYSDK_OFFSET(0x179B5AF0)
#define MOLEMOLE_UIRIGIDBODY_GET_DRAGING_OFFSET UNITYSDK_OFFSET(0x179B5610)
#define MOLEMOLE_UIRIGIDBODY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x179B91B0)
#define MOLEMOLE_UIRIGIDBODY_METHOD_6_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x179B90D0)
#define MOLEMOLE_UIRIGIDBODY_METHOD_6_6DD25DF274ED24AE_OFFSET UNITYSDK_OFFSET(0x179B58A0)
#define MOLEMOLE_UIRIGIDBODY_METHOD_6_7372A42B6CDBB2D4_OFFSET UNITYSDK_OFFSET(0x179BA760)
#define MOLEMOLE_UIRIGIDBODY_METHOD_6_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x179BB250)
#define MOLEMOLE_UIRIGIDBODY_METHOD_6_8F266B1E21740308_OFFSET UNITYSDK_OFFSET(0x179BB260)
#define MOLEMOLE_UIRIGIDBODY_METHOD_6_BA8E7A7AEECAD72C_OFFSET UNITYSDK_OFFSET(0x179B8EA0)
#define MOLEMOLE_UIRIGIDBODY_METHOD_6_D788FB22A0F94AD7_OFFSET UNITYSDK_OFFSET(0x179B70A0)
#define MOLEMOLE_UIRIGIDBODY_METHOD_6_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x179B9020)
#define MOLEMOLE_UIRIGIDBODY_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x179B9150)
#define MOLEMOLE_UIRIGIDBODY_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x179B6680)
#define MOLEMOLE_UIRIGIDBODY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x179BA9E0)
#define MOLEMOLE_UIRIGIDBODY_ONDRAG_OFFSET UNITYSDK_OFFSET(0x179B8310)
#define MOLEMOLE_UIRIGIDBODY_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x179B91F0)
#define MOLEMOLE_UIRIGIDBODY_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x179B5620)
#define MOLEMOLE_UIRIGIDBODY_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x179B5B50)
#define MOLEMOLE_UIRIGIDBODY_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x179B6000)
#define MOLEMOLE_UIRIGIDBODY_RESETANGLE_OFFSET UNITYSDK_OFFSET(0x179BAC10)
#define MOLEMOLE_UIRIGIDBODY_SETDRAGANCHOR_OFFSET UNITYSDK_OFFSET(0x179B5D60)
#define MOLEMOLE_UIRIGIDBODY_TRYTRIGGERCLICK_OFFSET UNITYSDK_OFFSET(0x179B5680)
#define MOLEMOLE_UIRIGIDBODY__CTOR_OFFSET UNITYSDK_OFFSET(0x179BAF90)
#define MOLEMOLE_UIRIGIDBODY___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x179BB130)
#define MOLEMOLE_UIRIGIDBODY___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x179BB1C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRigidbody_TypeDefinitionIndex = 64126;

	class UIRigidbody : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::Single ClickForceMax; // 0x18
		::System::Single ClickForceMin; // 0x1C
		::System::Single ClickForceLeftOrRight; // 0x20
		::System::Single ClickCD; // 0x24
		::System::Single Field_6_7; // 0x28
		::System::Boolean EnableDrag; // 0x2C
		::System::Boolean SimpleDrag; // 0x2D
		::System::Boolean Field_6_4; // 0x2E
		::System::Boolean Field_6_11; // 0x2F
		::System::Single DragFrequency; // 0x30
		::System::Single DragMaxRadius; // 0x34
		::System::Boolean DragAdapterScreen; // 0x38
		::System::Boolean EnableDragAngleRange; // 0x39
		::UnityEngine::Vector2 DragAngleRange; // 0x3C
		::System::Int32 Field_6_13; // 0x44
		::System::Collections::Generic::List_1<::UnityEngine::BoxCollider2D*>* Field_6_12; // 0x48
		::System::Single Field_6_19; // 0x50
		::System::Single Field_6_18; // 0x54
		::UnityEngine::Transform* DragFixedTransform; // 0x58
		::MoleMole::UIRigidbody* RootRigidbody; // 0x60
		::UnityEngine::Transform* DragAnchorTransform; // 0x68
		::System::Single DefaultFixFrequency; // 0x70
		::System::Int32 FrequencyCount; // 0x74
		::UnityEngine::AnimationCurve* FixedDampingCurve; // 0x78
		::System::Single FixedDampingDuration; // 0x80
		::UnityEngine::TargetJoint2D* Field_6_26; // 0x88
		::UnityEngine::FixedJoint2D* Field_6_25; // 0x90
		::UnityEngine::Vector2 Field_6_24; // 0x98
		::UnityEngine::Vector3 Field_6_31; // 0xA0
		::UnityEngine::TargetJoint2D* Field_6_30; // 0xB0
		::System::String* ClickAudioEventName; // 0xB8
		::System::String* DragStartAudioEventName; // 0xC0
		::System::String* DragEndAudioEventName; // 0xC8
		::System::String* DragProcessAudioRTPCName; // 0xD0
		::System::UInt32 Field_6_33; // 0xD8
		::System::Boolean Interactable; // 0xDC
		::DG::Tweening::Tweener* Field_6_39; // 0xE0
		::UnityEngine::Rigidbody2D* Field_6_38; // 0xE8
		::System::Collections::Generic::List_1<::MoleMole::UIRigidbody*>* Field_6_37; // 0xF0
		::Il2CppArray<::UnityEngine::Vector3>* Field_6_36; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Draging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_GET_DRAGING_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Boolean TryTriggerClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_TRYTRIGGERCLICK_OFFSET))(this);
		}

		::System::Void AddForce(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ADDFORCE_OFFSET))(this, a1);
		}

		::System::Single GetMass()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_GETMASS_OFFSET))(this);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void SetDragAnchor(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_SETDRAGANCHOR_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void BeginDragLogic(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_BEGINDRAGLOGIC_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ONDRAG_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 DragLogic(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_DRAGLOGIC_OFFSET))(this, a1);
		}

		::System::Void EndDragLogic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ENDDRAGLOGIC_OFFSET))(this);
		}

		::System::Void OnApplicationFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ONAPPLICATIONFOCUS_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_AWAKE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ONDESTROY_OFFSET))(this);
		}

		::System::Void ResetAngle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_RESETANGLE_OFFSET))(this, a1);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY___BASE_AWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Single Method_6_FF7B2911BBACA4A9()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_METHOD_6_FF7B2911BBACA4A9_OFFSET))(this);
		}

		::System::Boolean Method_6_7372A42B6CDBB2D4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_METHOD_6_7372A42B6CDBB2D4_OFFSET))(this);
		}

		::UnityEngine::Rigidbody2D* Method_6_6DD25DF274ED24AE()
		{
			return ((::UnityEngine::Rigidbody2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_METHOD_6_6DD25DF274ED24AE_OFFSET))(this);
		}

		::System::Void Method_6_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_METHOD_6_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_6_8F266B1E21740308()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_METHOD_6_8F266B1E21740308_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_6_D788FB22A0F94AD7(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_METHOD_6_D788FB22A0F94AD7_OFFSET))(this, a1);
		}

		::UnityEngine::TargetJoint2D* Method_6_BA8E7A7AEECAD72C()
		{
			return ((::UnityEngine::TargetJoint2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_METHOD_6_BA8E7A7AEECAD72C_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_6_627C7524E98F4AC5()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_METHOD_6_627C7524E98F4AC5_OFFSET))(this);
		}
	};
}
