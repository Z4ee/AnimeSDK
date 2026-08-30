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

#define RPG_CLIENT_LOOKATTARGETDATA_CLEARDISABLED_OFFSET UNITYSDK_OFFSET(0x1516A0)
#define RPG_CLIENT_LOOKATTARGETDATA_COPYFROM_1_OFFSET UNITYSDK_OFFSET(0x151350)
#define RPG_CLIENT_LOOKATTARGETDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0x151340)
#define RPG_CLIENT_LOOKATTARGETDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0x151330)
#define RPG_CLIENT_LOOKATTARGETDATA_GET_DEFAULTLOOKATPOS_OFFSET UNITYSDK_OFFSET(0x1519A0)
#define RPG_CLIENT_LOOKATTARGETDATA_GET_DISABLEDCAUSE_OFFSET UNITYSDK_OFFSET(0x151A30)
#define RPG_CLIENT_LOOKATTARGETDATA_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1519C0)
#define RPG_CLIENT_LOOKATTARGETDATA_GET_FORCECHANGETARGETTHISFRAME_OFFSET UNITYSDK_OFFSET(0x2FC10)
#define RPG_CLIENT_LOOKATTARGETDATA_GET_LOOKATPOS_OFFSET UNITYSDK_OFFSET(0x1518E0)
#define RPG_CLIENT_LOOKATTARGETDATA_GET_TARGETDISTANCE_OFFSET UNITYSDK_OFFSET(0x151450)
#define RPG_CLIENT_LOOKATTARGETDATA_GET_TARGETPOS_OFFSET UNITYSDK_OFFSET(0x151430)
#define RPG_CLIENT_LOOKATTARGETDATA_ISNEARLYLOOKAT_OFFSET UNITYSDK_OFFSET(0x151A40)
#define RPG_CLIENT_LOOKATTARGETDATA_LERPTARGET_OFFSET UNITYSDK_OFFSET(0x151630)
#define RPG_CLIENT_LOOKATTARGETDATA_MOVETARGET_OFFSET UNITYSDK_OFFSET(0x1515B0)
#define RPG_CLIENT_LOOKATTARGETDATA_SETDISABLED_OFFSET UNITYSDK_OFFSET(0x151650)
#define RPG_CLIENT_LOOKATTARGETDATA_SETTARGET_OFFSET UNITYSDK_OFFSET(0x1514D0)
#define RPG_CLIENT_LOOKATTARGETDATA_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x151A20)
#define RPG_CLIENT_LOOKATTARGETDATA_SET_FORCECHANGETARGETTHISFRAME_OFFSET UNITYSDK_OFFSET(0x14E860)
#define RPG_CLIENT_LOOKATTARGETDATA_TICK_OFFSET UNITYSDK_OFFSET(0x151640)
#define RPG_CLIENT_LOOKATTARGETDATA_UPDATETARGET_OFFSET UNITYSDK_OFFSET(0x151500)
#define RPG_CLIENT_LOOKATTARGETDATA__ALPHAFROMSLERPSPEED_OFFSET UNITYSDK_OFFSET(0x1516F0)
#define RPG_CLIENT_LOOKATTARGETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x151280)
#define RPG_CLIENT_LOOKATTARGETDATA__SETLOOKATPOSLOCAL_OFFSET UNITYSDK_OFFSET(0x151810)

namespace RPG::Client
{
	inline static constexpr unsigned int LookAtTargetData_TypeDefinitionIndex = 68442;

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

		::System::Void _ctor(::UnityEngine::Transform* a1, ::RPG::Client::LookAtSolver* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::LookAtSolver*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA__CTOR_OFFSET))(this, a1, a2);
		}

		/*
		::System::Void CopyTo(::RootMotion::IKJob::IKThreadProxyContext* a1, ::Struct_2_231BC944D2991258& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::Struct_2_231BC944D2991258&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_COPYTO_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::System::Void CopyFrom(::Struct_2_231BC944D2991258& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_231BC944D2991258&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_COPYFROM_OFFSET))(this, a1);
		}
		*/

		::System::Void CopyFrom_1(::RPG::Client::LookAtTargetData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LookAtTargetData&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_COPYFROM_1_OFFSET))(this, a1);
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

		::System::Void set_ForceChangeTargetThisFrame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_SET_FORCECHANGETARGETTHISFRAME_OFFSET))(this, a1);
		}

		::System::Void SetTarget(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_SETTARGET_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateTarget(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_UPDATETARGET_OFFSET))(this, a1);
		}

		::System::Void MoveTarget(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_MOVETARGET_OFFSET))(this, a1);
		}

		::System::Void LerpTarget(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_LERPTARGET_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1, ::System::Single a2, ::System::Single a3, ::RPG::Client::LookAtTargetConstraint* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LookAtTargetConstraint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_TICK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetDisabled(::RPG::Client::LookAtDisableCause a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LookAtDisableCause))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_SETDISABLED_OFFSET))(this, a1);
		}

		::System::Void ClearDisabled(::RPG::Client::LookAtDisableCause a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LookAtDisableCause))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_CLEARDISABLED_OFFSET))(this, a1);
		}

		::System::Single _AlphaFromSlerpSpeed(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA__ALPHAFROMSLERPSPEED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetLookAtPosLocal(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA__SETLOOKATPOSLOCAL_OFFSET))(this, a1);
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

		::System::Void set_Enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_SET_ENABLED_OFFSET))(this, a1);
		}

		::RPG::Client::LookAtDisableCause get_DisabledCause()
		{
			return ((::RPG::Client::LookAtDisableCause(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_GET_DISABLEDCAUSE_OFFSET))(this);
		}

		::System::Boolean IsNearlyLookAt(::RPG::Client::LookAtTargetConstraint* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LookAtTargetConstraint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETDATA_ISNEARLYLOOKAT_OFFSET))(this, a1);
		}
	};
}
