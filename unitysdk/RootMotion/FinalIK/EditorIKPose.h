#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_EDITORIKPOSE_GET_POSESTORED_OFFSET UNITYSDK_OFFSET(0x1E445FF0)
#define ROOTMOTION_FINALIK_EDITORIKPOSE_RESTORE_OFFSET UNITYSDK_OFFSET(0x1E4461F0)
#define ROOTMOTION_FINALIK_EDITORIKPOSE_STORE_OFFSET UNITYSDK_OFFSET(0x1E446010)
#define ROOTMOTION_FINALIK_EDITORIKPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4463E0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int EditorIKPose_TypeDefinitionIndex = 38217;

	class EditorIKPose : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* localPositions; // 0x18
		::Il2CppArray<::UnityEngine::Quaternion>* localRotations; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_EDITORIKPOSE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_poseStored()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_EDITORIKPOSE_GET_POSESTORED_OFFSET))(this);
		}

		::System::Void Store(::Il2CppArray<::UnityEngine::Transform*>* T)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_EDITORIKPOSE_STORE_OFFSET))(this, T);
		}

		::System::Boolean Restore(::Il2CppArray<::UnityEngine::Transform*>* T)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_EDITORIKPOSE_RESTORE_OFFSET))(this, T);
		}
	};
}
