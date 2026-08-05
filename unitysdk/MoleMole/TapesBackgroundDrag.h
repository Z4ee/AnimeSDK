#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TAPESBACKGROUNDDRAG_FIXDELTA_OFFSET UNITYSDK_OFFSET(0x191BC080)
#define MOLEMOLE_TAPESBACKGROUNDDRAG_FIXWALLPOSITION_OFFSET UNITYSDK_OFFSET(0x191BC410)
#define MOLEMOLE_TAPESBACKGROUNDDRAG_INITCLAMP_OFFSET UNITYSDK_OFFSET(0x191BBEF0)
#define MOLEMOLE_TAPESBACKGROUNDDRAG_MOVEWALL_OFFSET UNITYSDK_OFFSET(0x191BC170)
#define MOLEMOLE_TAPESBACKGROUNDDRAG_SETDIR_OFFSET UNITYSDK_OFFSET(0x191BC0E0)
#define MOLEMOLE_TAPESBACKGROUNDDRAG__CTOR_OFFSET UNITYSDK_OFFSET(0x191BC4B0)

namespace MoleMole
{
	inline static constexpr unsigned int TapesBackgroundDrag_TypeDefinitionIndex = 65850;

	class TapesBackgroundDrag : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* backGroundList; // 0x18
		::System::Single Field_5_2; // 0x20
		::System::Single Field_5_1; // 0x24
		::System::Single Field_5_0; // 0x28
		::System::Single dragOffset; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TAPESBACKGROUNDDRAG__CTOR_OFFSET))(this);
		}

		::System::Void InitClamp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TAPESBACKGROUNDDRAG_INITCLAMP_OFFSET))(this);
		}

		::System::Single FixDelta(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TAPESBACKGROUNDDRAG_FIXDELTA_OFFSET))(this, a1);
		}

		::System::Void SetDir(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TAPESBACKGROUNDDRAG_SETDIR_OFFSET))(this, a1);
		}

		::System::Void MoveWall(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TAPESBACKGROUNDDRAG_MOVEWALL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 FixWallPosition(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_TAPESBACKGROUNDDRAG_FIXWALLPOSITION_OFFSET))(this, a1);
		}
	};
}
