#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RootMotion::FinalIK { class EditorIKPose; }
namespace RootMotion::FinalIK { class IK; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_EDITORIK_GET_IK_OFFSET UNITYSDK_OFFSET(0x1C343D60)
#define ROOTMOTION_FINALIK_EDITORIK_INITIATE_OFFSET UNITYSDK_OFFSET(0x1C344790)
#define ROOTMOTION_FINALIK_EDITORIK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C344350)
#define ROOTMOTION_FINALIK_EDITORIK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C3440D0)
#define ROOTMOTION_FINALIK_EDITORIK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C343D80)
#define ROOTMOTION_FINALIK_EDITORIK_SET_IK_OFFSET UNITYSDK_OFFSET(0x1C343D70)
#define ROOTMOTION_FINALIK_EDITORIK_STOREDEFAULTPOSE_OFFSET UNITYSDK_OFFSET(0x1C3446B0)
#define ROOTMOTION_FINALIK_EDITORIK_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C344C50)
#define ROOTMOTION_FINALIK_EDITORIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3450D0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int EditorIK_TypeDefinitionIndex = 36694;

	class EditorIK : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* animator; // 0x18
		::RootMotion::FinalIK::EditorIKPose* defaultPose; // 0x20
		::Il2CppArray<::UnityEngine::Transform*>* bones; // 0x28
		::RootMotion::FinalIK::IK* _ik_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_EDITORIK__CTOR_OFFSET))(this);
		}

		::RootMotion::FinalIK::IK* get_ik()
		{
			return ((::RootMotion::FinalIK::IK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_EDITORIK_GET_IK_OFFSET))(this);
		}

		::System::Void set_ik(::RootMotion::FinalIK::IK* value)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IK*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_EDITORIK_SET_IK_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_EDITORIK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_EDITORIK_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_EDITORIK_ONDESTROY_OFFSET))(this);
		}

		::System::Void StoreDefaultPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_EDITORIK_STOREDEFAULTPOSE_OFFSET))(this);
		}

		::System::Boolean Initiate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_EDITORIK_INITIATE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_EDITORIK_UPDATE_OFFSET))(this);
		}
	};
}
