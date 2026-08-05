#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/SolverManager.h"

namespace RootMotion::FinalIK { class Finger; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_FINGERRIG_ADDCHILDRENRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1F293CE0)
#define ROOTMOTION_FINALIK_FINGERRIG_ADDFINGER_OFFSET UNITYSDK_OFFSET(0x1F293E40)
#define ROOTMOTION_FINALIK_FINGERRIG_AUTODETECT_OFFSET UNITYSDK_OFFSET(0x1F293A40)
#define ROOTMOTION_FINALIK_FINGERRIG_FIXFINGERTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1F294370)
#define ROOTMOTION_FINALIK_FINGERRIG_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1F2944D0)
#define ROOTMOTION_FINALIK_FINGERRIG_GET_INITIATED_OFFSET UNITYSDK_OFFSET(0x1F2939A0)
#define ROOTMOTION_FINALIK_FINGERRIG_INITIATESOLVER_OFFSET UNITYSDK_OFFSET(0x1F294230)
#define ROOTMOTION_FINALIK_FINGERRIG_ISVALID_OFFSET UNITYSDK_OFFSET(0x1F2939C0)
#define ROOTMOTION_FINALIK_FINGERRIG_REMOVEFINGER_OFFSET UNITYSDK_OFFSET(0x1F294020)
#define ROOTMOTION_FINALIK_FINGERRIG_SET_INITIATED_OFFSET UNITYSDK_OFFSET(0x1F2939B0)
#define ROOTMOTION_FINALIK_FINGERRIG_STOREDEFAULTLOCALSTATE_OFFSET UNITYSDK_OFFSET(0x1F2943F0)
#define ROOTMOTION_FINALIK_FINGERRIG_UPDATEFINGERSOLVERS_OFFSET UNITYSDK_OFFSET(0x1F294300)
#define ROOTMOTION_FINALIK_FINGERRIG_UPDATESOLVER_OFFSET UNITYSDK_OFFSET(0x1F294460)
#define ROOTMOTION_FINALIK_FINGERRIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1F294550)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int FingerRig_TypeDefinitionIndex = 38803;

	class FingerRig : public ::RootMotion::SolverManager
	{
	public:
		::System::Single weight; // 0x48
		::Il2CppArray<::RootMotion::FinalIK::Finger*>* fingers; // 0x50
		::System::Boolean _initiated_k__BackingField; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG__CTOR_OFFSET))(this);
		}

		::System::Boolean get_initiated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_GET_INITIATED_OFFSET))(this);
		}

		::System::Void set_initiated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_SET_INITIATED_OFFSET))(this, value);
		}

		::System::Boolean IsValid(::System::String*& errorMessage)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_ISVALID_OFFSET))(this, errorMessage);
		}

		::System::Void AutoDetect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_AUTODETECT_OFFSET))(this);
		}

		::System::Void AddFinger(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ::UnityEngine::Transform* tip, ::UnityEngine::Transform* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_ADDFINGER_OFFSET))(this, bone1, bone2, bone3, tip, target);
		}

		::System::Void RemoveFinger(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_REMOVEFINGER_OFFSET))(this, index);
		}

		::System::Void AddChildrenRecursive(::UnityEngine::Transform* parent, ::Il2CppArray<::UnityEngine::Transform*>*& array)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Transform*>*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_ADDCHILDRENRECURSIVE_OFFSET))(this, parent, array);
		}

		::System::Void InitiateSolver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_INITIATESOLVER_OFFSET))(this);
		}

		::System::Void UpdateFingerSolvers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_UPDATEFINGERSOLVERS_OFFSET))(this);
		}

		::System::Void FixFingerTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_FIXFINGERTRANSFORMS_OFFSET))(this);
		}

		::System::Void StoreDefaultLocalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_STOREDEFAULTLOCALSTATE_OFFSET))(this);
		}

		::System::Void UpdateSolver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_UPDATESOLVER_OFFSET))(this);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_FIXTRANSFORMS_OFFSET))(this);
		}
	};
}
