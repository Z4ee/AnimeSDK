#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class PosConstraintBones; }
namespace UnityChan { class SpringManager; }

#define RPG_CLIENT_CUSTOMPOSITIONCONSTRAINT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9440AE0)
#define RPG_CLIENT_CUSTOMPOSITIONCONSTRAINT_METHOD_5_3905F8092E1B5E52_OFFSET UNITYSDK_OFFSET(0x9441A20)
#define RPG_CLIENT_CUSTOMPOSITIONCONSTRAINT_METHOD_5_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x9441940)
#define RPG_CLIENT_CUSTOMPOSITIONCONSTRAINT_METHOD_5_ECA33935490AF2E4_OFFSET UNITYSDK_OFFSET(0x9440B30)
#define RPG_CLIENT_CUSTOMPOSITIONCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x9441AF0)

namespace RPG::Client
{
	inline static constexpr unsigned int CustomPositionConstraint_TypeDefinitionIndex = 57499;

	class CustomPositionConstraint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Active; // 0x18
		::System::Single AngleConstraint; // 0x1C
		::UnityEngine::Vector3 BoneAxis; // 0x20
		::UnityEngine::Vector3 BoneToward; // 0x2C
		::System::Single Weight; // 0x38
		::UnityChan::SpringManager* SpringManager; // 0x40
		::System::Single TransitionThreshold; // 0x48
		::System::Single SbRatio; // 0x4C
		::Il2CppArray<::RPG::Client::PosConstraintBones*>* AdjustBoneArray; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMPOSITIONCONSTRAINT__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMPOSITIONCONSTRAINT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_ECA33935490AF2E4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMPOSITIONCONSTRAINT_METHOD_5_ECA33935490AF2E4_OFFSET))(this);
		}

		static ::System::Single Method_5_3905F8092E1B5E52(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMPOSITIONCONSTRAINT_METHOD_5_3905F8092E1B5E52_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Single Method_5_861970C5F2C21AB2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMPOSITIONCONSTRAINT_METHOD_5_861970C5F2C21AB2_OFFSET))(this);
		}
	};
}
