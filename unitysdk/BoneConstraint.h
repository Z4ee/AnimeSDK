#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class ConstraintBones;
namespace RPG::Client { class LookAtIK; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define BONECONSTRAINT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB039EB0)
#define BONECONSTRAINT_METHOD_5_20042D29B43BCB70_OFFSET UNITYSDK_OFFSET(0xB039F20)
#define BONECONSTRAINT_METHOD_5_412F2CEBDE691C81_OFFSET UNITYSDK_OFFSET(0xB03ADC0)
#define BONECONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0xB03AE30)

inline static constexpr unsigned int BoneConstraint_TypeDefinitionIndex = 44735;

class BoneConstraint : public ::UnityEngine::MonoBehaviour
{
public:
	::RPG::Client::LookAtIK* LookAtIK; // 0x18
	::UnityEngine::Transform* SelfBone; // 0x20
	::UnityEngine::AnimationCurve* WeightCurve; // 0x28
	::System::Boolean X; // 0x30
	::System::Boolean Y; // 0x31
	::System::Boolean Z; // 0x32
	::Il2CppArray<::ConstraintBones*>* AdjustBoneList; // 0x38
	::UnityEngine::Quaternion Field_5_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONECONSTRAINT__CTOR_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONECONSTRAINT_LATEUPDATE_OFFSET))(this);
	}

	::System::Void Method_5_20042D29B43BCB70()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONECONSTRAINT_METHOD_5_20042D29B43BCB70_OFFSET))(this);
	}

	::System::Void Method_5_412F2CEBDE691C81(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BONECONSTRAINT_METHOD_5_412F2CEBDE691C81_OFFSET))(this, a1);
	}
};
