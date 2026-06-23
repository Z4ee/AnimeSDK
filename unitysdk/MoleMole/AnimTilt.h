#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_ANIMTILT_AWAKE_OFFSET UNITYSDK_OFFSET(0x14DF9C20)
#define MOLEMOLE_ANIMTILT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14DF9C60)
#define MOLEMOLE_ANIMTILT_METHOD_5_CD28994AFE636FFF_OFFSET UNITYSDK_OFFSET(0x14DF9CB0)
#define MOLEMOLE_ANIMTILT_SETTILTANGLETARGET_OFFSET UNITYSDK_OFFSET(0x14DFA140)
#define MOLEMOLE_ANIMTILT__CTOR_OFFSET UNITYSDK_OFFSET(0x14DFA1D0)

namespace MoleMole
{
	inline static constexpr unsigned int AnimTilt_TypeDefinitionIndex = 49319;

	class AnimTilt : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IsTiltOpen; // 0x18
		::System::Single MaxTiltAngle; // 0x1C
		::System::Single ReturnSpeedRate; // 0x20
		::UnityEngine::Transform* _BoneTiltRoot; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _BoneWeapons; // 0x30
		::System::Single Field_5_5; // 0x38
		::System::Single Field_5_6; // 0x3C
		::System::Int32 Field_5_7; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMTILT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMTILT_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMTILT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void SetTiltAngleTarget(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMTILT_SETTILTANGLETARGET_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_CD28994AFE636FFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMTILT_METHOD_5_CD28994AFE636FFF_OFFSET))(this);
		}
	};
}
