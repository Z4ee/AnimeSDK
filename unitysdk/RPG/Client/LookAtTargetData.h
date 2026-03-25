#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LookAtDisableCause.h"
#include "unitysdk/Struct_2_6AEDA351F1A331D3.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class LookAtSolver; }
namespace RPG::Client { class LookAtTargetConstraint; }
namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LOOKATTARGETDATA_CLEARDISABLED_OFFSET UNITYSDK_OFFSET(0x7FC50)
#define RPG_CLIENT_LOOKATTARGETDATA_COPYFROM_1_OFFSET UNITYSDK_OFFSET(0x7F900)
#define RPG_CLIENT_LOOKATTARGETDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0x7F8F0)
#define RPG_CLIENT_LOOKATTARGETDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0x7F8E0)
#define RPG_CLIENT_LOOKATTARGETDATA_GET_DEFAULTLOOKATPOS_OFFSET UNITYSDK_OFFSET(0x7FF50)
#define RPG_CLIENT_LOOKATTARGETDATA_GET_DISABLEDCAUSE_OFFSET UNITYSDK_OFFSET(0x7FFE0)
#define RPG_CLIENT_LOOKATTARGETDATA_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x7FF70)
#define RPG_CLIENT_LOOKATTARGETDATA_GET_FORCECHANGETARGETTHISFRAME_OFFSET UNITYSDK_OFFSET(0x29C50)
#define RPG_CLIENT_LOOKATTARGETDATA_GET_LOOKATPOS_OFFSET UNITYSDK_OFFSET(0x7FE90)
#define RPG_CLIENT_LOOKATTARGETDATA_GET_TARGETDISTANCE_OFFSET UNITYSDK_OFFSET(0x7FA00)
#define RPG_CLIENT_LOOKATTARGETDATA_GET_TARGETPOS_OFFSET UNITYSDK_OFFSET(0x7F9E0)
#define RPG_CLIENT_LOOKATTARGETDATA_ISNEARLYLOOKAT_OFFSET UNITYSDK_OFFSET(0x7FFF0)
#define RPG_CLIENT_LOOKATTARGETDATA_LERPTARGET_OFFSET UNITYSDK_OFFSET(0x7FBE0)
#define RPG_CLIENT_LOOKATTARGETDATA_MOVETARGET_OFFSET UNITYSDK_OFFSET(0x7FB60)
#define RPG_CLIENT_LOOKATTARGETDATA_SETDISABLED_OFFSET UNITYSDK_OFFSET(0x7FC00)
#define RPG_CLIENT_LOOKATTARGETDATA_SETTARGET_OFFSET UNITYSDK_OFFSET(0x7FA80)
#define RPG_CLIENT_LOOKATTARGETDATA_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x7FFD0)
#define RPG_CLIENT_LOOKATTARGETDATA_SET_FORCECHANGETARGETTHISFRAME_OFFSET UNITYSDK_OFFSET(0x791D0)
#define RPG_CLIENT_LOOKATTARGETDATA_TICK_OFFSET UNITYSDK_OFFSET(0x7FBF0)
#define RPG_CLIENT_LOOKATTARGETDATA_UPDATETARGET_OFFSET UNITYSDK_OFFSET(0x7FAB0)
#define RPG_CLIENT_LOOKATTARGETDATA__ALPHAFROMSLERPSPEED_OFFSET UNITYSDK_OFFSET(0x7FCA0)
#define RPG_CLIENT_LOOKATTARGETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x7F830)
#define RPG_CLIENT_LOOKATTARGETDATA__SETLOOKATPOSLOCAL_OFFSET UNITYSDK_OFFSET(0x7FDC0)

namespace RPG::Client
{
	inline static constexpr unsigned int LookAtTargetData_TypeDefinitionIndex = 55906;

	struct alignas(8) LookAtTargetData
	{
		::System::Boolean _ForceChangeTargetThisFrame_k__BackingField; // 0x10
		::UnityEngine::Vector3 _finalTargetPos; // 0x14
		::UnityEngine::Vector3 _currentDir; // 0x20
		::System::Boolean UseQuicklySlerpSpeed; // 0x2C
		::System::Boolean ApplyConstraintOnUpdate; // 0x2D
		::System::Boolean UseDynamicTargetDistance; // 0x2E
		::UnityEngine::Vector3 LastFrameLookAtDirection; // 0x30
		::System::Single Weight; // 0x3C
		::Struct_2_6AEDA351F1A331D3 CurveBlender; // 0x40
		::UnityEngine::Transform* _Root; // 0x68
		::RPG::Client::LookAtSolver* _Solver; // 0x70
		::UnityEngine::Vector3 _TargetLookAtPos; // 0x78
		::UnityEngine::Vector3 _LookAtPosLocal; // 0x84
		::System::Boolean _Enabled; // 0x90
		::RPG::Client::LookAtDisableCause _DisabledCauses; // 0x94

