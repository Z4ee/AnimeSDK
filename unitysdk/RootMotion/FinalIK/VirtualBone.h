#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_VIRTUALBONE_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1F8B16B0)
#define ROOTMOTION_FINALIK_VIRTUALBONE_GET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1F8B1640)
#define ROOTMOTION_FINALIK_VIRTUALBONE_GET_LOCALROTATION_OFFSET UNITYSDK_OFFSET(0x1F8B1670)
#define ROOTMOTION_FINALIK_VIRTUALBONE_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1F8B1690)
#define ROOTMOTION_FINALIK_VIRTUALBONE_SET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1F8B1660)
#define ROOTMOTION_FINALIK_VIRTUALBONE_SET_LOCALROTATION_OFFSET UNITYSDK_OFFSET(0x1F8B1680)
#define ROOTMOTION_FINALIK_VIRTUALBONE_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x1F8B16A0)
#define ROOTMOTION_FINALIK_VIRTUALBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8B16C0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int VirtualBone_TypeDefinitionIndex = 38932;

	class VirtualBone : public ::System::Object
	{
	public:
		::UnityEngine::Transform* Transform; // 0x10
		::Foundation::Unreal::FTransform SolverTransform; // 0x18
		::UnityEngine::Vector3 _LocalPosition_k__BackingField; // 0x38
		::UnityEngine::Quaternion _LocalRotation_k__BackingField; // 0x44
		::RootMotion::FinalIK::VirtualBone* _Parent_k__BackingField; // 0x58
		::System::Collections::Generic::List_1<::RootMotion::FinalIK::VirtualBone*>* _Children_k__BackingField; // 0x60
		::System::Single weight; // 0x68

		::System::Void _ctor(::UnityEngine::Vector3 localPosition, ::UnityEngine::Quaternion localRotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALBONE__CTOR_OFFSET))(this, localPosition, localRotation);
		}

		::UnityEngine::Vector3 get_LocalPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALBONE_GET_LOCALPOSITION_OFFSET))(this);
		}

		::System::Void set_LocalPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALBONE_SET_LOCALPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_LocalRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALBONE_GET_LOCALROTATION_OFFSET))(this);
		}

		::System::Void set_LocalRotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALBONE_SET_LOCALROTATION_OFFSET))(this, value);
		}

		::RootMotion::FinalIK::VirtualBone* get_Parent()
		{
			return ((::RootMotion::FinalIK::VirtualBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALBONE_GET_PARENT_OFFSET))(this);
		}

		::System::Void set_Parent(::RootMotion::FinalIK::VirtualBone* value)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::VirtualBone*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALBONE_SET_PARENT_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RootMotion::FinalIK::VirtualBone*>* get_Children()
		{
			return ((::System::Collections::Generic::List_1<::RootMotion::FinalIK::VirtualBone*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALBONE_GET_CHILDREN_OFFSET))(this);
		}
	};
}
