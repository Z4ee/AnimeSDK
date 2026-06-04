#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKSHIPCOLLISIONCOMPONENT_CHECKBOUNDINTERSECT_OFFSET UNITYSDK_OFFSET(0xB0952B0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKSHIPCOLLISIONCOMPONENT_INIT_OFFSET UNITYSDK_OFFSET(0xB093420)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKSHIPCOLLISIONCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xB0A02D0)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackShipCollisionComponent_TypeDefinitionIndex = 69176;

	class AlleyPackShipCollisionComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Collider* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKSHIPCOLLISIONCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKSHIPCOLLISIONCOMPONENT_INIT_OFFSET))(this);
		}

		::System::Tuple_2<::System::Boolean, ::System::Single>* CheckBoundIntersect(::UnityEngine::Bounds a1)
		{
			return ((::System::Tuple_2<::System::Boolean, ::System::Single>*(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKSHIPCOLLISIONCOMPONENT_CHECKBOUNDINTERSECT_OFFSET))(this, a1);
		}
	};
}
