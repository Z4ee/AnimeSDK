#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolverVR_VirtualBone; }

#define ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_GET_MAG_OFFSET UNITYSDK_OFFSET(0x1B9A1F20)
#define ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_GET_SQRMAG_OFFSET UNITYSDK_OFFSET(0x1B9A1F00)
#define ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_MOVEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B9A2060)
#define ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_MOVEROTATION_OFFSET UNITYSDK_OFFSET(0x1B9A2120)
#define ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_READ_OFFSET UNITYSDK_OFFSET(0x1B9A1F50)
#define ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_ROTATETO_OFFSET UNITYSDK_OFFSET(0x1B9A2530)
#define ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_SETLOD_OFFSET UNITYSDK_OFFSET(0x1B9A1F40)
#define ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_SET_MAG_OFFSET UNITYSDK_OFFSET(0x1B9A1F30)
#define ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_SET_SQRMAG_OFFSET UNITYSDK_OFFSET(0x1B9A1F10)
#define ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_TRANSLATEROOT_OFFSET UNITYSDK_OFFSET(0x1B9A2330)
#define ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_TRANSLATE_OFFSET UNITYSDK_OFFSET(0x1B9A22E0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_VISUALIZE_1_OFFSET UNITYSDK_OFFSET(0x1B9A28E0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x1B9A2750)
#define ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A2900)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverVR_BodyPart_TypeDefinitionIndex = 36637;

	class IKSolverVR_BodyPart : public ::System::Object
	{
	public:
		::System::Single _sqrMag_k__BackingField; // 0x10
		::System::Single _mag_k__BackingField; // 0x14
		::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones; // 0x18
		::System::Boolean initiated; // 0x20
		::UnityEngine::Vector3 rootPosition; // 0x24
		::UnityEngine::Quaternion rootRotation; // 0x30
		::System::Int32 index; // 0x40
		::System::Int32 LOD; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART__CTOR_OFFSET))(this);
		}

		::System::Single get_sqrMag()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_GET_SQRMAG_OFFSET))(this);
		}

		::System::Void set_sqrMag(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_SET_SQRMAG_OFFSET))(this, value);
		}

		::System::Single get_mag()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_GET_MAG_OFFSET))(this);
		}

		::System::Void set_mag(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_SET_MAG_OFFSET))(this, value);
		}

		::System::Void SetLOD(::System::Int32 LOD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_SETLOD_OFFSET))(this, LOD);
		}

		::System::Void Read(::Il2CppArray<::UnityEngine::Vector3>* positions, ::Il2CppArray<::UnityEngine::Quaternion>* rotations, ::System::Boolean hasChest, ::System::Boolean hasNeck, ::System::Boolean hasShoulders, ::System::Boolean hasToes, ::System::Boolean hasLegs, ::System::Int32 rootIndex, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Quaternion>*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_READ_OFFSET))(this, positions, rotations, hasChest, hasNeck, hasShoulders, hasToes, hasLegs, rootIndex, index);
		}

		::System::Void MovePosition(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_MOVEPOSITION_OFFSET))(this, position);
		}

		::System::Void MoveRotation(::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_MOVEROTATION_OFFSET))(this, rotation);
		}

		::System::Void Translate(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_TRANSLATE_OFFSET))(this, position, rotation);
		}

		::System::Void TranslateRoot(::UnityEngine::Vector3 newRootPos, ::UnityEngine::Quaternion newRootRot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_TRANSLATEROOT_OFFSET))(this, newRootPos, newRootRot);
		}

		::System::Void RotateTo(::RootMotion::FinalIK::IKSolverVR_VirtualBone* bone, ::UnityEngine::Quaternion rotation, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverVR_VirtualBone*, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_ROTATETO_OFFSET))(this, bone, rotation, weight);
		}

		::System::Void Visualize(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_VISUALIZE_OFFSET))(this, color);
		}

		::System::Void Visualize_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_BODYPART_VISUALIZE_1_OFFSET))(this);
		}
	};
}
