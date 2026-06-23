#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOINLEVELLOCK_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x1163A910)
#define MOLEMOLE_MONOINLEVELLOCK_METHOD_5_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x1163B0A0)
#define MOLEMOLE_MONOINLEVELLOCK_METHOD_5_A88B36294D55B85C_OFFSET UNITYSDK_OFFSET(0x1163AB40)
#define MOLEMOLE_MONOINLEVELLOCK_METHOD_5_DEC8270AEB6D885D_OFFSET UNITYSDK_OFFSET(0x1163AE50)
#define MOLEMOLE_MONOINLEVELLOCK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1163A710)
#define MOLEMOLE_MONOINLEVELLOCK_RESET_OFFSET UNITYSDK_OFFSET(0x1163AA70)
#define MOLEMOLE_MONOINLEVELLOCK_SETLOCKFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x1163AA20)
#define MOLEMOLE_MONOINLEVELLOCK_START_OFFSET UNITYSDK_OFFSET(0x1163A4E0)
#define MOLEMOLE_MONOINLEVELLOCK_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x1163A990)
#define MOLEMOLE_MONOINLEVELLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1163AAE0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInlevelLock_TypeDefinitionIndex = 62100;

	class MonoInlevelLock : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_3_DFD5D1FDB9D2A4AC* Field_5_0; // 0x18
		::UnityEngine::Transform* Field_5_1; // 0x20
		::UnityEngine::GameObject* Field_5_2; // 0x28
		::System::Boolean Field_5_3; // 0x30
		::UnityEngine::Vector3 Field_5_4; // 0x34
		::UnityEngine::RectTransform* _rectTransformRef; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELLOCK__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELLOCK_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELLOCK_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Bounds get_Bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELLOCK_GET_BOUNDS_OFFSET))(this);
		}

		::System::Void UpdatePosition(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELLOCK_UPDATEPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetLockFollowTarget(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELLOCK_SETLOCKFOLLOWTARGET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELLOCK_RESET_OFFSET))(this);
		}

		::System::Void Method_5_A88B36294D55B85C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELLOCK_METHOD_5_A88B36294D55B85C_OFFSET))(this);
		}

		::System::Boolean Method_5_DEC8270AEB6D885D(::UnityEngine::Bounds a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector2& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELLOCK_METHOD_5_DEC8270AEB6D885D_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_62167C28EC14CC63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELLOCK_METHOD_5_62167C28EC14CC63_OFFSET))(this);
		}
	};
}
