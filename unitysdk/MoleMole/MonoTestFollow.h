#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening { class Tween; }
namespace System { class EventArgs; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOTESTFOLLOW_AWAKE_OFFSET UNITYSDK_OFFSET(0x173F7F70)
#define MOLEMOLE_MONOTESTFOLLOW_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x173F83C0)
#define MOLEMOLE_MONOTESTFOLLOW_METHOD_5_0956015EE7643124_OFFSET UNITYSDK_OFFSET(0x173F8880)
#define MOLEMOLE_MONOTESTFOLLOW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x173F86A0)
#define MOLEMOLE_MONOTESTFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x173F8820)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTestFollow_TypeDefinitionIndex = 78631;

	class MonoTestFollow : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* target; // 0x18
		::UnityEngine::Vector3 Field_5_1; // 0x20
		::UnityEngine::Vector3 Field_5_2; // 0x2C
		::DG::Tweening::Tween* Field_5_3; // 0x38
		::System::Boolean hasDamping; // 0x40
		::System::Single dampingTime; // 0x44
		::System::Boolean Field_5_6; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTESTFOLLOW__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTESTFOLLOW_AWAKE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTESTFOLLOW_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTESTFOLLOW_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_0956015EE7643124(::System::EventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTESTFOLLOW_METHOD_5_0956015EE7643124_OFFSET))(this, a1);
		}
	};
}
