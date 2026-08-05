#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_3_61A5922E5046F385_2;
class Class_3_C93CC3D2C2AC4067;
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOMORPHBALLATTACHPOINTS_METHOD_5_FFD65E4FEAD3C019_OFFSET UNITYSDK_OFFSET(0x168754E0)
#define MOLEMOLE_MONOMORPHBALLATTACHPOINTS_STARTATTACHPOINTS_OFFSET UNITYSDK_OFFSET(0x168753D0)
#define MOLEMOLE_MONOMORPHBALLATTACHPOINTS_STOPATTACHPOINTS_OFFSET UNITYSDK_OFFSET(0x168759B0)
#define MOLEMOLE_MONOMORPHBALLATTACHPOINTS_UPDATEATTACHPOINTS_OFFSET UNITYSDK_OFFSET(0x16875A20)
#define MOLEMOLE_MONOMORPHBALLATTACHPOINTS__CTOR_OFFSET UNITYSDK_OFFSET(0x168764E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMorphBallAttachPoints_TypeDefinitionIndex = 89549;

	class MonoMorphBallAttachPoints : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_3_C93CC3D2C2AC4067* Field_5_3; // 0x18
		::Class_3_61A5922E5046F385_2* Field_5_2; // 0x20
		::UnityEngine::Transform* Field_5_1; // 0x28
		::UnityEngine::Transform* Field_5_0; // 0x30
		::UnityEngine::Transform* Field_5_7; // 0x38
		::UnityEngine::Quaternion Field_5_6; // 0x40
		::System::Single _directionRotationDamping; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMORPHBALLATTACHPOINTS__CTOR_OFFSET))(this);
		}

		::System::Void StartAttachPoints(::Class_3_C93CC3D2C2AC4067* a1, ::Class_3_61A5922E5046F385_2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_61A5922E5046F385_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMORPHBALLATTACHPOINTS_STARTATTACHPOINTS_OFFSET))(this, a1, a2);
		}

		::System::Void StopAttachPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMORPHBALLATTACHPOINTS_STOPATTACHPOINTS_OFFSET))(this);
		}

		::System::Void UpdateAttachPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMORPHBALLATTACHPOINTS_UPDATEATTACHPOINTS_OFFSET))(this);
		}

		::System::Void Method_5_FFD65E4FEAD3C019()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMORPHBALLATTACHPOINTS_METHOD_5_FFD65E4FEAD3C019_OFFSET))(this);
		}
	};
}
