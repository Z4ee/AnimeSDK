#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/Poser.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_HANDPOSER_AUTOMAPPING_OFFSET UNITYSDK_OFFSET(0x1E4473C0)
#define ROOTMOTION_FINALIK_HANDPOSER_FIXPOSERTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1E447870)
#define ROOTMOTION_FINALIK_HANDPOSER_INITIATEPOSER_OFFSET UNITYSDK_OFFSET(0x1E4475A0)
#define ROOTMOTION_FINALIK_HANDPOSER_STOREDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x1E447650)
#define ROOTMOTION_FINALIK_HANDPOSER_UPDATEPOSER_OFFSET UNITYSDK_OFFSET(0x1E4479F0)
#define ROOTMOTION_FINALIK_HANDPOSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E447F90)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int HandPoser_TypeDefinitionIndex = 38131;

	class HandPoser : public ::RootMotion::FinalIK::Poser
	{
	public:
		::Il2CppArray<::UnityEngine::Transform*>* children; // 0x60
		::UnityEngine::Transform* _poseRoot; // 0x68
		::Il2CppArray<::UnityEngine::Transform*>* poseChildren; // 0x70
		::Il2CppArray<::UnityEngine::Vector3>* defaultLocalPositions; // 0x78
		::Il2CppArray<::UnityEngine::Quaternion>* defaultLocalRotations; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HANDPOSER__CTOR_OFFSET))(this);
		}

		::System::Void AutoMapping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HANDPOSER_AUTOMAPPING_OFFSET))(this);
		}

		::System::Void InitiatePoser()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HANDPOSER_INITIATEPOSER_OFFSET))(this);
		}

		::System::Void FixPoserTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HANDPOSER_FIXPOSERTRANSFORMS_OFFSET))(this);
		}

		::System::Void UpdatePoser()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HANDPOSER_UPDATEPOSER_OFFSET))(this);
		}

		::System::Void StoreDefaultState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HANDPOSER_STOREDEFAULTSTATE_OFFSET))(this);
		}
	};
}
