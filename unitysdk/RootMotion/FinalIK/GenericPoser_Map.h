#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_GENERICPOSER_MAP_FIXTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E66AAF0)
#define ROOTMOTION_FINALIK_GENERICPOSER_MAP_STOREDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x1E66AB50)
#define ROOTMOTION_FINALIK_GENERICPOSER_MAP_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E66A860)
#define ROOTMOTION_FINALIK_GENERICPOSER_MAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E66A4F0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GenericPoser_Map_TypeDefinitionIndex = 38271;

	class GenericPoser_Map : public ::System::Object
	{
	public:
		::UnityEngine::Transform* bone; // 0x10
		::UnityEngine::Transform* target; // 0x18
		::UnityEngine::Vector3 defaultLocalPosition; // 0x20
		::UnityEngine::Quaternion defaultLocalRotation; // 0x2C

		::System::Void _ctor(::UnityEngine::Transform* bone, ::UnityEngine::Transform* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GENERICPOSER_MAP__CTOR_OFFSET))(this, bone, target);
		}

		::System::Void StoreDefaultState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GENERICPOSER_MAP_STOREDEFAULTSTATE_OFFSET))(this);
		}

		::System::Void FixTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GENERICPOSER_MAP_FIXTRANSFORM_OFFSET))(this);
		}

		::System::Void Update(::System::Single localRotationWeight, ::System::Single localPositionWeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GENERICPOSER_MAP_UPDATE_OFFSET))(this, localRotationWeight, localPositionWeight);
		}
	};
}