		::System::Void _ctor(::UnityEngine::Transform* pRoot, ::RPG::Client::LookAtSolver* pSolver)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::LookAtSolver*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA__CTOR_OFFSET))(this, pRoot, pSolver);
		}

		/*
		::System::Void CopyTo(::RootMotion::IKJob::IKThreadProxyContext* context, ::Struct_2_231BC944D2991258& data)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::Struct_2_231BC944D2991258&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_COPYTO_OFFSET))(this, context, data);
		}
		*/

		/*
		::System::Void CopyFrom(::Struct_2_231BC944D2991258& data)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_231BC944D2991258&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_COPYFROM_OFFSET))(this, data);
		}
		*/

		::System::Void CopyFrom_1(::RPG::Client::LookAtTargetData& other)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LookAtTargetData&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_COPYFROM_1_OFFSET))(this, other);
		}

		::UnityEngine::Vector3 get_TargetPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_GET_TARGETPOS_OFFSET))(this);
		}

		::System::Single get_TargetDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_GET_TARGETDISTANCE_OFFSET))(this);
		}

		::System::Boolean get_ForceChangeTargetThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_GET_FORCECHANGETARGETTHISFRAME_OFFSET))(this);
		}

		::System::Void set_ForceChangeTargetThisFrame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_SET_FORCECHANGETARGETTHISFRAME_OFFSET))(this, value);
		}

		::System::Void SetTarget(::UnityEngine::Vector3 vNewPos, ::System::Boolean bForceSetTarget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_SETTARGET_OFFSET))(this, vNewPos, bForceSetTarget);
		}

		::System::Void UpdateTarget(::UnityEngine::Vector3 vNewPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_UPDATETARGET_OFFSET))(this, vNewPos);
		}

		::System::Void MoveTarget(::UnityEngine::Vector3 vDeltaPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_MOVETARGET_OFFSET))(this, vDeltaPos);
		}

		::System::Void LerpTarget(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_LERPTARGET_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec, ::System::Single fWeightInOutTime, ::System::Single fSlerpSpeed, ::RPG::Client::LookAtTargetConstraint* pConstraint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LookAtTargetConstraint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_TICK_OFFSET))(this, fElapsedTimeInSec, fWeightInOutTime, fSlerpSpeed, pConstraint);
		}

		::System::Void SetDisabled(::RPG::Client::LookAtDisableCause cause)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LookAtDisableCause))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_SETDISABLED_OFFSET))(this, cause);
		}

		::System::Void ClearDisabled(::RPG::Client::LookAtDisableCause cause)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LookAtDisableCause))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_CLEARDISABLED_OFFSET))(this, cause);
		}

		::System::Single _AlphaFromSlerpSpeed(::System::Single fElapsedTimeInSec, ::System::Single fSlerpSpeed, ::System::Single fAngleBetween)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA__ALPHAFROMSLERPSPEED_OFFSET))(this, fElapsedTimeInSec, fSlerpSpeed, fAngleBetween);
		}

		::System::Void _SetLookAtPosLocal(::UnityEngine::Vector3 pWorldPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA__SETLOOKATPOSLOCAL_OFFSET))(this, pWorldPos);
		}

		::UnityEngine::Vector3 get_LookAtPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_GET_LOOKATPOS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_DefaultLookAtPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_GET_DEFAULTLOOKATPOS_OFFSET))(this);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_Enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_SET_ENABLED_OFFSET))(this, value);
		}

		::RPG::Client::LookAtDisableCause get_DisabledCause()
		{
			return ((::RPG::Client::LookAtDisableCause(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_GET_DISABLEDCAUSE_OFFSET))(this);
		}

		::System::Boolean IsNearlyLookAt(::RPG::Client::LookAtTargetConstraint* pConstraint)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LookAtTargetConstraint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_ISNEARLYLOOKAT_OFFSET))(this, pConstraint);
		}
	};
}
